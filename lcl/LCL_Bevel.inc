
//constructor
function Bevel_Create(AOwner: TComponent): TBevel; extdecl;
begin
  handleExceptionBegin
  Result := TBevel.Create(AOwner);
  handleExceptionEnd
end;

//property
function Bevel_ParentShowHint(AIsSet: LongBool; AObj: TBevel; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//property
function Bevel_Shape(AIsSet: LongBool; AObj: TBevel; AValue: TBevelShape): TBevelShape; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Shape := AValue;
  end else
    Result := AObj.Shape;
  handleExceptionEnd
end;

//property
function Bevel_Style(AIsSet: LongBool; AObj: TBevel; AValue: TBevelStyle): TBevelStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Style := AValue;
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

//function
function Bevel_Class(): TClass; extdecl;
begin
  Result := TBevel;
end;

//property event
procedure Bevel_SetOnMouseDown(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure Bevel_SetOnMouseEnter(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure Bevel_SetOnMouseLeave(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure Bevel_SetOnMouseMove(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure Bevel_SetOnMouseUp(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure Bevel_SetOnMouseWheel(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure Bevel_SetOnMouseWheelDown(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure Bevel_SetOnMouseWheelUp(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure Bevel_SetOnPaint(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  EventMethodCode
end;


exports
  Bevel_Create,
  Bevel_ParentShowHint,
  Bevel_Shape,
  Bevel_Style,
  Bevel_Class,
  Bevel_SetOnMouseDown,
  Bevel_SetOnMouseEnter,
  Bevel_SetOnMouseLeave,
  Bevel_SetOnMouseMove,
  Bevel_SetOnMouseUp,
  Bevel_SetOnMouseWheel,
  Bevel_SetOnMouseWheelDown,
  Bevel_SetOnMouseWheelUp,
  Bevel_SetOnPaint;