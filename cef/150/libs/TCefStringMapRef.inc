// constructor
function TCefStringMapRef_Create(aHandle: TCefStringMap; out IntfStringMap: ICefStringMap): TCefStringMapRef; extdecl;
begin
  {$define handleExceptionID := 4200}
  handleExceptionBegin
  Result := TCefStringMapRef.Create(aHandle);
  IntfStringMap := Result as ICefStringMap;
  handleExceptionEnd
end;

exports
  TCefStringMapRef_Create;
