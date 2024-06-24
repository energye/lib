
//property
function CustomAbstractGroupedEdit_AutoSizeHeightIsEditHeight(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSizeHeightIsEditHeight := AValue;
  end else
    Result := AObj.AutoSizeHeightIsEditHeight;
  handleExceptionEnd
end;

//property
function CustomAbstractGroupedEdit_Alignment(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: TAlignment): TAlignment; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function CustomAbstractGroupedEdit_CanUndo(AObj: TCustomAbstractGroupedEdit): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanUndo;
  handleExceptionEnd
end;

//property
procedure CustomAbstractGroupedEdit_CaretPos(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CaretPos := AValue;
  end else
    Result := AObj.CaretPos;
  handleExceptionEnd
end;

//property
function CustomAbstractGroupedEdit_CharCase(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: TEditCharCase): TEditCharCase; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CharCase := AValue;
  end else
    Result := AObj.CharCase;
  handleExceptionEnd
end;

//property
function CustomAbstractGroupedEdit_ParentColor(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//property
function CustomAbstractGroupedEdit_EchoMode(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: TEchoMode): TEchoMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EchoMode := AValue;
  end else
    Result := AObj.EchoMode;
  handleExceptionEnd
end;

//property
function CustomAbstractGroupedEdit_HideSelection(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HideSelection := AValue;
  end else
    Result := AObj.HideSelection;
  handleExceptionEnd
end;

//property
function CustomAbstractGroupedEdit_MaxLength(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxLength := AValue;
  end else
    Result := AObj.MaxLength;
  handleExceptionEnd
end;

//property
function CustomAbstractGroupedEdit_Modified(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Modified := AValue;
  end else
    Result := AObj.Modified;
  handleExceptionEnd
end;

//property
function CustomAbstractGroupedEdit_NumbersOnly(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NumbersOnly := AValue;
  end else
    Result := AObj.NumbersOnly;
  handleExceptionEnd
end;

//property
function CustomAbstractGroupedEdit_PasswordChar(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: char): char; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PasswordChar := AValue;
  end else
    Result := AObj.PasswordChar;
  handleExceptionEnd
end;

//property
function CustomAbstractGroupedEdit_ReadOnly(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ReadOnly := AValue;
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

//property
function CustomAbstractGroupedEdit_SelLength(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelLength := AValue;
  end else
    Result := AObj.SelLength;
  handleExceptionEnd
end;

//property
function CustomAbstractGroupedEdit_SelStart(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelStart := AValue;
  end else
    Result := AObj.SelStart;
  handleExceptionEnd
end;

//property
function CustomAbstractGroupedEdit_SelText(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelText := AValue;
  end else
    Result := ToPChar(AObj.SelText);
  handleExceptionEnd
end;

//property
function CustomAbstractGroupedEdit_Text(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Text := AValue;
  end else
    Result := ToPChar(AObj.Text);
  handleExceptionEnd
end;

//property
function CustomAbstractGroupedEdit_TextHint(AIsSet: LongBool; AObj: TCustomAbstractGroupedEdit; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TextHint := AValue;
  end else
    Result := ToPChar(AObj.TextHint);
  handleExceptionEnd
end;

//function
function CustomAbstractGroupedEdit_Class(): TClass; extdecl;
begin
  Result := TCustomAbstractGroupedEdit;
end;

//procedure
procedure CustomAbstractGroupedEdit_Clear(AObj: TCustomAbstractGroupedEdit); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure CustomAbstractGroupedEdit_ClearSelection(AObj: TCustomAbstractGroupedEdit); extdecl;
begin
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

//procedure
procedure CustomAbstractGroupedEdit_CopyToClipboard(AObj: TCustomAbstractGroupedEdit); extdecl;
begin
  handleExceptionBegin
  AObj.CopyToClipboard();
  handleExceptionEnd
end;

//procedure
procedure CustomAbstractGroupedEdit_CutToClipboard(AObj: TCustomAbstractGroupedEdit); extdecl;
begin
  handleExceptionBegin
  AObj.CutToClipboard();
  handleExceptionEnd
end;

//procedure
procedure CustomAbstractGroupedEdit_PasteFromClipboard(AObj: TCustomAbstractGroupedEdit); extdecl;
begin
  handleExceptionBegin
  AObj.PasteFromClipboard();
  handleExceptionEnd
end;

//procedure
procedure CustomAbstractGroupedEdit_SelectAll(AObj: TCustomAbstractGroupedEdit); extdecl;
begin
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;

//procedure
procedure CustomAbstractGroupedEdit_Undo(AObj: TCustomAbstractGroupedEdit); extdecl;
begin
  handleExceptionBegin
  AObj.Undo();
  handleExceptionEnd
end;

//procedure
procedure CustomAbstractGroupedEdit_ValidateEdit(AObj: TCustomAbstractGroupedEdit); extdecl;
begin
  handleExceptionBegin
  AObj.ValidateEdit();
  handleExceptionEnd
end;

//property event
procedure CustomAbstractGroupedEdit_SetOnChange(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure CustomAbstractGroupedEdit_SetOnContextPopup(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure CustomAbstractGroupedEdit_SetOnDblClick(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure CustomAbstractGroupedEdit_SetOnDragDrop(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure CustomAbstractGroupedEdit_SetOnDragOver(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure CustomAbstractGroupedEdit_SetOnEditingDone(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure CustomAbstractGroupedEdit_SetOnEndDrag(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure CustomAbstractGroupedEdit_SetOnMouseDown(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure CustomAbstractGroupedEdit_SetOnMouseEnter(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure CustomAbstractGroupedEdit_SetOnMouseLeave(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure CustomAbstractGroupedEdit_SetOnMouseMove(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure CustomAbstractGroupedEdit_SetOnMouseWheel(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure CustomAbstractGroupedEdit_SetOnMouseWheelUp(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure CustomAbstractGroupedEdit_SetOnMouseWheelDown(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure CustomAbstractGroupedEdit_SetOnMouseUp(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure CustomAbstractGroupedEdit_SetOnStartDrag(AObj: TCustomAbstractGroupedEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  CustomAbstractGroupedEdit_AutoSizeHeightIsEditHeight,
  CustomAbstractGroupedEdit_Alignment,
  CustomAbstractGroupedEdit_CanUndo,
  CustomAbstractGroupedEdit_CaretPos,
  CustomAbstractGroupedEdit_CharCase,
  CustomAbstractGroupedEdit_ParentColor,
  CustomAbstractGroupedEdit_EchoMode,
  CustomAbstractGroupedEdit_HideSelection,
  CustomAbstractGroupedEdit_MaxLength,
  CustomAbstractGroupedEdit_Modified,
  CustomAbstractGroupedEdit_NumbersOnly,
  CustomAbstractGroupedEdit_PasswordChar,
  CustomAbstractGroupedEdit_ReadOnly,
  CustomAbstractGroupedEdit_SelLength,
  CustomAbstractGroupedEdit_SelStart,
  CustomAbstractGroupedEdit_SelText,
  CustomAbstractGroupedEdit_Text,
  CustomAbstractGroupedEdit_TextHint,
  CustomAbstractGroupedEdit_Class,
  CustomAbstractGroupedEdit_Clear,
  CustomAbstractGroupedEdit_ClearSelection,
  CustomAbstractGroupedEdit_CopyToClipboard,
  CustomAbstractGroupedEdit_CutToClipboard,
  CustomAbstractGroupedEdit_PasteFromClipboard,
  CustomAbstractGroupedEdit_SelectAll,
  CustomAbstractGroupedEdit_Undo,
  CustomAbstractGroupedEdit_ValidateEdit,
  CustomAbstractGroupedEdit_SetOnChange,
  CustomAbstractGroupedEdit_SetOnContextPopup,
  CustomAbstractGroupedEdit_SetOnDblClick,
  CustomAbstractGroupedEdit_SetOnDragDrop,
  CustomAbstractGroupedEdit_SetOnDragOver,
  CustomAbstractGroupedEdit_SetOnEditingDone,
  CustomAbstractGroupedEdit_SetOnEndDrag,
  CustomAbstractGroupedEdit_SetOnMouseDown,
  CustomAbstractGroupedEdit_SetOnMouseEnter,
  CustomAbstractGroupedEdit_SetOnMouseLeave,
  CustomAbstractGroupedEdit_SetOnMouseMove,
  CustomAbstractGroupedEdit_SetOnMouseWheel,
  CustomAbstractGroupedEdit_SetOnMouseWheelUp,
  CustomAbstractGroupedEdit_SetOnMouseWheelDown,
  CustomAbstractGroupedEdit_SetOnMouseUp,
  CustomAbstractGroupedEdit_SetOnStartDrag;