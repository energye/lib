// constructor
function TCustomMemoryStream_Create(): TCustomMemoryStream; extdecl;
begin
  {$define handleExceptionID := 11200}
  handleExceptionBegin
  Result := TCustomMemoryStream.Create();
  handleExceptionEnd
end;

// procedure
procedure TCustomMemoryStream_SaveToStream(AObj: TCustomMemoryStream; Stream: TStream); extdecl;
begin
  {$define handleExceptionID := 11201}
  handleExceptionBegin
  AObj.SaveToStream(Stream);
  handleExceptionEnd
end;

// procedure
procedure TCustomMemoryStream_SaveToFile(AObj: TCustomMemoryStream; const FileName: PChar); extdecl;
begin
  {$define handleExceptionID := 11202}
  handleExceptionBegin
  AObj.SaveToFile(FileName);
  handleExceptionEnd
end;

// property
function TCustomMemoryStream_Memory(AObj: TCustomMemoryStream): Pointer; extdecl;
begin
  {$define handleExceptionID := 11203}
  handleExceptionBegin
  Result := AObj.Memory;
  handleExceptionEnd
end;

exports
  TCustomMemoryStream_Create,
  TCustomMemoryStream_SaveToStream,
  TCustomMemoryStream_SaveToFile,
  TCustomMemoryStream_Memory;