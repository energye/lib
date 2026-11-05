// constructor
function TFlowPanel_Create(AOwner: TComponent): TFlowPanel; extdecl;
begin
  {$define handleExceptionID := 19900}
  handleExceptionBegin
  Result := TFlowPanel.Create(AOwner);
  handleExceptionEnd
end;

// property
function TFlowPanel_DragCursor(ASet: LongBool; AObj: TFlowPanel; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 19901}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TFlowPanel_DragKind(ASet: LongBool; AObj: TFlowPanel; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 19902}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TFlowPanel_DragMode(ASet: LongBool; AObj: TFlowPanel; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 19903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TFlowPanel_ParentFont(ASet: LongBool; AObj: TFlowPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TFlowPanel_ParentShowHint(ASet: LongBool; AObj: TFlowPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TFlowPanel_OnConstrainedResize(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTConstrainedResizeEvent}
  {$DEFINE EventName := OnConstrainedResize}
  LCLEventMethodCode
end;

// event
procedure TFlowPanel_OnContextPopup(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TFlowPanel_OnDblClick(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TFlowPanel_OnDragDrop(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TFlowPanel_OnDragOver(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TFlowPanel_OnEndDock(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TFlowPanel_OnEndDrag(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TFlowPanel_OnGetSiteInfo(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  LCLEventMethodCode
end;

// event
procedure TFlowPanel_OnMouseDown(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TFlowPanel_OnMouseEnter(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TFlowPanel_OnMouseLeave(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TFlowPanel_OnMouseMove(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TFlowPanel_OnMouseUp(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TFlowPanel_OnStartDock(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TFlowPanel_OnStartDrag(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TFlowPanel_TClass(): TClass; extdecl;
begin
  Result := TFlowPanel;
end;

exports
  TFlowPanel_Create,
  TFlowPanel_DragCursor,
  TFlowPanel_DragKind,
  TFlowPanel_DragMode,
  TFlowPanel_ParentFont,
  TFlowPanel_ParentShowHint,
  TFlowPanel_OnConstrainedResize,
  TFlowPanel_OnContextPopup,
  TFlowPanel_OnDblClick,
  TFlowPanel_OnDragDrop,
  TFlowPanel_OnDragOver,
  TFlowPanel_OnEndDock,
  TFlowPanel_OnEndDrag,
  TFlowPanel_OnGetSiteInfo,
  TFlowPanel_OnMouseDown,
  TFlowPanel_OnMouseEnter,
  TFlowPanel_OnMouseLeave,
  TFlowPanel_OnMouseMove,
  TFlowPanel_OnMouseUp,
  TFlowPanel_OnStartDock,
  TFlowPanel_OnStartDrag,
  TFlowPanel_TClass;