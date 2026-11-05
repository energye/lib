// constructor
function TBevel_Create(AOwner: TComponent): TBevel; extdecl;
begin
  {$define handleExceptionID := 17300}
  handleExceptionBegin
  Result := TBevel.Create(AOwner);
  handleExceptionEnd
end;

// property
function TBevel_ParentShowHint(ASet: LongBool; AObj: TBevel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17301}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TBevel_Shape(ASet: LongBool; AObj: TBevel; AValue: TBevelShape): TBevelShape; extdecl;
begin
  {$define handleExceptionID := 17302}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Shape := AValue
  end else
    Result := AObj.Shape;
  handleExceptionEnd
end;

// property
function TBevel_Style(ASet: LongBool; AObj: TBevel; AValue: TBevelStyle): TBevelStyle; extdecl;
begin
  {$define handleExceptionID := 17303}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

// event
procedure TBevel_OnMouseDown(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TBevel_OnMouseEnter(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TBevel_OnMouseLeave(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TBevel_OnMouseMove(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TBevel_OnMouseUp(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TBevel_OnMouseWheel(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TBevel_OnMouseWheelDown(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TBevel_OnMouseWheelUp(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TBevel_OnPaint(AObj: TBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  LCLEventMethodCode
end;

function TBevel_TClass(): TClass; extdecl;
begin
  Result := TBevel;
end;

exports
  TBevel_Create,
  TBevel_ParentShowHint,
  TBevel_Shape,
  TBevel_Style,
  TBevel_OnMouseDown,
  TBevel_OnMouseEnter,
  TBevel_OnMouseLeave,
  TBevel_OnMouseMove,
  TBevel_OnMouseUp,
  TBevel_OnMouseWheel,
  TBevel_OnMouseWheelDown,
  TBevel_OnMouseWheelUp,
  TBevel_OnPaint,
  TBevel_TClass;