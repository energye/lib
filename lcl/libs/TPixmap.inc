// constructor
function TPixmap_Create(): TPixmap; extdecl;
begin
  {$define handleExceptionID := 25600}
  handleExceptionBegin
  Result := TPixmap.Create();
  handleExceptionEnd
end;

exports
  TPixmap_Create;
