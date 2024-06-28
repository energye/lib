
//constructor
function CustomTimer_Create(AOwner: TComponent): TCustomTimer; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomTimer.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomTimer_Enabled(AIsSet: LongBool; AObj: TCustomTimer; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Enabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Enabled := AValue;
  end else
    Result := AObj.Enabled;
  handleExceptionEnd
end;

//property
function CustomTimer_Interval(AIsSet: LongBool; AObj: TCustomTimer; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='Interval'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Interval := AValue;
  end else
    Result := AObj.Interval;
  handleExceptionEnd
end;

//function
function CustomTimer_Class(): TClass; extdecl;
begin
  Result := TCustomTimer;
end;

//property event
procedure CustomTimer_SetOnTimer(AObj: TCustomTimer; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnTimer}
  EventMethodCode
end;

//property event
procedure CustomTimer_SetOnStartTimer(AObj: TCustomTimer; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnStartTimer}
  EventMethodCode
end;

//property event
procedure CustomTimer_SetOnStopTimer(AObj: TCustomTimer; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnStopTimer}
  EventMethodCode
end;


exports
  CustomTimer_Create,
  CustomTimer_Enabled,
  CustomTimer_Interval,
  CustomTimer_Class,
  CustomTimer_SetOnTimer,
  CustomTimer_SetOnStartTimer,
  CustomTimer_SetOnStopTimer;