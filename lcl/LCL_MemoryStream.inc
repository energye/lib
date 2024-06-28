
//constructor
function MemoryStream_Create(): TMemoryStream; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TMemoryStream.Create();
  handleExceptionEnd
end;

//function
function MemoryStream_Class(): TClass; extdecl;
begin
  Result := TMemoryStream;
end;

//procedure
procedure MemoryStream_Clear(AObj: TMemoryStream); extdecl;
begin
  {$define handleExceptionFuncName :='Clear'}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure MemoryStream_LoadFromStream(AObj: TMemoryStream; Stream: TStream); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromStream'}
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

//procedure
procedure MemoryStream_LoadFromFile(AObj: TMemoryStream; const FileName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='LoadFromFile'}
  handleExceptionBegin
  AObj.LoadFromFile(FileName);
  handleExceptionEnd
end;


exports
  MemoryStream_Create,
  MemoryStream_Class,
  MemoryStream_Clear,
  MemoryStream_LoadFromStream,
  MemoryStream_LoadFromFile;