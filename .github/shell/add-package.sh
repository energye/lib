#!/usr/bin/env bash

echo "Add Dependency Package"

lazarusBaseDir="lazbuild"
lazarusDirArgs=""

if [ "$1" != "" ]; then
  lazarusBaseDir=$1/lazbuild
  lazarusDirArgs="--lazarusdir=$1"
fi

echo "Lazarus: $lazarusBaseDir ============================================="

$lazarusBaseDir $lazarusDirArgs --add-package-link ./3rd-party/richmemo/richmemopackage.lpk
$lazarusBaseDir $lazarusDirArgs ./3rd-party/richmemo/richmemopackage.lpk
$lazarusBaseDir $lazarusDirArgs --add-package ./3rd-party/richmemo/ide/richmemo_design.lpk
$lazarusBaseDir $lazarusDirArgs ./3rd-party/richmemo/ide/richmemo_design.lpk

$lazarusBaseDir $lazarusDirArgs --add-package ./3rd-party/ATFlatControls/atflatcontrols/atflatcontrols_package.lpk
$lazarusBaseDir $lazarusDirArgs ./3rd-party/ATFlatControls/atflatcontrols/atflatcontrols_package.lpk

$lazarusBaseDir $lazarusDirArgs --add-package-link ./3rd-party/DCPcrypt/dcpcrypt.lpk
$lazarusBaseDir $lazarusDirArgs ./3rd-party/DCPcrypt/dcpcrypt.lpk
$lazarusBaseDir $lazarusDirArgs --add-package ./3rd-party/DCPcrypt/dcpcrypt_laz.lpk
$lazarusBaseDir $lazarusDirArgs ./3rd-party/DCPcrypt/dcpcrypt_laz.lpk

$lazarusBaseDir $lazarusDirArgs --add-package ./3rd-party/CEF4Delphi/packages/cef4delphi_lazarus.lpk
$lazarusBaseDir $lazarusDirArgs ./3rd-party/CEF4Delphi/packages/cef4delphi_lazarus.lpk

$lazarusBaseDir $lazarusDirArgs --add-package ./3rd-party/WebView4Delphi/packages/webview4delphi.lpk
$lazarusBaseDir $lazarusDirArgs ./3rd-party/WebView4Delphi/packages/webview4delphi.lpk