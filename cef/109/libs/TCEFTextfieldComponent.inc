// constructor
function TCEFTextfieldComponent_Create(AOwner: TComponent; out IntfTextfieldDelegateEvents: ICefTextfieldDelegateEvents; out IntfViewDelegateEvents: ICefViewDelegateEvents): TCEFTextfieldComponent; extdecl;
begin
  {$define handleExceptionID := 8800}
  handleExceptionBegin
  Result := TCEFTextfieldComponent.Create(AOwner);
  IntfTextfieldDelegateEvents := Result as ICefTextfieldDelegateEvents;
  IntfViewDelegateEvents := Result as ICefViewDelegateEvents;
  handleExceptionEnd
end;

// function
function TCEFTextfieldComponent_IsCommandEnabled(AObj: TCEFTextfieldComponent; command_id: TCefTextFieldCommands): LongBool; extdecl;
begin
  {$define handleExceptionID := 8801}
  handleExceptionBegin
  Result := AObj.IsCommandEnabled(command_id);
  handleExceptionEnd
end;

// procedure
procedure TCEFTextfieldComponent_CreateTextField(AObj: TCEFTextfieldComponent); extdecl;
begin
  {$define handleExceptionID := 8802}
  handleExceptionBegin
  AObj.CreateTextField();
  handleExceptionEnd
end;

// procedure
procedure TCEFTextfieldComponent_AppendText(AObj: TCEFTextfieldComponent; const text_: PChar); extdecl;
begin
  {$define handleExceptionID := 8803}
  handleExceptionBegin
  AObj.AppendText(PCharToUStr(text_));
  handleExceptionEnd
end;

// procedure
procedure TCEFTextfieldComponent_InsertOrReplaceText(AObj: TCEFTextfieldComponent; const text_: PChar); extdecl;
begin
  {$define handleExceptionID := 8804}
  handleExceptionBegin
  AObj.InsertOrReplaceText(PCharToUStr(text_));
  handleExceptionEnd
end;

// procedure
procedure TCEFTextfieldComponent_SelectAll(AObj: TCEFTextfieldComponent; reversed: LongBool); extdecl;
begin
  {$define handleExceptionID := 8805}
  handleExceptionBegin
  AObj.SelectAll(reversed);
  handleExceptionEnd
end;

// procedure
procedure TCEFTextfieldComponent_ClearSelection(AObj: TCEFTextfieldComponent); extdecl;
begin
  {$define handleExceptionID := 8806}
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

// procedure
procedure TCEFTextfieldComponent_SelectRange(AObj: TCEFTextfieldComponent; var range: TCefRangePtr); extdecl;
var
  Inrange: TCefRange;
begin
  {$define handleExceptionID := 8807}
  handleExceptionBegin
  Inrange := TCefRangeToPas(range);
  AObj.SelectRange(Inrange);
  handleExceptionEnd
end;

// procedure
procedure TCEFTextfieldComponent_SetFontList(AObj: TCEFTextfieldComponent; const font_list: PChar); extdecl;
begin
  {$define handleExceptionID := 8808}
  handleExceptionBegin
  AObj.SetFontList(PCharToUStr(font_list));
  handleExceptionEnd
end;

// procedure
procedure TCEFTextfieldComponent_ApplyTextColor(AObj: TCEFTextfieldComponent; color: TCefColor; var range: TCefRangePtr); extdecl;
var
  Inrange: TCefRange;
begin
  {$define handleExceptionID := 8809}
  handleExceptionBegin
  Inrange := TCefRangeToPas(range);
  AObj.ApplyTextColor(color, Inrange);
  handleExceptionEnd
end;

// procedure
procedure TCEFTextfieldComponent_ApplyTextStyle(AObj: TCEFTextfieldComponent; style: TCefTextStyle; add: LongBool; var range: TCefRangePtr); extdecl;
var
  Inrange: TCefRange;
begin
  {$define handleExceptionID := 8810}
  handleExceptionBegin
  Inrange := TCefRangeToPas(range);
  AObj.ApplyTextStyle(style, add, Inrange);
  handleExceptionEnd
end;

// procedure
procedure TCEFTextfieldComponent_ExecuteCommand(AObj: TCEFTextfieldComponent; command_id: TCefTextFieldCommands); extdecl;
begin
  {$define handleExceptionID := 8811}
  handleExceptionBegin
  AObj.ExecuteCommand(command_id);
  handleExceptionEnd
end;

// procedure
procedure TCEFTextfieldComponent_ClearEditHistory(AObj: TCEFTextfieldComponent); extdecl;
begin
  {$define handleExceptionID := 8812}
  handleExceptionBegin
  AObj.ClearEditHistory();
  handleExceptionEnd
end;

// procedure
procedure TCEFTextfieldComponent_SetAccessibleName(AObj: TCEFTextfieldComponent; const name_: PChar); extdecl;
begin
  {$define handleExceptionID := 8813}
  handleExceptionBegin
  AObj.SetAccessibleName(PCharToUStr(name_));
  handleExceptionEnd
end;

// procedure
procedure TCEFTextfieldComponent_SetPlaceholderTextColor(AObj: TCEFTextfieldComponent; color: TCefColor); extdecl;
begin
  {$define handleExceptionID := 8814}
  handleExceptionBegin
  AObj.SetPlaceholderTextColor(color);
  handleExceptionEnd
end;

// property
function TCEFTextfieldComponent_PasswordInput(ASet: LongBool; AObj: TCEFTextfieldComponent; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8815}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PasswordInput := AValue
  end else
    Result := AObj.PasswordInput;
  handleExceptionEnd
end;

// property
function TCEFTextfieldComponent_ReadOnly(ASet: LongBool; AObj: TCEFTextfieldComponent; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8816}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReadOnly := AValue
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

// property
procedure TCEFTextfieldComponent_Text(ASet: LongBool; AObj: TCEFTextfieldComponent; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 8817}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Text := AValue
  end else
    StringBufferCreate(AObj.Text, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFTextfieldComponent_SelectedText(AObj: TCEFTextfieldComponent; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 8818}
  handleExceptionBegin
  StringBufferCreate(AObj.SelectedText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCEFTextfieldComponent_TextColor(ASet: LongBool; AObj: TCEFTextfieldComponent; AValue: TCefColor): TCefColor; extdecl;
begin
  {$define handleExceptionID := 8819}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextColor := AValue
  end else
    Result := AObj.TextColor;
  handleExceptionEnd
end;

// property
function TCEFTextfieldComponent_SelectionTextColor(ASet: LongBool; AObj: TCEFTextfieldComponent; AValue: TCefColor): TCefColor; extdecl;
begin
  {$define handleExceptionID := 8820}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectionTextColor := AValue
  end else
    Result := AObj.SelectionTextColor;
  handleExceptionEnd
end;

// property
function TCEFTextfieldComponent_SelectionBackgroundColor(ASet: LongBool; AObj: TCEFTextfieldComponent; AValue: TCefColor): TCefColor; extdecl;
begin
  {$define handleExceptionID := 8821}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectionBackgroundColor := AValue
  end else
    Result := AObj.SelectionBackgroundColor;
  handleExceptionEnd
end;

// property
procedure TCEFTextfieldComponent_PlaceholderText(ASet: LongBool; AObj: TCEFTextfieldComponent; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 8822}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PlaceholderText := AValue
  end else
    StringBufferCreate(AObj.PlaceholderText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCEFTextfieldComponent_HasSelection(AObj: TCEFTextfieldComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 8823}
  handleExceptionBegin
  Result := AObj.HasSelection;
  handleExceptionEnd
end;

// event
procedure TCEFTextfieldComponent_OnTextfieldKeyEvent(AObj: TCEFTextfieldComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFTextfieldComponent_TOnTextfieldKeyEventEvent}
  {$DEFINE EventName := OnTextfieldKeyEvent}
  CEFEventMethodCode
end;

// event
procedure TCEFTextfieldComponent_OnAfterUserAction(AObj: TCEFTextfieldComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFTextfieldComponent_TOnAfterUserActionEvent}
  {$DEFINE EventName := OnAfterUserAction}
  CEFEventMethodCode
end;

exports
  TCEFTextfieldComponent_Create,
  TCEFTextfieldComponent_IsCommandEnabled,
  TCEFTextfieldComponent_CreateTextField,
  TCEFTextfieldComponent_AppendText,
  TCEFTextfieldComponent_InsertOrReplaceText,
  TCEFTextfieldComponent_SelectAll,
  TCEFTextfieldComponent_ClearSelection,
  TCEFTextfieldComponent_SelectRange,
  TCEFTextfieldComponent_SetFontList,
  TCEFTextfieldComponent_ApplyTextColor,
  TCEFTextfieldComponent_ApplyTextStyle,
  TCEFTextfieldComponent_ExecuteCommand,
  TCEFTextfieldComponent_ClearEditHistory,
  TCEFTextfieldComponent_SetAccessibleName,
  TCEFTextfieldComponent_SetPlaceholderTextColor,
  TCEFTextfieldComponent_PasswordInput,
  TCEFTextfieldComponent_ReadOnly,
  TCEFTextfieldComponent_Text,
  TCEFTextfieldComponent_SelectedText,
  TCEFTextfieldComponent_TextColor,
  TCEFTextfieldComponent_SelectionTextColor,
  TCEFTextfieldComponent_SelectionBackgroundColor,
  TCEFTextfieldComponent_PlaceholderText,
  TCEFTextfieldComponent_HasSelection,
  TCEFTextfieldComponent_OnTextfieldKeyEvent,
  TCEFTextfieldComponent_OnAfterUserAction;