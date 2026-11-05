// constructor
function TFPImageBitmap_Create(): TFPImageBitmap; extdecl;
begin
  {$define handleExceptionID := 10900}
  handleExceptionBegin
  Result := TFPImageBitmap.Create();
  handleExceptionEnd
end;

// function static
function TFPImageBitmap_IsFileExtensionSupported(const FileExtension: PChar): LongBool; extdecl;
begin
  Result := TFPImageBitmap.IsFileExtensionSupported(FileExtension);
end;

exports
  TFPImageBitmap_Create,
  TFPImageBitmap_IsFileExtensionSupported;