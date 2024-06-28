
//constructor
function FPMemoryImage_Create(AWidth, AHeight: integer): TFPMemoryImage; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TFPMemoryImage.Create(AWidth, AHeight);
  handleExceptionEnd
end;

//function
function FPMemoryImage_Class(): TClass; extdecl;
begin
  Result := TFPMemoryImage;
end;


exports
  FPMemoryImage_Create,
  FPMemoryImage_Class;