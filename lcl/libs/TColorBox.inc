// constructor
function TColorBox_Create(AOwner: TComponent): TColorBox; extdecl;
begin
  {$define handleExceptionID := 6300}
  handleExceptionBegin
  Result := TColorBox.Create(AOwner);
  handleExceptionEnd
end;

// property
function TColorBox_DragCursor(ASet: LongBool; AObj: TColorBox; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 6301}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TColorBox_DragMode(ASet: LongBool; AObj: TColorBox; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 6302}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TColorBox_ItemHeight(ASet: LongBool; AObj: TColorBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 6303}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemHeight := AValue
  end else
    Result := AObj.ItemHeight;
  handleExceptionEnd
end;

// property
function TColorBox_ItemWidth(ASet: LongBool; AObj: TColorBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 6304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemWidth := AValue
  end else
    Result := AObj.ItemWidth;
  handleExceptionEnd
end;

// property
function TColorBox_ParentColor(ASet: LongBool; AObj: TColorBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 6305}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TColorBox_ParentFont(ASet: LongBool; AObj: TColorBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 6306}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TColorBox_ParentShowHint(ASet: LongBool; AObj: TColorBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 6307}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TColorBox_OnChange(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnCloseUp(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCloseUp}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnContextPopup(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnDblClick(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnDragDrop(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnDragOver(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnEndDrag(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnDropDown(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDropDown}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnEditingDone(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnMouseDown(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnMouseEnter(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnMouseLeave(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnMouseMove(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnMouseUp(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnMouseWheel(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnMouseWheelDown(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnMouseWheelUp(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnStartDrag(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

// event
procedure TColorBox_OnSelect(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSelect}
  LCLEventMethodCode
end;

function TColorBox_TClass(): TClass; extdecl;
begin
  Result := TColorBox;
end;

exports
  TColorBox_Create,
  TColorBox_DragCursor,
  TColorBox_DragMode,
  TColorBox_ItemHeight,
  TColorBox_ItemWidth,
  TColorBox_ParentColor,
  TColorBox_ParentFont,
  TColorBox_ParentShowHint,
  TColorBox_OnChange,
  TColorBox_OnCloseUp,
  TColorBox_OnContextPopup,
  TColorBox_OnDblClick,
  TColorBox_OnDragDrop,
  TColorBox_OnDragOver,
  TColorBox_OnEndDrag,
  TColorBox_OnDropDown,
  TColorBox_OnEditingDone,
  TColorBox_OnMouseDown,
  TColorBox_OnMouseEnter,
  TColorBox_OnMouseLeave,
  TColorBox_OnMouseMove,
  TColorBox_OnMouseUp,
  TColorBox_OnMouseWheel,
  TColorBox_OnMouseWheelDown,
  TColorBox_OnMouseWheelUp,
  TColorBox_OnStartDrag,
  TColorBox_OnSelect,
  TColorBox_TClass;