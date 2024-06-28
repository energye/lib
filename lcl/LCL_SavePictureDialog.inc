
//constructor
function SavePictureDialog_Create(TheOwner: TComponent): TSavePictureDialog; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TSavePictureDialog.Create(TheOwner);
  handleExceptionEnd
end;

//function
function SavePictureDialog_Class(): TClass; extdecl;
begin
  Result := TSavePictureDialog;
end;


exports
  SavePictureDialog_Create,
  SavePictureDialog_Class;