// constructor
function TCefV8StackTraceRef_Create(data: Pointer; out IntfV8StackTrace: ICefV8StackTrace): TCefV8StackTraceRef; extdecl;
begin
  {$define handleExceptionID := 22100}
  handleExceptionBegin
  Result := TCefV8StackTraceRef.Create(data);
  IntfV8StackTrace := Result as ICefV8StackTrace;
  handleExceptionEnd
end;

// function
function TCefV8StackTraceRef_IsValid(AObj: ICefV8StackTrace): LongBool; extdecl;
begin
  {$define handleExceptionID := 22101}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefV8StackTraceRef_GetFrameCount(AObj: ICefV8StackTrace): Integer; extdecl;
begin
  {$define handleExceptionID := 22102}
  handleExceptionBegin
  Result := AObj.GetFrameCount();
  handleExceptionEnd
end;

// function
procedure TCefV8StackTraceRef_GetFrame(AObj: ICefV8StackTrace; index: Integer; var Result: ICefV8StackFrame); extdecl;
begin
  {$define handleExceptionID := 22103}
  handleExceptionBegin
  Result := AObj.GetFrame(index);
  handleExceptionEnd
end;

// function static
procedure TCefV8StackTraceRef_UnWrap(data: Pointer; var Result: ICefV8StackTrace); extdecl;
begin
  Result := TCefV8StackTraceRef.UnWrap(data);
end;

// function static
procedure TCefV8StackTraceRef_Current(frameLimit: Integer; var Result: ICefV8StackTrace); extdecl;
begin
  Result := TCefV8StackTraceRef.Current(frameLimit);
end;

exports
  TCefV8StackTraceRef_Create,
  TCefV8StackTraceRef_IsValid,
  TCefV8StackTraceRef_GetFrameCount,
  TCefV8StackTraceRef_GetFrame,
  TCefV8StackTraceRef_UnWrap,
  TCefV8StackTraceRef_Current;