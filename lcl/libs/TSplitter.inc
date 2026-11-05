// constructor
function TSplitter_Create(TheOwner: TComponent): TSplitter; extdecl;
begin
  {$define handleExceptionID := 5700}
  handleExceptionBegin
  Result := TSplitter.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TSplitter_ParentColor(ASet: LongBool; AObj: TSplitter; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5701}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TSplitter_ParentShowHint(ASet: LongBool; AObj: TSplitter; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5702}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TSplitter_OnMouseWheel(AObj: TSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TSplitter_OnMouseWheelDown(AObj: TSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TSplitter_OnMouseWheelUp(AObj: TSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TSplitter_OnMouseWheelHorz(AObj: TSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TSplitter_OnMouseWheelLeft(AObj: TSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TSplitter_OnMouseWheelRight(AObj: TSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

function TSplitter_TClass(): TClass; extdecl;
begin
  Result := TSplitter;
end;

exports
  TSplitter_Create,
  TSplitter_ParentColor,
  TSplitter_ParentShowHint,
  TSplitter_OnMouseWheel,
  TSplitter_OnMouseWheelDown,
  TSplitter_OnMouseWheelUp,
  TSplitter_OnMouseWheelHorz,
  TSplitter_OnMouseWheelLeft,
  TSplitter_OnMouseWheelRight,
  TSplitter_TClass;