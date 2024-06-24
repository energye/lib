
//constructor
function Splitter_Create(TheOwner: TComponent): TSplitter; extdecl;
begin
  handleExceptionBegin
  Result := TSplitter.Create(TheOwner);
  handleExceptionEnd
end;

//property
function Splitter_ParentColor(AIsSet: LongBool; AObj: TSplitter; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//property
function Splitter_ParentShowHint(AIsSet: LongBool; AObj: TSplitter; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//function
function Splitter_Class(): TClass; extdecl;
begin
  Result := TSplitter;
end;

//property event
procedure Splitter_SetOnMouseWheel(AObj: TSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure Splitter_SetOnMouseWheelDown(AObj: TSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure Splitter_SetOnMouseWheelUp(AObj: TSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure Splitter_SetOnMouseWheelHorz(AObj: TSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure Splitter_SetOnMouseWheelLeft(AObj: TSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure Splitter_SetOnMouseWheelRight(AObj: TSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;


exports
  Splitter_Create,
  Splitter_ParentColor,
  Splitter_ParentShowHint,
  Splitter_Class,
  Splitter_SetOnMouseWheel,
  Splitter_SetOnMouseWheelDown,
  Splitter_SetOnMouseWheelUp,
  Splitter_SetOnMouseWheelHorz,
  Splitter_SetOnMouseWheelLeft,
  Splitter_SetOnMouseWheelRight;