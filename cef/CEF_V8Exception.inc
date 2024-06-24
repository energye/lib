
//function
procedure CefV8Exception_UnWrap(data: Pointer; var Result: ICefV8Exception); extdecl;
begin
  Result := TCefV8ExceptionRef.UnWrap(data);
end;

//function
function CefV8Exception_GetMessage(AObj: ICefV8Exception): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetMessage());
  handleExceptionEnd
end;

//function
function CefV8Exception_GetSourceLine(AObj: ICefV8Exception): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetSourceLine());
  handleExceptionEnd
end;

//function
function CefV8Exception_GetScriptResourceName(AObj: ICefV8Exception): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetScriptResourceName());
  handleExceptionEnd
end;

//function
function CefV8Exception_GetLineNumber(AObj: ICefV8Exception): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLineNumber();
  handleExceptionEnd
end;

//function
function CefV8Exception_GetStartPosition(AObj: ICefV8Exception): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetStartPosition();
  handleExceptionEnd
end;

//function
function CefV8Exception_GetEndPosition(AObj: ICefV8Exception): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEndPosition();
  handleExceptionEnd
end;

//function
function CefV8Exception_GetStartColumn(AObj: ICefV8Exception): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetStartColumn();
  handleExceptionEnd
end;

//function
function CefV8Exception_GetEndColumn(AObj: ICefV8Exception): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEndColumn();
  handleExceptionEnd
end;


exports
  CefV8Exception_UnWrap,
  CefV8Exception_GetMessage,
  CefV8Exception_GetSourceLine,
  CefV8Exception_GetScriptResourceName,
  CefV8Exception_GetLineNumber,
  CefV8Exception_GetStartPosition,
  CefV8Exception_GetEndPosition,
  CefV8Exception_GetStartColumn,
  CefV8Exception_GetEndColumn;