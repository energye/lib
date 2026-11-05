// constructor
function TCefStreamReaderRef_Create(data: Pointer; out IntfStreamReader: ICefStreamReader): TCefStreamReaderRef; extdecl;
begin
  {$define handleExceptionID := 20500}
  handleExceptionBegin
  Result := TCefStreamReaderRef.Create(data);
  IntfStreamReader := Result as ICefStreamReader;
  handleExceptionEnd
end;

// function
function TCefStreamReaderRef_Read(AObj: ICefStreamReader; ptr: Pointer; size: NativeUInt; n: NativeUInt): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 20501}
  handleExceptionBegin
  Result := AObj.Read(ptr, size, n);
  handleExceptionEnd
end;

// function
function TCefStreamReaderRef_Seek(AObj: ICefStreamReader; var offset: Int64; whence: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 20502}
  handleExceptionBegin
  Result := AObj.Seek(offset, whence);
  handleExceptionEnd
end;

// function
procedure TCefStreamReaderRef_Tell(AObj: ICefStreamReader; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 20503}
  handleExceptionBegin
  Result := AObj.Tell();
  handleExceptionEnd
end;

// function
function TCefStreamReaderRef_Eof(AObj: ICefStreamReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 20504}
  handleExceptionBegin
  Result := AObj.Eof();
  handleExceptionEnd
end;

// function
function TCefStreamReaderRef_MayBlock(AObj: ICefStreamReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 20505}
  handleExceptionBegin
  Result := AObj.MayBlock();
  handleExceptionEnd
end;

// function static
procedure TCefStreamReaderRef_UnWrap(data: Pointer; var Result: ICefStreamReader); extdecl;
begin
  Result := TCefStreamReaderRef.UnWrap(data);
end;

// function static
procedure TCefStreamReaderRef_CreateForFile(const filename: PChar; var Result: ICefStreamReader); extdecl;
begin
  Result := TCefStreamReaderRef.CreateForFile(filename);
end;

// function static
procedure TCefStreamReaderRef_CreateForCustomStream(const stream: ICefCustomStreamReader; var Result: ICefStreamReader); extdecl;
begin
  Result := TCefStreamReaderRef.CreateForCustomStream(stream);
end;

// function static
procedure TCefStreamReaderRef_CreateForStream(const stream: TSTream; owned: LongBool; var Result: ICefStreamReader); extdecl;
begin
  Result := TCefStreamReaderRef.CreateForStream(stream, owned);
end;

// function static
procedure TCefStreamReaderRef_CreateForData(data: Pointer; size: NativeUInt; var Result: ICefStreamReader); extdecl;
begin
  Result := TCefStreamReaderRef.CreateForData(data, size);
end;

exports
  TCefStreamReaderRef_Create,
  TCefStreamReaderRef_Read,
  TCefStreamReaderRef_Seek,
  TCefStreamReaderRef_Tell,
  TCefStreamReaderRef_Eof,
  TCefStreamReaderRef_MayBlock,
  TCefStreamReaderRef_UnWrap,
  TCefStreamReaderRef_CreateForFile,
  TCefStreamReaderRef_CreateForCustomStream,
  TCefStreamReaderRef_CreateForStream,
  TCefStreamReaderRef_CreateForData;