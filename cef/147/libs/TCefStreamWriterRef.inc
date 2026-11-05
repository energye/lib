// constructor
function TCefStreamWriterRef_Create(data: Pointer; out IntfStreamWriter: ICefStreamWriter): TCefStreamWriterRef; extdecl;
begin
  {$define handleExceptionID := 21400}
  handleExceptionBegin
  Result := TCefStreamWriterRef.Create(data);
  IntfStreamWriter := Result as ICefStreamWriter;
  handleExceptionEnd
end;

// function
function TCefStreamWriterRef_write(AObj: ICefStreamWriter; const ptr: Pointer; size: NativeUInt; n: NativeUInt): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 21401}
  handleExceptionBegin
  Result := AObj.write(ptr, size, n);
  handleExceptionEnd
end;

// function
function TCefStreamWriterRef_Seek(AObj: ICefStreamWriter; var offset: Int64; whence: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 21402}
  handleExceptionBegin
  Result := AObj.Seek(offset, whence);
  handleExceptionEnd
end;

// function
procedure TCefStreamWriterRef_Tell(AObj: ICefStreamWriter; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 21403}
  handleExceptionBegin
  Result := AObj.Tell();
  handleExceptionEnd
end;

// function
function TCefStreamWriterRef_Flush(AObj: ICefStreamWriter): Integer; extdecl;
begin
  {$define handleExceptionID := 21404}
  handleExceptionBegin
  Result := AObj.Flush();
  handleExceptionEnd
end;

// function
function TCefStreamWriterRef_MayBlock(AObj: ICefStreamWriter): LongBool; extdecl;
begin
  {$define handleExceptionID := 21405}
  handleExceptionBegin
  Result := AObj.MayBlock();
  handleExceptionEnd
end;

// function static
procedure TCefStreamWriterRef_UnWrap(data: Pointer; var Result: ICefStreamWriter); extdecl;
begin
  Result := TCefStreamWriterRef.UnWrap(data);
end;

// function static
procedure TCefStreamWriterRef_CreateForFile(const fileName: PChar; var Result: ICefStreamWriter); extdecl;
begin
  Result := TCefStreamWriterRef.CreateForFile(fileName);
end;

exports
  TCefStreamWriterRef_Create,
  TCefStreamWriterRef_write,
  TCefStreamWriterRef_Seek,
  TCefStreamWriterRef_Tell,
  TCefStreamWriterRef_Flush,
  TCefStreamWriterRef_MayBlock,
  TCefStreamWriterRef_UnWrap,
  TCefStreamWriterRef_CreateForFile;