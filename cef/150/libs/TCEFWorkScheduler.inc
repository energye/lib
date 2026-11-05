// constructor
function TCEFWorkScheduler_Create(AOwner: TComponent): TCEFWorkScheduler; extdecl;
begin
  {$define handleExceptionID := 5500}
  handleExceptionBegin
  Result := TCEFWorkScheduler.Create(AOwner);
  handleExceptionEnd
end;

// constructor
function TCEFWorkScheduler_CreateDelayed(): TCEFWorkScheduler; extdecl;
begin
  {$define handleExceptionID := 5501}
  handleExceptionBegin
  Result := TCEFWorkScheduler.CreateDelayed();
  handleExceptionEnd
end;

// procedure
procedure TCEFWorkScheduler_ScheduleMessagePumpWork(AObj: TCEFWorkScheduler; var delay_ms: int64); extdecl;
begin
  {$define handleExceptionID := 5502}
  handleExceptionBegin
  AObj.ScheduleMessagePumpWork(delay_ms);
  handleExceptionEnd
end;

// procedure
procedure TCEFWorkScheduler_StopScheduler(AObj: TCEFWorkScheduler); extdecl;
begin
  {$define handleExceptionID := 5503}
  handleExceptionBegin
  AObj.StopScheduler();
  handleExceptionEnd
end;

// procedure
procedure TCEFWorkScheduler_CreateThread(AObj: TCEFWorkScheduler); extdecl;
begin
  {$define handleExceptionID := 5504}
  handleExceptionBegin
  AObj.CreateThread();
  handleExceptionEnd
end;

{$IFDEF MSWINDOWS}
// property
function TCEFWorkScheduler_Priority(ASet: LongBool; AObj: TCEFWorkScheduler; AValue: TThreadPriority): TThreadPriority; extdecl;
begin
  {$define handleExceptionID := 5505}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Priority := AValue
  end else
    Result := AObj.Priority;
  handleExceptionEnd
end;
{$ENDIF}

// property
function TCEFWorkScheduler_DefaultInterval(ASet: LongBool; AObj: TCEFWorkScheduler; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 5506}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultInterval := AValue
  end else
    Result := AObj.DefaultInterval;
  handleExceptionEnd
end;

// property
function TCEFWorkScheduler_DepleteWorkCycles(ASet: LongBool; AObj: TCEFWorkScheduler; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 5507}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DepleteWorkCycles := AValue
  end else
    Result := AObj.DepleteWorkCycles;
  handleExceptionEnd
end;

// property
function TCEFWorkScheduler_DepleteWorkDelay(ASet: LongBool; AObj: TCEFWorkScheduler; AValue: cardinal): cardinal; extdecl;
begin
  {$define handleExceptionID := 5508}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DepleteWorkDelay := AValue
  end else
    Result := AObj.DepleteWorkDelay;
  handleExceptionEnd
end;

// property
function TCEFWorkScheduler_UseQueueThread(ASet: LongBool; AObj: TCEFWorkScheduler; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5509}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UseQueueThread := AValue
  end else
    Result := AObj.UseQueueThread;
  handleExceptionEnd
end;

exports
  TCEFWorkScheduler_Create,
  TCEFWorkScheduler_CreateDelayed,
  TCEFWorkScheduler_ScheduleMessagePumpWork,
  TCEFWorkScheduler_StopScheduler,
  TCEFWorkScheduler_CreateThread,
{$IFDEF MSWINDOWS}
  TCEFWorkScheduler_Priority,
{$ENDIF}
  TCEFWorkScheduler_DefaultInterval,
  TCEFWorkScheduler_DepleteWorkCycles,
  TCEFWorkScheduler_DepleteWorkDelay,
  TCEFWorkScheduler_UseQueueThread;