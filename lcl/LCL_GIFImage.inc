
//constructor
function GIFImage_Create(): TGIFImage; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TGIFImage.Create();
  handleExceptionEnd
end;

//property
function GIFImage_Interlaced(AObj: TGIFImage): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Interlaced'}
  handleExceptionBegin
  Result := AObj.Interlaced;
  handleExceptionEnd
end;

//property
function GIFImage_BitsPerPixel(AObj: TGIFImage): byte; extdecl;
begin
  {$define handleExceptionFuncName :='BitsPerPixel'}
  handleExceptionBegin
  Result := AObj.BitsPerPixel;
  handleExceptionEnd
end;

//function
function GIFImage_Class(): TClass; extdecl;
begin
  Result := TGIFImage;
end;


exports
  GIFImage_Create,
  GIFImage_Interlaced,
  GIFImage_BitsPerPixel,
  GIFImage_Class;