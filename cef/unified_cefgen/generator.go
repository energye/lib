package main

import (
	"bytes"
	"encoding/json"
	"fmt"
	"go/ast"
	"go/format"
	"go/parser"
	"go/printer"
	"go/token"
	"os"
	"path/filepath"
	"regexp"
	"runtime"
	"sort"
	"strings"
	"unicode"
)

type FieldDef struct {
	Name string `json:"name,omitempty"`
	Type string `json:"type"`
}

type MethodDef struct {
	Name     string
	Params   []FieldDef
	Results  []FieldDef
	Comments string
}

type CompatConversion struct {
	Interface  string
	Version    string
	MethodName string
	From       *MethodDef
	To         *MethodDef
	Rule       string
	Config     *CompatVersionRule
}

type CompatIssue struct {
	Interface  string
	MethodName string
	Versions   map[string]*MethodDef
	Reason     string
}

type OmittedCommonInterface struct {
	Name   string
	Reason string
}

type InterfaceDef struct {
	Name     string
	Embedded []string
	Methods  map[string]*MethodDef
	Comments string
}

type FuncDef struct {
	Name    string
	Params  []FieldDef
	Results []FieldDef
}

type ClassMethodDef struct {
	Name    string
	Params  []FieldDef
	Results []FieldDef
}

type ClassDef struct {
	Name    string
	Methods []*ClassMethodDef
}

type CallbackTypeDef struct {
	Name    string
	Params  []FieldDef
	Results []FieldDef
}

type ArrayTypeDef struct {
	Name     string // e.g., "ICefv8ValueArray"
	ElemType string // e.g., "ICefv8Value"
}

type VersionData struct {
	Version     string
	Interfaces  map[string]*InterfaceDef
	Funcs       map[string]*FuncDef
	Classes     map[string]*ClassDef
	Callbacks   map[string]*CallbackTypeDef
	ArrayTypes  map[string]*ArrayTypeDef
	CefTypes    map[string]bool
	TypeTypes   map[string]bool
	TypeConsts  map[string]bool
	TypeAliases map[string]string
}

type UnifiedInterface struct {
	Name            string
	CommonEmbedded  []string
	CommonMethods   []*MethodDef
	VersionEmbedded map[string][]string
	VersionMethods  map[string][]*MethodDef
	Conversions     map[string]map[string]*CompatConversion
	Issues          []*CompatIssue
	Comments        string
}

type UnifiedCallbackType struct {
	Name        string
	CommonDef   *CallbackTypeDef            // non-nil if common across all versions
	VersionDefs map[string]*CallbackTypeDef // version-specific definitions
}

type CompatConfig struct {
	Types   map[string]string            `json:"types"`
	Methods map[string]*CompatMethodRule `json:"methods"`
}

type CompatMethodRule struct {
	Description string                        `json:"description"`
	Common      CompatCommonRule              `json:"common"`
	Versions    map[string]*CompatVersionRule `json:"versions"`
}

type CompatSignature struct {
	Params  []FieldDef `json:"params"`
	Results []FieldDef `json:"results"`
}

type CompatCommonRule struct {
	Params  []FieldDef `json:"params"`
	Results []FieldDef `json:"results"`
	CompatVersionRule
}

type CompatVersionRule struct {
	Raw        CompatSignature   `json:"raw"`
	Imports    map[string]string `json:"imports"`
	Pre        []string          `json:"pre"`
	Args       []string          `json:"args"`
	Post       []string          `json:"post"`
	Returns    []string          `json:"returns"`
	Result     []CompatValueRule `json:"result"`
	BodyHelper string            `json:"bodyHelper"`
}

type CompatValueRule struct {
	Kind   string `json:"kind"`
	Helper string `json:"helper"`
	Expr   string `json:"expr"`
}

var compatRules = CompatConfig{
	Types:   map[string]string{},
	Methods: map[string]*CompatMethodRule{},
}

const compatRulesFile = "compat_rules.json"

func loadCompatRules() error {
	data, err := os.ReadFile(compatRulesFile)
	if err != nil {
		if os.IsNotExist(err) {
			return nil
		}
		return fmt.Errorf("read %s: %w", compatRulesFile, err)
	}
	var cfg CompatConfig
	if err := json.Unmarshal(data, &cfg); err != nil {
		return fmt.Errorf("parse %s: %w", compatRulesFile, err)
	}
	if cfg.Types == nil {
		cfg.Types = map[string]string{}
	}
	if cfg.Methods == nil {
		cfg.Methods = map[string]*CompatMethodRule{}
	}
	for key, rule := range cfg.Methods {
		if rule == nil {
			return fmt.Errorf("compat rule %s is null", key)
		}
		if rule.Common.Imports == nil {
			rule.Common.Imports = map[string]string{}
		}
		if rule.Versions == nil {
			rule.Versions = map[string]*CompatVersionRule{}
		}
		for version, versionRule := range rule.Versions {
			if versionRule == nil {
				return fmt.Errorf("compat rule %s version %s is null", key, version)
			}
			if versionRule.Imports == nil {
				versionRule.Imports = map[string]string{}
			}
		}
	}
	compatRules = cfg
	return nil
}

func parseVersion(version string) (*VersionData, error) {
	vd := &VersionData{
		Version:     version,
		Interfaces:  map[string]*InterfaceDef{},
		Funcs:       map[string]*FuncDef{},
		Classes:     map[string]*ClassDef{},
		Callbacks:   map[string]*CallbackTypeDef{},
		ArrayTypes:  map[string]*ArrayTypeDef{},
		CefTypes:    map[string]bool{},
		TypeTypes:   map[string]bool{},
		TypeConsts:  map[string]bool{},
		TypeAliases: map[string]string{},
	}
	if err := parseCEFPackage(vd); err != nil {
		return nil, err
	}
	if err := parseTypesPackage(vd); err != nil {
		return nil, err
	}
	return vd, nil
}

func parseCEFPackage(vd *VersionData) error {
	dir := filepath.Join(baseDir, vd.Version, "cef")
	fset := token.NewFileSet()
	pkgs, err := parser.ParseDir(fset, dir, func(fi os.FileInfo) bool {
		name := fi.Name()
		return strings.HasSuffix(name, ".go") &&
			!strings.HasSuffix(name, "_test.go") &&
			!strings.HasPrefix(name, "custom") &&
			matchesTargetPlatform(name)
	}, parser.ParseComments)
	if err != nil {
		return fmt.Errorf("parse cef package %s: %w", vd.Version, err)
	}

	// receiverTypeName -> class name (e.g. "_V8ValueRefClass" -> "V8ValueRef")
	classRecvTypes := map[string]string{}

	for _, pkg := range pkgs {
		for _, file := range pkg.Files {
			imports := importMap(file)
			for _, decl := range file.Decls {
				switch d := decl.(type) {
				case *ast.GenDecl:
					if d.Tok != token.TYPE {
						continue
					}
					for _, spec := range d.Specs {
						ts, ok := spec.(*ast.TypeSpec)
						if !ok {
							continue
						}
						name := ts.Name.Name
						if ts.Assign.IsValid() {
							vd.TypeAliases[name] = exprString(ts.Type, imports)
						}
						if iface, ok := ts.Type.(*ast.InterfaceType); ok {
							if !shouldParseInterface(name) {
								continue
							}
							vd.Interfaces[name] = parseInterface(fset, name, iface, imports, docText(d.Doc))
							if elemType := extractArrayElementType(fset, iface, imports); elemType != "" {
								vd.ArrayTypes[name] = &ArrayTypeDef{Name: name, ElemType: elemType}
							}
							continue
						}
						if isClassTypeName(name) {
							className := classNameFromType(name)
							if vd.Classes[className] == nil {
								vd.Classes[className] = &ClassDef{Name: className}
							}
							classRecvTypes[name] = className
							continue
						}
						if ft, ok := ts.Type.(*ast.FuncType); ok && isCallbackTypeName(name) {
							vd.Callbacks[name] = &CallbackTypeDef{
								Name:    name,
								Params:  parseFields(ft.Params, imports),
								Results: parseFields(ft.Results, imports),
							}
							continue
						}
						if ast.IsExported(name) {
							vd.CefTypes[name] = true
						}
					}
				case *ast.FuncDecl:
					if d.Recv != nil || !d.Name.IsExported() {
						continue
					}
					vd.Funcs[d.Name.Name] = &FuncDef{
						Name:    d.Name.Name,
						Params:  parseFields(d.Type.Params, imports),
						Results: parseFields(d.Type.Results, imports),
					}
				}
			}
		}
	}

	// Second pass: parse class methods (methods with class receiver)
	for _, pkg := range pkgs {
		for _, file := range pkg.Files {
			imports := importMap(file)
			for _, decl := range file.Decls {
				fn, ok := decl.(*ast.FuncDecl)
				if !ok || fn.Recv == nil || len(fn.Recv.List) == 0 {
					continue
				}
				recvType := receiverTypeName(fn.Recv.List[0].Type)
				className, isClass := classRecvTypes[recvType]
				if !isClass {
					continue
				}
				cd := vd.Classes[className]
				if cd == nil {
					continue
				}
				cd.Methods = append(cd.Methods, &ClassMethodDef{
					Name:    fn.Name.Name,
					Params:  parseFields(fn.Type.Params, imports),
					Results: parseFields(fn.Type.Results, imports),
				})
			}
		}
	}

	for _, cd := range vd.Classes {
		sort.Slice(cd.Methods, func(i, j int) bool {
			return cd.Methods[i].Name < cd.Methods[j].Name
		})
	}

	return nil
}

// isClassTypeName returns true if the type name matches the _XxxRefClass pattern.
func isClassTypeName(name string) bool {
	return strings.HasPrefix(name, "_") && strings.HasSuffix(name, "Class")
}

// extractArrayElementType checks if an interface embeds base.IArraySlice[T] and returns T.
func extractArrayElementType(fset *token.FileSet, iface *ast.InterfaceType, imports map[string]string) string {
	for _, field := range iface.Methods.List {
		if len(field.Names) != 0 {
			continue
		}
		embedded := exprString(field.Type, imports)
		// Match pattern: base.IArraySlice[T] or similar
		if idx := strings.Index(embedded, "IArraySlice["); idx >= 0 {
			start := idx + len("IArraySlice[")
			if strings.HasSuffix(embedded, "]") {
				return embedded[start : len(embedded)-1]
			}
		}
	}
	return ""
}

// isCallbackTypeName returns true if the type name is a callback/event function type.
// These are function type definitions starting with "T" that are used as callback
// parameters in interface methods.
func isCallbackTypeName(name string) bool {
	return strings.HasPrefix(name, "T")
}

// classNameFromType extracts the public class name from a type name like "_V8ValueRefClass" -> "V8ValueRef".
func classNameFromType(name string) string {
	name = strings.TrimPrefix(name, "_")
	name = strings.TrimSuffix(name, "Class")
	return name
}

// receiverTypeName extracts the type name from a receiver expression.
func receiverTypeName(expr ast.Expr) string {
	switch t := expr.(type) {
	case *ast.Ident:
		return t.Name
	case *ast.StarExpr:
		return receiverTypeName(t.X)
	default:
		return ""
	}
}

func parseTypesPackage(vd *VersionData) error {
	dir := filepath.Join(baseDir, vd.Version, "types")
	fset := token.NewFileSet()
	pkgs, err := parser.ParseDir(fset, dir, func(fi os.FileInfo) bool {
		name := fi.Name()
		return strings.HasSuffix(name, ".go") &&
			!strings.HasSuffix(name, "_test.go") &&
			matchesTargetPlatform(name)
	}, parser.ParseComments)
	if err != nil {
		return fmt.Errorf("parse types package %s: %w", vd.Version, err)
	}
	for _, pkg := range pkgs {
		for _, file := range pkg.Files {
			for _, decl := range file.Decls {
				gen, ok := decl.(*ast.GenDecl)
				if !ok {
					continue
				}
				switch gen.Tok {
				case token.TYPE:
					for _, spec := range gen.Specs {
						if ts, ok := spec.(*ast.TypeSpec); ok {
							vd.TypeTypes[ts.Name.Name] = true
						}
					}
				case token.CONST:
					for _, spec := range gen.Specs {
						if vs, ok := spec.(*ast.ValueSpec); ok {
							for _, name := range vs.Names {
								if name.IsExported() {
									vd.TypeConsts[name.Name] = true
								}
							}
						}
					}
				}
			}
		}
	}
	return nil
}

func parseInterface(fset *token.FileSet, name string, iface *ast.InterfaceType, imports map[string]string, comments string) *InterfaceDef {
	out := &InterfaceDef{
		Name:     name,
		Methods:  map[string]*MethodDef{},
		Comments: comments,
	}
	for _, field := range iface.Methods.List {
		if len(field.Names) == 0 {
			embedded := exprString(field.Type, imports)
			if !strings.Contains(embedded, ".") {
				out.Embedded = append(out.Embedded, embedded)
			}
			continue
		}
		fn, ok := field.Type.(*ast.FuncType)
		if !ok {
			continue
		}
		m := &MethodDef{
			Name:     field.Names[0].Name,
			Params:   parseFields(fn.Params, imports),
			Results:  parseFields(fn.Results, imports),
			Comments: docText(field.Doc),
		}
		out.Methods[methodKey(m)] = m
	}
	sort.Strings(out.Embedded)
	return out
}

func parseFields(fields *ast.FieldList, imports map[string]string) []FieldDef {
	if fields == nil {
		return nil
	}
	var out []FieldDef
	for _, field := range fields.List {
		typ := exprString(field.Type, imports)
		if len(field.Names) == 0 {
			out = append(out, FieldDef{Type: typ})
			continue
		}
		for _, name := range field.Names {
			out = append(out, FieldDef{Name: name.Name, Type: typ})
		}
	}
	return out
}

func importMap(file *ast.File) map[string]string {
	out := map[string]string{}
	for _, imp := range file.Imports {
		path := strings.Trim(imp.Path.Value, `"`)
		name := ""
		if imp.Name != nil {
			name = imp.Name.Name
		} else {
			parts := strings.Split(path, "/")
			name = parts[len(parts)-1]
		}
		out[name] = path
	}
	return out
}

func exprString(expr ast.Expr, imports map[string]string) string {
	switch e := expr.(type) {
	case *ast.Ident:
		return e.Name
	case *ast.StarExpr:
		return "*" + exprString(e.X, imports)
	case *ast.SelectorExpr:
		return resolveAlias(exprString(e.X, imports), imports) + "." + e.Sel.Name
	case *ast.ArrayType:
		if e.Len == nil {
			return "[]" + exprString(e.Elt, imports)
		}
		return "[" + exprString(e.Len, imports) + "]" + exprString(e.Elt, imports)
	case *ast.MapType:
		return "map[" + exprString(e.Key, imports) + "]" + exprString(e.Value, imports)
	case *ast.FuncType:
		params := fieldsSignature(parseFields(e.Params, imports), true)
		results := fieldsSignature(parseFields(e.Results, imports), true)
		if results == "" {
			return "func(" + params + ")"
		}
		if strings.Contains(results, ",") {
			return "func(" + params + ") (" + results + ")"
		}
		return "func(" + params + ") " + results
	default:
		var buf bytes.Buffer
		_ = printer.Fprint(&buf, token.NewFileSet(), expr)
		return buf.String()
	}
}

func resolveAlias(alias string, imports map[string]string) string {
	path := imports[alias]
	switch {
	case strings.HasSuffix(path, "/cef/109/types"), strings.HasSuffix(path, "/cef/127/types"), strings.HasSuffix(path, "/cef/147/types"):
		return "cefTypes"
	case strings.HasSuffix(path, "/lcl/lcl"):
		return "lcl"
	case strings.HasSuffix(path, "/lcl/types"):
		return "types"
	default:
		return alias
	}
}

func docText(cg *ast.CommentGroup) string {
	if cg == nil {
		return ""
	}
	return strings.TrimSpace(cg.Text())
}

func unify(data []*VersionData) map[string]*UnifiedInterface {
	all := map[string]bool{}
	for _, vd := range data {
		for name := range vd.Interfaces {
			all[name] = true
		}
	}

	latest := data[len(data)-1]
	for _, vd := range data {
		if vd.Version == latestVersion {
			latest = vd
			break
		}
	}

	out := map[string]*UnifiedInterface{}
	for name := range all {
		ui := &UnifiedInterface{
			Name:            name,
			VersionEmbedded: map[string][]string{},
			VersionMethods:  map[string][]*MethodDef{},
			Conversions:     map[string]map[string]*CompatConversion{},
		}
		if iface := latest.Interfaces[name]; iface != nil {
			ui.Comments = iface.Comments
		}

		methodVersions := map[string]map[string]*MethodDef{}
		methodNameVersions := map[string]map[string][]*MethodDef{}
		embeddedVersions := map[string]map[string]bool{}
		for _, vd := range data {
			iface := vd.Interfaces[name]
			if iface == nil {
				continue
			}
			for key, method := range iface.Methods {
				if methodVersions[key] == nil {
					methodVersions[key] = map[string]*MethodDef{}
				}
				methodVersions[key][vd.Version] = method
				if methodNameVersions[method.Name] == nil {
					methodNameVersions[method.Name] = map[string][]*MethodDef{}
				}
				methodNameVersions[method.Name][vd.Version] = append(methodNameVersions[method.Name][vd.Version], method)
			}
			for _, embedded := range iface.Embedded {
				if embeddedVersions[embedded] == nil {
					embeddedVersions[embedded] = map[string]bool{}
				}
				embeddedVersions[embedded][vd.Version] = true
			}
		}

		handledKeys := map[string]bool{}
		for methodName, byVersion := range methodNameVersions {
			if compat := compatibleCommonMethod(data, name, methodName, byVersion); compat != nil {
				ui.CommonMethods = append(ui.CommonMethods, compat.Method)
				for version, method := range compat.RawByVersion {
					if ui.Conversions[version] == nil {
						ui.Conversions[version] = map[string]*CompatConversion{}
					}
					ui.Conversions[version][methodKey(compat.Method)] = &CompatConversion{
						Interface:  name,
						Version:    version,
						MethodName: methodName,
						From:       method,
						To:         compat.Method,
						Rule:       compat.Rule,
						Config:     compat.VersionRules[version],
					}
					handledKeys[methodKey(method)] = true
				}
				continue
			}
			if incompatibleSameNameMethod(data, byVersion) {
				ui.Issues = append(ui.Issues, &CompatIssue{
					Interface:  name,
					MethodName: methodName,
					Versions:   firstMethodByVersion(byVersion),
					Reason:     "所有版本都存在同名方法，但签名无法安全自动兼容",
				})
			}
		}

		for key, byVersion := range methodVersions {
			if handledKeys[key] {
				continue
			}
			method := latestMethod(byVersion)
			if commonMethodByName(ui.CommonMethods, method.Name) != nil {
				continue
			}
			if len(byVersion) == len(data) {
				ui.CommonMethods = append(ui.CommonMethods, method)
				continue
			}
			for version, method := range byVersion {
				ui.VersionMethods[version] = append(ui.VersionMethods[version], method)
			}
		}
		for embedded, byVersion := range embeddedVersions {
			if len(byVersion) == len(data) {
				ui.CommonEmbedded = append(ui.CommonEmbedded, embedded)
				continue
			}
			for version := range byVersion {
				ui.VersionEmbedded[version] = append(ui.VersionEmbedded[version], embedded)
			}
		}

		sort.Strings(ui.CommonEmbedded)
		sortMethods(ui.CommonMethods)
		for version := range ui.VersionEmbedded {
			sort.Strings(ui.VersionEmbedded[version])
		}
		for version := range ui.VersionMethods {
			sortMethods(ui.VersionMethods[version])
		}
		out[name] = ui
	}

	// Second pass: deduplicate embedded interfaces now that all interfaces are in the map.
	for _, ui := range out {
		ui.CommonEmbedded = deduplicateEmbedded(ui.CommonEmbedded, out)
		for version := range ui.VersionEmbedded {
			ui.VersionEmbedded[version] = deduplicateEmbedded(ui.VersionEmbedded[version], out)
		}
	}

	return out
}

func commonMethodByName(methods []*MethodDef, name string) *MethodDef {
	for _, method := range methods {
		if method.Name == name {
			return method
		}
	}
	return nil
}

func collectEmbeddedAliases(data []*VersionData, unified map[string]*UnifiedInterface) map[string]string {
	needed := map[string]bool{}
	for _, ui := range unified {
		for _, embedded := range ui.CommonEmbedded {
			if unified[embedded] == nil {
				needed[embedded] = true
			}
		}
		for _, embedded := range flatten(ui.VersionEmbedded) {
			if unified[embedded] == nil {
				needed[embedded] = true
			}
		}
	}
	out := map[string]string{}
	for name := range needed {
		if target := latestAliasTarget(data, name); target != "" && strings.Contains(target, ".") {
			out[name] = target
		}
	}
	return out
}

func latestAliasTarget(data []*VersionData, name string) string {
	if vd := versionData(data, latestVersion); vd != nil {
		if target := vd.TypeAliases[name]; target != "" {
			return target
		}
	}
	for i := len(data) - 1; i >= 0; i-- {
		if target := data[i].TypeAliases[name]; target != "" {
			return target
		}
	}
	return ""
}

func versionData(data []*VersionData, version string) *VersionData {
	for _, vd := range data {
		if vd.Version == version {
			return vd
		}
	}
	return nil
}

func expandExternalEmbedded(vd *VersionData) {
	for name, iface := range vd.Interfaces {
		aliases := map[string]bool{}
		seen := map[string]bool{name: true}
		var walk func(string)
		walk = func(embedded string) {
			if target := vd.TypeAliases[embedded]; strings.Contains(target, ".") {
				aliases[embedded] = true
				return
			}
			if seen[embedded] {
				return
			}
			seen[embedded] = true
			child := vd.Interfaces[embedded]
			if child == nil {
				return
			}
			for _, childEmbedded := range child.Embedded {
				walk(childEmbedded)
			}
		}
		for _, embedded := range iface.Embedded {
			walk(embedded)
		}
		for alias := range aliases {
			if !containsString(iface.Embedded, alias) {
				iface.Embedded = append(iface.Embedded, alias)
			}
		}
		sort.Strings(iface.Embedded)
	}
}

func latestMethod(methods map[string]*MethodDef) *MethodDef {
	if m := methods[latestVersion]; m != nil {
		return m
	}
	var versions []string
	for version := range methods {
		versions = append(versions, version)
	}
	sort.Strings(versions)
	return methods[versions[len(versions)-1]]
}

type CompatibleMethod struct {
	Method       *MethodDef
	RawByVersion map[string]*MethodDef
	Rule         string
	VersionRules map[string]*CompatVersionRule
}

func compatibleCommonMethod(data []*VersionData, ifaceName, methodName string, byVersion map[string][]*MethodDef) *CompatibleMethod {
	if !singleMethodInEveryVersion(data, byVersion) {
		return nil
	}
	raw := firstMethodByVersion(byVersion)
	if sameMethodSignatures(raw) {
		return nil
	}
	if method, versionRules := configuredCompatibleMethod(ifaceName, methodName, raw); method != nil {
		return &CompatibleMethod{Method: method, RawByVersion: raw, Rule: "config", VersionRules: versionRules}
	}
	if method := numericCompatibleMethod(raw); method != nil {
		return &CompatibleMethod{Method: method, RawByVersion: raw, Rule: "numeric"}
	}
	return nil
}

func singleMethodInEveryVersion(data []*VersionData, byVersion map[string][]*MethodDef) bool {
	if len(byVersion) != len(data) {
		return false
	}
	for _, vd := range data {
		methods := byVersion[vd.Version]
		if len(methods) != 1 {
			return false
		}
	}
	return true
}

func firstMethodByVersion(byVersion map[string][]*MethodDef) map[string]*MethodDef {
	out := map[string]*MethodDef{}
	for version, methods := range byVersion {
		if len(methods) > 0 {
			out[version] = methods[0]
		}
	}
	return out
}

func sameMethodSignatures(byVersion map[string]*MethodDef) bool {
	signature := ""
	for _, method := range byVersion {
		current := fieldsSignature(method.Params, true) + "|" + fieldsSignature(method.Results, true)
		if signature == "" {
			signature = current
			continue
		}
		if signature != current {
			return false
		}
	}
	return true
}

func incompatibleSameNameMethod(data []*VersionData, byVersion map[string][]*MethodDef) bool {
	if !singleMethodInEveryVersion(data, byVersion) {
		return false
	}
	return !sameMethodSignatures(firstMethodByVersion(byVersion))
}

func configuredCompatibleMethod(ifaceName, methodName string, byVersion map[string]*MethodDef) (*MethodDef, map[string]*CompatVersionRule) {
	rule := compatRules.Methods[ifaceName+"."+methodName]
	if rule == nil {
		return nil, nil
	}
	latest := latestMethod(byVersion)
	method := &MethodDef{
		Name:     latest.Name,
		Params:   compatFieldsOrDefault(rule.Common.Params, latest.Params),
		Results:  compatFieldsOrDefault(rule.Common.Results, latest.Results),
		Comments: latest.Comments,
	}
	versionRules := map[string]*CompatVersionRule{}
	for version := range byVersion {
		versionRules[version] = mergedCompatVersionRule(rule, version)
	}
	return method, versionRules
}

func mergedCompatVersionRule(rule *CompatMethodRule, version string) *CompatVersionRule {
	common := compatCommonAsVersionRule(rule.Common)
	versionRule := rule.Versions[version]
	if versionRule == nil {
		return common
	}
	out := *common
	if versionRule.Raw.Params != nil || versionRule.Raw.Results != nil {
		out.Raw = versionRule.Raw
	}
	if versionRule.Imports != nil {
		out.Imports = mergeStringMaps(common.Imports, versionRule.Imports)
	}
	if versionRule.Pre != nil {
		out.Pre = versionRule.Pre
	}
	if versionRule.Args != nil {
		out.Args = versionRule.Args
	}
	if versionRule.Post != nil {
		out.Post = versionRule.Post
	}
	if versionRule.Returns != nil {
		out.Returns = versionRule.Returns
	}
	if versionRule.Result != nil {
		out.Result = versionRule.Result
	}
	if versionRule.BodyHelper != "" {
		out.BodyHelper = versionRule.BodyHelper
	}
	if out.Imports == nil {
		out.Imports = map[string]string{}
	}
	return &out
}

func compatCommonAsVersionRule(common CompatCommonRule) *CompatVersionRule {
	imports := map[string]string{}
	for alias, path := range common.Imports {
		imports[alias] = path
	}
	return &CompatVersionRule{
		Raw:        common.Raw,
		Imports:    imports,
		Pre:        cloneStrings(common.Pre),
		Args:       cloneStrings(common.Args),
		Post:       cloneStrings(common.Post),
		Returns:    cloneStrings(common.Returns),
		Result:     cloneCompatValueRules(common.Result),
		BodyHelper: common.BodyHelper,
	}
}

func mergeStringMaps(base, override map[string]string) map[string]string {
	out := map[string]string{}
	for key, value := range base {
		out[key] = value
	}
	for key, value := range override {
		out[key] = value
	}
	return out
}

func cloneStrings(values []string) []string {
	if values == nil {
		return nil
	}
	out := make([]string, len(values))
	copy(out, values)
	return out
}

func cloneCompatValueRules(values []CompatValueRule) []CompatValueRule {
	if values == nil {
		return nil
	}
	out := make([]CompatValueRule, len(values))
	copy(out, values)
	return out
}

func compatFieldsOrDefault(configured []FieldDef, fallback []FieldDef) []FieldDef {
	if configured != nil {
		return cloneFields(configured)
	}
	return cloneFields(fallback)
}

func numericCompatibleMethod(byVersion map[string]*MethodDef) *MethodDef {
	if !sameParams(byVersion) {
		return nil
	}
	results := commonResults(byVersion)
	if len(results) != 1 {
		return nil
	}
	for _, method := range byVersion {
		if !isIntegerType(method.Results[0].Type) {
			return nil
		}
	}
	target, ok := widestIntegerType(byVersion)
	if !ok {
		return nil
	}
	latest := latestMethod(byVersion)
	return &MethodDef{
		Name:     latest.Name,
		Params:   cloneFields(latest.Params),
		Results:  []FieldDef{{Name: latest.Results[0].Name, Type: target}},
		Comments: latest.Comments,
	}
}

func sameParams(byVersion map[string]*MethodDef) bool {
	signature := ""
	for _, method := range byVersion {
		current := fieldsSignature(method.Params, true)
		if signature == "" {
			signature = current
			continue
		}
		if signature != current {
			return false
		}
	}
	return true
}

func commonResults(byVersion map[string]*MethodDef) []FieldDef {
	for _, method := range byVersion {
		return method.Results
	}
	return nil
}

func cloneFields(fields []FieldDef) []FieldDef {
	out := make([]FieldDef, len(fields))
	copy(out, fields)
	return out
}

func isIntegerType(typ string) bool {
	switch typ {
	case "int", "int8", "int16", "int32", "int64", "uint", "uint8", "uint16", "uint32", "uint64", "uintptr":
		return true
	default:
		return false
	}
}

func widestIntegerType(byVersion map[string]*MethodDef) (string, bool) {
	hasSigned := false
	hasUnsigned := false
	maxSignedBits := 0
	maxUnsignedBits := 0
	for _, method := range byVersion {
		typ := method.Results[0].Type
		signed, bits, ok := integerTypeInfo(typ)
		if !ok {
			return "", false
		}
		if signed {
			hasSigned = true
			if bits > maxSignedBits {
				maxSignedBits = bits
			}
			continue
		}
		hasUnsigned = true
		if bits > maxUnsignedBits {
			maxUnsignedBits = bits
		}
	}
	if hasSigned && hasUnsigned {
		if maxUnsignedBits >= 64 {
			return "", false
		}
		if maxSignedBits < maxUnsignedBits+1 {
			maxSignedBits = maxUnsignedBits + 1
		}
	}
	if hasSigned {
		if maxSignedBits <= 8 {
			return "int8", true
		}
		if maxSignedBits <= 16 {
			return "int16", true
		}
		if maxSignedBits <= 32 {
			return "int32", true
		}
		return "int64", true
	}
	if maxUnsignedBits <= 8 {
		return "uint8", true
	}
	if maxUnsignedBits <= 16 {
		return "uint16", true
	}
	if maxUnsignedBits <= 32 {
		return "uint32", true
	}
	return "uint64", true
}

func integerTypeInfo(typ string) (bool, int, bool) {
	switch typ {
	case "int8":
		return true, 8, true
	case "int16":
		return true, 16, true
	case "int32", "int":
		return true, 32, true
	case "int64":
		return true, 64, true
	case "uint8":
		return false, 8, true
	case "uint16":
		return false, 16, true
	case "uint32", "uint":
		return false, 32, true
	case "uint64", "uintptr":
		return false, 64, true
	default:
		return false, 0, false
	}
}

// UnifiedArrayType represents a unified array type definition.
type UnifiedArrayType struct {
	Name     string
	ElemType string
	IsIface  bool // true if element type is a unified interface (needs wrapper)
}

// collectArrayAliases identifies array type interfaces across all versions, unifies them,
// removes them from the unified interface map, and returns the unified array type info.
func collectArrayAliases(data []*VersionData, unified map[string]*UnifiedInterface) map[string]*UnifiedArrayType {
	// Collect all array types across versions
	allNames := map[string]bool{}
	for _, vd := range data {
		for name := range vd.ArrayTypes {
			allNames[name] = true
		}
	}

	// Also detect empty unified interfaces that might be array types not parsed from cef_array_types.go
	for name, ui := range unified {
		if len(ui.CommonMethods) == 0 && len(ui.CommonEmbedded) == 0 &&
			len(ui.VersionMethods) == 0 && len(ui.VersionEmbedded) == 0 {
			allNames[name] = true
		}
	}

	out := map[string]*UnifiedArrayType{}
	for name := range allNames {
		// Find the element type from any version
		elemType := ""
		for _, vd := range data {
			if at := vd.ArrayTypes[name]; at != nil {
				elemType = at.ElemType
				break
			}
		}
		if elemType == "" {
			continue // can't determine element type, skip
		}
		uat := &UnifiedArrayType{
			Name:     name,
			ElemType: elemType,
			IsIface:  isUnifiedInterfaceType(elemType, unified),
		}
		out[name] = uat
		delete(unified, name)
	}
	return out
}

func isUnifiedInterfaceType(name string, unified map[string]*UnifiedInterface) bool {
	return unified[name] != nil
}

func unifyCallbacks(data []*VersionData) map[string]*UnifiedCallbackType {
	all := map[string]bool{}
	for _, vd := range data {
		for name := range vd.Callbacks {
			all[name] = true
		}
	}

	out := map[string]*UnifiedCallbackType{}
	for name := range all {
		uct := &UnifiedCallbackType{
			Name:        name,
			VersionDefs: map[string]*CallbackTypeDef{},
		}
		for _, vd := range data {
			if cb := vd.Callbacks[name]; cb != nil {
				uct.VersionDefs[vd.Version] = cb
			}
		}
		if len(uct.VersionDefs) == len(data) {
			// Common across all versions: use latest version's definition
			latest := data[len(data)-1]
			for _, vd := range data {
				if vd.Version == latestVersion {
					latest = vd
					break
				}
			}
			uct.CommonDef = latest.Callbacks[name]
		}
		out[name] = uct
	}
	return out
}

func filterUnified(in map[string]*UnifiedInterface) map[string]*UnifiedInterface {
	out := map[string]*UnifiedInterface{}
	for name, ui := range in {
		if shouldIncludeInterface(name) && !shouldSkipInterface(name) {
			out[name] = ui
		}
	}
	changed := true
	for changed {
		changed = false
		for _, ui := range out {
			for _, embedded := range ui.CommonEmbedded {
				if in[embedded] != nil && out[embedded] == nil {
					out[embedded] = in[embedded]
					changed = true
				}
			}
			for _, embedded := range flatten(ui.VersionEmbedded) {
				if in[embedded] != nil && out[embedded] == nil {
					out[embedded] = in[embedded]
					changed = true
				}
			}
		}
	}
	return out
}

func hasCommonContract(ui *UnifiedInterface) bool {
	return ui != nil && (len(ui.CommonMethods) > 0 || len(ui.CommonEmbedded) > 0)
}

func referencedByCommonSignature(name string, unified map[string]*UnifiedInterface) bool {
	for _, ui := range unified {
		for _, method := range ui.CommonMethods {
			if methodUsesInterface(method, name) {
				return true
			}
		}
	}
	return false
}

func methodUsesInterface(method *MethodDef, name string) bool {
	for _, field := range method.Params {
		if fieldUsesInterface(field, name) {
			return true
		}
	}
	for _, field := range method.Results {
		if fieldUsesInterface(field, name) {
			return true
		}
	}
	return false
}

func fieldUsesInterface(field FieldDef, name string) bool {
	return strings.TrimPrefix(field.Type, "*") == name
}

func shouldWriteCommonInterface(name string, unified map[string]*UnifiedInterface) bool {
	ui := unified[name]
	if hasCommonContract(ui) {
		return true
	}
	return referencedByCommonSignature(name, unified)
}

func commonInterfaceNeedsRawOnly(name string, unified map[string]*UnifiedInterface) bool {
	ui := unified[name]
	return ui != nil && !hasCommonContract(ui) && referencedByCommonSignature(name, unified)
}

func versionInterfaceName(name, version string, unified map[string]*UnifiedInterface) string {
	if shouldWriteCommonInterface(name, unified) {
		return name
	}
	return name + "_" + version
}

func omittedCommonInterfaces(unified map[string]*UnifiedInterface) []OmittedCommonInterface {
	var out []OmittedCommonInterface
	for _, name := range sortedKeys(unified) {
		if shouldWriteCommonInterface(name, unified) {
			continue
		}
		ui := unified[name]
		if ui == nil {
			continue
		}
		if len(ui.VersionMethods) == 0 && len(ui.VersionEmbedded) == 0 {
			continue
		}
		out = append(out, OmittedCommonInterface{
			Name:   name,
			Reason: "没有跨所有版本一致的方法或父接口，公共层不再生成空接口；对应能力保留在版本接口中",
		})
	}
	return out
}

func prepareOutput(dir string, incremental bool) error {
	if err := os.MkdirAll(dir, 0755); err != nil {
		return err
	}
	if incremental {
		return prepareIncrementalOutput(dir)
	}
	entries, err := os.ReadDir(dir)
	if err != nil {
		return err
	}
	for _, entry := range entries {
		name := entry.Name()
		if isGeneratedAdapterFile(name) ||
			isGeneratedInterfaceFile(name) ||
			name == "interfaces.go" ||
			name == "init.go" ||
			name == "raw.go" ||
			name == "compat_report.md" ||
			name == "types" {
			if err := os.RemoveAll(filepath.Join(dir, name)); err != nil {
				return err
			}
		}
	}
	return os.MkdirAll(filepath.Join(dir, "types"), 0755)
}

func prepareIncrementalOutput(dir string) error {
	if err := os.MkdirAll(filepath.Join(dir, "types"), 0755); err != nil {
		return err
	}
	if err := removeStaleAdapterFiles(dir); err != nil {
		return err
	}
	if err := removeStaleInterfaceFiles(dir); err != nil {
		return err
	}
	return removeStaleTypeFiles(filepath.Join(dir, "types"))
}

func removeStaleAdapterFiles(dir string) error {
	entries, err := os.ReadDir(dir)
	if err != nil {
		return err
	}
	for _, entry := range entries {
		name := entry.Name()
		if !isGeneratedAdapterFile(name) {
			continue
		}
		version := strings.TrimSuffix(strings.TrimPrefix(name, "adapter_"), ".go")
		if hasVersion(version) {
			continue
		}
		if err := os.RemoveAll(filepath.Join(dir, name)); err != nil {
			return err
		}
	}
	return nil
}

func removeStaleInterfaceFiles(dir string) error {
	entries, err := os.ReadDir(dir)
	if err != nil {
		return err
	}
	for _, entry := range entries {
		name := entry.Name()
		if !isGeneratedInterfaceFile(name) {
			continue
		}
		version := strings.TrimSuffix(strings.TrimPrefix(name, "interfaces_"), ".go")
		if hasVersion(version) {
			continue
		}
		if err := os.RemoveAll(filepath.Join(dir, name)); err != nil {
			return err
		}
	}
	return nil
}

func removeStaleTypeFiles(dir string) error {
	entries, err := os.ReadDir(dir)
	if err != nil {
		return err
	}
	for _, entry := range entries {
		name := entry.Name()
		if !strings.HasPrefix(name, "types_") || !strings.HasSuffix(name, ".go") {
			continue
		}
		version := strings.TrimSuffix(strings.TrimPrefix(name, "types_"), ".go")
		if hasVersion(version) {
			continue
		}
		if err := os.RemoveAll(filepath.Join(dir, name)); err != nil {
			return err
		}
	}
	return nil
}

func isGeneratedAdapterFile(name string) bool {
	return strings.HasPrefix(name, "adapter_") && strings.HasSuffix(name, ".go")
}

func isGeneratedInterfaceFile(name string) bool {
	return strings.HasPrefix(name, "interfaces_") && strings.HasSuffix(name, ".go")
}

func generateInit(dir string) error {
	return writeGo(filepath.Join(dir, "init.go"), copyright+`package cef

import cefbase "github.com/energye/cef/base"

func Init() {
	cefbase.Init()
}
`)
}

func generateRaw(dir string) error {
	return writeGo(filepath.Join(dir, "raw.go"), copyright+`package cef

type Raw = any

type IRaw interface {
	Raw() Raw
}

func RawAs[T any](value any) (T, bool) {
	var zero T
	raw, ok := value.(IRaw)
	if !ok {
		return zero, false
	}
	out, ok := raw.Raw().(T)
	if !ok {
		return zero, false
	}
	return out, true
}
`)
}

func generateInterfaces(data []*VersionData, unified map[string]*UnifiedInterface, embeddedAliases map[string]string, callbackTypes map[string]*UnifiedCallbackType, dir string) error {
	var sb strings.Builder
	sb.WriteString(copyright)
	sb.WriteString("package cef\n\n")
	imports := collectCommonInterfaceImports(unified, embeddedAliases)
	writeImports(&sb, imports)

	for _, name := range sortedStringKeys(embeddedAliases) {
		sb.WriteString(fmt.Sprintf("type %s = %s\n", name, embeddedAliases[name]))
	}
	if len(embeddedAliases) > 0 {
		sb.WriteString("\n")
	}
	writeCompatibilityTypes(&sb, unified)

	names := sortedKeys(unified)
	for _, name := range names {
		if !shouldWriteCommonInterface(name, unified) {
			continue
		}
		ui := unified[name]
		writeComment(&sb, ui.Comments)
		sb.WriteString(fmt.Sprintf("type %s interface {\n", name))
		if commonInterfaceNeedsRawOnly(name, unified) {
			sb.WriteString("\tIRaw\n")
		} else {
			for _, embedded := range ui.CommonEmbedded {
				if knownEmbedded(embedded, unified, embeddedAliases) {
					sb.WriteString("\t" + embedded + "\n")
				}
			}
			for _, method := range ui.CommonMethods {
				writeComment(&sb, method.Comments)
				sb.WriteString("\t" + methodSignature(method) + "\n")
			}
		}
		sb.WriteString("}\n\n")
	}
	if err := writeGo(filepath.Join(dir, "interfaces.go"), sb.String()); err != nil {
		return err
	}

	for _, vd := range data {
		var vsb strings.Builder
		vsb.WriteString(copyright)
		vsb.WriteString("//go:build " + buildTag(vd.Version) + "\n\n")
		vsb.WriteString("package cef\n\n")
		writeImports(&vsb, collectVersionInterfaceImports(vd.Version, unified))

		wrote := false
		for _, name := range names {
			if vd.Interfaces[name] == nil {
				continue
			}
			if hasPublicVersionInterface(unified, embeddedAliases, name, vd.Version) {
				writeVersionInterface(&vsb, vd.Version, unified, embeddedAliases, name)
				wrote = true
			}
		}
		if !wrote {
			continue
		}
		if err := writeGo(filepath.Join(dir, fmt.Sprintf("interfaces_%s.go", vd.Version)), vsb.String()); err != nil {
			return err
		}
	}
	return nil
}

func writeCompatibilityTypes(sb *strings.Builder, unified map[string]*UnifiedInterface) {
	if len(compatRules.Types) == 0 {
		return
	}
	for _, name := range sortedStringKeys(compatRules.Types) {
		sb.WriteString(fmt.Sprintf("type %s %s\n", name, compatRules.Types[name]))
	}
	sb.WriteString("\n")
}

func callbackSignature(params []FieldDef, results []FieldDef, version string, unified map[string]*UnifiedInterface) string {
	params = mapFieldsForVersion(params, version, unified)
	results = mapFieldsForVersion(results, version, unified)
	sig := "("
	for i, p := range params {
		if i > 0 {
			sig += ", "
		}
		if p.Name != "" {
			sig += p.Name + " "
		}
		sig += p.Type
	}
	sig += ")"
	if len(results) == 0 {
		return sig
	}
	sig += " "
	if len(results) == 1 {
		sig += results[0].Type
	} else {
		sig += "("
		for i, r := range results {
			if i > 0 {
				sig += ", "
			}
			sig += r.Type
		}
		sig += ")"
	}
	return sig
}

func generateTypes(data []*VersionData, dir string) error {
	if err := os.MkdirAll(dir, 0755); err != nil {
		return err
	}
	for _, vd := range data {
		var sb strings.Builder
		sb.WriteString(copyright)
		sb.WriteString("//go:build " + buildTag(vd.Version) + "\n\n")
		sb.WriteString("package types\n\n")
		sb.WriteString(fmt.Sprintf("import vtypes \"%s/%s/types\"\n\n", modulePath, vd.Version))
		for _, name := range sortedBoolKeys(vd.TypeTypes) {
			sb.WriteString(fmt.Sprintf("type %s = vtypes.%s\n", name, name))
		}
		if len(vd.TypeConsts) > 0 {
			sb.WriteString("\nconst (\n")
			for _, name := range sortedBoolKeys(vd.TypeConsts) {
				sb.WriteString(fmt.Sprintf("\t%s = vtypes.%s\n", name, name))
			}
			sb.WriteString(")\n")
		}
		if err := writeGo(filepath.Join(dir, fmt.Sprintf("types_%s.go", vd.Version)), sb.String()); err != nil {
			return err
		}
	}
	return nil
}

func generateAdapter(vd *VersionData, unified map[string]*UnifiedInterface, embeddedAliases map[string]string, callbackTypes map[string]*UnifiedCallbackType, arrayAliases map[string]*UnifiedArrayType, dir string) error {
	var sb strings.Builder
	version := vd.Version
	sb.WriteString(copyright)
	sb.WriteString("//go:build " + buildTag(version) + "\n\n")
	sb.WriteString("package cef\n\n")

	imports := collectAdapterImports(vd, unified)
	writeImports(&sb, imports)

	sb.WriteString(fmt.Sprintf("const CEFVersion = %v\n\n", version))
	for _, name := range sortedBoolKeys(vd.CefTypes) {
		if unified[name] == nil && embeddedAliases[name] == "" {
			sb.WriteString(fmt.Sprintf("type %s = vcef.%s\n", name, name))
		}
	}
	if len(vd.CefTypes) > 0 {
		sb.WriteString("\n")
	}

	// Generate array types.
	// Struct-element arrays: simple alias to vcef type.
	// Interface-element arrays: wrapper type that bridges unified ? version-specific.
	aliasNames := sortedArrayAliasKeys(arrayAliases, false)
	for _, name := range aliasNames {
		if _, exists := vd.Interfaces[name]; exists {
			sb.WriteString(fmt.Sprintf("type %s = vcef.%s\n", name, name))
		}
	}
	ifaceArrayNames := sortedArrayAliasKeys(arrayAliases, true)
	for _, name := range ifaceArrayNames {
		uat := arrayAliases[name]
		if _, exists := vd.Interfaces[name]; exists {
			writeArrayWrapperType(&sb, vd, unified, uat)
		}
	}
	if len(aliasNames) > 0 || len(ifaceArrayNames) > 0 {
		sb.WriteString("\n")
	}

	// Generate callback type definitions using unified interface names.
	// These are actual type definitions (not aliases) so they use the unified
	// interface types, enabling user code to use unified types in callbacks.
	for _, name := range sortedKeys(callbackTypes) {
		uct := callbackTypes[name]
		cb := uct.VersionDefs[version]
		if cb == nil {
			continue // not defined in this version
		}
		sb.WriteString(fmt.Sprintf("type %s func%s\n", cb.Name, callbackSignature(cb.Params, cb.Results, version, unified)))
	}
	if len(callbackTypes) > 0 {
		sb.WriteString("\n")
	}

	for _, name := range sortedKeys(unified) {
		if vd.Interfaces[name] == nil {
			continue
		}
		writeWrapperType(&sb, vd, unified, embeddedAliases, arrayAliases, name)
	}
	writeConstructorsAndFuncs(&sb, vd, unified, arrayAliases)
	writeClassMethods(&sb, vd, unified)
	return writeGo(filepath.Join(dir, fmt.Sprintf("adapter_%s.go", version)), sb.String())
}

func buildTag(version string) string {
	explicit := fmt.Sprintf("CEF%s", version)
	if version != defaultVersion {
		return explicit
	}

	var disabled []string
	for _, candidate := range versions {
		if candidate == defaultVersion {
			continue
		}
		disabled = append(disabled, fmt.Sprintf("!CEF%s", candidate))
	}
	return explicit + " || (" + strings.Join(disabled, " && ") + ")"
}

func writeVersionInterface(sb *strings.Builder, version string, unified map[string]*UnifiedInterface, embeddedAliases map[string]string, name string) {
	ui := unified[name]
	sb.WriteString(fmt.Sprintf("type %s_%s interface {\n", name, version))
	if shouldWriteCommonInterface(name, unified) {
		sb.WriteString("\t" + name + "\n")
	}
	for _, embedded := range versionInterfaceEmbeds(name, version, unified, embeddedAliases) {
		sb.WriteString("\t" + embedded + "\n")
	}
	for _, method := range ui.VersionMethods[version] {
		writeComment(sb, method.Comments)
		sb.WriteString("\t" + versionMethodSignature(method, version, unified) + "\n")
	}
	sb.WriteString("}\n\n")
}

func writeWrapperType(sb *strings.Builder, vd *VersionData, unified map[string]*UnifiedInterface, embeddedAliases map[string]string, arrayAliases map[string]*UnifiedArrayType, name string) {
	version := vd.Version
	structName := wrapperName(name, version)
	wrapperEmbedded, removedEmbeds := wrapperEmbeds(vd, unified, name)
	aliasEmbedded := wrapperAliasEmbeds(vd, embeddedAliases, name)
	sb.WriteString(fmt.Sprintf("type %s struct {\n", structName))
	sb.WriteString(fmt.Sprintf("\traw vcef.%s\n", name))
	for _, embedded := range wrapperEmbedded {
		sb.WriteString(fmt.Sprintf("\t*%s\n", wrapperName(embedded, version)))
	}
	// When wrapper embeds are present, remove alias types that are already provided
	// transitively through the wrapper embed chain. This prevents Go method promotion
	// ambiguity (e.g., IsValid() from both IInterfacedObject and a wrapper's method).
	// However, only remove aliases that are ACTUALLY in the wrapper chain's alias closure.
	effectiveAlias := aliasEmbedded
	if len(wrapperEmbedded) > 0 {
		aliasClosure := map[string]bool{}
		for _, we := range wrapperEmbedded {
			for k := range wrapperAliasClosure(vd, unified, embeddedAliases, we) {
				aliasClosure[k] = true
			}
		}
		var filtered []string
		for _, a := range aliasEmbedded {
			if !aliasClosure[a] {
				filtered = append(filtered, a)
			}
		}
		effectiveAlias = filtered
	}
	for _, embedded := range effectiveAlias {
		sb.WriteString("\t" + embedded + "\n")
	}
	sb.WriteString("}\n\n")

	sb.WriteString(fmt.Sprintf("func new%s(raw vcef.%s) *%s {\n", structName, name, structName))
	sb.WriteString("\tif raw == nil {\n\t\treturn nil\n\t}\n")
	sb.WriteString(fmt.Sprintf("\treturn &%s{\n\t\traw: raw,\n", structName))
	for _, embedded := range wrapperEmbedded {
		sb.WriteString(fmt.Sprintf("\t\t%s: new%s(raw),\n", wrapperName(embedded, version), wrapperName(embedded, version)))
	}
	for _, embedded := range effectiveAlias {
		sb.WriteString(fmt.Sprintf("\t\t%s: raw,\n", embedded))
	}
	sb.WriteString("\t}\n}\n\n")

	publicName := versionInterfaceName(name, version, unified)
	sb.WriteString(fmt.Sprintf("func wrap%s(raw vcef.%s) %s {\n", name, name, publicName))
	sb.WriteString(fmt.Sprintf("\treturn new%s(raw)\n", structName))
	sb.WriteString("}\n\n")

	sb.WriteString(fmt.Sprintf("func unwrap%s(value %s) vcef.%s {\n", name, publicName, name))
	sb.WriteString("\tif value == nil {\n\t\treturn nil\n\t}\n")
	sb.WriteString(fmt.Sprintf("\tif wrapped, ok := value.(*%s); ok {\n\t\treturn wrapped.raw\n\t}\n", structName))
	sb.WriteString(fmt.Sprintf("\tif raw, ok := RawAs[vcef.%s](value); ok {\n\t\treturn raw\n\t}\n", name))
	sb.WriteString("\treturn nil\n")
	sb.WriteString("}\n\n")

	sb.WriteString(fmt.Sprintf("func (t *%s) Raw() Raw {\n\treturn t.raw\n}\n\n", structName))

	// Collect methods to generate directly on this wrapper.
	// Start with methods defined directly on this interface.
	directMethods := directInterfaceMethods(vd, name)

	// If any wrapper embeds were removed to avoid ambiguity, we need to generate
	// their methods directly. Methods already available through kept embeds are excluded.
	inheritedConversions := map[string]*CompatConversion{}
	if len(removedEmbeds) > 0 {
		keptMethods := interfaceMethodsFromList(vd, wrapperEmbedded)
		removedMethods := interfaceMethodsFromList(vd, removedEmbeds)
		inheritedConversions = interfaceConversionsFromList(vd, unified, removedEmbeds)
		for key, m := range removedMethods {
			if keptMethods[key] == nil {
				directMethods = append(directMethods, m)
			}
		}
		sortMethods(directMethods)
	}

	conversions := map[string]*CompatConversion{}
	if ui := unified[name]; ui != nil {
		conversions = mergeConversions(ui.Conversions[version], inheritedConversions)
		if len(conversions) > 0 {
			directMethods = replaceCompatibleMethods(directMethods, conversions)
		}
	}
	for _, method := range directMethods {
		writeMethod(sb, vd, unified, arrayAliases, structName, method, conversions[methodKey(method)])
	}
}

func mergeConversions(maps ...map[string]*CompatConversion) map[string]*CompatConversion {
	out := map[string]*CompatConversion{}
	for _, m := range maps {
		for key, conversion := range m {
			out[key] = conversion
		}
	}
	return out
}

func interfaceConversionsFromList(vd *VersionData, unified map[string]*UnifiedInterface, names []string) map[string]*CompatConversion {
	out := map[string]*CompatConversion{}
	visited := map[string]bool{}
	var walk func(string)
	walk = func(name string) {
		if visited[name] {
			return
		}
		visited[name] = true
		ui := unified[name]
		if ui != nil {
			for key, conversion := range ui.Conversions[vd.Version] {
				out[key] = conversion
			}
		}
		iface := vd.Interfaces[name]
		if iface == nil {
			return
		}
		for _, embedded := range iface.Embedded {
			if unified[embedded] != nil {
				walk(embedded)
			}
		}
	}
	for _, name := range names {
		walk(name)
	}
	return out
}

func replaceCompatibleMethods(methods []*MethodDef, conversions map[string]*CompatConversion) []*MethodDef {
	compatNames := map[string]bool{}
	for _, conversion := range conversions {
		if conversion != nil {
			compatNames[conversion.MethodName] = true
		}
	}
	seen := map[string]bool{}
	var out []*MethodDef
	for _, method := range methods {
		if compatNames[method.Name] {
			continue
		}
		seen[methodKey(method)] = true
		out = append(out, method)
	}
	for key, conversion := range conversions {
		if conversion == nil || seen[key] {
			continue
		}
		out = append(out, conversion.To)
		seen[key] = true
	}
	sortMethods(out)
	return out
}

// interfaceMethodsFromList returns all methods (including inherited) from the given
// list of interface names. Used to compute which methods are available through
// embedded wrappers vs. which need to be generated directly.
func interfaceMethodsFromList(vd *VersionData, names []string) map[string]*MethodDef {
	methods := map[string]*MethodDef{}
	for _, name := range names {
		for _, m := range allInterfaceMethods(vd, name) {
			methods[methodKey(m)] = m
		}
	}
	return methods
}

// directInterfaceMethods returns only methods defined directly on the named interface,
// NOT methods inherited from embedded interfaces. This matches the source binding layer
// where wrapper structs rely on Go struct embedding for inherited methods.
func directInterfaceMethods(vd *VersionData, name string) []*MethodDef {
	iface := vd.Interfaces[name]
	if iface == nil {
		return nil
	}
	var out []*MethodDef
	for _, method := range iface.Methods {
		out = append(out, method)
	}
	sortMethods(out)
	return out
}

func writeMethod(sb *strings.Builder, vd *VersionData, unified map[string]*UnifiedInterface, arrayAliases map[string]*UnifiedArrayType, receiver string, method *MethodDef, conversion *CompatConversion) {
	sb.WriteString(fmt.Sprintf("func (t *%s) %s {\n", receiver, versionMethodSignature(method, vd.Version, unified)))
	if conversion != nil && conversion.Config != nil && conversion.Config.BodyHelper != "" {
		writeBodyHelperMethod(sb, method, conversion)
		sb.WriteString("}\n\n")
		return
	}
	callMethod := method
	if conversion != nil {
		callMethod = conversion.From
	}
	pre, args, post := callArgsWithArrays(vd, unified, arrayAliases, callMethod.Params)
	if conversion != nil && conversion.Config != nil {
		values := methodTemplateValues(method)
		pre = append(renderCompatTemplates(conversion.Config.Pre, values), pre...)
		if len(conversion.Config.Args) > 0 {
			args = renderCompatTemplates(conversion.Config.Args, values)
		}
		post = append(post, renderCompatTemplates(conversion.Config.Post, values)...)
	}
	for _, line := range pre {
		sb.WriteString("\t" + line + "\n")
	}
	call := fmt.Sprintf("t.raw.%s(%s)", method.Name, strings.Join(args, ", "))
	returns := writeCallAssign(sb, vd, unified, call, callMethod.Results)
	for _, line := range post {
		sb.WriteString("\t" + line + "\n")
	}
	if conversion != nil {
		if conversion.Config != nil && len(conversion.Config.Returns) > 0 {
			returns = renderCompatTemplates(conversion.Config.Returns, resultTemplateValues(returns))
		} else {
			returns = convertReturns(conversion, returns)
		}
	}
	if len(returns) > 0 {
		sb.WriteString("\treturn " + strings.Join(returns, ", ") + "\n")
	}
	sb.WriteString("}\n\n")
}

func writeBodyHelperMethod(sb *strings.Builder, method *MethodDef, conversion *CompatConversion) {
	values := methodTemplateValues(method)
	args := conversion.Config.Args
	if len(args) == 0 {
		args = append([]string{"{raw}"}, methodParamNames(method.Params)...)
	}
	renderedArgs := renderCompatTemplates(args, values)
	call := fmt.Sprintf("%s(%s)", conversion.Config.BodyHelper, strings.Join(renderedArgs, ", "))
	for _, line := range renderCompatTemplates(conversion.Config.Pre, values) {
		sb.WriteString("\t" + line + "\n")
	}
	if len(method.Results) == 0 {
		sb.WriteString("\t" + call + "\n")
		for _, line := range renderCompatTemplates(conversion.Config.Post, values) {
			sb.WriteString("\t" + line + "\n")
		}
		return
	}
	sb.WriteString("\treturn " + call + "\n")
}

func methodTemplateValues(method *MethodDef) map[string]string {
	values := map[string]string{"raw": "t.raw"}
	for i, param := range method.Params {
		name := param.Name
		if name == "" {
			name = fmt.Sprintf("p%d", i)
		}
		values[name] = name
		values[fmt.Sprintf("p%d", i)] = name
	}
	return values
}

func methodParamNames(params []FieldDef) []string {
	var out []string
	for i, param := range params {
		name := param.Name
		if name == "" {
			name = fmt.Sprintf("p%d", i)
		}
		out = append(out, "{"+name+"}")
	}
	return out
}

func resultTemplateValues(returns []string) map[string]string {
	values := map[string]string{}
	for i, ret := range returns {
		values[fmt.Sprintf("r%d", i)] = ret
	}
	return values
}

func renderCompatTemplates(lines []string, values map[string]string) []string {
	out := make([]string, len(lines))
	for i, line := range lines {
		out[i] = renderCompatTemplate(line, values)
	}
	return out
}

func renderCompatTemplate(s string, values map[string]string) string {
	for name, value := range values {
		s = strings.ReplaceAll(s, "{"+name+"}", value)
	}
	return s
}

func writeConstructorsAndFuncs(sb *strings.Builder, vd *VersionData, unified map[string]*UnifiedInterface, arrayAliases map[string]*UnifiedArrayType) {
	for _, name := range sortedFuncNames(vd.Funcs) {
		fn := vd.Funcs[name]
		if !shouldGenerateFunc(fn, unified, arrayAliases) {
			continue
		}
		sb.WriteString(fmt.Sprintf("func %s%s {\n", fn.Name, versionFuncSignature(fn.Params, fn.Results, vd.Version, unified)))
		pre, args, post := callArgs(vd, unified, fn.Params)
		for _, line := range pre {
			sb.WriteString("\t" + line + "\n")
		}
		call := fmt.Sprintf("vcef.%s(%s)", fn.Name, strings.Join(args, ", "))
		// Check if this returns an array type
		if len(fn.Results) > 0 {
			retClean := strings.TrimPrefix(fn.Results[0].Type, "*")
			if uat := arrayAliases[retClean]; uat != nil {
				if uat.IsIface {
					// Interface-element array: wrap in wrapper struct
					sb.WriteString(fmt.Sprintf("\treturn &t%s{raw: %s}\n", retClean, call))
				} else {
					// Struct-element array: direct delegation
					sb.WriteString(fmt.Sprintf("\treturn %s\n", call))
				}
			} else {
				returns := writeCallAssign(sb, vd, unified, call, fn.Results)
				for _, line := range post {
					sb.WriteString("\t" + line + "\n")
				}
				if len(returns) > 0 {
					sb.WriteString("\treturn " + strings.Join(returns, ", ") + "\n")
				}
			}
		}
		sb.WriteString("}\n\n")
	}
}

func writeClassMethods(sb *strings.Builder, vd *VersionData, unified map[string]*UnifiedInterface) {
	for _, className := range sortedKeys(vd.Classes) {
		cd := vd.Classes[className]
		if len(cd.Methods) == 0 {
			continue
		}
		// Generate unexported class struct type
		sb.WriteString(fmt.Sprintf("type %s struct{}\n\n", classTypeName(className)))
		// Generate var declaration
		sb.WriteString(fmt.Sprintf("var %s %s\n\n", className, classTypeName(className)))
		// Generate methods
		for _, method := range cd.Methods {
			sb.WriteString(fmt.Sprintf("func (%s) %s%s {\n", classTypeName(className), method.Name, versionFuncSignature(method.Params, method.Results, vd.Version, unified)))
			pre, args, post := classCallArgs(method.Params, vd, unified)
			for _, line := range pre {
				sb.WriteString("\t" + line + "\n")
			}
			call := fmt.Sprintf("vcef.%s.%s(%s)", className, method.Name, strings.Join(args, ", "))
			hasPost := len(post) > 0
			if len(method.Results) == 0 {
				sb.WriteString("\t" + call + "\n")
			} else if len(method.Results) == 1 {
				rTyp := method.Results[0].Type
				if clean, _ := interfaceType(rTyp, unified); clean != "" {
					sb.WriteString(fmt.Sprintf("\tr0 := %s\n", call))
					for _, line := range post {
						sb.WriteString("\t" + line + "\n")
					}
					sb.WriteString(fmt.Sprintf("\treturn %s\n", wrapExpr(vd, unified, rTyp, "r0")))
				} else if hasPost {
					sb.WriteString(fmt.Sprintf("\tr0 := %s\n", call))
					for _, line := range post {
						sb.WriteString("\t" + line + "\n")
					}
					sb.WriteString("\treturn r0\n")
				} else {
					sb.WriteString(fmt.Sprintf("\treturn %s\n", call))
				}
			} else {
				names := make([]string, len(method.Results))
				for i := range method.Results {
					names[i] = fmt.Sprintf("r%d", i)
				}
				sb.WriteString(fmt.Sprintf("\t%s := %s\n", strings.Join(names, ", "), call))
				for _, line := range post {
					sb.WriteString("\t" + line + "\n")
				}
				rets := make([]string, len(method.Results))
				for i, r := range method.Results {
					rets[i] = wrapExpr(vd, unified, r.Type, names[i])
				}
				sb.WriteString(fmt.Sprintf("\treturn %s\n", strings.Join(rets, ", ")))
			}
			if !hasPost {
				// post already emitted above for return cases
			}
			sb.WriteString("}\n\n")
		}
	}
}

func classTypeName(className string) string {
	return "t" + className
}

func sortedArrayAliasKeys(m map[string]*UnifiedArrayType, isIface bool) []string {
	var keys []string
	for _, uat := range m {
		if uat.IsIface == isIface {
			keys = append(keys, uat.Name)
		}
	}
	sort.Strings(keys)
	return keys
}

// writeArrayWrapperType generates a wrapper struct for interface-element array types.
// This bridges unified and version-specific types so methods like Add() accept unified types.
func writeArrayWrapperType(sb *strings.Builder, vd *VersionData, unified map[string]*UnifiedInterface, uat *UnifiedArrayType) {
	elemName := uat.ElemType // e.g., "ICefv8Value"
	arrName := uat.Name      // e.g., "ICefv8ValueArray"
	structName := "t" + arrName
	elemPublicName := mapTypeForVersion(elemName, vd.Version, unified)

	// Generate unified interface definition
	sb.WriteString(fmt.Sprintf("type %s interface {\n", arrName))
	sb.WriteString("\tInstance() uintptr\n")
	sb.WriteString("\tCount() int\n")
	sb.WriteString(fmt.Sprintf("\tGet(index int) %s\n", elemPublicName))
	sb.WriteString(fmt.Sprintf("\tAdd(value %s)\n", elemPublicName))
	sb.WriteString("\tFree()\n")
	sb.WriteString("}\n\n")

	// Generate wrapper struct
	sb.WriteString(fmt.Sprintf("type %s struct {\n\traw vcef.%s\n}\n\n", structName, arrName))

	// Generate methods
	sb.WriteString(fmt.Sprintf("func (t *%s) Instance() uintptr { return t.raw.Instance() }\n", structName))
	sb.WriteString(fmt.Sprintf("func (t *%s) Count() int { return t.raw.Count() }\n", structName))
	sb.WriteString(fmt.Sprintf("func (t *%s) Get(index int) %s { return wrap%s(t.raw.Get(index)) }\n", structName, elemPublicName, elemName))
	sb.WriteString(fmt.Sprintf("func (t *%s) Add(value %s) { t.raw.Add(unwrap%s(value)) }\n", structName, elemPublicName, elemName))
	sb.WriteString(fmt.Sprintf("func (t *%s) Free() { t.raw.Free() }\n\n", structName))
	sb.WriteString(fmt.Sprintf("func (t *%s) Raw() Raw { return t.raw }\n\n", structName))

	// Generate unwrap function for passing unified array to version-specific methods
	sb.WriteString(fmt.Sprintf("func unwrap%s(value %s) vcef.%s {\n", arrName, arrName, arrName))
	sb.WriteString("\tif value == nil {\n\t\treturn nil\n\t}\n")
	sb.WriteString(fmt.Sprintf("\tif wrapped, ok := value.(*%s); ok {\n\t\treturn wrapped.raw\n\t}\n", structName))
	sb.WriteString(fmt.Sprintf("\tif raw, ok := RawAs[vcef.%s](value); ok {\n\t\treturn raw\n\t}\n", arrName))
	sb.WriteString("\treturn nil\n")
	sb.WriteString("}\n\n")

	// Generate wrap function for wrapping version-specific array to unified
	sb.WriteString(fmt.Sprintf("func wrap%s(raw vcef.%s) %s {\n", arrName, arrName, arrName))
	sb.WriteString("\tif raw == nil {\n\t\treturn nil\n\t}\n")
	sb.WriteString(fmt.Sprintf("\treturn &%s{raw: raw}\n", structName))
	sb.WriteString("}\n\n")

	// Generate ptrTo function for pointer-to-array output params
	sb.WriteString(fmt.Sprintf("func ptrTo%s(p *vcef.%s) *%s {\n", arrName, arrName, arrName))
	sb.WriteString("\tif p == nil {\n\t\treturn nil\n\t}\n")
	sb.WriteString(fmt.Sprintf("\tvar r %s\n", arrName))
	sb.WriteString(fmt.Sprintf("\tif *p != nil {\n\t\tr = &%s{raw: *p}\n\t}\n", structName))
	sb.WriteString("\treturn &r\n")
	sb.WriteString("}\n\n")
}

func classMethodSignature(params []FieldDef, results []FieldDef) string {
	sig := "("
	for i, p := range params {
		if i > 0 {
			sig += ", "
		}
		if p.Name != "" {
			sig += p.Name + " "
		}
		sig += p.Type
	}
	sig += ")"
	if len(results) == 0 {
		return sig
	}
	sig += " "
	if len(results) == 1 {
		sig += results[0].Type
	} else {
		sig += "("
		for i, r := range results {
			if i > 0 {
				sig += ", "
			}
			sig += r.Type
		}
		sig += ")"
	}
	return sig
}

func classCallArgs(params []FieldDef, vd *VersionData, unified map[string]*UnifiedInterface) (pre []string, args []string, post []string) {
	for i, p := range params {
		name := p.Name
		if name == "" {
			name = fmt.Sprintf("p%d", i)
		}
		clean, pointer := interfaceType(p.Type, unified)
		if clean == "" {
			// Check if this is an array interface type that needs unwrapping
			arrClean := strings.TrimPrefix(p.Type, "*")
			arrPointer := strings.HasPrefix(p.Type, "*")
			if vd.ArrayTypes[arrClean] != nil && isUnifiedInterfaceType(vd.ArrayTypes[arrClean].ElemType, unified) {
				if arrPointer {
					rawName := "raw" + exportedName(name)
					pre = append(pre, fmt.Sprintf("var %s vcef.%s", rawName, arrClean))
					pre = append(pre, fmt.Sprintf("if %s != nil && *%s != nil {", name, name))
					pre = append(pre, fmt.Sprintf("\t%s = unwrap%s(*%s)", rawName, arrClean, name))
					pre = append(pre, "}")
					args = append(args, "&"+rawName)
					post = append(post, fmt.Sprintf("if %s != nil {", name))
					post = append(post, fmt.Sprintf("\t*%s = wrap%s(%s)", name, arrClean, rawName))
					post = append(post, "}")
					continue
				}
				args = append(args, fmt.Sprintf("unwrap%s(%s)", arrClean, name))
				continue
			}
			// Check if this is a callback type that needs wrapping
			cbTypeName := callbackTypeName(p.Type)
			if cb := vd.Callbacks[cbTypeName]; cb != nil {
				wrapperExpr := callbackWrapperExpr(name, cb, vd.Version, unified, nil)
				args = append(args, wrapperExpr)
				continue
			}
			args = append(args, name)
			continue
		}
		if pointer {
			rawName := "raw" + exportedName(name)
			pre = append(pre, fmt.Sprintf("var %s vcef.%s", rawName, clean))
			pre = append(pre, fmt.Sprintf("if %s != nil && *%s != nil {", name, name))
			pre = append(pre, fmt.Sprintf("\t%s = unwrap%s(*%s)", rawName, clean, name))
			pre = append(pre, "}")
			args = append(args, "&"+rawName)
			post = append(post, fmt.Sprintf("if %s != nil {", name))
			post = append(post, fmt.Sprintf("\t*%s = wrap%s(%s)", name, clean, rawName))
			post = append(post, "}")
			continue
		}
		args = append(args, fmt.Sprintf("unwrap%s(%s)", clean, name))
	}
	return
}
func writeCallAssign(sb *strings.Builder, vd *VersionData, unified map[string]*UnifiedInterface, call string, results []FieldDef) []string {
	if len(results) == 0 {
		sb.WriteString("\t" + call + "\n")
		return nil
	}
	names := make([]string, len(results))
	for i := range results {
		names[i] = fmt.Sprintf("r%d", i)
	}
	sb.WriteString("\t")
	if len(names) == 1 {
		sb.WriteString(names[0] + " := " + call + "\n")
	} else {
		sb.WriteString(strings.Join(names, ", ") + " := " + call + "\n")
	}
	var ret []string
	for i, field := range results {
		ret = append(ret, wrapExpr(vd, unified, field.Type, names[i]))
	}
	return ret
}

func convertReturns(conversion *CompatConversion, returns []string) []string {
	if conversion == nil || len(returns) != len(conversion.To.Results) || len(conversion.From.Results) != len(conversion.To.Results) {
		return returns
	}
	out := make([]string, len(returns))
	for i := range returns {
		var rule *CompatValueRule
		if conversion.Config != nil && i < len(conversion.Config.Result) {
			rule = &conversion.Config.Result[i]
		}
		out[i] = convertReturnExpr(conversion.From.Results[i].Type, conversion.To.Results[i].Type, returns[i], rule)
	}
	return out
}

func convertReturnExpr(fromType, toType, expr string, rule *CompatValueRule) string {
	if fromType == toType {
		if rule == nil || (rule.Kind == "" && rule.Helper == "" && rule.Expr == "") {
			return expr
		}
	}
	if rule != nil {
		if rule.Helper != "" {
			return fmt.Sprintf("%s(%s)", rule.Helper, expr)
		}
		if rule.Expr != "" {
			return renderCompatTemplate(rule.Expr, map[string]string{"value": expr})
		}
		switch rule.Kind {
		case "identity":
			return expr
		case "cast":
			return fmt.Sprintf("%s(%s)", toType, expr)
		case "identifier_string":
			return identifierStringExpr(fromType, toType, expr)
		}
	}
	if toType == "TCefFrameIdentifier" {
		return identifierStringExpr(fromType, toType, expr)
	}
	if isIntegerType(fromType) && isIntegerType(toType) {
		return fmt.Sprintf("%s(%s)", toType, expr)
	}
	return expr
}

func identifierStringExpr(fromType, toType, expr string) string {
	if toType == "" {
		toType = "string"
	}
	if fromType == toType {
		return expr
	}
	if toType == "string" {
		if fromType == "string" {
			return expr
		}
		if isSignedIntegerType(fromType) {
			return fmt.Sprintf("strconv.FormatInt(int64(%s), 10)", expr)
		}
		if isUnsignedIntegerType(fromType) {
			return fmt.Sprintf("strconv.FormatUint(uint64(%s), 10)", expr)
		}
	}
	if fromType == "string" {
		return fmt.Sprintf("%s(%s)", toType, expr)
	}
	if isSignedIntegerType(fromType) {
		return fmt.Sprintf("%s(strconv.FormatInt(int64(%s), 10))", toType, expr)
	}
	if isUnsignedIntegerType(fromType) {
		return fmt.Sprintf("%s(strconv.FormatUint(uint64(%s), 10))", toType, expr)
	}
	return expr
}

func isSignedIntegerType(typ string) bool {
	signed, _, ok := integerTypeInfo(typ)
	return ok && signed
}

func isUnsignedIntegerType(typ string) bool {
	signed, _, ok := integerTypeInfo(typ)
	return ok && !signed
}

func callArgs(vd *VersionData, unified map[string]*UnifiedInterface, params []FieldDef) ([]string, []string, []string) {
	return callArgsWithArrays(vd, unified, nil, params)
}

func callArgsWithArrays(vd *VersionData, unified map[string]*UnifiedInterface, arrayAliases map[string]*UnifiedArrayType, params []FieldDef) ([]string, []string, []string) {
	var pre []string
	var args []string
	var post []string
	for i, param := range params {
		name := param.Name
		if name == "" {
			name = fmt.Sprintf("p%d", i)
		}
		clean, pointer := interfaceType(param.Type, unified)
		if clean == "" {
			// Check if this is an array interface type that needs unwrapping
			arrClean := strings.TrimPrefix(param.Type, "*")
			arrPointer := strings.HasPrefix(param.Type, "*")
			if arrayAliases != nil && arrayAliases[arrClean] != nil && arrayAliases[arrClean].IsIface {
				if arrPointer {
					rawName := "raw" + exportedName(name)
					pre = append(pre, fmt.Sprintf("var %s vcef.%s", rawName, arrClean))
					pre = append(pre, fmt.Sprintf("if %s != nil && *%s != nil {", name, name))
					pre = append(pre, fmt.Sprintf("\t%s = unwrap%s(*%s)", rawName, arrClean, name))
					pre = append(pre, "}")
					args = append(args, "&"+rawName)
					post = append(post, fmt.Sprintf("if %s != nil {", name))
					post = append(post, fmt.Sprintf("\t*%s = wrap%s(%s)", name, arrClean, rawName))
					post = append(post, "}")
					continue
				}
				args = append(args, fmt.Sprintf("unwrap%s(%s)", arrClean, name))
				continue
			}
			// Check if this is a callback type that needs wrapping
			cbTypeName := callbackTypeName(param.Type)
			if cb := vd.Callbacks[cbTypeName]; cb != nil {
				wrapperExpr := callbackWrapperExpr(name, cb, vd.Version, unified, arrayAliases)
				args = append(args, wrapperExpr)
				continue
			}
			args = append(args, name)
			continue
		}
		if pointer {
			rawName := "raw" + exportedName(name)
			pre = append(pre, fmt.Sprintf("var %s vcef.%s", rawName, clean))
			pre = append(pre, fmt.Sprintf("if %s != nil && *%s != nil {", name, name))
			pre = append(pre, fmt.Sprintf("\t%s = unwrap%s(*%s)", rawName, clean, name))
			pre = append(pre, "}")
			args = append(args, "&"+rawName)
			post = append(post, fmt.Sprintf("if %s != nil {", name))
			post = append(post, fmt.Sprintf("\t*%s = wrap%s(%s)", name, clean, rawName))
			post = append(post, "}")
			continue
		}
		args = append(args, fmt.Sprintf("unwrap%s(%s)", clean, name))
	}
	return pre, args, post
}

// callbackTypeName extracts the callback type name from a parameter type string.
func callbackTypeName(typ string) string {
	return strings.TrimPrefix(typ, "*")
}

// callbackWrapperExpr generates an inline wrapper function that converts a
// unified callback to a version-specific callback by wrapping/unwrapping
// CEF interface parameters and results.
func callbackWrapperExpr(fnName string, cb *CallbackTypeDef, version string, unified map[string]*UnifiedInterface, arrayAliases map[string]*UnifiedArrayType) string {
	hasPtrParams := false
	for _, p := range cb.Params {
		if strings.HasPrefix(p.Type, "*") {
			clean := strings.TrimPrefix(p.Type, "*")
			if unified[clean] != nil || (arrayAliases != nil && arrayAliases[clean] != nil && arrayAliases[clean].IsIface) {
				hasPtrParams = true
				break
			}
		}
	}

	var params []string
	var wrappedArgs []string
	var postLines []string
	for i, p := range cb.Params {
		pname := p.Name
		if pname == "" {
			pname = fmt.Sprintf("p%d", i)
		}
		vtype := toVersionSpecificType(p.Type, unified, arrayAliases)
		params = append(params, fmt.Sprintf("%s %s", pname, vtype))
		clean, pointer := interfaceType(p.Type, unified)
		if pointer {
			// Pointer-to-interface: output parameter
			localName := "u" + exportedName(pname)
			wrappedArgs = append(wrappedArgs, "&"+localName)
			postLines = append(postLines, fmt.Sprintf("if %s != nil { *%s = unwrap%s(%s) }", localName, pname, clean, localName))
		} else if clean != "" {
			wrappedArgs = append(wrappedArgs, fmt.Sprintf("wrap%s(%s)", clean, pname))
		} else {
			// Check if this is an interface-element array type
			arrClean := strings.TrimPrefix(p.Type, "*")
			if arrayAliases != nil && arrayAliases[arrClean] != nil && arrayAliases[arrClean].IsIface {
				wrappedArgs = append(wrappedArgs, fmt.Sprintf("wrap%s(%s)", arrClean, pname))
			} else {
				wrappedArgs = append(wrappedArgs, pname)
			}
		}
	}

	// For callbacks with pointer-to-interface params, use multi-line format
	if hasPtrParams || len(cb.Results) > 0 {
		return callbackWrapperExprMultiLine(fnName, cb, version, unified, arrayAliases, params, wrappedArgs, postLines)
	}

	return fmt.Sprintf("func(%s) { %s(%s) }", strings.Join(params, ", "), fnName, strings.Join(wrappedArgs, ", "))
}

func callbackWrapperExprMultiLine(fnName string, cb *CallbackTypeDef, version string, unified map[string]*UnifiedInterface, arrayAliases map[string]*UnifiedArrayType, params []string, wrappedArgs []string, postLines []string) string {
	var varDecls string
	for i, p := range cb.Params {
		if strings.HasPrefix(p.Type, "*") {
			clean := strings.TrimPrefix(p.Type, "*")
			if unified[clean] != nil || (arrayAliases != nil && arrayAliases[clean] != nil && arrayAliases[clean].IsIface) {
				pname := p.Name
				if pname == "" {
					pname = fmt.Sprintf("p%d", i)
				}
				varDecls += fmt.Sprintf("\tvar u%s %s\n", exportedName(pname), mapTypeForVersion(clean, version, unified))
			}
		}
	}

	if len(cb.Results) == 0 {
		var body string
		body += varDecls
		body += fmt.Sprintf("\t%s(%s)\n", fnName, strings.Join(wrappedArgs, ", "))
		for _, line := range postLines {
			body += "\t" + line + "\n"
		}
		return fmt.Sprintf("func(%s) {\n%s}", strings.Join(params, ", "), body)
	}

	// With results
	var resultTypes []string
	for _, r := range cb.Results {
		resultTypes = append(resultTypes, toVersionSpecificType(r.Type, unified, arrayAliases))
	}
	resultSig := strings.Join(resultTypes, ", ")
	if len(cb.Results) > 1 {
		resultSig = "(" + resultSig + ")"
	}

	retNames := make([]string, len(cb.Results))
	for i := range cb.Results {
		retNames[i] = fmt.Sprintf("r%d", i)
	}

	var retWrapped []string
	for i, r := range cb.Results {
		clean, _ := interfaceType(r.Type, unified)
		if clean != "" {
			retWrapped = append(retWrapped, fmt.Sprintf("unwrap%s(%s)", clean, retNames[i]))
		} else {
			retWrapped = append(retWrapped, retNames[i])
		}
	}

	var body string
	body += varDecls
	body += fmt.Sprintf("\t%s := %s(%s)\n", strings.Join(retNames, ", "), fnName, strings.Join(wrappedArgs, ", "))
	for _, line := range postLines {
		body += "\t" + line + "\n"
	}
	body += fmt.Sprintf("\treturn %s\n", strings.Join(retWrapped, ", "))
	return fmt.Sprintf("func(%s) %s {\n%s}", strings.Join(params, ", "), resultSig, body)
}

// toVersionSpecificType converts a unified type name to a version-specific type
// by prefixing vcef. to CEF interface types and array types.
func toVersionSpecificType(typ string, unified map[string]*UnifiedInterface, arrayAliases map[string]*UnifiedArrayType) string {
	if strings.HasPrefix(typ, "*") {
		inner := strings.TrimPrefix(typ, "*")
		if unified[inner] != nil || (arrayAliases != nil && arrayAliases[inner] != nil) {
			return "*vcef." + inner
		}
		return typ
	}
	if unified[typ] != nil || (arrayAliases != nil && arrayAliases[typ] != nil) {
		return "vcef." + typ
	}
	return typ
}

func wrapExpr(vd *VersionData, unified map[string]*UnifiedInterface, typ, expr string) string {
	clean, pointer := interfaceType(typ, unified)
	if clean == "" {
		return expr
	}
	if pointer {
		return fmt.Sprintf("ptrTo%s(%s)", clean, expr)
	}
	return fmt.Sprintf("wrap%s(%s)", clean, expr)
}

func interfaceType(typ string, unified map[string]*UnifiedInterface) (string, bool) {
	if strings.HasPrefix(typ, "*") {
		clean := strings.TrimPrefix(typ, "*")
		if unified[clean] != nil {
			return clean, true
		}
		return "", false
	}
	if unified[typ] != nil {
		return typ, false
	}
	return "", false
}

func collectCommonInterfaceImports(unified map[string]*UnifiedInterface, embeddedAliases map[string]string) map[string]string {
	imports := map[string]string{}
	for _, target := range embeddedAliases {
		collectTypeImports(imports, target)
	}
	for _, ui := range unified {
		for _, method := range ui.CommonMethods {
			collectMethodImports(imports, method)
		}
	}
	return imports
}

func collectVersionInterfaceImports(version string, unified map[string]*UnifiedInterface) map[string]string {
	imports := map[string]string{}
	for _, ui := range unified {
		for _, method := range ui.VersionMethods[version] {
			collectMethodImports(imports, method)
		}
	}
	return imports
}

func collectAdapterImports(vd *VersionData, unified map[string]*UnifiedInterface) map[string]string {
	imports := collectCommonInterfaceImports(unified, nil)
	imports["vcef"] = fmt.Sprintf("%s/%s/cef", modulePath, vd.Version)
	for name := range unified {
		ui := unified[name]
		for _, conversion := range ui.Conversions[vd.Version] {
			collectConversionImports(imports, conversion)
		}
		iface := vd.Interfaces[name]
		if iface == nil {
			continue
		}
		for _, method := range iface.Methods {
			collectMethodImports(imports, method)
		}
	}
	for _, fn := range vd.Funcs {
		if !shouldGenerateFunc(fn, unified, nil) {
			continue
		}
		collectFieldsImports(imports, fn.Params)
		collectFieldsImports(imports, fn.Results)
	}
	return imports
}

func collectConversionImports(imports map[string]string, conversion *CompatConversion) {
	if conversion == nil {
		return
	}
	if conversion.Config != nil {
		for alias, path := range conversion.Config.Imports {
			imports[alias] = path
		}
	}
	if conversion.Config != nil {
		for i, rule := range conversion.Config.Result {
			if rule.Kind == "identifier_string" && i < len(conversion.From.Results) && isIntegerType(conversion.From.Results[i].Type) {
				imports["strconv"] = "strconv"
			}
		}
	}
}

func collectMethodImports(imports map[string]string, method *MethodDef) {
	collectFieldsImports(imports, method.Params)
	collectFieldsImports(imports, method.Results)
}

func collectFieldsImports(imports map[string]string, fields []FieldDef) {
	for _, field := range fields {
		collectTypeImports(imports, field.Type)
	}
}

func collectTypeImports(imports map[string]string, typ string) {
	if strings.Contains(typ, "cefTypes.") {
		imports["cefTypes"] = modulePath + "/cef/types"
	}
	if strings.Contains(typ, "lcl.") {
		imports["lcl"] = "github.com/energye/lcl/lcl"
	}
	if strings.Contains(stripQualified(typ, "cefTypes."), "types.") {
		imports["types"] = "github.com/energye/lcl/types"
	}
}

func writeImports(sb *strings.Builder, imports map[string]string) {
	if len(imports) == 0 {
		return
	}
	keys := sortedStringKeys(imports)
	sb.WriteString("import (\n")
	for _, alias := range keys {
		path := imports[alias]
		defaultAlias := path[strings.LastIndex(path, "/")+1:]
		if alias == defaultAlias {
			sb.WriteString(fmt.Sprintf("\t%q\n", path))
		} else {
			sb.WriteString(fmt.Sprintf("\t%s %q\n", alias, path))
		}
	}
	sb.WriteString(")\n\n")
}

func writeComment(sb *strings.Builder, text string) {
	text = strings.TrimSpace(text)
	if text == "" {
		return
	}
	for _, line := range strings.Split(text, "\n") {
		line = strings.TrimSpace(line)
		if line != "" {
			sb.WriteString("// " + line + "\n")
		}
	}
}

func methodSignature(m *MethodDef) string {
	return m.Name + funcSignature(m.Params, m.Results)
}

func versionMethodSignature(m *MethodDef, version string, unified map[string]*UnifiedInterface) string {
	return m.Name + versionFuncSignature(m.Params, m.Results, version, unified)
}

func versionFuncSignature(params, results []FieldDef, version string, unified map[string]*UnifiedInterface) string {
	return funcSignature(mapFieldsForVersion(params, version, unified), mapFieldsForVersion(results, version, unified))
}

func mapFieldsForVersion(fields []FieldDef, version string, unified map[string]*UnifiedInterface) []FieldDef {
	out := make([]FieldDef, len(fields))
	for i, field := range fields {
		out[i] = field
		out[i].Type = mapTypeForVersion(field.Type, version, unified)
	}
	return out
}

func mapTypeForVersion(typ, version string, unified map[string]*UnifiedInterface) string {
	if strings.HasPrefix(typ, "*") {
		inner := strings.TrimPrefix(typ, "*")
		if unified[inner] != nil && !shouldWriteCommonInterface(inner, unified) {
			return "*" + inner + "_" + version
		}
		return typ
	}
	if unified[typ] != nil && !shouldWriteCommonInterface(typ, unified) {
		return typ + "_" + version
	}
	return typ
}

func funcSignature(params, results []FieldDef) string {
	out := "(" + fieldsSignature(params, false) + ")"
	res := fieldsSignature(results, true)
	if res == "" {
		return out
	}
	if len(results) == 1 && results[0].Name == "" {
		return out + " " + res
	}
	return out + " (" + res + ")"
}

func fieldsSignature(fields []FieldDef, allowUnnamed bool) string {
	var parts []string
	for i, field := range fields {
		name := field.Name
		if name == "" && !allowUnnamed {
			name = fmt.Sprintf("p%d", i)
		}
		if name == "" {
			parts = append(parts, field.Type)
		} else {
			parts = append(parts, name+" "+field.Type)
		}
	}
	return strings.Join(parts, ", ")
}

func methodKey(m *MethodDef) string {
	return m.Name + "|" + fieldsSignature(m.Params, true) + "|" + fieldsSignature(m.Results, true)
}

func shouldGenerateFunc(fn *FuncDef, unified map[string]*UnifiedInterface, arrayAliases map[string]*UnifiedArrayType) bool {
	if len(fn.Results) == 0 {
		return strings.HasPrefix(fn.Name, "Cef") || strings.HasPrefix(fn.Name, "Set")
	}
	if clean, _ := interfaceType(fn.Results[0].Type, unified); clean != "" {
		return true
	}
	if isArrayAliasType(fn.Results[0].Type, arrayAliases) {
		return true
	}
	return strings.HasPrefix(fn.Name, "Cef")
}

func isArrayAliasType(typ string, arrayAliases map[string]*UnifiedArrayType) bool {
	if arrayAliases == nil {
		return false
	}
	clean := strings.TrimPrefix(typ, "*")
	return arrayAliases[clean] != nil
}

func shouldParseInterface(name string) bool {
	return strings.HasPrefix(name, "I")
}

func shouldIncludeInterface(name string) bool {
	for _, prefix := range []string{"ICef", "IChromium", "ICEF", "IEng", "IPDF"} {
		if strings.HasPrefix(name, prefix) {
			return true
		}
	}
	return false
}

func shouldSkipInterface(name string) bool {
	for _, skip := range []string{"IObject", "IComponent", "IWinControl", "IStrings", "IStream", "IBitmap"} {
		if name == skip {
			return true
		}
	}
	return false
}

func matchesTargetPlatform(name string) bool {
	for _, platform := range []string{"windows", "linux", "darwin"} {
		suffix := "_" + platform + ".go"
		if strings.HasSuffix(name, suffix) {
			return platform == runtime.GOOS
		}
	}
	return true
}

// computeWrapperClosure returns all wrapper interface names transitively embedded
// in the wrapper struct for the given interface name. Only includes types that
// are in the unified map (i.e., have their own wrapper structs, not aliases).
func computeWrapperClosure(vd *VersionData, unified map[string]*UnifiedInterface, name string) map[string]bool {
	closure := map[string]bool{}
	var walk func(string)
	walk = func(n string) {
		if closure[n] {
			return
		}
		closure[n] = true
		iface := vd.Interfaces[n]
		if iface == nil {
			return
		}
		for _, embedded := range iface.Embedded {
			if unified[embedded] != nil && vd.Interfaces[embedded] != nil {
				walk(embedded)
			}
		}
	}
	walk(name)
	return closure
}

// hasOwnOrRefSuffix returns true if the interface name ends with "Own" or "Ref",
// indicating it's a variant type (like ICefBaseRefCountedOwn or ICefBaseRefCountedRef).
func hasOwnOrRefSuffix(name string) bool {
	return strings.HasSuffix(name, "Own") || strings.HasSuffix(name, "Ref")
}

// wrapperAliasClosure computes all alias types (like IInterfacedObject, IObject)
// transitively embedded through the wrapper chain for the given interface name.
// This is used to determine which alias embeds can be safely removed because
// they're already provided through a wrapper embed's own alias embeds.
func wrapperAliasClosure(vd *VersionData, unified map[string]*UnifiedInterface, embeddedAliases map[string]string, name string) map[string]bool {
	closure := map[string]bool{}
	visited := map[string]bool{}
	var walk func(string)
	walk = func(n string) {
		if visited[n] {
			return
		}
		visited[n] = true
		iface := vd.Interfaces[n]
		if iface == nil {
			return
		}
		for _, embedded := range iface.Embedded {
			if embeddedAliases[embedded] != "" && vd.TypeAliases[embedded] != "" {
				closure[embedded] = true
			}
			if unified[embedded] != nil && vd.Interfaces[embedded] != nil {
				walk(embedded)
			}
		}
	}
	walk(name)
	return closure
}

// wrapperEmbeds returns the wrapper types to embed in the wrapper struct for 'name'.
// It returns (kept, removed) where 'kept' are the wrapper embeds to use, and 'removed'
// are interfaces whose wrapper embeds were removed to avoid Go method promotion ambiguity.
//
// The deduplication works by computing transitive wrapper closures for each candidate.
// If two candidates share a common wrapper in their closures (e.g., both embed
// *tICefBaseRefCounted_109), only one is kept to avoid Go's ambiguous method promotion.
// Own/Ref variants are preferred over base types, matching the source binding layer pattern.
func wrapperEmbeds(vd *VersionData, unified map[string]*UnifiedInterface, name string) ([]string, []string) {
	iface := vd.Interfaces[name]
	if iface == nil {
		return nil, nil
	}

	// Collect candidates: direct unified interface parents
	var candidates []string
	seen := map[string]bool{}
	for _, embedded := range iface.Embedded {
		if unified[embedded] != nil && vd.Interfaces[embedded] != nil && !seen[embedded] {
			seen[embedded] = true
			candidates = append(candidates, embedded)
		}
	}
	sort.Strings(candidates)

	if len(candidates) <= 1 {
		return candidates, nil
	}

	// Compute transitive wrapper closure for each candidate
	closures := map[string]map[string]bool{}
	for _, c := range candidates {
		closures[c] = computeWrapperClosure(vd, unified, c)
	}

	// Sort candidates so Own/Ref variants come first (higher priority to keep).
	// This matches the source binding layer where Own types embed the Own base,
	// not the handler base.
	sort.Slice(candidates, func(i, j int) bool {
		iOwn := hasOwnOrRefSuffix(candidates[i])
		jOwn := hasOwnOrRefSuffix(candidates[j])
		if iOwn != jOwn {
			return iOwn // Own/Ref first
		}
		return candidates[i] < candidates[j]
	})

	// Detect conflicts: if two closures share any wrapper type element, remove one.
	// Process candidates in priority order; first one wins.
	var kept, removed []string
	usedElements := map[string]bool{}

	for _, c := range candidates {
		conflict := false
		for elem := range closures[c] {
			if usedElements[elem] {
				conflict = true
				break
			}
		}
		if !conflict {
			kept = append(kept, c)
			for elem := range closures[c] {
				usedElements[elem] = true
			}
		} else {
			removed = append(removed, c)
		}
	}

	sort.Strings(kept)
	sort.Strings(removed)
	return kept, removed
}

func wrapperAliasEmbeds(vd *VersionData, embeddedAliases map[string]string, name string) []string {
	seen := map[string]bool{}
	var out []string
	iface := vd.Interfaces[name]
	if iface == nil {
		return nil
	}
	for _, embedded := range iface.Embedded {
		if embeddedAliases[embedded] != "" && vd.TypeAliases[embedded] != "" && !seen[embedded] {
			seen[embedded] = true
			out = append(out, embedded)
		}
	}
	sort.Strings(out)
	return minimalAliasEmbeds(out)
}

func minimalAliasEmbeds(names []string) []string {
	var out []string
	for _, name := range names {
		subsumed := false
		for _, other := range names {
			if other != name && aliasSubsumes(other, name) {
				subsumed = true
				break
			}
		}
		if !subsumed {
			out = append(out, name)
		}
	}
	return out
}

func aliasSubsumes(parent, child string) bool {
	switch parent {
	case "IWinControl":
		return child == "IComponent" || child == "IPersistent" || child == "IObject"
	case "IComponent":
		return child == "IPersistent" || child == "IObject"
	case "IPersistent", "IInterfacedObject":
		return child == "IObject"
	default:
		return false
	}
}

func ptrToName(name string) string {
	return "ptrTo" + name
}

func wrapperName(name, version string) string {
	return "t" + name + "_" + version
}

func allInterfaceMethods(vd *VersionData, name string) []*MethodDef {
	seenInterfaces := map[string]bool{}
	methods := map[string]*MethodDef{}
	var walk func(string)
	walk = func(ifaceName string) {
		if seenInterfaces[ifaceName] {
			return
		}
		seenInterfaces[ifaceName] = true
		iface := vd.Interfaces[ifaceName]
		if iface == nil {
			return
		}
		for _, embedded := range iface.Embedded {
			walk(embedded)
		}
		for key, method := range iface.Methods {
			methods[key] = method
		}
	}
	walk(name)
	var out []*MethodDef
	for _, method := range methods {
		out = append(out, method)
	}
	sortMethods(out)
	return out
}

func sortMethods(methods []*MethodDef) {
	sort.Slice(methods, func(i, j int) bool {
		return methodKey(methods[i]) < methodKey(methods[j])
	})
}

// deduplicateEmbedded removes interfaces from the embedded list that are
// already transitively reachable through another embedded interface.
// For example, if ICefApplication embeds ICefApplicationCore which embeds IObject,
// then IObject is removed from ICefApplication's embedded list.
func deduplicateEmbedded(embedded []string, unified map[string]*UnifiedInterface) []string {
	if len(embedded) <= 1 {
		return embedded
	}
	redundant := map[string]bool{}
	for _, name := range embedded {
		for _, other := range embedded {
			if other != name && !redundant[other] {
				if reachableViaEmbedded(other, name, unified) || aliasSubsumes(other, name) {
					redundant[name] = true
					break
				}
			}
		}
	}
	var out []string
	for _, name := range embedded {
		if !redundant[name] {
			out = append(out, name)
		}
	}
	return out
}

// reachableViaEmbedded checks if "target" is transitively embedded within "from",
// walking through both unified interfaces and embedded aliases.
func reachableViaEmbedded(from, target string, unified map[string]*UnifiedInterface) bool {
	visited := map[string]bool{}
	var walk func(string) bool
	walk = func(current string) bool {
		if current == target {
			return true
		}
		if visited[current] {
			return false
		}
		visited[current] = true
		ui := unified[current]
		if ui != nil {
			for _, emb := range ui.CommonEmbedded {
				if walk(emb) {
					return true
				}
			}
			for _, embs := range ui.VersionEmbedded {
				for _, emb := range embs {
					if walk(emb) {
						return true
					}
				}
			}
		}
		if aliasSubsumes(current, target) {
			return true
		}
		return false
	}
	return walk(from)
}

func sortedFuncNames(funcs map[string]*FuncDef) []string {
	var names []string
	for name := range funcs {
		names = append(names, name)
	}
	sort.Strings(names)
	return names
}

func sortedKeys[V any](m map[string]V) []string {
	var keys []string
	for key := range m {
		keys = append(keys, key)
	}
	sort.Strings(keys)
	return keys
}

func sortedStringKeys(m map[string]string) []string {
	var keys []string
	for key := range m {
		keys = append(keys, key)
	}
	sort.Strings(keys)
	return keys
}

func sortedBoolKeys(m map[string]bool) []string {
	var keys []string
	for key := range m {
		keys = append(keys, key)
	}
	sort.Strings(keys)
	return keys
}

func filterKnownEmbedded(names []string, unified map[string]*UnifiedInterface, embeddedAliases map[string]string) []string {
	var out []string
	for _, name := range names {
		if knownEmbedded(name, unified, embeddedAliases) {
			out = append(out, name)
		}
	}
	return out
}

func versionSpecificEmbedded(baseName string, names []string, unified map[string]*UnifiedInterface, embeddedAliases map[string]string) []string {
	var out []string
	for _, name := range deduplicateEmbedded(filterKnownEmbedded(names, unified, embeddedAliases), unified) {
		if reachableViaCommonEmbedded(baseName, name, unified) || aliasSubsumes(baseName, name) {
			continue
		}
		out = append(out, name)
	}
	return out
}

func versionInterfaceEmbeds(baseName, version string, unified map[string]*UnifiedInterface, embeddedAliases map[string]string) []string {
	ui := unified[baseName]
	if ui == nil {
		return nil
	}
	seen := map[string]bool{}
	var out []string
	add := func(name string) {
		if name == "" || seen[name] {
			return
		}
		seen[name] = true
		out = append(out, name)
	}
	for _, embedded := range versionSpecificEmbedded(baseName, ui.VersionEmbedded[version], unified, embeddedAliases) {
		add(versionedEmbeddedName(embedded, version, unified, embeddedAliases))
	}
	for _, embedded := range ui.CommonEmbedded {
		if hasPublicVersionInterface(unified, embeddedAliases, embedded, version) {
			add(embedded + "_" + version)
		}
	}
	sort.Strings(out)
	return out
}

func versionedEmbeddedName(name, version string, unified map[string]*UnifiedInterface, embeddedAliases map[string]string) string {
	if unified[name] != nil && hasPublicVersionInterface(unified, embeddedAliases, name, version) {
		return name + "_" + version
	}
	return name
}

func reachableViaCommonEmbedded(from, target string, unified map[string]*UnifiedInterface) bool {
	visited := map[string]bool{}
	var walk func(string) bool
	walk = func(current string) bool {
		if current == target {
			return true
		}
		if visited[current] {
			return false
		}
		visited[current] = true
		ui := unified[current]
		if ui != nil {
			for _, emb := range ui.CommonEmbedded {
				if walk(emb) {
					return true
				}
			}
		}
		if aliasSubsumes(current, target) {
			return true
		}
		return false
	}
	return walk(from)
}

func hasPublicVersionInterface(unified map[string]*UnifiedInterface, embeddedAliases map[string]string, name, version string) bool {
	return hasPublicVersionInterfaceSeen(unified, embeddedAliases, name, version, map[string]bool{})
}

func hasPublicVersionInterfaceSeen(unified map[string]*UnifiedInterface, embeddedAliases map[string]string, name, version string, seen map[string]bool) bool {
	ui := unified[name]
	if ui == nil {
		return false
	}
	key := name + "|" + version
	if seen[key] {
		return false
	}
	seen[key] = true
	if len(versionSpecificEmbedded(name, ui.VersionEmbedded[version], unified, embeddedAliases)) > 0 ||
		len(ui.VersionMethods[version]) > 0 {
		return true
	}
	for _, embedded := range ui.CommonEmbedded {
		if hasPublicVersionInterfaceSeen(unified, embeddedAliases, embedded, version, seen) {
			return true
		}
	}
	return false
}

var (
	typeIdentRE        = regexp.MustCompile(`[A-Za-z_][A-Za-z0-9_]*`)
	cefTypesSelectorRE = regexp.MustCompile(`cefTypes\.([A-Za-z_][A-Za-z0-9_]*)`)
	qualifiedTypeRE    = regexp.MustCompile(`(?:cefTypes|types|lcl)\.[A-Za-z_][A-Za-z0-9_]*`)
)

func portableType(data []*VersionData, unified map[string]*UnifiedInterface, callbackTypes map[string]*UnifiedCallbackType, typ string) bool {
	if len(data) == 0 {
		return true
	}
	for _, match := range cefTypesSelectorRE.FindAllStringSubmatch(typ, -1) {
		if len(match) < 2 || !cefTypeInAllVersions(data, match[1]) {
			return false
		}
	}
	clean := qualifiedTypeRE.ReplaceAllString(typ, "")
	for _, ident := range typeIdentRE.FindAllString(clean, -1) {
		if isBuiltinType(ident) || isUnexportedIdent(ident) {
			continue
		}
		if unified[ident] != nil {
			continue
		}
		if cb := callbackTypes[ident]; cb != nil {
			if len(cb.VersionDefs) == len(data) {
				continue
			}
			return false
		}
		if cefTopLevelTypeInAllVersions(data, ident) {
			continue
		}
		return false
	}
	return true
}

func cefTypeInAllVersions(data []*VersionData, name string) bool {
	for _, vd := range data {
		if !vd.TypeTypes[name] {
			return false
		}
	}
	return true
}

func cefTopLevelTypeInAllVersions(data []*VersionData, name string) bool {
	for _, vd := range data {
		if !vd.CefTypes[name] && vd.TypeAliases[name] == "" {
			return false
		}
	}
	return true
}

func isBuiltinType(name string) bool {
	switch name {
	case "any", "bool", "byte", "complex64", "complex128", "error", "float32", "float64",
		"int", "int8", "int16", "int32", "int64", "rune", "string",
		"uint", "uint8", "uint16", "uint32", "uint64", "uintptr":
		return true
	default:
		return false
	}
}

func isUnexportedIdent(name string) bool {
	if name == "" {
		return false
	}
	return unicode.IsLower([]rune(name)[0])
}

func knownEmbedded(name string, unified map[string]*UnifiedInterface, embeddedAliases map[string]string) bool {
	return unified[name] != nil || embeddedAliases[name] != ""
}

func containsString(values []string, target string) bool {
	for _, value := range values {
		if value == target {
			return true
		}
	}
	return false
}

func flatten(m map[string][]string) []string {
	var out []string
	for _, values := range m {
		out = append(out, values...)
	}
	return out
}

func stripQualified(s, q string) string {
	return strings.ReplaceAll(s, q, "")
}

func exportedName(s string) string {
	if s == "" {
		return "Value"
	}
	r := []rune(s)
	r[0] = unicode.ToUpper(r[0])
	return string(r)
}

func writeGo(path, src string) error {
	formatted, err := format.Source([]byte(src))
	if err != nil {
		return fmt.Errorf("format %s: %w\n%s", path, err, src)
	}
	return writeFile(path, formatted, 0644)
}

func writeFile(path string, data []byte, perm os.FileMode) error {
	if incrementalMode {
		current, err := os.ReadFile(path)
		if err == nil && bytes.Equal(current, data) {
			return nil
		}
		if err != nil && !os.IsNotExist(err) {
			return err
		}
	}
	return os.WriteFile(path, data, perm)
}

func generateReport(unified map[string]*UnifiedInterface, dir string) error {
	var sb strings.Builder
	sb.WriteString("# CEF 兼容性报告\n\n")
	sb.WriteString(fmt.Sprintf("- 版本: %s\n", strings.Join(versions, ", ")))
	sb.WriteString(fmt.Sprintf("- 接口数量: %d\n\n", len(unified)))
	for _, name := range sortedKeys(unified) {
		ui := unified[name]
		versionSpecific := 0
		for _, methods := range ui.VersionMethods {
			versionSpecific += len(methods)
		}
		if versionSpecific == 0 && len(ui.CommonMethods) == 0 {
			continue
		}
		sb.WriteString(fmt.Sprintf("## %s\n\n", name))
		sb.WriteString(fmt.Sprintf("- 公共方法数量: %d\n", len(ui.CommonMethods)))
		for _, version := range versions {
			if len(ui.VersionMethods[version]) > 0 {
				sb.WriteString(fmt.Sprintf("- %s 版本特有方法数量: %d\n", version, len(ui.VersionMethods[version])))
			}
		}
		sb.WriteString("\n")
	}
	writeCompatibilityReport(&sb, unified)
	return writeFile(filepath.Join(dir, "compat_report.md"), []byte(sb.String()), 0644)
}

func writeCompatibilityReport(sb *strings.Builder, unified map[string]*UnifiedInterface) {
	var conversions []*CompatConversion
	var issues []*CompatIssue
	seenConversions := map[string]bool{}
	for _, name := range sortedKeys(unified) {
		ui := unified[name]
		for version, byKey := range ui.Conversions {
			for key, conversion := range byKey {
				reportKey := name + "|" + version + "|" + key
				if !seenConversions[reportKey] {
					conversions = append(conversions, conversion)
					seenConversions[reportKey] = true
				}
			}
		}
		issues = append(issues, ui.Issues...)
	}
	if len(conversions) > 0 {
		sb.WriteString("## 已配置的兼容签名转换\n\n")
		sort.Slice(conversions, func(i, j int) bool {
			left := conversions[i].Interface + "." + conversions[i].MethodName + "." + conversions[i].Version
			right := conversions[j].Interface + "." + conversions[j].MethodName + "." + conversions[j].Version
			return left < right
		})
		for _, conversion := range conversions {
			sb.WriteString(fmt.Sprintf("- %s.%s [%s]: %s -> %s (%s)\n",
				conversion.Interface,
				conversion.MethodName,
				conversion.Version,
				methodSignature(conversion.From),
				methodSignature(conversion.To),
				conversion.Rule))
		}
		sb.WriteString("\n")
	}
	if len(issues) > 0 {
		sb.WriteString("## 未兼容的同名异签名方法\n\n")
		sort.Slice(issues, func(i, j int) bool {
			return issues[i].Interface+"."+issues[i].MethodName < issues[j].Interface+"."+issues[j].MethodName
		})
		for _, issue := range issues {
			sb.WriteString(fmt.Sprintf("### %s.%s\n\n", issue.Interface, issue.MethodName))
			sb.WriteString(fmt.Sprintf("- 原因: %s\n", issue.Reason))
			for _, version := range versions {
				if method := issue.Versions[version]; method != nil {
					sb.WriteString(fmt.Sprintf("- %s: %s\n", version, methodSignature(method)))
				}
			}
			sb.WriteString("\n")
		}
	}
	omitted := omittedCommonInterfaces(unified)
	if len(omitted) > 0 {
		sb.WriteString("## 已省略的空公共接口\n\n")
		for _, item := range omitted {
			sb.WriteString(fmt.Sprintf("- %s: %s\n", item.Name, item.Reason))
		}
		sb.WriteString("\n")
	}
}

const copyright = `// Code generated by cefgen. DO NOT EDIT.
//
//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Apache License 2.0
//
//----------------------------------------

`
