package main

import (
	"flag"
	"fmt"
	"os"
	"path/filepath"
)

const (
	// modulePath 是生成类型别名和适配器导入路径时使用的 Go module 路径。
	modulePath = "github.com/energye/cef"

	// baseDir 是各 CEF 版本源码目录所在的根目录，例如：
	//   <baseDir>\109\cef
	//   <baseDir>\109\types
	baseDir = `C:\app\workspace\gen\gout\cef`

	// outputDir 是统一 CEF 兼容层的生成目标目录。
	// 默认模式会先删除该目录中由它管理的生成文件，再重新生成。
	// 使用 -incremental 时，仅更新内容变化的文件并保留未变化文件。
	outputDir = `C:\app\workspace\gen\gout\cef\cef`

	// latestVersion 是首选基准版本。
	// 多个版本存在同名接口或方法时，优先使用该版本的注释和公共方法签名。
	latestVersion = "147"

	// defaultVersion 是未指定任何 CEF 版本构建标签时使用的默认版本。
	// 当前使用 109 作为默认版本，用于保留 Win7 兼容基线。
	defaultVersion = "109"
)

// versions 是需解析并生成适配器的 CEF 版本列表。
// 每个版本都必须同时存在 <baseDir>\<version>\cef 和 <baseDir>\<version>\types。
var versions = []string{"109", "127", "147"}

// 全局增量生成标志
var incrementalMode bool

func main() {
	flag.BoolVar(&incrementalMode, "incremental", false, "Enable incremental generation (only update changed files)")
	flag.Parse()

	if err := validateConfig(); err != nil {
		fatal(err)
	}
	if err := loadCompatRules(); err != nil {
		fatal(err)
	}

	data := make([]*VersionData, 0, len(versions))
	for _, version := range versions {
		vd, err := parseVersion(version)
		if err != nil {
			fatal(err)
		}
		expandExternalEmbedded(vd)
		fmt.Printf("CEF %s: %d interfaces, %d functions, %d cef types, %d enum/types\n",
			version, len(vd.Interfaces), len(vd.Funcs), len(vd.CefTypes), len(vd.TypeTypes))
		data = append(data, vd)
	}

	unified := filterUnified(unify(data))
	embeddedAliases := collectEmbeddedAliases(data, unified)
	callbackTypes := unifyCallbacks(data)
	arrayAliases := collectArrayAliases(data, unified)

	if err := prepareOutput(outputDir, incrementalMode); err != nil {
		fatal(err)
	}
	if err := generateInit(outputDir); err != nil {
		fatal(err)
	}
	if err := generateInterfaces(data, unified, embeddedAliases, callbackTypes, outputDir); err != nil {
		fatal(err)
	}
	if err := generateRaw(outputDir); err != nil {
		fatal(err)
	}
	if err := generateTypes(data, filepath.Join(outputDir, "types")); err != nil {
		fatal(err)
	}
	for _, vd := range data {
		if err := generateAdapter(vd, unified, embeddedAliases, callbackTypes, arrayAliases, outputDir); err != nil {
			fatal(err)
		}
	}
	if err := generateReport(unified, outputDir); err != nil {
		fatal(err)
	}

	fmt.Printf("generated unified CEF layer into %s\n", outputDir)
	if incrementalMode {
		fmt.Println("(incremental mode: only changed files were updated)")
	}
}

func fatal(err error) {
	fmt.Fprintln(os.Stderr, err)
	os.Exit(1)
}

func validateConfig() error {
	if !hasVersion(latestVersion) {
		return fmt.Errorf("latestVersion %q is not included in versions", latestVersion)
	}
	if !hasVersion(defaultVersion) {
		return fmt.Errorf("defaultVersion %q is not included in versions", defaultVersion)
	}
	return nil
}

func hasVersion(target string) bool {
	for _, version := range versions {
		if version == target {
			return true
		}
	}
	return false
}
