
//function
procedure CefStreamWriter_UnWrap(data: Pointer; var Result: ICefStreamWriter); extdecl;
begin
  Result := TCefStreamWriterRef.UnWrap(data);
end;

//function
procedure CefStreamWriter_CreateForFile(const fileName: PChar; var Result: ICefStreamWriter); extdecl;
begin
  Result := TCefStreamWriterRef.CreateForFile(fileName);
end;

//function
function CefStreamWriter_Write(AObj: ICefStreamWriter; const ptr: Pointer; size,  n: NativeUInt): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.write(ptr, size,  n);
  handleExceptionEnd
end;

//function
function CefStreamWriter_Seek(AObj: ICefStreamWriter; var offset: Int64; whence: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Seek(offset, whence);
  handleExceptionEnd
end;

//function
procedure CefStreamWriter_Tell(AObj: ICefStreamWriter; var Result: Int64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Tell();
  handleExceptionEnd
end;

//function
function CefStreamWriter_Flush(AObj: ICefStreamWriter): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Flush();
  handleExceptionEnd
end;

//function
function CefStreamWriter_MayBlock(AObj: ICefStreamWriter): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MayBlock();
  handleExceptionEnd
end;


exports
  CefStreamWriter_UnWrap,
  CefStreamWriter_CreateForFile,
  CefStreamWriter_Write,
  CefStreamWriter_Seek,
  CefStreamWriter_Tell,
  CefStreamWriter_Flush,
  CefStreamWriter_MayBlock;