
//function
procedure CefTextfield_UnWrap(data: Pointer; var Result: ICefTextfield); extdecl;
begin
  Result := TCefTextfieldRef.UnWrap(data);
end;

//function
procedure CefTextfield_CreateTextField(const delegate: ICefTextfieldDelegate; var Result: ICefTextfield); extdecl;
begin
  Result := TCefTextfieldRef.CreateTextField(delegate);
end;

//function
function CefTextfield_IsPasswordInput(AObj: ICefTextfield): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsPasswordInput();
  handleExceptionEnd
end;

//function
function CefTextfield_IsReadOnly(AObj: ICefTextfield): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

//function
function CefTextfield_GetText(AObj: ICefTextfield): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetText());
  handleExceptionEnd
end;

//function
function CefTextfield_HasSelection(AObj: ICefTextfield): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasSelection();
  handleExceptionEnd
end;

//function
function CefTextfield_GetSelectedText(AObj: ICefTextfield): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetSelectedText());
  handleExceptionEnd
end;

//function
procedure CefTextfield_GetSelectedRange(AObj: ICefTextfield; var Result: TCefRange); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSelectedRange();
  handleExceptionEnd
end;

//function
function CefTextfield_GetCursorPosition(AObj: ICefTextfield): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetCursorPosition();
  handleExceptionEnd
end;

//function
function CefTextfield_GetTextColor(AObj: ICefTextfield): TCefColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTextColor();
  handleExceptionEnd
end;

//function
function CefTextfield_GetSelectionTextColor(AObj: ICefTextfield): TCefColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSelectionTextColor();
  handleExceptionEnd
end;

//function
function CefTextfield_GetSelectionBackgroundColor(AObj: ICefTextfield): TCefColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSelectionBackgroundColor();
  handleExceptionEnd
end;

//function
function CefTextfield_IsCommandEnabled(AObj: ICefTextfield; commandid: TCefTextFieldCommands): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsCommandEnabled(commandid);
  handleExceptionEnd
end;

//function
function CefTextfield_GetPlaceholderText(AObj: ICefTextfield): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetPlaceholderText());
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_SetPasswordInput(AObj: ICefTextfield; passwordinput: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetPasswordInput(passwordinput);
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_SetReadOnly(AObj: ICefTextfield; readonly: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetReadOnly(readonly);
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_SetText(AObj: ICefTextfield; const text: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetText(text);
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_AppendText(AObj: ICefTextfield; const text: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.AppendText(text);
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_InsertOrReplaceText(AObj: ICefTextfield; const text: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.InsertOrReplaceText(text);
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_SelectAll(AObj: ICefTextfield; reversed: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SelectAll(reversed);
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_ClearSelection(AObj: ICefTextfield); extdecl;
begin
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_SelectRange(AObj: ICefTextfield; var range_: TCefRange); extdecl;
begin
  handleExceptionBegin
  AObj.SelectRange(range_);
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_SetTextColor(AObj: ICefTextfield; color: TCefColor); extdecl;
begin
  handleExceptionBegin
  AObj.SetTextColor(color);
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_SetSelectionTextColor(AObj: ICefTextfield; color: TCefColor); extdecl;
begin
  handleExceptionBegin
  AObj.SetSelectionTextColor(color);
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_SetSelectionBackgroundColor(AObj: ICefTextfield; color: TCefColor); extdecl;
begin
  handleExceptionBegin
  AObj.SetSelectionBackgroundColor(color);
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_SetFontList(AObj: ICefTextfield; const fontlist: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetFontList(fontlist);
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_ApplyTextColor(AObj: ICefTextfield; color: TCefColor; var range_: TCefRange); extdecl;
begin
  handleExceptionBegin
  AObj.ApplyTextColor(color, range_);
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_ApplyTextStyle(AObj: ICefTextfield; style: TCefTextStyle; add: LongBool; var range_: TCefRange); extdecl;
begin
  handleExceptionBegin
  AObj.ApplyTextStyle(style, add, range_);
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_ExecuteCommand(AObj: ICefTextfield; commandid: TCefTextFieldCommands); extdecl;
begin
  handleExceptionBegin
  AObj.ExecuteCommand(commandid);
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_ClearEditHistory(AObj: ICefTextfield); extdecl;
begin
  handleExceptionBegin
  AObj.ClearEditHistory();
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_SetPlaceholderText(AObj: ICefTextfield; const text: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetPlaceholderText(text);
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_SetPlaceholderTextColor(AObj: ICefTextfield; color: TCefColor); extdecl;
begin
  handleExceptionBegin
  AObj.SetPlaceholderTextColor(color);
  handleExceptionEnd
end;

//procedure
procedure CefTextfield_SetAccessibleName(AObj: ICefTextfield; const name: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetAccessibleName(name);
  handleExceptionEnd
end;


exports
  CefTextfield_UnWrap,
  CefTextfield_CreateTextField,
  CefTextfield_IsPasswordInput,
  CefTextfield_IsReadOnly,
  CefTextfield_GetText,
  CefTextfield_HasSelection,
  CefTextfield_GetSelectedText,
  CefTextfield_GetSelectedRange,
  CefTextfield_GetCursorPosition,
  CefTextfield_GetTextColor,
  CefTextfield_GetSelectionTextColor,
  CefTextfield_GetSelectionBackgroundColor,
  CefTextfield_IsCommandEnabled,
  CefTextfield_GetPlaceholderText,
  CefTextfield_SetPasswordInput,
  CefTextfield_SetReadOnly,
  CefTextfield_SetText,
  CefTextfield_AppendText,
  CefTextfield_InsertOrReplaceText,
  CefTextfield_SelectAll,
  CefTextfield_ClearSelection,
  CefTextfield_SelectRange,
  CefTextfield_SetTextColor,
  CefTextfield_SetSelectionTextColor,
  CefTextfield_SetSelectionBackgroundColor,
  CefTextfield_SetFontList,
  CefTextfield_ApplyTextColor,
  CefTextfield_ApplyTextStyle,
  CefTextfield_ExecuteCommand,
  CefTextfield_ClearEditHistory,
  CefTextfield_SetPlaceholderText,
  CefTextfield_SetPlaceholderTextColor,
  CefTextfield_SetAccessibleName;