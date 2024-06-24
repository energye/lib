
//constructor
function OpenPictureDialog_Create(TheOwner: TComponent): TOpenPictureDialog; extdecl;
begin
  handleExceptionBegin
  Result := TOpenPictureDialog.Create(TheOwner);
  handleExceptionEnd
end;

//property
function OpenPictureDialog_DefaultFilter(AObj: TOpenPictureDialog): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.DefaultFilter);
  handleExceptionEnd
end;

//function
function OpenPictureDialog_GetFilterExt(AObj: TOpenPictureDialog): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetFilterExt());
  handleExceptionEnd
end;

//function
function OpenPictureDialog_Class(): TClass; extdecl;
begin
  Result := TOpenPictureDialog;
end;


exports
  OpenPictureDialog_Create,
  OpenPictureDialog_DefaultFilter,
  OpenPictureDialog_GetFilterExt,
  OpenPictureDialog_Class;