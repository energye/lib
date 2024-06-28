
//constructor
function CustomMemoryStream_Create(): TCustomMemoryStream; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomMemoryStream.Create();
  handleExceptionEnd
end;

//property
function CustomMemoryStream_Memory(AObj: TCustomMemoryStream): Pointer; extdecl;
begin
  {$define handleExceptionFuncName :='Memory'}
  handleExceptionBegin
  Result := AObj.Memory;
  handleExceptionEnd
end;

//function
function CustomMemoryStream_Class(): TClass; extdecl;
begin
  Result := TCustomMemoryStream;
end;

//procedure
procedure CustomMemoryStream_SaveToStream(AObj: TCustomMemoryStream; Stream: TStream); extdecl;
begin
  {$define handleExceptionFuncName :='SaveToStream'}
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure CustomMemoryStream_SaveToFile(AObj: TCustomMemoryStream; const FileName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SaveToFile'}
  handleExceptionBegin
  AObj.SaveToFile(FileName);
  handleExceptionEnd
end;


exports
  CustomMemoryStream_Create,
  CustomMemoryStream_Memory,
  CustomMemoryStream_Class,
  CustomMemoryStream_SaveToStream,
  CustomMemoryStream_SaveToFile;