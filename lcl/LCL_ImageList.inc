
//constructor
function ImageList_Create(AOwner: TComponent): TImageList; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TImageList.Create(AOwner);
  handleExceptionEnd
end;

//function
function ImageList_Class(): TClass; extdecl;
begin
  Result := TImageList;
end;


exports
  ImageList_Create,
  ImageList_Class;