
//constructor
function Pixmap_Create(): TPixmap; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TPixmap.Create();
  handleExceptionEnd
end;

//function
function Pixmap_Class(): TClass; extdecl;
begin
  Result := TPixmap;
end;


exports
  Pixmap_Create,
  Pixmap_Class;