
//function
procedure CefStreamReader_UnWrap(data: Pointer; var Result: ICefStreamReader); extdecl;
begin
  Result := TCefStreamReaderRef.UnWrap(data);
end;

//function
procedure CefStreamReader_CreateForFile(const filename: PChar; var Result: ICefStreamReader); extdecl;
begin
  Result := TCefStreamReaderRef.CreateForFile(filename);
end;

//function
procedure CefStreamReader_CreateForCustomStream(const stream: ICefCustomStreamReader; var Result: ICefStreamReader); extdecl;
begin
  Result := TCefStreamReaderRef.CreateForCustomStream(stream);
end;

//function
procedure CefStreamReader_CreateForStream(const stream: TSTream; owned: LongBool; var Result: ICefStreamReader); extdecl;
begin
  Result := TCefStreamReaderRef.CreateForStream(stream, owned);
end;

//function
procedure CefStreamReader_CreateForData(data: Pointer; size: NativeUInt; var Result: ICefStreamReader); extdecl;
begin
  Result := TCefStreamReaderRef.CreateForData(data, size);
end;

//function
function CefStreamReader_Read(AObj: ICefStreamReader; ptr: Pointer; size,  n: NativeUInt): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Read(ptr, size,  n);
  handleExceptionEnd
end;

//function
function CefStreamReader_Seek(AObj: ICefStreamReader; var offset: Int64; whence: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Seek(offset, whence);
  handleExceptionEnd
end;

//function
procedure CefStreamReader_Tell(AObj: ICefStreamReader; var Result: Int64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Tell();
  handleExceptionEnd
end;

//function
function CefStreamReader_Eof(AObj: ICefStreamReader): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Eof();
  handleExceptionEnd
end;

//function
function CefStreamReader_MayBlock(AObj: ICefStreamReader): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MayBlock();
  handleExceptionEnd
end;


exports
  CefStreamReader_UnWrap,
  CefStreamReader_CreateForFile,
  CefStreamReader_CreateForCustomStream,
  CefStreamReader_CreateForStream,
  CefStreamReader_CreateForData,
  CefStreamReader_Read,
  CefStreamReader_Seek,
  CefStreamReader_Tell,
  CefStreamReader_Eof,
  CefStreamReader_MayBlock;