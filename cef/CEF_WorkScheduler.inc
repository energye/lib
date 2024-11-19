
//constructor
function CEFWorkScheduler_Create(aOwner: TComponent): TCEFWorkScheduler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCEFWorkScheduler.Create(aOwner);
  handleExceptionEnd
end;

//constructor
function CEFWorkScheduler_CreateDelayed(): TCEFWorkScheduler; extdecl;
begin
  {$define handleExceptionFuncName :='CreateDelayed'}
  handleExceptionBegin
  Result := TCEFWorkScheduler.CreateDelayed();
  handleExceptionEnd
end;

//property
function CEFWorkScheduler_Priority(AIsSet: LongBool; AObj: TCEFWorkScheduler; AValue: TThreadPriority): TThreadPriority; extdecl;
begin
{$IFDEF MSWINDOWS}
  {$define handleExceptionFuncName :='Priority'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Priority := AValue;
  end else
    Result := AObj.Priority;
  handleExceptionEnd
{$ENDIF}
end;

//property
function CEFWorkScheduler_DefaultInterval(AIsSet: LongBool; AObj: TCEFWorkScheduler; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultInterval'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultInterval := AValue;
  end else
    Result := AObj.DefaultInterval;
  handleExceptionEnd
end;

//property
function CEFWorkScheduler_DepleteWorkCycles(AIsSet: LongBool; AObj: TCEFWorkScheduler; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='DepleteWorkCycles'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DepleteWorkCycles := AValue;
  end else
    Result := AObj.DepleteWorkCycles;
  handleExceptionEnd
end;

//property
function CEFWorkScheduler_DepleteWorkDelay(AIsSet: LongBool; AObj: TCEFWorkScheduler; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='DepleteWorkDelay'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DepleteWorkDelay := AValue;
  end else
    Result := AObj.DepleteWorkDelay;
  handleExceptionEnd
end;

//procedure
procedure CEFWorkScheduler_ScheduleMessagePumpWork(AObj: TCEFWorkScheduler; var delayms: int64); extdecl;
begin
  {$define handleExceptionFuncName :='ScheduleMessagePumpWork'}
  handleExceptionBegin
  AObj.ScheduleMessagePumpWork(delayms);
  handleExceptionEnd
end;

//procedure
procedure CEFWorkScheduler_StopScheduler(AObj: TCEFWorkScheduler); extdecl;
begin
  {$define handleExceptionFuncName :='StopScheduler'}
  handleExceptionBegin
  AObj.StopScheduler();
  handleExceptionEnd
end;

//procedure
procedure CEFWorkScheduler_CreateThread(AObj: TCEFWorkScheduler); extdecl;
begin
  {$define handleExceptionFuncName :='CreateThread'}
  handleExceptionBegin
  AObj.CreateThread();
  handleExceptionEnd
end;


exports
  CEFWorkScheduler_Create,
  CEFWorkScheduler_CreateDelayed,
  CEFWorkScheduler_Priority,
  CEFWorkScheduler_DefaultInterval,
  CEFWorkScheduler_DepleteWorkCycles,
  CEFWorkScheduler_DepleteWorkDelay,
  CEFWorkScheduler_ScheduleMessagePumpWork,
  CEFWorkScheduler_StopScheduler,
  CEFWorkScheduler_CreateThread;