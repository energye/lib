// constructor
function TMemoryStream_Create(): TMemoryStream; extdecl;
begin
  {$define handleExceptionID := 11300}
  handleExceptionBegin
  Result := TMemoryStream.Create();
  handleExceptionEnd
end;

// procedure
procedure TMemoryStream_Clear(AObj: TMemoryStream); extdecl;
begin
  {$define handleExceptionID := 11301}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TMemoryStream_LoadFromStream(AObj: TMemoryStream; Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 11302}
  handleExceptionBegin
  AObj.LoadFromStream(Stream);
  handleExceptionEnd
end;

// procedure
procedure TMemoryStream_LoadFromFile(AObj: TMemoryStream; const FileName: PChar); extdecl;
begin
  {$define handleExceptionID := 11303}
  handleExceptionBegin
  AObj.LoadFromFile(FileName);
  handleExceptionEnd
end;

// procedure
procedure TMemoryStream_SetSizeWithInt64(AObj: TMemoryStream; var NewSize: Int64); extdecl;
begin
  {$define handleExceptionID := 11304}
  handleExceptionBegin
  AObj.SetSize(NewSize);
  handleExceptionEnd
end;

exports
  TMemoryStream_Create,
  TMemoryStream_Clear,
  TMemoryStream_LoadFromStream,
  TMemoryStream_LoadFromFile,
  TMemoryStream_SetSizeWithInt64;