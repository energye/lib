// constructor
function TPairSplitterSide_Create(TheOwner: TComponent): TPairSplitterSide; extdecl;
begin
  {$define handleExceptionID := 33800}
  handleExceptionBegin
  Result := TPairSplitterSide.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TPairSplitterSide_Splitter(AObj: TPairSplitterSide): TCustomPairSplitter; extdecl;
begin
  {$define handleExceptionID := 33801}
  handleExceptionBegin
  Result := AObj.Splitter;
  handleExceptionEnd
end;

// property
function TPairSplitterSide_ParentShowHint(ASet: LongBool; AObj: TPairSplitterSide; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 33802}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TPairSplitterSide_OnMouseDown(AObj: TPairSplitterSide; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TPairSplitterSide_OnMouseEnter(AObj: TPairSplitterSide; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TPairSplitterSide_OnMouseLeave(AObj: TPairSplitterSide; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TPairSplitterSide_OnMouseMove(AObj: TPairSplitterSide; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TPairSplitterSide_OnMouseUp(AObj: TPairSplitterSide; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TPairSplitterSide_OnMouseWheel(AObj: TPairSplitterSide; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TPairSplitterSide_OnMouseWheelDown(AObj: TPairSplitterSide; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TPairSplitterSide_OnMouseWheelUp(AObj: TPairSplitterSide; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

function TPairSplitterSide_TClass(): TClass; extdecl;
begin
  Result := TPairSplitterSide;
end;

exports
  TPairSplitterSide_Create,
  TPairSplitterSide_Splitter,
  TPairSplitterSide_ParentShowHint,
  TPairSplitterSide_OnMouseDown,
  TPairSplitterSide_OnMouseEnter,
  TPairSplitterSide_OnMouseLeave,
  TPairSplitterSide_OnMouseMove,
  TPairSplitterSide_OnMouseUp,
  TPairSplitterSide_OnMouseWheel,
  TPairSplitterSide_OnMouseWheelDown,
  TPairSplitterSide_OnMouseWheelUp,
  TPairSplitterSide_TClass;