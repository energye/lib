// constructor
function TPaintBox_Create(AOwner: TComponent): TPaintBox; extdecl;
begin
  {$define handleExceptionID := 16300}
  handleExceptionBegin
  Result := TPaintBox.Create(AOwner);
  handleExceptionEnd
end;

// property
function TPaintBox_DragCursor(ASet: LongBool; AObj: TPaintBox; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 16301}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TPaintBox_DragMode(ASet: LongBool; AObj: TPaintBox; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 16302}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TPaintBox_ParentColor(ASet: LongBool; AObj: TPaintBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 16303}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TPaintBox_ParentFont(ASet: LongBool; AObj: TPaintBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 16304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TPaintBox_ParentShowHint(ASet: LongBool; AObj: TPaintBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 16305}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TPaintBox_OnContextPopup(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnDblClick(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnDragDrop(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnDragOver(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnEndDrag(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnMouseDown(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnMouseEnter(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnMouseLeave(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnMouseMove(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnMouseUp(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnMouseWheel(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnMouseWheelDown(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnMouseWheelUp(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnMouseWheelHorz(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnMouseWheelLeft(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnMouseWheelRight(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnPaint(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  LCLEventMethodCode
end;

// event
procedure TPaintBox_OnStartDrag(AObj: TPaintBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TPaintBox_TClass(): TClass; extdecl;
begin
  Result := TPaintBox;
end;

exports
  TPaintBox_Create,
  TPaintBox_DragCursor,
  TPaintBox_DragMode,
  TPaintBox_ParentColor,
  TPaintBox_ParentFont,
  TPaintBox_ParentShowHint,
  TPaintBox_OnContextPopup,
  TPaintBox_OnDblClick,
  TPaintBox_OnDragDrop,
  TPaintBox_OnDragOver,
  TPaintBox_OnEndDrag,
  TPaintBox_OnMouseDown,
  TPaintBox_OnMouseEnter,
  TPaintBox_OnMouseLeave,
  TPaintBox_OnMouseMove,
  TPaintBox_OnMouseUp,
  TPaintBox_OnMouseWheel,
  TPaintBox_OnMouseWheelDown,
  TPaintBox_OnMouseWheelUp,
  TPaintBox_OnMouseWheelHorz,
  TPaintBox_OnMouseWheelLeft,
  TPaintBox_OnMouseWheelRight,
  TPaintBox_OnPaint,
  TPaintBox_OnStartDrag,
  TPaintBox_TClass;