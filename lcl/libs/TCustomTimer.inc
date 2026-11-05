// constructor
function TCustomTimer_Create(AOwner: TComponent): TCustomTimer; extdecl;
begin
  {$define handleExceptionID := 16400}
  handleExceptionBegin
  Result := TCustomTimer.Create(AOwner);
  handleExceptionEnd
end;

// property
function TCustomTimer_Enabled(ASet: LongBool; AObj: TCustomTimer; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 16401}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Enabled := AValue
  end else
    Result := AObj.Enabled;
  handleExceptionEnd
end;

// property
function TCustomTimer_Interval(ASet: LongBool; AObj: TCustomTimer; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 16402}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Interval := AValue
  end else
    Result := AObj.Interval;
  handleExceptionEnd
end;

// event
procedure TCustomTimer_OnTimer(AObj: TCustomTimer; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnTimer}
  LCLEventMethodCode
end;

// event
procedure TCustomTimer_OnStartTimer(AObj: TCustomTimer; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnStartTimer}
  LCLEventMethodCode
end;

// event
procedure TCustomTimer_OnStopTimer(AObj: TCustomTimer; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnStopTimer}
  LCLEventMethodCode
end;

function TCustomTimer_TClass(): TClass; extdecl;
begin
  Result := TCustomTimer;
end;

exports
  TCustomTimer_Create,
  TCustomTimer_Enabled,
  TCustomTimer_Interval,
  TCustomTimer_OnTimer,
  TCustomTimer_OnStartTimer,
  TCustomTimer_OnStopTimer,
  TCustomTimer_TClass;