
//constructor
function CefStringMapRef_Create(aHandle: TCefStringMap): TCefStringMapRef; extdecl;
begin
  handleExceptionBegin
  Result := TCefStringMapRef.Create(aHandle);
  handleExceptionEnd
end;

//procedure
procedure CefStringMapRef_AsInterface(AObj: TCefStringMapRef; var Result: ICefStringMap); extdecl;
begin
  Result := AObj as ICefStringMap;
end;


exports
  CefStringMapRef_Create,
  CefStringMapRef_AsInterface;