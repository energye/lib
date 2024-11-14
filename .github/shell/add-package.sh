#!/usr/bin/env bash

echo "Add Dependency Package"

lazarusBaseDir="lazbuild"
lazarusdir=""

if [ "$1" != "" ]; then
  lazarusBaseDir=$1/lazbuild
  lazarusdir="--lazarusdir="$lazarusBaseDir
fi

$lazarusBaseDir lazarusdir --add-package-link ./3rd-party/richmemo/richmemopackage.lpk
$lazarusBaseDir lazarusdir ./3rd-party/richmemo/richmemopackage.lpk
$lazarusBaseDir lazarusdir --add-package ./3rd-party/richmemo/ide/richmemo_design.lpk
$lazarusBaseDir lazarusdir ./3rd-party/richmemo/ide/richmemo_design.lpk

$lazarusBaseDir lazarusdir --add-package ./3rd-party/ATFlatControls/atflatcontrols/atflatcontrols_package.lpk
$lazarusBaseDir lazarusdir ./3rd-party/ATFlatControls/atflatcontrols/atflatcontrols_package.lpk

$lazarusBaseDir lazarusdir --add-package-link ./3rd-party/DCPcrypt/dcpcrypt.lpk
$lazarusBaseDir lazarusdir ./3rd-party/DCPcrypt/dcpcrypt.lpk
$lazarusBaseDir lazarusdir --add-package ./3rd-party/DCPcrypt/dcpcrypt_laz.lpk
$lazarusBaseDir lazarusdir ./3rd-party/DCPcrypt/dcpcrypt_laz.lpk

$lazarusBaseDir lazarusdir --add-package ./3rd-party/CEF4Delphi/packages/cef4delphi_lazarus.lpk
$lazarusBaseDir lazarusdir ./3rd-party/CEF4Delphi/packages/cef4delphi_lazarus.lpk