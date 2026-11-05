// constructor
function TPairSplitter_Create(TheOwner: TComponent): TPairSplitter; extdecl;
begin
  {$define handleExceptionID := 33700}
  handleExceptionBegin
  Result := TPairSplitter.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TPairSplitter_ParentShowHint(ASet: LongBool; AObj: TPairSplitter; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 33701}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TPairSplitter_OnMouseDown(AObj: TPairSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TPairSplitter_OnMouseEnter(AObj: TPairSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TPairSplitter_OnMouseLeave(AObj: TPairSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TPairSplitter_OnMouseMove(AObj: TPairSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TPairSplitter_OnMouseUp(AObj: TPairSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TPairSplitter_OnMouseWheel(AObj: TPairSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TPairSplitter_OnMouseWheelDown(AObj: TPairSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TPairSplitter_OnMouseWheelUp(AObj: TPairSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

function TPairSplitter_TClass(): TClass; extdecl;
begin
  Result := TPairSplitter;
end;

exports
  TPairSplitter_Create,
  TPairSplitter_ParentShowHint,
  TPairSplitter_OnMouseDown,
  TPairSplitter_OnMouseEnter,
  TPairSplitter_OnMouseLeave,
  TPairSplitter_OnMouseMove,
  TPairSplitter_OnMouseUp,
  TPairSplitter_OnMouseWheel,
  TPairSplitter_OnMouseWheelDown,
  TPairSplitter_OnMouseWheelUp,
  TPairSplitter_TClass;