// constructor
function TSavePictureDialog_Create(TheOwner: TComponent): TSavePictureDialog; extdecl;
begin
  {$define handleExceptionID := 7600}
  handleExceptionBegin
  Result := TSavePictureDialog.Create(TheOwner);
  handleExceptionEnd
end;

function TSavePictureDialog_TClass(): TClass; extdecl;
begin
  Result := TSavePictureDialog;
end;

exports
  TSavePictureDialog_Create,
  TSavePictureDialog_TClass;