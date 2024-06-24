
//constructor
function FPImageBitmap_Create(): TFPImageBitmap; extdecl;
begin
  handleExceptionBegin
  Result := TFPImageBitmap.Create();
  handleExceptionEnd
end;

//function
function FPImageBitmap_Class(): TClass; extdecl;
begin
  Result := TFPImageBitmap;
end;


exports
  FPImageBitmap_Create,
  FPImageBitmap_Class;