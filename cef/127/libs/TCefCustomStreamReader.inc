// constructor
function TCefCustomStreamReader_Create(Stream: TStream; Owned: LongBool; out IntfCustomStreamReader: ICefCustomStreamReader): TCefCustomStreamReader; extdecl;
begin
  {$define handleExceptionID := 18500}
  handleExceptionBegin
  Result := TCefCustomStreamReader.Create(Stream, Owned);
  IntfCustomStreamReader := Result as ICefCustomStreamReader;
  handleExceptionEnd
end;

// constructor
function TCefCustomStreamReader_CreateWithStr(const filename: PChar; out IntfCustomStreamReader: ICefCustomStreamReader): TCefCustomStreamReader; extdecl;
begin
  {$define handleExceptionID := 18501}
  handleExceptionBegin
  Result := TCefCustomStreamReader.Create(filename);
  IntfCustomStreamReader := Result as ICefCustomStreamReader;
  handleExceptionEnd
end;

// function
function TCefCustomStreamReader_Read(AObj: ICefCustomStreamReader; ptr: Pointer; size: NativeUInt; n: NativeUInt): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 18502}
  handleExceptionBegin
  Result := AObj.Read(ptr, size, n);
  handleExceptionEnd
end;

// function
function TCefCustomStreamReader_Seek(AObj: ICefCustomStreamReader; var offset: Int64; whence: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 18503}
  handleExceptionBegin
  Result := AObj.Seek(offset, whence);
  handleExceptionEnd
end;

// function
procedure TCefCustomStreamReader_Tell(AObj: ICefCustomStreamReader; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 18504}
  handleExceptionBegin
  Result := AObj.Tell();
  handleExceptionEnd
end;

// function
function TCefCustomStreamReader_Eof(AObj: ICefCustomStreamReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 18505}
  handleExceptionBegin
  Result := AObj.Eof();
  handleExceptionEnd
end;

// function
function TCefCustomStreamReader_MayBlock(AObj: ICefCustomStreamReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 18506}
  handleExceptionBegin
  Result := AObj.MayBlock();
  handleExceptionEnd
end;

exports
  TCefCustomStreamReader_Create,
  TCefCustomStreamReader_CreateWithStr,
  TCefCustomStreamReader_Read,
  TCefCustomStreamReader_Seek,
  TCefCustomStreamReader_Tell,
  TCefCustomStreamReader_Eof,
  TCefCustomStreamReader_MayBlock;