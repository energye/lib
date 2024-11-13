#!/usr/bin/env bash

echo "Add Dependency Package"

workspaceDir="."  #lazarusBaseDir

if [ "$1" != "" ]; then
  workspaceDir=$1
fi

lazbuild --add-package-link ./3rd-party/richmemo/richmemopackage.lpk
lazbuild ./3rd-party/richmemo/richmemopackage.lpk
lazbuild --add-package ./3rd-party/richmemo/ide/richmemo_design.lpk
lazbuild ./3rd-party/richmemo/ide/richmemo_design.lpk

lazbuild --add-package ./3rd-party/ATFlatControls/atflatcontrols/atflatcontrols_package.lpk
lazbuild ./3rd-party/ATFlatControls/atflatcontrols/atflatcontrols_package.lpk

lazbuild --add-package-link ./3rd-party/DCPcrypt/dcpcrypt.lpk
lazbuild ./3rd-party/DCPcrypt/dcpcrypt.lpk
lazbuild --add-package ./3rd-party/DCPcrypt/dcpcrypt_laz.lpk
lazbuild ./3rd-party/DCPcrypt/dcpcrypt_laz.lpk

lazbuild --add-package ./3rd-party/CEF4Delphi/packages/cef4delphi_lazarus.lpk
lazbuild ./3rd-party/CEF4Delphi/packages/cef4delphi_lazarus.lpk