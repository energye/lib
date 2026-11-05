// constructor
function TOpenPictureDialog_Create(TheOwner: TComponent): TOpenPictureDialog; extdecl;
begin
  {$define handleExceptionID := 7500}
  handleExceptionBegin
  Result := TOpenPictureDialog.Create(TheOwner);
  handleExceptionEnd
end;

// function
procedure TOpenPictureDialog_GetFilterExt(AObj: TOpenPictureDialog;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7501}
  handleExceptionBegin
  StringBufferCreate(AObj.GetFilterExt(), AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TOpenPictureDialog_DefaultFilter(AObj: TOpenPictureDialog; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7502}
  handleExceptionBegin
  StringBufferCreate(AObj.DefaultFilter, AStrData, AStrSize);
  handleExceptionEnd
end;

function TOpenPictureDialog_TClass(): TClass; extdecl;
begin
  Result := TOpenPictureDialog;
end;

exports
  TOpenPictureDialog_Create,
  TOpenPictureDialog_GetFilterExt,
  TOpenPictureDialog_DefaultFilter,
  TOpenPictureDialog_TClass;