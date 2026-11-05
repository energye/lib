// procedure
procedure TCustomAbstractGroupedEdit_Clear(AObj: TCustomAbstractGroupedEdit); extdecl;
begin
  {$define handleExceptionID := 2100}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TCustomAbstractGroupedEdit_ClearSelection(AObj: TCustomAbstractGroupedEdit); extdecl;
begin
  {$define handleExceptionID := 2101}
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

// procedure
procedure TCustomAbstractGroupedEdit_CopyToClipboard(AObj: TCustomAbstractGroupedEdit); extdecl;
begin
  {$define handleExceptionID := 2102}
  handleExceptionBegin
  AObj.CopyToClipboard();
  handleExceptionEnd
end;

// procedure
procedure TCustomAbstractGroupedEdit_CutToClipboard(AObj: TCustomAbstractGroupedEdit); extdecl;
begin
  {$define handleExceptionID := 2103}
  handleExceptionBegin
  AObj.CutToClipboard();
  handleExceptionEnd
end;

// procedure
procedure TCustomAbstractGroupedEdit_PasteFromClipboard(AObj: TCustomAbstractGroupedEdit); extdecl;
begin
  {$define handleExceptionID := 2104}
  handleExceptionBegin
  AObj.PasteFromClipboard();
  handleExceptionEnd
end;

// procedure
procedure TCustomAbstractGroupedEdit_SelectAll(AObj: TCustomAbstractGroupedEdit); extdecl;
begin
  {$define handleExceptionID := 2105}
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;

// procedure
procedure TCustomAbstractGroupedEdit_Undo(AObj: TCustomAbstractGroupedEdit); extdecl;
begin
  {$define handleExceptionID := 2106}
  handleExceptionBegin
  AObj.Undo();
  handleExceptionEnd
end;

// procedure
procedure TCustomAbstractGroupedEdit_ValidateEdit(AObj: TCustomAbstractGroupedEdit); extdecl;
begin
  {$define handleExceptionID := 2107}
  handleExceptionBegin
  AObj.ValidateEdit();
  handleExceptionEnd
end;

// property
function TCustomAbstractGroupedEdit_AutoSizeHeightIsEditHeight(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2108}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSizeHeightIsEditHeight := AValue
  end else
    Result := AObj.AutoSizeHeightIsEditHeight;
  handleExceptionEnd
end;

// property
function TCustomAbstractGroupedEdit_Alignment(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 2109}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TCustomAbstractGroupedEdit_CanUndo(AObj: TCustomAbstractGroupedEdit): LongBool; extdecl;
begin
  {$define handleExceptionID := 2110}
  handleExceptionBegin
  Result := AObj.CanUndo;
  handleExceptionEnd
end;

// property
procedure TCustomAbstractGroupedEdit_CaretPos(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 2111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CaretPos := AValue
  end else
    Result := AObj.CaretPos;
  handleExceptionEnd
end;

// property
function TCustomAbstractGroupedEdit_CharCase(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: TEditCharCase): TEditCharCase; extdecl;
begin
  {$define handleExceptionID := 2112}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CharCase := AValue
  end else
    Result := AObj.CharCase;
  handleExceptionEnd
end;

// property
function TCustomAbstractGroupedEdit_ParentColor(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2113}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TCustomAbstractGroupedEdit_EchoMode(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: TEchoMode): TEchoMode; extdecl;
begin
  {$define handleExceptionID := 2114}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EchoMode := AValue
  end else
    Result := AObj.EchoMode;
  handleExceptionEnd
end;

// property
function TCustomAbstractGroupedEdit_HideSelection(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2115}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HideSelection := AValue
  end else
    Result := AObj.HideSelection;
  handleExceptionEnd
end;

// property
function TCustomAbstractGroupedEdit_MaxLength(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 2116}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxLength := AValue
  end else
    Result := AObj.MaxLength;
  handleExceptionEnd
end;

// property
function TCustomAbstractGroupedEdit_Modified(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2117}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Modified := AValue
  end else
    Result := AObj.Modified;
  handleExceptionEnd
end;

// property
function TCustomAbstractGroupedEdit_NumbersOnly(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2118}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumbersOnly := AValue
  end else
    Result := AObj.NumbersOnly;
  handleExceptionEnd
end;

// property
function TCustomAbstractGroupedEdit_PasswordChar(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: char): char; extdecl;
begin
  {$define handleExceptionID := 2119}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PasswordChar := AValue
  end else
    Result := AObj.PasswordChar;
  handleExceptionEnd
end;

// property
function TCustomAbstractGroupedEdit_ReadOnly(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2120}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReadOnly := AValue
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

// property
function TCustomAbstractGroupedEdit_SelLength(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 2121}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelLength := AValue
  end else
    Result := AObj.SelLength;
  handleExceptionEnd
end;

// property
function TCustomAbstractGroupedEdit_SelStart(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 2122}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelStart := AValue
  end else
    Result := AObj.SelStart;
  handleExceptionEnd
end;

// property
procedure TCustomAbstractGroupedEdit_SelText(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2123}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelText := AValue
  end else
    StringBufferCreate(AObj.SelText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomAbstractGroupedEdit_Text(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2124}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Text := AValue
  end else
    StringBufferCreate(AObj.Text, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomAbstractGroupedEdit_TextHint(ASet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2125}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextHint := AValue
  end else
    StringBufferCreate(AObj.TextHint, AStrData, AStrSize);
  handleExceptionEnd
end;

// event
procedure TCustomAbstractGroupedEdit_OnChange(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TCustomAbstractGroupedEdit_OnContextPopup(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TCustomAbstractGroupedEdit_OnDblClick(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TCustomAbstractGroupedEdit_OnDragDrop(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TCustomAbstractGroupedEdit_OnDragOver(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TCustomAbstractGroupedEdit_OnEditingDone(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TCustomAbstractGroupedEdit_OnEndDrag(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TCustomAbstractGroupedEdit_OnMouseDown(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TCustomAbstractGroupedEdit_OnMouseEnter(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TCustomAbstractGroupedEdit_OnMouseLeave(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TCustomAbstractGroupedEdit_OnMouseMove(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TCustomAbstractGroupedEdit_OnMouseWheel(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TCustomAbstractGroupedEdit_OnMouseWheelUp(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TCustomAbstractGroupedEdit_OnMouseWheelDown(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TCustomAbstractGroupedEdit_OnMouseUp(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TCustomAbstractGroupedEdit_OnStartDrag(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

exports
  TCustomAbstractGroupedEdit_Clear,
  TCustomAbstractGroupedEdit_ClearSelection,
  TCustomAbstractGroupedEdit_CopyToClipboard,
  TCustomAbstractGroupedEdit_CutToClipboard,
  TCustomAbstractGroupedEdit_PasteFromClipboard,
  TCustomAbstractGroupedEdit_SelectAll,
  TCustomAbstractGroupedEdit_Undo,
  TCustomAbstractGroupedEdit_ValidateEdit,
  TCustomAbstractGroupedEdit_AutoSizeHeightIsEditHeight,
  TCustomAbstractGroupedEdit_Alignment,
  TCustomAbstractGroupedEdit_CanUndo,
  TCustomAbstractGroupedEdit_CaretPos,
  TCustomAbstractGroupedEdit_CharCase,
  TCustomAbstractGroupedEdit_ParentColor,
  TCustomAbstractGroupedEdit_EchoMode,
  TCustomAbstractGroupedEdit_HideSelection,
  TCustomAbstractGroupedEdit_MaxLength,
  TCustomAbstractGroupedEdit_Modified,
  TCustomAbstractGroupedEdit_NumbersOnly,
  TCustomAbstractGroupedEdit_PasswordChar,
  TCustomAbstractGroupedEdit_ReadOnly,
  TCustomAbstractGroupedEdit_SelLength,
  TCustomAbstractGroupedEdit_SelStart,
  TCustomAbstractGroupedEdit_SelText,
  TCustomAbstractGroupedEdit_Text,
  TCustomAbstractGroupedEdit_TextHint,
  TCustomAbstractGroupedEdit_OnChange,
  TCustomAbstractGroupedEdit_OnContextPopup,
  TCustomAbstractGroupedEdit_OnDblClick,
  TCustomAbstractGroupedEdit_OnDragDrop,
  TCustomAbstractGroupedEdit_OnDragOver,
  TCustomAbstractGroupedEdit_OnEditingDone,
  TCustomAbstractGroupedEdit_OnEndDrag,
  TCustomAbstractGroupedEdit_OnMouseDown,
  TCustomAbstractGroupedEdit_OnMouseEnter,
  TCustomAbstractGroupedEdit_OnMouseLeave,
  TCustomAbstractGroupedEdit_OnMouseMove,
  TCustomAbstractGroupedEdit_OnMouseWheel,
  TCustomAbstractGroupedEdit_OnMouseWheelUp,
  TCustomAbstractGroupedEdit_OnMouseWheelDown,
  TCustomAbstractGroupedEdit_OnMouseUp,
  TCustomAbstractGroupedEdit_OnStartDrag;