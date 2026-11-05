//----------------------------------------
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

// CEF 导出 API

{$IF defined(CEF)}
{$I ./CEFPreDef.inc}
{$I ./CEFMiscFunctions.inc}
{$ENDIF}

{$IFDEF CEF109}
{$I ./109/cef.inc}
{$I ./109/CEFImport.inc}
{$ENDIF}

{$IFDEF CEF127}
{$I ./127/cef.inc}
{$I ./127/CEFImport.inc}
{$ENDIF}

{$IFDEF CEF147}
{$I ./147/cef.inc}
{$I ./147/CEFImport.inc}
{$ENDIF}

{$IFDEF CEF150}
{$I ./150/cef.inc}
{$I ./150/CEFImport.inc}
{$ENDIF}
