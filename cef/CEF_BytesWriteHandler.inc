
//constructor
function CefBytesWriteHandler_Create(aGrow: NativeUInt): TCefBytesWriteHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCefBytesWriteHandler.Create(aGrow);
  handleExceptionEnd
end;

//function
function CefBytesWriteHandler_Write(AObj: TCefBytesWriteHandler; const ptr: Pointer; size,  n: NativeUInt): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Write(ptr, size,  n);
  handleExceptionEnd
end;

//function
function CefBytesWriteHandler_Seek(AObj: TCefBytesWriteHandler; var offset: Int64; whence: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Seek(offset, whence);
  handleExceptionEnd
end;

//function
procedure CefBytesWriteHandler_Tell(AObj: TCefBytesWriteHandler; var Result: Int64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Tell();
  handleExceptionEnd
end;

//function
function CefBytesWriteHandler_Flush(AObj: TCefBytesWriteHandler): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Flush();
  handleExceptionEnd
end;

//function
function CefBytesWriteHandler_MayBlock(AObj: TCefBytesWriteHandler): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MayBlock();
  handleExceptionEnd
end;

//function
function CefBytesWriteHandler_GetData(AObj: TCefBytesWriteHandler): pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetData();
  handleExceptionEnd
end;

//function
procedure CefBytesWriteHandler_GetDataSize(AObj: TCefBytesWriteHandler; var Result: int64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDataSize();
  handleExceptionEnd
end;


exports
  CefBytesWriteHandler_Create,
  CefBytesWriteHandler_Write,
  CefBytesWriteHandler_Seek,
  CefBytesWriteHandler_Tell,
  CefBytesWriteHandler_Flush,
  CefBytesWriteHandler_MayBlock,
  CefBytesWriteHandler_GetData,
  CefBytesWriteHandler_GetDataSize;