
//function
procedure CefV8StackFrame_UnWrap(data: Pointer; var Result: ICefV8StackFrame); extdecl;
begin
  Result := TCefV8StackFrameRef.UnWrap(data);
end;

//function
function CefV8StackFrame_IsValid(AObj: ICefV8StackFrame): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefV8StackFrame_GetScriptName(AObj: ICefV8StackFrame): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetScriptName());
  handleExceptionEnd
end;

//function
function CefV8StackFrame_GetScriptNameOrSourceUrl(AObj: ICefV8StackFrame): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetScriptNameOrSourceUrl());
  handleExceptionEnd
end;

//function
function CefV8StackFrame_GetFunctionName(AObj: ICefV8StackFrame): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetFunctionName());
  handleExceptionEnd
end;

//function
function CefV8StackFrame_GetLineNumber(AObj: ICefV8StackFrame): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLineNumber();
  handleExceptionEnd
end;

//function
function CefV8StackFrame_GetColumn(AObj: ICefV8StackFrame): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetColumn();
  handleExceptionEnd
end;

//function
function CefV8StackFrame_IsEval(AObj: ICefV8StackFrame): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsEval();
  handleExceptionEnd
end;

//function
function CefV8StackFrame_IsConstructor(AObj: ICefV8StackFrame): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsConstructor();
  handleExceptionEnd
end;


exports
  CefV8StackFrame_UnWrap,
  CefV8StackFrame_IsValid,
  CefV8StackFrame_GetScriptName,
  CefV8StackFrame_GetScriptNameOrSourceUrl,
  CefV8StackFrame_GetFunctionName,
  CefV8StackFrame_GetLineNumber,
  CefV8StackFrame_GetColumn,
  CefV8StackFrame_IsEval,
  CefV8StackFrame_IsConstructor;