#!/usr/bin/env bash

echo "Add Dependency Package"

lazarusBaseDir="lazbuild"
lazarusdirArgs=""

if [ "$1" != "" ]; then
  lazarusBaseDir=$1/lazbuild
  lazarusdirArgs="--lazarusdir=$1"
fi

echo "Lazarus: $lazarusBaseDir ============================================="

$lazarusBaseDir $lazarusdirArgs --add-package-link ./3rd-party/richmemo/richmemopackage.lpk
$lazarusBaseDir $lazarusdirArgs ./3rd-party/richmemo/richmemopackage.lpk
$lazarusBaseDir $lazarusdirArgs --add-package ./3rd-party/richmemo/ide/richmemo_design.lpk
$lazarusBaseDir $lazarusdirArgs ./3rd-party/richmemo/ide/richmemo_design.lpk

$lazarusBaseDir $lazarusdirArgs --add-package ./3rd-party/ATFlatControls/atflatcontrols/atflatcontrols_package.lpk
$lazarusBaseDir $lazarusdirArgs ./3rd-party/ATFlatControls/atflatcontrols/atflatcontrols_package.lpk

$lazarusBaseDir $lazarusdirArgs --add-package-link ./3rd-party/DCPcrypt/dcpcrypt.lpk
$lazarusBaseDir $lazarusdirArgs ./3rd-party/DCPcrypt/dcpcrypt.lpk
$lazarusBaseDir $lazarusdirArgs --add-package ./3rd-party/DCPcrypt/dcpcrypt_laz.lpk
$lazarusBaseDir $lazarusdirArgs ./3rd-party/DCPcrypt/dcpcrypt_laz.lpk

$lazarusBaseDir $lazarusdirArgs --add-package ./3rd-party/CEF4Delphi/packages/cef4delphi_lazarus.lpk
$lazarusBaseDir $lazarusdirArgs ./3rd-party/CEF4Delphi/packages/cef4delphi_lazarus.lpk