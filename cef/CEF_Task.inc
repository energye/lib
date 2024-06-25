
//constructor
function Task_Create(): TTask; extdecl;
begin
  handleExceptionBegin
  Result := TTask.Create();
  handleExceptionEnd
end;

//function
procedure Task_AsInterface(AObj: TTask; var Result: ICefTask); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsInterface();
  handleExceptionEnd
end;

//function
function Task_OnlyPostTask(AObj: TTask; threadId: TCefThreadId): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OnlyPostTask(threadId);
  handleExceptionEnd
end;

//function
function Task_OnlyPostDelayedTask(AObj: TTask; threadId: TCefThreadId; var delay: int64): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OnlyPostDelayedTask(threadId, delay);
  handleExceptionEnd
end;

//property event
procedure Task_SetOnExecute(AObj: TTask; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := Task_OnExecute}
  {$DEFINE EventName := OnExecute}
  CEFEventMethodCode
end;


exports
  Task_Create,
  Task_AsInterface,
  Task_OnlyPostTask,
  Task_OnlyPostDelayedTask,
  Task_SetOnExecute;