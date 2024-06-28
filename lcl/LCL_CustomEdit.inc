
//constructor
function CustomEdit_Create(AOwner: TComponent): TCustomEdit; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomEdit.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomEdit_Alignment(AIsSet: LongBool; AObj: TCustomEdit; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionFuncName :='Alignment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function CustomEdit_BorderStyle(AIsSet: LongBool; AObj: TCustomEdit; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  {$define handleExceptionFuncName :='BorderStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BorderStyle := AValue;
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

//property
function CustomEdit_CanUndo(AObj: TCustomEdit): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CanUndo'}
  handleExceptionBegin
  Result := AObj.CanUndo;
  handleExceptionEnd
end;

//property
procedure CustomEdit_CaretPos(AIsSet: LongBool; AObj: TCustomEdit; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionFuncName :='CaretPos'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CaretPos := AValue;
  end else
    Result := AObj.CaretPos;
  handleExceptionEnd
end;

//property
function CustomEdit_CharCase(AIsSet: LongBool; AObj: TCustomEdit; AValue: TEditCharCase): TEditCharCase; extdecl;
begin
  {$define handleExceptionFuncName :='CharCase'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CharCase := AValue;
  end else
    Result := AObj.CharCase;
  handleExceptionEnd
end;

//property
function CustomEdit_EchoMode(AIsSet: LongBool; AObj: TCustomEdit; AValue: TEchoMode): TEchoMode; extdecl;
begin
  {$define handleExceptionFuncName :='EchoMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EchoMode := AValue;
  end else
    Result := AObj.EchoMode;
  handleExceptionEnd
end;

//property
function CustomEdit_EmulatedTextHintStatus(AObj: TCustomEdit): TEmulatedTextHintStatus; extdecl;
begin
  {$define handleExceptionFuncName :='EmulatedTextHintStatus'}
  handleExceptionBegin
  Result := AObj.EmulatedTextHintStatus;
  handleExceptionEnd
end;

//property
function CustomEdit_HideSelection(AIsSet: LongBool; AObj: TCustomEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HideSelection'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HideSelection := AValue;
  end else
    Result := AObj.HideSelection;
  handleExceptionEnd
end;

//property
function CustomEdit_MaxLength(AIsSet: LongBool; AObj: TCustomEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='MaxLength'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxLength := AValue;
  end else
    Result := AObj.MaxLength;
  handleExceptionEnd
end;

//property
function CustomEdit_Modified(AIsSet: LongBool; AObj: TCustomEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Modified'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Modified := AValue;
  end else
    Result := AObj.Modified;
  handleExceptionEnd
end;

//property
function CustomEdit_NumbersOnly(AIsSet: LongBool; AObj: TCustomEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='NumbersOnly'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NumbersOnly := AValue;
  end else
    Result := AObj.NumbersOnly;
  handleExceptionEnd
end;

//property
function CustomEdit_PasswordChar(AIsSet: LongBool; AObj: TCustomEdit; AValue: Char): Char; extdecl;
begin
  {$define handleExceptionFuncName :='PasswordChar'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PasswordChar := AValue;
  end else
    Result := AObj.PasswordChar;
  handleExceptionEnd
end;

//property
function CustomEdit_ReadOnly(AIsSet: LongBool; AObj: TCustomEdit; AValue: LongBool): LongBool; extdecl;
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
function CustomEdit_SelLength(AIsSet: LongBool; AObj: TCustomEdit; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='SelLength'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelLength := AValue;
  end else
    Result := AObj.SelLength;
  handleExceptionEnd
end;

//property
function CustomEdit_SelStart(AIsSet: LongBool; AObj: TCustomEdit; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='SelStart'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelStart := AValue;
  end else
    Result := AObj.SelStart;
  handleExceptionEnd
end;

//property
function CustomEdit_SelText(AIsSet: LongBool; AObj: TCustomEdit; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='SelText'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelText := AValue;
  end else
    Result := ToPChar(AObj.SelText);
  handleExceptionEnd
end;

//property
function CustomEdit_Text(AIsSet: LongBool; AObj: TCustomEdit; AValue: PChar): PChar; extdecl;
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
function CustomEdit_TextHint(AIsSet: LongBool; AObj: TCustomEdit; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='TextHint'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TextHint := AValue;
  end else
    Result := ToPChar(AObj.TextHint);
  handleExceptionEnd
end;

//function
function CustomEdit_Class(): TClass; extdecl;
begin
  Result := TCustomEdit;
end;

//procedure
procedure CustomEdit_Clear(AObj: TCustomEdit); extdecl;
begin
  {$define handleExceptionFuncName :='Clear'}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure CustomEdit_SelectAll(AObj: TCustomEdit); extdecl;
begin
  {$define handleExceptionFuncName :='SelectAll'}
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;

//procedure
procedure CustomEdit_ClearSelection(AObj: TCustomEdit); extdecl;
begin
  {$define handleExceptionFuncName :='ClearSelection'}
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

//procedure
procedure CustomEdit_CopyToClipboard(AObj: TCustomEdit); extdecl;
begin
  {$define handleExceptionFuncName :='CopyToClipboard'}
  handleExceptionBegin
  AObj.CopyToClipboard();
  handleExceptionEnd
end;

//procedure
procedure CustomEdit_CutToClipboard(AObj: TCustomEdit); extdecl;
begin
  {$define handleExceptionFuncName :='CutToClipboard'}
  handleExceptionBegin
  AObj.CutToClipboard();
  handleExceptionEnd
end;

//procedure
procedure CustomEdit_PasteFromClipboard(AObj: TCustomEdit); extdecl;
begin
  {$define handleExceptionFuncName :='PasteFromClipboard'}
  handleExceptionBegin
  AObj.PasteFromClipboard();
  handleExceptionEnd
end;

//procedure
procedure CustomEdit_Undo(AObj: TCustomEdit); extdecl;
begin
  {$define handleExceptionFuncName :='Undo'}
  handleExceptionBegin
  AObj.Undo();
  handleExceptionEnd
end;

//property event
procedure CustomEdit_SetOnChange(AObj: TCustomEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;


exports
  CustomEdit_Create,
  CustomEdit_Alignment,
  CustomEdit_BorderStyle,
  CustomEdit_CanUndo,
  CustomEdit_CaretPos,
  CustomEdit_CharCase,
  CustomEdit_EchoMode,
  CustomEdit_EmulatedTextHintStatus,
  CustomEdit_HideSelection,
  CustomEdit_MaxLength,
  CustomEdit_Modified,
  CustomEdit_NumbersOnly,
  CustomEdit_PasswordChar,
  CustomEdit_ReadOnly,
  CustomEdit_SelLength,
  CustomEdit_SelStart,
  CustomEdit_SelText,
  CustomEdit_Text,
  CustomEdit_TextHint,
  CustomEdit_Class,
  CustomEdit_Clear,
  CustomEdit_SelectAll,
  CustomEdit_ClearSelection,
  CustomEdit_CopyToClipboard,
  CustomEdit_CutToClipboard,
  CustomEdit_PasteFromClipboard,
  CustomEdit_Undo,
  CustomEdit_SetOnChange;