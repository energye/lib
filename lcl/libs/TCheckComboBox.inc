// constructor
function TCheckComboBox_Create(AOwner: TComponent): TCheckComboBox; extdecl;
begin
  {$define handleExceptionID := 22900}
  handleExceptionBegin
  Result := TCheckComboBox.Create(AOwner);
  handleExceptionEnd
end;

// property
function TCheckComboBox_BorderStyle(ASet: LongBool; AObj: TCheckComboBox; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  {$define handleExceptionID := 22901}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderStyle := AValue
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

// property
function TCheckComboBox_DragCursor(ASet: LongBool; AObj: TCheckComboBox; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 22902}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TCheckComboBox_DragKind(ASet: LongBool; AObj: TCheckComboBox; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 22903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TCheckComboBox_DragMode(ASet: LongBool; AObj: TCheckComboBox; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 22904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TCheckComboBox_ItemHeight(ASet: LongBool; AObj: TCheckComboBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 22905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemHeight := AValue
  end else
    Result := AObj.ItemHeight;
  handleExceptionEnd
end;

// property
function TCheckComboBox_ItemWidth(ASet: LongBool; AObj: TCheckComboBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 22906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemWidth := AValue
  end else
    Result := AObj.ItemWidth;
  handleExceptionEnd
end;

// property
function TCheckComboBox_MaxLength(ASet: LongBool; AObj: TCheckComboBox; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 22907}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxLength := AValue
  end else
    Result := AObj.MaxLength;
  handleExceptionEnd
end;

// property
function TCheckComboBox_ParentColor(ASet: LongBool; AObj: TCheckComboBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TCheckComboBox_ParentFont(ASet: LongBool; AObj: TCheckComboBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TCheckComboBox_ParentShowHint(ASet: LongBool; AObj: TCheckComboBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22910}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TCheckComboBox_Sorted(ASet: LongBool; AObj: TCheckComboBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22911}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Sorted := AValue
  end else
    Result := AObj.Sorted;
  handleExceptionEnd
end;

// event
procedure TCheckComboBox_OnChange(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnCloseUp(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCloseUp}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnContextPopup(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnDblClick(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnDragDrop(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnDragOver(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnEndDrag(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnDropDown(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDropDown}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnEditingDone(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnGetItems(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnGetItems}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnMouseDown(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnMouseEnter(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnMouseLeave(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnMouseMove(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnMouseUp(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnMouseWheel(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnMouseWheelDown(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnMouseWheelUp(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnStartDrag(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

// event
procedure TCheckComboBox_OnSelect(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSelect}
  LCLEventMethodCode
end;

function TCheckComboBox_TClass(): TClass; extdecl;
begin
  Result := TCheckComboBox;
end;

exports
  TCheckComboBox_Create,
  TCheckComboBox_BorderStyle,
  TCheckComboBox_DragCursor,
  TCheckComboBox_DragKind,
  TCheckComboBox_DragMode,
  TCheckComboBox_ItemHeight,
  TCheckComboBox_ItemWidth,
  TCheckComboBox_MaxLength,
  TCheckComboBox_ParentColor,
  TCheckComboBox_ParentFont,
  TCheckComboBox_ParentShowHint,
  TCheckComboBox_Sorted,
  TCheckComboBox_OnChange,
  TCheckComboBox_OnCloseUp,
  TCheckComboBox_OnContextPopup,
  TCheckComboBox_OnDblClick,
  TCheckComboBox_OnDragDrop,
  TCheckComboBox_OnDragOver,
  TCheckComboBox_OnEndDrag,
  TCheckComboBox_OnDropDown,
  TCheckComboBox_OnEditingDone,
  TCheckComboBox_OnGetItems,
  TCheckComboBox_OnMouseDown,
  TCheckComboBox_OnMouseEnter,
  TCheckComboBox_OnMouseLeave,
  TCheckComboBox_OnMouseMove,
  TCheckComboBox_OnMouseUp,
  TCheckComboBox_OnMouseWheel,
  TCheckComboBox_OnMouseWheelDown,
  TCheckComboBox_OnMouseWheelUp,
  TCheckComboBox_OnStartDrag,
  TCheckComboBox_OnSelect,
  TCheckComboBox_TClass;