// constructor
function TPortableAnyMapGraphic_Create(): TPortableAnyMapGraphic; extdecl;
begin
  {$define handleExceptionID := 25700}
  handleExceptionBegin
  Result := TPortableAnyMapGraphic.Create();
  handleExceptionEnd
end;

exports
  TPortableAnyMapGraphic_Create;
