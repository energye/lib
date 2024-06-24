
//constructor
function PortableAnyMapGraphic_Create(): TPortableAnyMapGraphic; extdecl;
begin
  handleExceptionBegin
  Result := TPortableAnyMapGraphic.Create();
  handleExceptionEnd
end;

//function
function PortableAnyMapGraphic_Class(): TClass; extdecl;
begin
  Result := TPortableAnyMapGraphic;
end;


exports
  PortableAnyMapGraphic_Create,
  PortableAnyMapGraphic_Class;