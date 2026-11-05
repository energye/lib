package main

import (
	"bufio"
	"encoding/json"
	"flag"
	"fmt"
	"os"
	"os/exec"
	"os/signal"
	"path/filepath"
	"runtime"
	"strings"
	"syscall"
)

var (
	backupPath string
	backupData []byte
	backupDone bool
)

func main() {
	lazbuild := flag.String("lazbuild", "", "lazbuild.exe 路径")
	lpi := flag.String("lpi", "liblcl.lpi", "lpi 文件路径")
	bm := flag.String("bm", "", "build mode (必填)")
	ws := flag.String("ws", "", "widget set (必填)")
	defines := flag.String("d", "", "宏，逗号分隔")
	conf := flag.String("conf", "", "配置文件路径")
	lazarusDir := flag.String("lazarusdir", "", "透传 --lazarusdir 给 lazbuild（源码编译的 Lazarus 必需）")
	extra := flag.String("extra", "", "透传额外参数给 lazbuild，如 --opt=-FD/path")
	flag.Parse()

	if *bm == "" || *ws == "" {
		fatal("错误: -bm 和 -ws 必填")
	}

	if *conf == "" {
		exe, _ := os.Executable()
		*conf = filepath.Join(filepath.Dir(exe), "lazbuild.conf.json")
	}

	lpiPath, err := filepath.Abs(*lpi)
	if err != nil {
		fatal("错误: %v", err)
	}

	orig, err := os.ReadFile(lpiPath)
	if err != nil {
		fatal("错误: 读取 lpi 失败: %v", err)
	}
	backupPath = lpiPath
	backupData = make([]byte, len(orig))
	copy(backupData, orig)

	// 信号捕获
	sig := make(chan os.Signal, 1)
	signal.Notify(sig, syscall.SIGINT, syscall.SIGTERM)
	go func() {
		<-sig
		restore()
		os.Exit(130)
	}()

	// 收集宏和目录
	var defs, dirs []string
	if *defines != "" {
		for _, d := range strings.Split(*defines, ",") {
			d = strings.TrimSpace(d)
			if d != "" {
				defs = append(defs, d)
			}
		}
	}
	if len(defs) > 0 {
		dirs = loadDirs(*conf, defs)
	}

	// 注入
	if len(defs) > 0 || len(dirs) > 0 {
		if err := inject(lpiPath, *bm, defs, dirs); err != nil {
			restore()
			fatal("错误: 注入失败: %v", err)
		}
	}

	// 编译
	if *lazbuild != "" {
		if err := run(*lazbuild, lpiPath, *bm, *ws, *lazarusDir, *extra); err != nil {
			restore()
			fatal("错误: 编译失败: %v", err)
		}
	} else {
		fmt.Println("未指定 -lazbuild，跳过编译")
	}

	restore()
}

func fatal(format string, args ...interface{}) {
	fmt.Fprintf(os.Stderr, format+"\n", args...)
	os.Exit(1)
}

func restore() {
	if backupDone || backupPath == "" {
		return
	}
	os.WriteFile(backupPath, backupData, 0644)
	fmt.Println("已恢复 lpi")
	backupDone = true
}

// ==================== 配置加载 ====================

func loadDirs(confPath string, defs []string) []string {
	data, err := os.ReadFile(confPath)
	if err != nil {
		fmt.Fprintf(os.Stderr, "警告: 加载配置失败: %v\n", err)
		return nil
	}

	// 去除 JSON 注释
	cleaned := stripComments(string(data))

	var cfg map[string]map[string][]string
	if err := json.Unmarshal([]byte(cleaned), &cfg); err != nil {
		fmt.Fprintf(os.Stderr, "警告: 解析配置失败: %v\n", err)
		return nil
	}

	platform := runtime.GOOS
	var result []string
	seen := map[string]bool{}
	for _, d := range defs {
		if m, ok := cfg[d]; ok {
			for _, dir := range m["all"] {
				if !seen[dir] {
					seen[dir] = true
					result = append(result, dir)
				}
			}
			for _, dir := range m[platform] {
				if !seen[dir] {
					seen[dir] = true
					result = append(result, dir)
				}
			}
		}
	}
	return result
}

func stripComments(s string) string {
	var b strings.Builder
	inStr, inSingle, inMulti, esc := false, false, false, false
	r := []rune(s)
	for i := 0; i < len(r); i++ {
		ch := r[i]
		if inStr {
			b.WriteRune(ch)
			if esc {
				esc = false
			} else if ch == '\\' {
				esc = true
			} else if ch == '"' {
				inStr = false
			}
			continue
		}
		if inSingle {
			if ch == '\n' {
				inSingle = false
				b.WriteRune(ch)
			}
			continue
		}
		if inMulti {
			if ch == '*' && i+1 < len(r) && r[i+1] == '/' {
				inMulti = false
				i++
			}
			continue
		}
		if ch == '/' && i+1 < len(r) {
			if r[i+1] == '/' {
				inSingle = true
				i++
				continue
			}
			if r[i+1] == '*' {
				inMulti = true
				i++
				continue
			}
		}
		if ch == '"' {
			inStr = true
		}
		b.WriteRune(ch)
	}
	return b.String()
}

// ==================== 注入 ====================

func inject(lpiPath, bmName string, defs, dirs []string) error {
	data, err := os.ReadFile(lpiPath)
	if err != nil {
		return err
	}
	content := string(data)

	// 找 build mode
	region, rStart, rEnd, err := findRegion(content, bmName)
	if err != nil {
		return err
	}

	// Default="True" 的自闭合 Item 用最外层 CompilerOptions
	if isSelfClose(region) {
		co, coStart, coEnd, err := findRootCO(content)
		if err != nil {
			return fmt.Errorf("默认 build mode 需要最外层 CompilerOptions: %w", err)
		}
		region = co
		rStart = coStart
		rEnd = coEnd
		fmt.Printf("目标: 最外层 CompilerOptions (%s)\n", bmName)
	}

	changed := false

	// 注入宏到 CustomOptions
	if len(defs) > 0 {
		if newRegion, ok := injectCO(region, defs); ok {
			region = newRegion
			changed = true
		}
	}

	// 注入目录到 OtherUnitFiles
	if len(dirs) > 0 {
		if newRegion, ok := injectOUF(region, dirs); ok {
			region = newRegion
			changed = true
		}
	}

	if !changed {
		fmt.Println("所有选项已存在")
		return nil
	}

	newContent := content[:rStart] + region + content[rEnd:]
	return os.WriteFile(lpiPath, []byte(newContent), 0644)
}

// injectCO 注入 -d 宏到 <CustomOptions>
func injectCO(region string, defs []string) (string, bool) {
	val, found := getAttr(region, "CustomOptions")
	existing := map[string]bool{}
	for _, f := range strings.Fields(val) {
		existing[f] = true
	}

	var newDefs []string
	for _, d := range defs {
		s := "-d" + d
		if !existing[s] {
			newDefs = append(newDefs, s)
		}
	}
	if len(newDefs) == 0 {
		return "", false
	}

	newVal := val
	for _, nd := range newDefs {
		if newVal == "" {
			newVal = nd
		} else {
			newVal += " " + nd
		}
	}

	if found {
		region = setAttr(region, "CustomOptions", newVal)
	} else {
		region = createCO(region, newVal)
	}

	fmt.Printf("注入宏: %s\n", strings.Join(newDefs, " "))
	return region, true
}

// injectOUF 注入目录到 <OtherUnitFiles>
func injectOUF(region string, dirs []string) (string, bool) {
	val, found := getAttr(region, "OtherUnitFiles")
	if !found {
		return "", false
	}

	existing := map[string]bool{}
	for _, d := range strings.Split(val, ";") {
		d = strings.TrimSpace(d)
		if d != "" {
			existing[d] = true
		}
	}

	var newDirs []string
	for _, d := range dirs {
		if !existing[d] {
			newDirs = append(newDirs, d)
		}
	}
	if len(newDirs) == 0 {
		return "", false
	}

	newVal := val
	for _, nd := range newDirs {
		if newVal == "" {
			newVal = nd
		} else {
			newVal += ";" + nd
		}
	}

	region = setAttr(region, "OtherUnitFiles", newVal)
	fmt.Printf("注入目录: %s\n", strings.Join(newDirs, ";"))
	return region, true
}

// createCO 在 region 中创建 <CustomOptions>
func createCO(region, value string) string {
	// 有 <Other> 非自闭合 → 插入其中
	if idx := strings.Index(region, "<Other>"); idx != -1 && !isSelfClose(region[idx:]) {
		indent := detectIndent(region, idx) + "  "
		ins := fmt.Sprintf("\n%s<CustomOptions Value=\"%s\"/>", indent, value)
		return region[:idx+7] + ins + region[idx+7:]
	}

	// 有 </CompilerOptions> → 在前面插入
	if idx := strings.Index(region, "</CompilerOptions>"); idx != -1 {
		indent := detectIndent(region, idx)
		child := indent + "  "
		ins := fmt.Sprintf("%s<Other>\n%s<CustomOptions Value=\"%s\"/>\n%s</Other>\n",
			indent, child, value, indent)
		before := strings.TrimRight(region[:idx], " \t")
		return before + ins + region[idx:]
	}

	return region
}

// ==================== XML 辅助 ====================

// findRegion 找 <Item Name="xxx" ...>...</Item> 区域
func findRegion(content, name string) (string, int, int, error) {
	prefix := fmt.Sprintf(`<Item Name="%s"`, name)
	idx := strings.Index(content, prefix)
	if idx == -1 {
		return "", 0, 0, fmt.Errorf("未找到 '%s'", name)
	}
	after := idx + len(prefix)
	if after >= len(content) {
		return "", 0, 0, fmt.Errorf("未找到 '%s'", name)
	}
	ch := content[after]
	if ch != ' ' && ch != '>' && ch != '/' && ch != '\t' && ch != '\n' && ch != '\r' {
		return "", 0, 0, fmt.Errorf("未找到 '%s'", name)
	}

	// 自闭合
	if isSelfClose(content[idx:]) {
		end := strings.Index(content[idx:], ">")
		e := idx + end + 1
		return content[idx:e], idx, e, nil
	}

	// 查找匹配的 </Item>
	depth := 0
	from := idx + len(prefix)
	for {
		nextOpen := strings.Index(content[from:], prefix)
		nextClose := strings.Index(content[from:], "</Item>")
		if nextClose == -1 {
			return "", 0, 0, fmt.Errorf("未找到 '%s' 的闭合 </Item>", name)
		}
		absClose := from + nextClose
		if nextOpen != -1 {
			absOpen := from + nextOpen
			if absOpen < absClose {
				if isSelfClose(content[absOpen:]) {
					end := strings.Index(content[absOpen:], ">")
					from = absOpen + end + 1
					continue
				}
				depth++
				from = absOpen + len(prefix)
				continue
			}
		}
		if depth == 0 {
			e := absClose + 7
			return content[idx:e], idx, e, nil
		}
		depth--
		from = absClose + 7
	}
}

// findRootCO 找最外层 <CompilerOptions>（</ProjectOptions> 之后的）
func findRootCO(content string) (string, int, int, error) {
	poIdx := strings.LastIndex(content, "</ProjectOptions>")
	if poIdx == -1 {
		return "", 0, 0, fmt.Errorf("未找到 </ProjectOptions>")
	}
	start := strings.Index(content[poIdx:], "<CompilerOptions>")
	if start == -1 {
		return "", 0, 0, fmt.Errorf("未找到最外层 <CompilerOptions>")
	}
	absStart := poIdx + start
	end := strings.Index(content[absStart+17:], "</CompilerOptions>")
	if end == -1 {
		return "", 0, 0, fmt.Errorf("未找到最外层 </CompilerOptions>")
	}
	absEnd := absStart + 17 + end + 18
	return content[absStart:absEnd], absStart, absEnd, nil
}

// getAttr 获取标签的 Value 属性
func getAttr(region, tag string) (string, bool) {
	prefix := "<" + tag
	idx := -1
	from := 0
	for {
		p := strings.Index(region[from:], prefix)
		if p == -1 {
			break
		}
		abs := from + p
		after := abs + len(prefix)
		if after >= len(region) {
			break
		}
		ch := region[after]
		if ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r' || ch == '>' || ch == '/' {
			idx = abs
			break
		}
		from = after
	}
	if idx == -1 {
		return "", false
	}
	sub := region[idx:]
	vi := strings.Index(sub, `Value="`)
	if vi == -1 {
		return "", false
	}
	vs := vi + 7
	ve := strings.Index(sub[vs:], `"`)
	if ve == -1 {
		return "", false
	}
	return sub[vs : vs+ve], true
}

// setAttr 替换标签的 Value 属性
func setAttr(region, tag, newVal string) string {
	prefix := "<" + tag
	idx := -1
	from := 0
	for {
		p := strings.Index(region[from:], prefix)
		if p == -1 {
			break
		}
		abs := from + p
		after := abs + len(prefix)
		if after >= len(region) {
			break
		}
		ch := region[after]
		if ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r' || ch == '>' || ch == '/' {
			idx = abs
			break
		}
		from = after
	}
	if idx == -1 {
		return region
	}
	sub := region[idx:]
	vi := strings.Index(sub, `Value="`)
	if vi == -1 {
		return region
	}
	vs := idx + vi + 7
	ve := strings.Index(region[vs:], `"`)
	if ve == -1 {
		return region
	}
	return region[:vs] + newVal + region[vs+ve:]
}

func isSelfClose(s string) bool {
	end := strings.Index(s, ">")
	if end == -1 {
		return false
	}
	return strings.HasSuffix(strings.TrimRight(s[:end], " \t\n\r"), "/")
}

func detectIndent(content string, pos int) string {
	ls := strings.LastIndex(content[:pos], "\n")
	if ls == -1 {
		return ""
	}
	ls++
	indent := ""
	for i := ls; i < pos; i++ {
		if content[i] == ' ' || content[i] == '\t' {
			indent += string(content[i])
		} else {
			break
		}
	}
	return indent
}

// ==================== lazbuild 执行 ====================

func run(lazbuild, lpi, bm, ws, lazarusDir, extra string) error {
	args := []string{"-B", fmt.Sprintf("--bm=%s", bm), fmt.Sprintf("--ws=%s", ws)}
	if lazarusDir != "" {
		args = append(args, "--lazarusdir="+lazarusDir)
	}
	if extra != "" {
		args = append(args, strings.Fields(extra)...)
	}
	args = append(args, lpi)
	fmt.Printf("执行: %s %s\n", lazbuild, strings.Join(args, " "))

	cmd := exec.Command(lazbuild, args...)
	cmd.Dir = filepath.Dir(lpi)

	stdout, _ := cmd.StdoutPipe()
	stderr, _ := cmd.StderrPipe()
	if err := cmd.Start(); err != nil {
		return err
	}

	done := make(chan struct{})
	go func() {
		s := bufio.NewScanner(stdout)
		s.Buffer(make([]byte, 1024*1024), 1024*1024)
		for s.Scan() {
			fmt.Println(s.Text())
		}
		done <- struct{}{}
	}()
	go func() {
		s := bufio.NewScanner(stderr)
		s.Buffer(make([]byte, 1024*1024), 1024*1024)
		for s.Scan() {
			fmt.Fprintln(os.Stderr, s.Text())
		}
		done <- struct{}{}
	}()

	<-done
	<-done
	return cmd.Wait()
}
