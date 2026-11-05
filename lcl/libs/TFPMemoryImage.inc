// constructor
function TFPMemoryImage_Create(AWidth: integer; AHeight: integer): TFPMemoryImage; extdecl;
begin
  {$define handleExceptionID := 25200}
  handleExceptionBegin
  Result := TFPMemoryImage.Create (AWidth, AHeight);
  handleExceptionEnd
end;

exports
  TFPMemoryImage_Create;
