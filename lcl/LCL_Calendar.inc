
//constructor
function Calendar_Create(AOwner: TComponent): TCalendar; extdecl;
begin
  handleExceptionBegin
  Result := TCalendar.Create(AOwner);
  handleExceptionEnd
end;

//function
function Calendar_Class(): TClass; extdecl;
begin
  Result := TCalendar;
end;

//property event
procedure Calendar_SetOnDblClick(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure Calendar_SetOnMouseDown(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure Calendar_SetOnMouseEnter(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure Calendar_SetOnMouseLeave(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure Calendar_SetOnMouseMove(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure Calendar_SetOnMouseUp(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure Calendar_SetOnMouseWheel(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure Calendar_SetOnMouseWheelDown(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure Calendar_SetOnMouseWheelUp(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure Calendar_SetOnMouseWheelHorz(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure Calendar_SetOnMouseWheelLeft(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure Calendar_SetOnMouseWheelRight(AObj: TCalendar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;


exports
  Calendar_Create,
  Calendar_Class,
  Calendar_SetOnDblClick,
  Calendar_SetOnMouseDown,
  Calendar_SetOnMouseEnter,
  Calendar_SetOnMouseLeave,
  Calendar_SetOnMouseMove,
  Calendar_SetOnMouseUp,
  Calendar_SetOnMouseWheel,
  Calendar_SetOnMouseWheelDown,
  Calendar_SetOnMouseWheelUp,
  Calendar_SetOnMouseWheelHorz,
  Calendar_SetOnMouseWheelLeft,
  Calendar_SetOnMouseWheelRight;