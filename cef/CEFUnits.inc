//----------------------------------------
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

// CEF 组件单元


//{$DEFINE CEF109} // test
//{$DEFINE CEF127} // test
//{$DEFINE CEF147} // test

{$IFDEF CEF109}
{$DEFINE CEF}
,{$I ./109/CEFUnit.inc} // 109.1.18
{$ENDIF}

{$IFDEF CEF127}
{$DEFINE CEF}
,{$I ./127/CEFUnit.inc} // 127.3.5
{$ENDIF}

{$IFDEF CEF147}
{$DEFINE CEF}
,{$I ./147/CEFUnit.inc} // 147.0.14
{$ENDIF}
