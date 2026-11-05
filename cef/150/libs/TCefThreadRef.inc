// constructor
function TCefThreadRef_Create(data: Pointer; out IntfThread: ICefThread): TCefThreadRef; extdecl;
begin
  {$define handleExceptionID := 21800}
  handleExceptionBegin
  Result := TCefThreadRef.Create(data);
  IntfThread := Result as ICefThread;
  handleExceptionEnd
end;

// function
procedure TCefThreadRef_GetTaskRunner(AObj: ICefThread; var Result: ICefTaskRunner); extdecl;
begin
  {$define handleExceptionID := 21801}
  handleExceptionBegin
  Result := AObj.GetTaskRunner();
  handleExceptionEnd
end;

// function
function TCefThreadRef_GetPlatformThreadID(AObj: ICefThread): TCefPlatformThreadId; extdecl;
begin
  {$define handleExceptionID := 21802}
  handleExceptionBegin
  Result := AObj.GetPlatformThreadID();
  handleExceptionEnd
end;

// function
function TCefThreadRef_IsRunning(AObj: ICefThread): LongBool; extdecl;
begin
  {$define handleExceptionID := 21803}
  handleExceptionBegin
  Result := AObj.IsRunning();
  handleExceptionEnd
end;

// function static
procedure TCefThreadRef_UnWrap(data: Pointer; var Result: ICefThread); extdecl;
begin
  Result := TCefThreadRef.UnWrap(data);
end;

// function static
procedure TCefThreadRef_New(const display_name: PChar; priority: TCefThreadPriority; message_loop_type: TCefMessageLoopType; stoppable: integer; com_init_mode: TCefCOMInitMode; var Result: ICefThread); extdecl;
begin
  Result := TCefThreadRef.New(display_name, priority, message_loop_type, stoppable, com_init_mode);
end;

// procedure
procedure TCefThreadRef_Stop(AObj: ICefThread); extdecl;
begin
  {$define handleExceptionID := 21804}
  handleExceptionBegin
  AObj.Stop();
  handleExceptionEnd
end;

exports
  TCefThreadRef_Create,
  TCefThreadRef_GetTaskRunner,
  TCefThreadRef_GetPlatformThreadID,
  TCefThreadRef_IsRunning,
  TCefThreadRef_UnWrap,
  TCefThreadRef_New,
  TCefThreadRef_Stop;