// constructor
function TCefTextfieldRef_Create(data: Pointer; out IntfTextfield: ICefTextfield; out IntfView: ICefView): TCefTextfieldRef; extdecl;
begin
  {$define handleExceptionID := 23700}
  handleExceptionBegin
  Result := TCefTextfieldRef.Create(data);
  IntfTextfield := Result as ICefTextfield;
  IntfView := Result as ICefView;
  handleExceptionEnd
end;

// function
function TCefTextfieldRef_IsPasswordInput(AObj: ICefTextfield): LongBool; extdecl;
begin
  {$define handleExceptionID := 23701}
  handleExceptionBegin
  Result := AObj.IsPasswordInput();
  handleExceptionEnd
end;

// function
function TCefTextfieldRef_IsReadOnly(AObj: ICefTextfield): LongBool; extdecl;
begin
  {$define handleExceptionID := 23702}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

// function
procedure TCefTextfieldRef_GetText(AObj: ICefTextfield;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 23703}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetText()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefTextfieldRef_HasSelection(AObj: ICefTextfield): LongBool; extdecl;
begin
  {$define handleExceptionID := 23704}
  handleExceptionBegin
  Result := AObj.HasSelection();
  handleExceptionEnd
end;

// function
procedure TCefTextfieldRef_GetSelectedText(AObj: ICefTextfield;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 23705}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetSelectedText()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefTextfieldRef_GetSelectedRange(AObj: ICefTextfield; var Result: TCefRange); extdecl;
begin
  {$define handleExceptionID := 23706}
  handleExceptionBegin
  Result := AObj.GetSelectedRange();
  handleExceptionEnd
end;

// function
function TCefTextfieldRef_GetCursorPosition(AObj: ICefTextfield): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 23707}
  handleExceptionBegin
  Result := AObj.GetCursorPosition();
  handleExceptionEnd
end;

// function
function TCefTextfieldRef_GetTextColor(AObj: ICefTextfield): TCefColor; extdecl;
begin
  {$define handleExceptionID := 23708}
  handleExceptionBegin
  Result := AObj.GetTextColor();
  handleExceptionEnd
end;

// function
function TCefTextfieldRef_GetSelectionTextColor(AObj: ICefTextfield): TCefColor; extdecl;
begin
  {$define handleExceptionID := 23709}
  handleExceptionBegin
  Result := AObj.GetSelectionTextColor();
  handleExceptionEnd
end;

// function
function TCefTextfieldRef_GetSelectionBackgroundColor(AObj: ICefTextfield): TCefColor; extdecl;
begin
  {$define handleExceptionID := 23710}
  handleExceptionBegin
  Result := AObj.GetSelectionBackgroundColor();
  handleExceptionEnd
end;

// function
function TCefTextfieldRef_IsCommandEnabled(AObj: ICefTextfield; command_id: TCefTextFieldCommands): LongBool; extdecl;
begin
  {$define handleExceptionID := 23711}
  handleExceptionBegin
  Result := AObj.IsCommandEnabled(command_id);
  handleExceptionEnd
end;

// function
procedure TCefTextfieldRef_GetPlaceholderText(AObj: ICefTextfield;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 23712}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetPlaceholderText()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function static
procedure TCefTextfieldRef_UnWrapWithPointer(data: Pointer; var Result: ICefTextfield); extdecl;
begin
  Result := TCefTextfieldRef.UnWrap(data);
end;

// function static
procedure TCefTextfieldRef_CreateTextField(const delegate: ICefTextfieldDelegate; var Result: ICefTextfield); extdecl;
begin
  Result := TCefTextfieldRef.CreateTextField(delegate);
end;

// procedure
procedure TCefTextfieldRef_SetPasswordInput(AObj: ICefTextfield; password_input: LongBool); extdecl;
begin
  {$define handleExceptionID := 23713}
  handleExceptionBegin
  AObj.SetPasswordInput(password_input);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SetReadOnly(AObj: ICefTextfield; read_only: LongBool); extdecl;
begin
  {$define handleExceptionID := 23714}
  handleExceptionBegin
  AObj.SetReadOnly(read_only);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SetText(AObj: ICefTextfield; const text_: PChar); extdecl;
begin
  {$define handleExceptionID := 23715}
  handleExceptionBegin
  AObj.SetText(PCharToUStr(text_));
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_AppendText(AObj: ICefTextfield; const text_: PChar); extdecl;
begin
  {$define handleExceptionID := 23716}
  handleExceptionBegin
  AObj.AppendText(PCharToUStr(text_));
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_InsertOrReplaceText(AObj: ICefTextfield; const text_: PChar); extdecl;
begin
  {$define handleExceptionID := 23717}
  handleExceptionBegin
  AObj.InsertOrReplaceText(PCharToUStr(text_));
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SelectAll(AObj: ICefTextfield; reversed: LongBool); extdecl;
begin
  {$define handleExceptionID := 23718}
  handleExceptionBegin
  AObj.SelectAll(reversed);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_ClearSelection(AObj: ICefTextfield); extdecl;
begin
  {$define handleExceptionID := 23719}
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SelectRange(AObj: ICefTextfield; var range: TCefRangePtr); extdecl;
var
  Inrange: TCefRange;
begin
  {$define handleExceptionID := 23720}
  handleExceptionBegin
  Inrange := TCefRangeToPas(range);
  AObj.SelectRange(Inrange);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SetTextColor(AObj: ICefTextfield; color: TCefColor); extdecl;
begin
  {$define handleExceptionID := 23721}
  handleExceptionBegin
  AObj.SetTextColor(color);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SetSelectionTextColor(AObj: ICefTextfield; color: TCefColor); extdecl;
begin
  {$define handleExceptionID := 23722}
  handleExceptionBegin
  AObj.SetSelectionTextColor(color);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SetSelectionBackgroundColor(AObj: ICefTextfield; color: TCefColor); extdecl;
begin
  {$define handleExceptionID := 23723}
  handleExceptionBegin
  AObj.SetSelectionBackgroundColor(color);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SetFontList(AObj: ICefTextfield; const font_list: PChar); extdecl;
begin
  {$define handleExceptionID := 23724}
  handleExceptionBegin
  AObj.SetFontList(PCharToUStr(font_list));
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_ApplyTextColor(AObj: ICefTextfield; color: TCefColor; var range: TCefRangePtr); extdecl;
var
  Inrange: TCefRange;
begin
  {$define handleExceptionID := 23725}
  handleExceptionBegin
  Inrange := TCefRangeToPas(range);
  AObj.ApplyTextColor(color, Inrange);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_ApplyTextStyle(AObj: ICefTextfield; style: TCefTextStyle; add: LongBool; var range: TCefRangePtr); extdecl;
var
  Inrange: TCefRange;
begin
  {$define handleExceptionID := 23726}
  handleExceptionBegin
  Inrange := TCefRangeToPas(range);
  AObj.ApplyTextStyle(style, add, Inrange);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_ExecuteCommand(AObj: ICefTextfield; command_id: TCefTextFieldCommands); extdecl;
begin
  {$define handleExceptionID := 23727}
  handleExceptionBegin
  AObj.ExecuteCommand(command_id);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_ClearEditHistory(AObj: ICefTextfield); extdecl;
begin
  {$define handleExceptionID := 23728}
  handleExceptionBegin
  AObj.ClearEditHistory();
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SetPlaceholderText(AObj: ICefTextfield; const text_: PChar); extdecl;
begin
  {$define handleExceptionID := 23729}
  handleExceptionBegin
  AObj.SetPlaceholderText(PCharToUStr(text_));
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SetPlaceholderTextColor(AObj: ICefTextfield; color: TCefColor); extdecl;
begin
  {$define handleExceptionID := 23730}
  handleExceptionBegin
  AObj.SetPlaceholderTextColor(color);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SetAccessibleName(AObj: ICefTextfield; const name: PChar); extdecl;
begin
  {$define handleExceptionID := 23731}
  handleExceptionBegin
  AObj.SetAccessibleName(PCharToUStr(name));
  handleExceptionEnd
end;

exports
  TCefTextfieldRef_Create,
  TCefTextfieldRef_IsPasswordInput,
  TCefTextfieldRef_IsReadOnly,
  TCefTextfieldRef_GetText,
  TCefTextfieldRef_HasSelection,
  TCefTextfieldRef_GetSelectedText,
  TCefTextfieldRef_GetSelectedRange,
  TCefTextfieldRef_GetCursorPosition,
  TCefTextfieldRef_GetTextColor,
  TCefTextfieldRef_GetSelectionTextColor,
  TCefTextfieldRef_GetSelectionBackgroundColor,
  TCefTextfieldRef_IsCommandEnabled,
  TCefTextfieldRef_GetPlaceholderText,
  TCefTextfieldRef_UnWrapWithPointer,
  TCefTextfieldRef_CreateTextField,
  TCefTextfieldRef_SetPasswordInput,
  TCefTextfieldRef_SetReadOnly,
  TCefTextfieldRef_SetText,
  TCefTextfieldRef_AppendText,
  TCefTextfieldRef_InsertOrReplaceText,
  TCefTextfieldRef_SelectAll,
  TCefTextfieldRef_ClearSelection,
  TCefTextfieldRef_SelectRange,
  TCefTextfieldRef_SetTextColor,
  TCefTextfieldRef_SetSelectionTextColor,
  TCefTextfieldRef_SetSelectionBackgroundColor,
  TCefTextfieldRef_SetFontList,
  TCefTextfieldRef_ApplyTextColor,
  TCefTextfieldRef_ApplyTextStyle,
  TCefTextfieldRef_ExecuteCommand,
  TCefTextfieldRef_ClearEditHistory,
  TCefTextfieldRef_SetPlaceholderText,
  TCefTextfieldRef_SetPlaceholderTextColor,
  TCefTextfieldRef_SetAccessibleName;