
//constructor
function CefStringMapRef_Create(aHandle: TCefStringMap): TCefStringMapRef; extdecl;
begin
  handleExceptionBegin
  Result := TCefStringMapRef.Create(aHandle);
  handleExceptionEnd
end;


exports
  CefStringMapRef_Create;