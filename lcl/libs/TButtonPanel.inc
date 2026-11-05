// constructor
function TButtonPanel_Create(AOwner: TComponent): TButtonPanel; extdecl;
begin
  {$define handleExceptionID := 33200}
  handleExceptionBegin
  Result := TButtonPanel.Create(AOwner);
  handleExceptionEnd
end;

// event
procedure TButtonPanel_OnDblClick(AObj: TButtonPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TButtonPanel_OnDragDrop(AObj: TButtonPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TButtonPanel_OnMouseDown(AObj: TButtonPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TButtonPanel_OnMouseEnter(AObj: TButtonPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TButtonPanel_OnMouseLeave(AObj: TButtonPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TButtonPanel_OnMouseMove(AObj: TButtonPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TButtonPanel_OnMouseUp(AObj: TButtonPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TButtonPanel_OnMouseWheel(AObj: TButtonPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TButtonPanel_OnMouseWheelDown(AObj: TButtonPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TButtonPanel_OnMouseWheelUp(AObj: TButtonPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

function TButtonPanel_TClass(): TClass; extdecl;
begin
  Result := TButtonPanel;
end;

exports
  TButtonPanel_Create,
  TButtonPanel_OnDblClick,
  TButtonPanel_OnDragDrop,
  TButtonPanel_OnMouseDown,
  TButtonPanel_OnMouseEnter,
  TButtonPanel_OnMouseLeave,
  TButtonPanel_OnMouseMove,
  TButtonPanel_OnMouseUp,
  TButtonPanel_OnMouseWheel,
  TButtonPanel_OnMouseWheelDown,
  TButtonPanel_OnMouseWheelUp,
  TButtonPanel_TClass;