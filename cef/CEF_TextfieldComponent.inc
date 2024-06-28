
//constructor
function CEFTextfieldComponent_Create(aOwner: TComponent): TCEFTextfieldComponent; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCEFTextfieldComponent.Create(aOwner);
  handleExceptionEnd
end;

//property
function CEFTextfieldComponent_PasswordInput(AIsSet: LongBool; AObj: TCEFTextfieldComponent; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='PasswordInput'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PasswordInput := AValue;
  end else
    Result := AObj.PasswordInput;
  handleExceptionEnd
end;

//property
function CEFTextfieldComponent_ReadOnly(AIsSet: LongBool; AObj: TCEFTextfieldComponent; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ReadOnly'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ReadOnly := AValue;
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

//property
function CEFTextfieldComponent_Text(AIsSet: LongBool; AObj: TCEFTextfieldComponent; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Text'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Text := AValue;
  end else
    Result := ToPChar(AObj.Text);
  handleExceptionEnd
end;

//property
function CEFTextfieldComponent_SelectedText(AObj: TCEFTextfieldComponent): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='SelectedText'}
  handleExceptionBegin
  Result := ToPChar(AObj.SelectedText);
  handleExceptionEnd
end;

//property
procedure CEFTextfieldComponent_SelectedRange(AIsSet: LongBool; AObj: TCEFTextfieldComponent; var AValue: TCefRange; var Result: TCefRange); extdecl;
begin
  {$define handleExceptionFuncName :='SelectedRange'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectedRange := AValue;
  end else
    Result := AObj.SelectedRange;
  handleExceptionEnd
end;

//property
function CEFTextfieldComponent_CursorPosition(AObj: TCEFTextfieldComponent): NativeUInt; extdecl;
begin
  {$define handleExceptionFuncName :='CursorPosition'}
  handleExceptionBegin
  Result := AObj.CursorPosition;
  handleExceptionEnd
end;

//property
function CEFTextfieldComponent_TextColor(AIsSet: LongBool; AObj: TCEFTextfieldComponent; AValue: TCefColor): TCefColor; extdecl;
begin
  {$define handleExceptionFuncName :='TextColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TextColor := AValue;
  end else
    Result := AObj.TextColor;
  handleExceptionEnd
end;

//property
function CEFTextfieldComponent_SelectionTextColor(AIsSet: LongBool; AObj: TCEFTextfieldComponent; AValue: TCefColor): TCefColor; extdecl;
begin
  {$define handleExceptionFuncName :='SelectionTextColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectionTextColor := AValue;
  end else
    Result := AObj.SelectionTextColor;
  handleExceptionEnd
end;

//property
function CEFTextfieldComponent_SelectionBackgroundColor(AIsSet: LongBool; AObj: TCEFTextfieldComponent; AValue: TCefColor): TCefColor; extdecl;
begin
  {$define handleExceptionFuncName :='SelectionBackgroundColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectionBackgroundColor := AValue;
  end else
    Result := AObj.SelectionBackgroundColor;
  handleExceptionEnd
end;

//property
function CEFTextfieldComponent_PlaceholderText(AIsSet: LongBool; AObj: TCEFTextfieldComponent; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='PlaceholderText'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PlaceholderText := AValue;
  end else
    Result := ToPChar(AObj.PlaceholderText);
  handleExceptionEnd
end;

//property
function CEFTextfieldComponent_HasSelection(AObj: TCEFTextfieldComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasSelection'}
  handleExceptionBegin
  Result := AObj.HasSelection;
  handleExceptionEnd
end;

//function
function CEFTextfieldComponent_IsCommandEnabled(AObj: TCEFTextfieldComponent; commandid: TCefTextFieldCommands): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsCommandEnabled'}
  handleExceptionBegin
  Result := AObj.IsCommandEnabled(commandid);
  handleExceptionEnd
end;

//procedure
procedure CEFTextfieldComponent_CreateTextField(AObj: TCEFTextfieldComponent); extdecl;
begin
  {$define handleExceptionFuncName :='CreateTextField'}
  handleExceptionBegin
  AObj.CreateTextField();
  handleExceptionEnd
end;

//procedure
procedure CEFTextfieldComponent_AppendText(AObj: TCEFTextfieldComponent; const text: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='AppendText'}
  handleExceptionBegin
  AObj.AppendText(text);
  handleExceptionEnd
end;

//procedure
procedure CEFTextfieldComponent_InsertOrReplaceText(AObj: TCEFTextfieldComponent; const text: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='InsertOrReplaceText'}
  handleExceptionBegin
  AObj.InsertOrReplaceText(text);
  handleExceptionEnd
end;

//procedure
procedure CEFTextfieldComponent_SelectAll(AObj: TCEFTextfieldComponent; reversed: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SelectAll'}
  handleExceptionBegin
  AObj.SelectAll(reversed);
  handleExceptionEnd
end;

//procedure
procedure CEFTextfieldComponent_ClearSelection(AObj: TCEFTextfieldComponent); extdecl;
begin
  {$define handleExceptionFuncName :='ClearSelection'}
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

//procedure
procedure CEFTextfieldComponent_SetFontList(AObj: TCEFTextfieldComponent; const fontlist: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetFontList'}
  handleExceptionBegin
  AObj.SetFontList(fontlist);
  handleExceptionEnd
end;

//procedure
procedure CEFTextfieldComponent_ApplyTextColor(AObj: TCEFTextfieldComponent; color: TCefColor; var range_: TCefRange); extdecl;
begin
  {$define handleExceptionFuncName :='ApplyTextColor'}
  handleExceptionBegin
  AObj.ApplyTextColor(color, range_);
  handleExceptionEnd
end;

//procedure
procedure CEFTextfieldComponent_ApplyTextStyle(AObj: TCEFTextfieldComponent; style: TCefTextStyle; add: LongBool; var range_: TCefRange); extdecl;
begin
  {$define handleExceptionFuncName :='ApplyTextStyle'}
  handleExceptionBegin
  AObj.ApplyTextStyle(style, add, range_);
  handleExceptionEnd
end;

//procedure
procedure CEFTextfieldComponent_ExecuteCommand(AObj: TCEFTextfieldComponent; commandid: TCefTextFieldCommands); extdecl;
begin
  {$define handleExceptionFuncName :='ExecuteCommand'}
  handleExceptionBegin
  AObj.ExecuteCommand(commandid);
  handleExceptionEnd
end;

//procedure
procedure CEFTextfieldComponent_ClearEditHistory(AObj: TCEFTextfieldComponent); extdecl;
begin
  {$define handleExceptionFuncName :='ClearEditHistory'}
  handleExceptionBegin
  AObj.ClearEditHistory();
  handleExceptionEnd
end;

//procedure
procedure CEFTextfieldComponent_SetAccessibleName(AObj: TCEFTextfieldComponent; const name: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetAccessibleName'}
  handleExceptionBegin
  AObj.SetAccessibleName(name);
  handleExceptionEnd
end;

//procedure
procedure CEFTextfieldComponent_SetPlaceholderTextColor(AObj: TCEFTextfieldComponent; color: TCefColor); extdecl;
begin
  {$define handleExceptionFuncName :='SetPlaceholderTextColor'}
  handleExceptionBegin
  AObj.SetPlaceholderTextColor(color);
  handleExceptionEnd
end;

//property event
procedure CEFTextfieldComponent_SetOnTextfieldKeyEvent(AObj: TCEFTextfieldComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TextfieldComponent_OnTextfieldKeyEvent}
  {$DEFINE EventName := OnTextfieldKeyEvent}
  CEFEventMethodCode
end;

//property event
procedure CEFTextfieldComponent_SetOnAfterUserAction(AObj: TCEFTextfieldComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TextfieldComponent_OnAfterUserAction}
  {$DEFINE EventName := OnAfterUserAction}
  CEFEventMethodCode
end;


exports
  CEFTextfieldComponent_Create,
  CEFTextfieldComponent_PasswordInput,
  CEFTextfieldComponent_ReadOnly,
  CEFTextfieldComponent_Text,
  CEFTextfieldComponent_SelectedText,
  CEFTextfieldComponent_SelectedRange,
  CEFTextfieldComponent_CursorPosition,
  CEFTextfieldComponent_TextColor,
  CEFTextfieldComponent_SelectionTextColor,
  CEFTextfieldComponent_SelectionBackgroundColor,
  CEFTextfieldComponent_PlaceholderText,
  CEFTextfieldComponent_HasSelection,
  CEFTextfieldComponent_IsCommandEnabled,
  CEFTextfieldComponent_CreateTextField,
  CEFTextfieldComponent_AppendText,
  CEFTextfieldComponent_InsertOrReplaceText,
  CEFTextfieldComponent_SelectAll,
  CEFTextfieldComponent_ClearSelection,
  CEFTextfieldComponent_SetFontList,
  CEFTextfieldComponent_ApplyTextColor,
  CEFTextfieldComponent_ApplyTextStyle,
  CEFTextfieldComponent_ExecuteCommand,
  CEFTextfieldComponent_ClearEditHistory,
  CEFTextfieldComponent_SetAccessibleName,
  CEFTextfieldComponent_SetPlaceholderTextColor,
  CEFTextfieldComponent_SetOnTextfieldKeyEvent,
  CEFTextfieldComponent_SetOnAfterUserAction;