// constructor
function TCEFTimerWorkScheduler_Create(): TCEFTimerWorkScheduler; extdecl;
begin
  {$define handleExceptionID := 9500}
  handleExceptionBegin
  Result := TCEFTimerWorkScheduler.Create();
  handleExceptionEnd
end;

// procedure
procedure TCEFTimerWorkScheduler_StopScheduler(AObj: TCEFTimerWorkScheduler); extdecl;
begin
  {$define handleExceptionID := 9501}
  handleExceptionBegin
  AObj.StopScheduler();
  handleExceptionEnd
end;

// procedure
procedure TCEFTimerWorkScheduler_ScheduleMessagePumpWork(AObj: TCEFTimerWorkScheduler; var delay_ms: int64); extdecl;
begin
  {$define handleExceptionID := 9502}
  handleExceptionBegin
  AObj.ScheduleMessagePumpWork(delay_ms);
  handleExceptionEnd
end;

// property
function TCEFTimerWorkScheduler_DepleteWorkCycles(ASet: LongBool; AObj: TCEFTimerWorkScheduler; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 9503}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DepleteWorkCycles := AValue
  end else
    Result := AObj.DepleteWorkCycles;
  handleExceptionEnd
end;

// property
function TCEFTimerWorkScheduler_DepleteWorkDelay(ASet: LongBool; AObj: TCEFTimerWorkScheduler; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 9504}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DepleteWorkDelay := AValue
  end else
    Result := AObj.DepleteWorkDelay;
  handleExceptionEnd
end;

// property
function TCEFTimerWorkScheduler_IsTimerPending(AObj: TCEFTimerWorkScheduler): LongBool; extdecl;
begin
  {$define handleExceptionID := 9505}
  handleExceptionBegin
  Result := AObj.IsTimerPending;
  handleExceptionEnd
end;

// event
procedure TCEFTimerWorkScheduler_OnAllowDoWork(AObj: TCEFTimerWorkScheduler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFTimerWorkScheduler_TOnAllowEvent}
  {$DEFINE EventName := OnAllowDoWork}
  CEFEventMethodCode
end;

exports
  TCEFTimerWorkScheduler_Create,
  TCEFTimerWorkScheduler_StopScheduler,
  TCEFTimerWorkScheduler_ScheduleMessagePumpWork,
  TCEFTimerWorkScheduler_DepleteWorkCycles,
  TCEFTimerWorkScheduler_DepleteWorkDelay,
  TCEFTimerWorkScheduler_IsTimerPending,
  TCEFTimerWorkScheduler_OnAllowDoWork;