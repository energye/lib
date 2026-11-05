// constructor
function TCalendar_Create(AOwner: TComponent): TCalendar; extdecl;
begin
  {$define handleExceptionID := 9400}
  handleExceptionBegin
  Result := TCalendar.Create(AOwner);
  handleExceptionEnd
end;

// event
procedure TCalendar_OnDblClick(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TCalendar_OnMouseDown(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TCalendar_OnMouseEnter(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TCalendar_OnMouseLeave(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TCalendar_OnMouseMove(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TCalendar_OnMouseUp(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TCalendar_OnMouseWheel(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TCalendar_OnMouseWheelDown(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TCalendar_OnMouseWheelUp(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TCalendar_OnMouseWheelHorz(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TCalendar_OnMouseWheelLeft(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TCalendar_OnMouseWheelRight(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

function TCalendar_TClass(): TClass; extdecl;
begin
  Result := TCalendar;
end;

exports
  TCalendar_Create,
  TCalendar_OnDblClick,
  TCalendar_OnMouseDown,
  TCalendar_OnMouseEnter,
  TCalendar_OnMouseLeave,
  TCalendar_OnMouseMove,
  TCalendar_OnMouseUp,
  TCalendar_OnMouseWheel,
  TCalendar_OnMouseWheelDown,
  TCalendar_OnMouseWheelUp,
  TCalendar_OnMouseWheelHorz,
  TCalendar_OnMouseWheelLeft,
  TCalendar_OnMouseWheelRight,
  TCalendar_TClass;