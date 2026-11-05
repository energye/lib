// constructor
function TCustomEdit_Create(AOwner: TComponent): TCustomEdit; extdecl;
begin
  {$define handleExceptionID := 1900}
  handleExceptionBegin
  Result := TCustomEdit.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TCustomEdit_Clear(AObj: TCustomEdit); extdecl;
begin
  {$define handleExceptionID := 1901}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TCustomEdit_SelectAll(AObj: TCustomEdit); extdecl;
begin
  {$define handleExceptionID := 1902}
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;

// procedure
procedure TCustomEdit_ClearSelection(AObj: TCustomEdit); extdecl;
begin
  {$define handleExceptionID := 1903}
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

// procedure
procedure TCustomEdit_CopyToClipboard(AObj: TCustomEdit); extdecl;
begin
  {$define handleExceptionID := 1904}
  handleExceptionBegin
  AObj.CopyToClipboard();
  handleExceptionEnd
end;

// procedure
procedure TCustomEdit_CutToClipboard(AObj: TCustomEdit); extdecl;
begin
  {$define handleExceptionID := 1905}
  handleExceptionBegin
  AObj.CutToClipboard();
  handleExceptionEnd
end;

// procedure
procedure TCustomEdit_PasteFromClipboard(AObj: TCustomEdit); extdecl;
begin
  {$define handleExceptionID := 1906}
  handleExceptionBegin
  AObj.PasteFromClipboard();
  handleExceptionEnd
end;

// procedure
procedure TCustomEdit_Undo(AObj: TCustomEdit); extdecl;
begin
  {$define handleExceptionID := 1907}
  handleExceptionBegin
  AObj.Undo();
  handleExceptionEnd
end;

// property
function TCustomEdit_Alignment(ASet: LongBool; AObj: TCustomEdit; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 1908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TCustomEdit_BorderStyle(ASet: LongBool; AObj: TCustomEdit; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  {$define handleExceptionID := 1909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderStyle := AValue
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

// property
function TCustomEdit_CanUndo(AObj: TCustomEdit): LongBool; extdecl;
begin
  {$define handleExceptionID := 1910}
  handleExceptionBegin
  Result := AObj.CanUndo;
  handleExceptionEnd
end;

// property
procedure TCustomEdit_CaretPos(ASet: LongBool; AObj: TCustomEdit; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 1911}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CaretPos := AValue
  end else
    Result := AObj.CaretPos;
  handleExceptionEnd
end;

// property
function TCustomEdit_CharCase(ASet: LongBool; AObj: TCustomEdit; AValue: TEditCharCase): TEditCharCase; extdecl;
begin
  {$define handleExceptionID := 1912}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CharCase := AValue
  end else
    Result := AObj.CharCase;
  handleExceptionEnd
end;

// property
function TCustomEdit_EchoMode(ASet: LongBool; AObj: TCustomEdit; AValue: TEchoMode): TEchoMode; extdecl;
begin
  {$define handleExceptionID := 1913}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EchoMode := AValue
  end else
    Result := AObj.EchoMode;
  handleExceptionEnd
end;

// property
function TCustomEdit_EmulatedTextHintStatus(AObj: TCustomEdit): TEmulatedTextHintStatus; extdecl;
begin
  {$define handleExceptionID := 1914}
  handleExceptionBegin
  Result := AObj.EmulatedTextHintStatus;
  handleExceptionEnd
end;

// property
function TCustomEdit_HideSelection(ASet: LongBool; AObj: TCustomEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1915}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HideSelection := AValue
  end else
    Result := AObj.HideSelection;
  handleExceptionEnd
end;

// property
function TCustomEdit_MaxLength(ASet: LongBool; AObj: TCustomEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 1916}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxLength := AValue
  end else
    Result := AObj.MaxLength;
  handleExceptionEnd
end;

// property
function TCustomEdit_Modified(ASet: LongBool; AObj: TCustomEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1917}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Modified := AValue
  end else
    Result := AObj.Modified;
  handleExceptionEnd
end;

// property
function TCustomEdit_NumbersOnly(ASet: LongBool; AObj: TCustomEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1918}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumbersOnly := AValue
  end else
    Result := AObj.NumbersOnly;
  handleExceptionEnd
end;

// property
function TCustomEdit_PasswordChar(ASet: LongBool; AObj: TCustomEdit; AValue: Char): Char; extdecl;
begin
  {$define handleExceptionID := 1919}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PasswordChar := AValue
  end else
    Result := AObj.PasswordChar;
  handleExceptionEnd
end;

// property
function TCustomEdit_ReadOnly(ASet: LongBool; AObj: TCustomEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1920}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReadOnly := AValue
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

// property
function TCustomEdit_SelLength(ASet: LongBool; AObj: TCustomEdit; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 1921}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelLength := AValue
  end else
    Result := AObj.SelLength;
  handleExceptionEnd
end;

// property
function TCustomEdit_SelStart(ASet: LongBool; AObj: TCustomEdit; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 1922}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelStart := AValue
  end else
    Result := AObj.SelStart;
  handleExceptionEnd
end;

// property
procedure TCustomEdit_SelText(ASet: LongBool; AObj: TCustomEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1923}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelText := AValue
  end else
    StringBufferCreate(AObj.SelText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomEdit_Text(ASet: LongBool; AObj: TCustomEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1924}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Text := AValue
  end else
    StringBufferCreate(AObj.Text, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomEdit_TextHint(ASet: LongBool; AObj: TCustomEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1925}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextHint := AValue
  end else
    StringBufferCreate(AObj.TextHint, AStrData, AStrSize);
  handleExceptionEnd
end;

// event
procedure TCustomEdit_OnChange(AObj: TCustomEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

function TCustomEdit_TClass(): TClass; extdecl;
begin
  Result := TCustomEdit;
end;

exports
  TCustomEdit_Create,
  TCustomEdit_Clear,
  TCustomEdit_SelectAll,
  TCustomEdit_ClearSelection,
  TCustomEdit_CopyToClipboard,
  TCustomEdit_CutToClipboard,
  TCustomEdit_PasteFromClipboard,
  TCustomEdit_Undo,
  TCustomEdit_Alignment,
  TCustomEdit_BorderStyle,
  TCustomEdit_CanUndo,
  TCustomEdit_CaretPos,
  TCustomEdit_CharCase,
  TCustomEdit_EchoMode,
  TCustomEdit_EmulatedTextHintStatus,
  TCustomEdit_HideSelection,
  TCustomEdit_MaxLength,
  TCustomEdit_Modified,
  TCustomEdit_NumbersOnly,
  TCustomEdit_PasswordChar,
  TCustomEdit_ReadOnly,
  TCustomEdit_SelLength,
  TCustomEdit_SelStart,
  TCustomEdit_SelText,
  TCustomEdit_Text,
  TCustomEdit_TextHint,
  TCustomEdit_OnChange,
  TCustomEdit_TClass;