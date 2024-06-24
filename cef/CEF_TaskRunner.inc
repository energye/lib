
//function
procedure CefTaskRunner_UnWrap(data: Pointer; var Result: ICefTaskRunner); extdecl;
begin
  Result := TCefTaskRunnerRef.UnWrap(data);
end;

//function
procedure CefTaskRunner_GetForCurrentThread(var Result: ICefTaskRunner); extdecl;
begin
  Result := TCefTaskRunnerRef.GetForCurrentThread();
end;

//function
procedure CefTaskRunner_GetForThread(threadId: TCefThreadId; var Result: ICefTaskRunner); extdecl;
begin
  Result := TCefTaskRunnerRef.GetForThread(threadId);
end;

//function
function CefTaskRunner_IsSame(AObj: ICefTaskRunner; const that: ICefTaskRunner): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
function CefTaskRunner_BelongsToCurrentThread(AObj: ICefTaskRunner): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BelongsToCurrentThread();
  handleExceptionEnd
end;

//function
function CefTaskRunner_BelongsToThread(AObj: ICefTaskRunner; threadId: TCefThreadId): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BelongsToThread(threadId);
  handleExceptionEnd
end;

//function
function CefTaskRunner_PostTask(AObj: ICefTaskRunner; const task: ICefTask): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PostTask(task);
  handleExceptionEnd
end;

//function
function CefTaskRunner_PostDelayedTask(AObj: ICefTaskRunner; const task: ICefTask; var delayMs: Int64): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PostDelayedTask(task, delayMs);
  handleExceptionEnd
end;


exports
  CefTaskRunner_UnWrap,
  CefTaskRunner_GetForCurrentThread,
  CefTaskRunner_GetForThread,
  CefTaskRunner_IsSame,
  CefTaskRunner_BelongsToCurrentThread,
  CefTaskRunner_BelongsToThread,
  CefTaskRunner_PostTask,
  CefTaskRunner_PostDelayedTask;