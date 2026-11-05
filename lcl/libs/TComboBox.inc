// constructor
function TComboBox_Create(TheOwner: TComponent): TComboBox; extdecl;
begin
  {$define handleExceptionID := 4300}
  handleExceptionBegin
  Result := TComboBox.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TComboBox_BorderStyle(ASet: LongBool; AObj: TComboBox; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  {$define handleExceptionID := 4301}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderStyle := AValue
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

// property
function TComboBox_DragCursor(ASet: LongBool; AObj: TComboBox; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 4302}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TComboBox_DragKind(ASet: LongBool; AObj: TComboBox; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 4303}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TComboBox_DragMode(ASet: LongBool; AObj: TComboBox; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 4304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TComboBox_ItemHeight(ASet: LongBool; AObj: TComboBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 4305}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemHeight := AValue
  end else
    Result := AObj.ItemHeight;
  handleExceptionEnd
end;

// property
function TComboBox_ItemWidth(ASet: LongBool; AObj: TComboBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 4306}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemWidth := AValue
  end else
    Result := AObj.ItemWidth;
  handleExceptionEnd
end;

// property
function TComboBox_MaxLength(ASet: LongBool; AObj: TComboBox; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 4307}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxLength := AValue
  end else
    Result := AObj.MaxLength;
  handleExceptionEnd
end;

// property
function TComboBox_ParentColor(ASet: LongBool; AObj: TComboBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4308}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TComboBox_ParentFont(ASet: LongBool; AObj: TComboBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4309}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TComboBox_ParentShowHint(ASet: LongBool; AObj: TComboBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4310}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TComboBox_Sorted(ASet: LongBool; AObj: TComboBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4311}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Sorted := AValue
  end else
    Result := AObj.Sorted;
  handleExceptionEnd
end;

// event
procedure TComboBox_OnChange(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnCloseUp(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCloseUp}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnContextPopup(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnDblClick(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnDragDrop(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnDragOver(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnDrawItem(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDrawItemEvent}
  {$DEFINE EventName := OnDrawItem}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnEndDrag(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnDropDown(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDropDown}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnEditingDone(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnGetItems(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnGetItems}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnMeasureItem(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMeasureItemEvent}
  {$DEFINE EventName := OnMeasureItem}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnMouseDown(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnMouseEnter(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnMouseLeave(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnMouseMove(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnMouseUp(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnMouseWheel(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnMouseWheelDown(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnMouseWheelUp(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnSelect(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSelect}
  LCLEventMethodCode
end;

// event
procedure TComboBox_OnStartDrag(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TComboBox_TClass(): TClass; extdecl;
begin
  Result := TComboBox;
end;

exports
  TComboBox_Create,
  TComboBox_BorderStyle,
  TComboBox_DragCursor,
  TComboBox_DragKind,
  TComboBox_DragMode,
  TComboBox_ItemHeight,
  TComboBox_ItemWidth,
  TComboBox_MaxLength,
  TComboBox_ParentColor,
  TComboBox_ParentFont,
  TComboBox_ParentShowHint,
  TComboBox_Sorted,
  TComboBox_OnChange,
  TComboBox_OnCloseUp,
  TComboBox_OnContextPopup,
  TComboBox_OnDblClick,
  TComboBox_OnDragDrop,
  TComboBox_OnDragOver,
  TComboBox_OnDrawItem,
  TComboBox_OnEndDrag,
  TComboBox_OnDropDown,
  TComboBox_OnEditingDone,
  TComboBox_OnGetItems,
  TComboBox_OnMeasureItem,
  TComboBox_OnMouseDown,
  TComboBox_OnMouseEnter,
  TComboBox_OnMouseLeave,
  TComboBox_OnMouseMove,
  TComboBox_OnMouseUp,
  TComboBox_OnMouseWheel,
  TComboBox_OnMouseWheelDown,
  TComboBox_OnMouseWheelUp,
  TComboBox_OnSelect,
  TComboBox_OnStartDrag,
  TComboBox_TClass;