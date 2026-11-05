// constructor
function TCefStringListOwn_Create(out IntfStringList: ICefStringList): TCefStringListOwn; extdecl;
begin
  {$define handleExceptionID := 11000}
  handleExceptionBegin
  Result := TCefStringListOwn.Create();
  IntfStringList := Result as ICefStringList;
  handleExceptionEnd
end;

exports
  TCefStringListOwn_Create;
