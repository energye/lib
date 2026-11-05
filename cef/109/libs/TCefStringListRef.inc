// constructor
function TCefStringListRef_Create(aHandle: TCefStringList; out IntfStringList: ICefStringList): TCefStringListRef; extdecl;
begin
  {$define handleExceptionID := 4000}
  handleExceptionBegin
  Result := TCefStringListRef.Create(aHandle);
  IntfStringList := Result as ICefStringList;
  handleExceptionEnd
end;

exports
  TCefStringListRef_Create;
