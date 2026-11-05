// constructor
function TCefStringMapOwn_Create(out IntfStringMap: ICefStringMap): TCefStringMapOwn; extdecl;
begin
  {$define handleExceptionID := 11200}
  handleExceptionBegin
  Result := TCefStringMapOwn.Create();
  IntfStringMap := Result as ICefStringMap;
  handleExceptionEnd
end;

exports
  TCefStringMapOwn_Create;
