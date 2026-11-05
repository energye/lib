// constructor
function TBitmap_Create(): TBitmap; extdecl;
begin
  {$define handleExceptionID := 11000}
  handleExceptionBegin
  Result := TBitmap.Create();
  handleExceptionEnd
end;

exports
  TBitmap_Create;
