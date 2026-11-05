// constructor
function TPortableNetworkGraphic_Create(): TPortableNetworkGraphic; extdecl;
begin
  {$define handleExceptionID := 14900}
  handleExceptionBegin
  Result := TPortableNetworkGraphic.Create();
  handleExceptionEnd
end;

exports
  TPortableNetworkGraphic_Create;
