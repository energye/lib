
//constructor
function Bitmap_Create(): TBitmap; extdecl;
begin
  handleExceptionBegin
  Result := TBitmap.Create();
  handleExceptionEnd
end;

//function
function Bitmap_Class(): TClass; extdecl;
begin
  Result := TBitmap;
end;


exports
  Bitmap_Create,
  Bitmap_Class;