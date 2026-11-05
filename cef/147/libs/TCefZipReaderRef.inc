// constructor
function TCefZipReaderRef_Create(data: Pointer; out IntfZipReader: ICefZipReader): TCefZipReaderRef; extdecl;
begin
  {$define handleExceptionID := 23000}
  handleExceptionBegin
  Result := TCefZipReaderRef.Create(data);
  IntfZipReader := Result as ICefZipReader;
  handleExceptionEnd
end;

// function
function TCefZipReaderRef_MoveToFirstFile(AObj: ICefZipReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 23001}
  handleExceptionBegin
  Result := AObj.MoveToFirstFile();
  handleExceptionEnd
end;

// function
function TCefZipReaderRef_MoveToNextFile(AObj: ICefZipReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 23002}
  handleExceptionBegin
  Result := AObj.MoveToNextFile();
  handleExceptionEnd
end;

// function
function TCefZipReaderRef_MoveToFile(AObj: ICefZipReader; const fileName: PChar; caseSensitive: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 23003}
  handleExceptionBegin
  Result := AObj.MoveToFile(PCharToUStr(fileName), caseSensitive);
  handleExceptionEnd
end;

// function
function TCefZipReaderRef_Close(AObj: ICefZipReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 23004}
  handleExceptionBegin
  Result := AObj.Close();
  handleExceptionEnd
end;

// function
procedure TCefZipReaderRef_GetFileName(AObj: ICefZipReader;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 23005}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetFileName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefZipReaderRef_GetFileSize(AObj: ICefZipReader; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 23006}
  handleExceptionBegin
  Result := AObj.GetFileSize();
  handleExceptionEnd
end;

// function
procedure TCefZipReaderRef_GetFileLastModified(AObj: ICefZipReader; var Result: TCefBaseTime); extdecl;
begin
  {$define handleExceptionID := 23007}
  handleExceptionBegin
  Result := AObj.GetFileLastModified();
  handleExceptionEnd
end;

// function
function TCefZipReaderRef_OpenFile(AObj: ICefZipReader; const password: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 23008}
  handleExceptionBegin
  Result := AObj.OpenFile(PCharToUStr(password));
  handleExceptionEnd
end;

// function
function TCefZipReaderRef_CloseFile(AObj: ICefZipReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 23009}
  handleExceptionBegin
  Result := AObj.CloseFile();
  handleExceptionEnd
end;

// function
function TCefZipReaderRef_ReadFile(AObj: ICefZipReader; buffer: Pointer; bufferSize: NativeUInt): Integer; extdecl;
begin
  {$define handleExceptionID := 23010}
  handleExceptionBegin
  Result := AObj.ReadFile(buffer, bufferSize);
  handleExceptionEnd
end;

// function
procedure TCefZipReaderRef_Tell(AObj: ICefZipReader; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 23011}
  handleExceptionBegin
  Result := AObj.Tell();
  handleExceptionEnd
end;

// function
function TCefZipReaderRef_Eof(AObj: ICefZipReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 23012}
  handleExceptionBegin
  Result := AObj.Eof();
  handleExceptionEnd
end;

// function static
procedure TCefZipReaderRef_UnWrap(data: Pointer; var Result: ICefZipReader); extdecl;
begin
  Result := TCefZipReaderRef.UnWrap(data);
end;

// function static
procedure TCefZipReaderRef_New(const stream: ICefStreamReader; var Result: ICefZipReader); extdecl;
begin
  Result := TCefZipReaderRef.New(stream);
end;

exports
  TCefZipReaderRef_Create,
  TCefZipReaderRef_MoveToFirstFile,
  TCefZipReaderRef_MoveToNextFile,
  TCefZipReaderRef_MoveToFile,
  TCefZipReaderRef_Close,
  TCefZipReaderRef_GetFileName,
  TCefZipReaderRef_GetFileSize,
  TCefZipReaderRef_GetFileLastModified,
  TCefZipReaderRef_OpenFile,
  TCefZipReaderRef_CloseFile,
  TCefZipReaderRef_ReadFile,
  TCefZipReaderRef_Tell,
  TCefZipReaderRef_Eof,
  TCefZipReaderRef_UnWrap,
  TCefZipReaderRef_New;