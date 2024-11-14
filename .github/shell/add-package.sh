#!/usr/bin/env bash

echo "Add Dependency Package"

lazarusBaseDir="lazbuild"

if [ "$1" != "" ]; then
  lazarusBaseDir=$1
fi

$lazarusBaseDir --add-package-link ./3rd-party/richmemo/richmemopackage.lpk
$lazarusBaseDir ./3rd-party/richmemo/richmemopackage.lpk
$lazarusBaseDir --add-package ./3rd-party/richmemo/ide/richmemo_design.lpk
$lazarusBaseDir ./3rd-party/richmemo/ide/richmemo_design.lpk

$lazarusBaseDir --add-package ./3rd-party/ATFlatControls/atflatcontrols/atflatcontrols_package.lpk
$lazarusBaseDir ./3rd-party/ATFlatControls/atflatcontrols/atflatcontrols_package.lpk

$lazarusBaseDir --add-package-link ./3rd-party/DCPcrypt/dcpcrypt.lpk
$lazarusBaseDir ./3rd-party/DCPcrypt/dcpcrypt.lpk
$lazarusBaseDir --add-package ./3rd-party/DCPcrypt/dcpcrypt_laz.lpk
$lazarusBaseDir ./3rd-party/DCPcrypt/dcpcrypt_laz.lpk

$lazarusBaseDir --add-package ./3rd-party/CEF4Delphi/packages/cef4delphi_lazarus.lpk
$lazarusBaseDir ./3rd-party/CEF4Delphi/packages/cef4delphi_lazarus.lpk