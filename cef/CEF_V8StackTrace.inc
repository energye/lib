
//function
procedure CefV8StackTrace_UnWrap(data: Pointer; var Result: ICefV8StackTrace); extdecl;
begin
  Result := TCefV8StackTraceRef.UnWrap(data);
end;

//function
procedure CefV8StackTrace_Current(frameLimit: Integer; var Result: ICefV8StackTrace); extdecl;
begin
  Result := TCefV8StackTraceRef.Current(frameLimit);
end;

//function
function CefV8StackTrace_IsValid(AObj: ICefV8StackTrace): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefV8StackTrace_GetFrameCount(AObj: ICefV8StackTrace): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetFrameCount();
  handleExceptionEnd
end;

//function
procedure CefV8StackTrace_GetFrame(AObj: ICefV8StackTrace; index: Integer; var Result: ICefV8StackFrame); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetFrame(index);
  handleExceptionEnd
end;


exports
  CefV8StackTrace_UnWrap,
  CefV8StackTrace_Current,
  CefV8StackTrace_IsValid,
  CefV8StackTrace_GetFrameCount,
  CefV8StackTrace_GetFrame;