// constructor
function TCefTaskRunnerRef_Create(data: Pointer; out IntfTaskRunner: ICefTaskRunner): TCefTaskRunnerRef; extdecl;
begin
  {$define handleExceptionID := 21700}
  handleExceptionBegin
  Result := TCefTaskRunnerRef.Create(data);
  IntfTaskRunner := Result as ICefTaskRunner;
  handleExceptionEnd
end;

// function
function TCefTaskRunnerRef_IsSame(AObj: ICefTaskRunner; const that: ICefTaskRunner): LongBool; extdecl;
begin
  {$define handleExceptionID := 21701}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
function TCefTaskRunnerRef_BelongsToCurrentThread(AObj: ICefTaskRunner): LongBool; extdecl;
begin
  {$define handleExceptionID := 21702}
  handleExceptionBegin
  Result := AObj.BelongsToCurrentThread();
  handleExceptionEnd
end;

// function
function TCefTaskRunnerRef_BelongsToThread(AObj: ICefTaskRunner; threadId: TCefThreadId): LongBool; extdecl;
begin
  {$define handleExceptionID := 21703}
  handleExceptionBegin
  Result := AObj.BelongsToThread(threadId);
  handleExceptionEnd
end;

// function
function TCefTaskRunnerRef_PostTask(AObj: ICefTaskRunner; const task: ICefTask): LongBool; extdecl;
begin
  {$define handleExceptionID := 21704}
  handleExceptionBegin
  Result := AObj.PostTask(task);
  handleExceptionEnd
end;

// function
function TCefTaskRunnerRef_PostDelayedTask(AObj: ICefTaskRunner; const task: ICefTask; var delayMs: Int64): LongBool; extdecl;
begin
  {$define handleExceptionID := 21705}
  handleExceptionBegin
  Result := AObj.PostDelayedTask(task, delayMs);
  handleExceptionEnd
end;

// function static
procedure TCefTaskRunnerRef_UnWrap(data: Pointer; var Result: ICefTaskRunner); extdecl;
begin
  Result := TCefTaskRunnerRef.UnWrap(data);
end;

// function static
procedure TCefTaskRunnerRef_GetForCurrentThread(var Result: ICefTaskRunner); extdecl;
begin
  Result := TCefTaskRunnerRef.GetForCurrentThread();
end;

// function static
procedure TCefTaskRunnerRef_GetForThread(threadId: TCefThreadId; var Result: ICefTaskRunner); extdecl;
begin
  Result := TCefTaskRunnerRef.GetForThread(threadId);
end;

exports
  TCefTaskRunnerRef_Create,
  TCefTaskRunnerRef_IsSame,
  TCefTaskRunnerRef_BelongsToCurrentThread,
  TCefTaskRunnerRef_BelongsToThread,
  TCefTaskRunnerRef_PostTask,
  TCefTaskRunnerRef_PostDelayedTask,
  TCefTaskRunnerRef_UnWrap,
  TCefTaskRunnerRef_GetForCurrentThread,
  TCefTaskRunnerRef_GetForThread;