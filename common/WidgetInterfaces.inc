//----------------------------------------
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

{$IFDEF Linux}
procedure Custom_WidgetSetInitialization(); extdecl;
begin
  handleExceptionBegin
  CustomWidgetSetInitialization();
  // InitializeLeadBytes() libenergy.so, linux 手动初始化
  // SynEdit 组件库 SynTextDrawer.pp 单元
  InitializeLeadBytes();
  // InitSynDefaultFont() libenergy.so, linux 手动初始化
  // SynEdit 组件库 SynEdit.pp 单元
  InitSynDefaultFont();
  handleExceptionEnd
end;

procedure Custom_WidgetSetFinalization(); extdecl;
begin
  handleExceptionBegin
  CustomWidgetSetFinalization();
  handleExceptionEnd
end;

exports
  Custom_WidgetSetInitialization,
  Custom_WidgetSetFinalization;
{$ENDIF}
