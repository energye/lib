// constructor
function TCefTextfieldRef_Create(data: Pointer; out IntfTextfield: ICefTextfield; out IntfView: ICefView): TCefTextfieldRef; extdecl;
begin
  {$define handleExceptionID := 24500}
  handleExceptionBegin
  Result := TCefTextfieldRef.Create(data);
  IntfTextfield := Result as ICefTextfield;
  IntfView := Result as ICefView;
  handleExceptionEnd
end;

// function
function TCefTextfieldRef_IsPasswordInput(AObj: ICefTextfield): LongBool; extdecl;
begin
  {$define handleExceptionID := 24501}
  handleExceptionBegin
  Result := AObj.IsPasswordInput();
  handleExceptionEnd
end;

// function
function TCefTextfieldRef_IsReadOnly(AObj: ICefTextfield): LongBool; extdecl;
begin
  {$define handleExceptionID := 24502}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

// function
procedure TCefTextfieldRef_GetText(AObj: ICefTextfield;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 24503}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetText()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefTextfieldRef_HasSelection(AObj: ICefTextfield): LongBool; extdecl;
begin
  {$define handleExceptionID := 24504}
  handleExceptionBegin
  Result := AObj.HasSelection();
  handleExceptionEnd
end;

// function
procedure TCefTextfieldRef_GetSelectedText(AObj: ICefTextfield;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 24505}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetSelectedText()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefTextfieldRef_GetSelectedRange(AObj: ICefTextfield; var Result: TCefRange); extdecl;
begin
  {$define handleExceptionID := 24506}
  handleExceptionBegin
  Result := AObj.GetSelectedRange();
  handleExceptionEnd
end;

// function
function TCefTextfieldRef_GetCursorPosition(AObj: ICefTextfield): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 24507}
  handleExceptionBegin
  Result := AObj.GetCursorPosition();
  handleExceptionEnd
end;

// function
function TCefTextfieldRef_IsCommandEnabled(AObj: ICefTextfield; command_id: TCefTextFieldCommands): LongBool; extdecl;
begin
  {$define handleExceptionID := 24508}
  handleExceptionBegin
  Result := AObj.IsCommandEnabled(command_id);
  handleExceptionEnd
end;

// function
procedure TCefTextfieldRef_GetPlaceholderText(AObj: ICefTextfield;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 24509}
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
  {$define handleExceptionID := 24510}
  handleExceptionBegin
  AObj.SetPasswordInput(password_input);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SetReadOnly(AObj: ICefTextfield; read_only: LongBool); extdecl;
begin
  {$define handleExceptionID := 24511}
  handleExceptionBegin
  AObj.SetReadOnly(read_only);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SetText(AObj: ICefTextfield; const text_: PChar); extdecl;
begin
  {$define handleExceptionID := 24512}
  handleExceptionBegin
  AObj.SetText(PCharToUStr(text_));
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_AppendText(AObj: ICefTextfield; const text_: PChar); extdecl;
begin
  {$define handleExceptionID := 24513}
  handleExceptionBegin
  AObj.AppendText(PCharToUStr(text_));
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_InsertOrReplaceText(AObj: ICefTextfield; const text_: PChar); extdecl;
begin
  {$define handleExceptionID := 24514}
  handleExceptionBegin
  AObj.InsertOrReplaceText(PCharToUStr(text_));
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SelectAll(AObj: ICefTextfield; reversed: LongBool); extdecl;
begin
  {$define handleExceptionID := 24515}
  handleExceptionBegin
  AObj.SelectAll(reversed);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_ClearSelection(AObj: ICefTextfield); extdecl;
begin
  {$define handleExceptionID := 24516}
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SelectRange(AObj: ICefTextfield; var range: TCefRangePtr); extdecl;
var
  Inrange: TCefRange;
begin
  {$define handleExceptionID := 24517}
  handleExceptionBegin
  Inrange := TCefRangeToPas(range);
  AObj.SelectRange(Inrange);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SetFontList(AObj: ICefTextfield; const font_list: PChar); extdecl;
begin
  {$define handleExceptionID := 24518}
  handleExceptionBegin
  AObj.SetFontList(PCharToUStr(font_list));
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_ApplyTextColor(AObj: ICefTextfield; color: TCefColor; var range: TCefRangePtr); extdecl;
var
  Inrange: TCefRange;
begin
  {$define handleExceptionID := 24519}
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
  {$define handleExceptionID := 24520}
  handleExceptionBegin
  Inrange := TCefRangeToPas(range);
  AObj.ApplyTextStyle(style, add, Inrange);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_ExecuteCommand(AObj: ICefTextfield; command_id: TCefTextFieldCommands); extdecl;
begin
  {$define handleExceptionID := 24521}
  handleExceptionBegin
  AObj.ExecuteCommand(command_id);
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_ClearEditHistory(AObj: ICefTextfield); extdecl;
begin
  {$define handleExceptionID := 24522}
  handleExceptionBegin
  AObj.ClearEditHistory();
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SetPlaceholderText(AObj: ICefTextfield; const text_: PChar); extdecl;
begin
  {$define handleExceptionID := 24523}
  handleExceptionBegin
  AObj.SetPlaceholderText(PCharToUStr(text_));
  handleExceptionEnd
end;

// procedure
procedure TCefTextfieldRef_SetAccessibleName(AObj: ICefTextfield; const name: PChar); extdecl;
begin
  {$define handleExceptionID := 24524}
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
  TCefTextfieldRef_SetFontList,
  TCefTextfieldRef_ApplyTextColor,
  TCefTextfieldRef_ApplyTextStyle,
  TCefTextfieldRef_ExecuteCommand,
  TCefTextfieldRef_ClearEditHistory,
  TCefTextfieldRef_SetPlaceholderText,
  TCefTextfieldRef_SetAccessibleName;