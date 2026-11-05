// constructor
function TCustomStringTreeOptions_Create(AOwner: TBaseVirtualTree): TCustomStringTreeOptions; extdecl;
begin
  {$define handleExceptionID := 30100}
  handleExceptionBegin
  Result := TCustomStringTreeOptions.Create(AOwner);
  handleExceptionEnd
end;

exports
  TCustomStringTreeOptions_Create;
