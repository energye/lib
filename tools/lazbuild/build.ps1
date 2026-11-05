# lazbuild 多平台编译脚本 (Windows PowerShell)
$ErrorActionPreference = "Stop"
$env:CGO_ENABLED = "0"

$targets = @(
    @{os="windows"; arch="amd64"; ext=".exe"},
    @{os="windows"; arch="386";   ext=".exe"},
    @{os="linux";   arch="amd64"; ext=""},
    @{os="linux";   arch="386";   ext=""},
    @{os="linux";   arch="arm64"; ext=""},
    @{os="linux";   arch="arm";   ext=""},
    @{os="darwin";  arch="amd64"; ext=""},
    @{os="darwin";  arch="arm64"; ext=""}
)

$src = "$PSScriptRoot\lazbuild.go"
Write-Output "Source File: $src"
Write-Output ""

foreach ($t in $targets) {
    $env:GOOS = $t.os
    $env:GOARCH = $t.arch
    $name = "lazbuild-$($t.os)-$($t.arch)$($t.ext)"
    $output = "$PSScriptRoot\$name"
    Write-Output "Build: $name"
    & go build -ldflags "-s -w" -o $output $src
    if ($LASTEXITCODE -ne 0) {
        Write-Error "Build $name Failed"
        exit 1
    }
}

Write-Output ""
Write-Output "Build Complete:"
Get-ChildItem "$PSScriptRoot\lazbuild-*" | Format-Table Name, @{N="Size(KB)";E={[math]::Round($_.Length/1KB,1)}} -AutoSize
