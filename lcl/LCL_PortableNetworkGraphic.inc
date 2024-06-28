
//constructor
function PortableNetworkGraphic_Create(): TPortableNetworkGraphic; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TPortableNetworkGraphic.Create();
  handleExceptionEnd
end;

//function
function PortableNetworkGraphic_Class(): TClass; extdecl;
begin
  Result := TPortableNetworkGraphic;
end;


exports
  PortableNetworkGraphic_Create,
  PortableNetworkGraphic_Class;