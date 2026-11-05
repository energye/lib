// constructor
function TControlBar_Create(AOwner: TComponent): TControlBar; extdecl;
begin
  {$define handleExceptionID := 33400}
  handleExceptionBegin
  Result := TControlBar.Create(AOwner);
  handleExceptionEnd
end;

// property
function TControlBar_DragCursor(ASet: LongBool; AObj: TControlBar; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 33401}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TControlBar_DragKind(ASet: LongBool; AObj: TControlBar; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 33402}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TControlBar_DragMode(ASet: LongBool; AObj: TControlBar; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 33403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TControlBar_ParentFont(ASet: LongBool; AObj: TControlBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 33404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TControlBar_ParentShowHint(ASet: LongBool; AObj: TControlBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 33405}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TControlBar_OnConstrainedResize(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTConstrainedResizeEvent}
  {$DEFINE EventName := OnConstrainedResize}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnContextPopup(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnDblClick(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnDragDrop(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnDragOver(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnEndDock(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnEndDrag(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnGetSiteInfo(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnMouseDown(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnMouseEnter(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnMouseLeave(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnMouseMove(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnMouseUp(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnMouseWheel(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnMouseWheelDown(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnMouseWheelUp(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnStartDock(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TControlBar_OnStartDrag(AObj: TControlBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TControlBar_TClass(): TClass; extdecl;
begin
  Result := TControlBar;
end;

exports
  TControlBar_Create,
  TControlBar_DragCursor,
  TControlBar_DragKind,
  TControlBar_DragMode,
  TControlBar_ParentFont,
  TControlBar_ParentShowHint,
  TControlBar_OnConstrainedResize,
  TControlBar_OnContextPopup,
  TControlBar_OnDblClick,
  TControlBar_OnDragDrop,
  TControlBar_OnDragOver,
  TControlBar_OnEndDock,
  TControlBar_OnEndDrag,
  TControlBar_OnGetSiteInfo,
  TControlBar_OnMouseDown,
  TControlBar_OnMouseEnter,
  TControlBar_OnMouseLeave,
  TControlBar_OnMouseMove,
  TControlBar_OnMouseUp,
  TControlBar_OnMouseWheel,
  TControlBar_OnMouseWheelDown,
  TControlBar_OnMouseWheelUp,
  TControlBar_OnStartDock,
  TControlBar_OnStartDrag,
  TControlBar_TClass;