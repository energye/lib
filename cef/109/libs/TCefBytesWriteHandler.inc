// constructor
function TCefBytesWriteHandler_Create(aGrow: NativeUInt; out IntfWriteHandler: ICefWriteHandler): TCefBytesWriteHandler; extdecl;
begin
  {$define handleExceptionID := 4900}
  handleExceptionBegin
  Result := TCefBytesWriteHandler.Create(aGrow);
  IntfWriteHandler := Result as ICefWriteHandler;
  handleExceptionEnd
end;

// function
function TCefBytesWriteHandler_Write(AObj: TCefBytesWriteHandler; const ptr: Pointer; size: NativeUInt; n: NativeUInt): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 4901}
  handleExceptionBegin
  Result := AObj.Write(ptr, size, n);
  handleExceptionEnd
end;

// function
function TCefBytesWriteHandler_Seek(AObj: TCefBytesWriteHandler; var offset: Int64; whence: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 4902}
  handleExceptionBegin
  Result := AObj.Seek(offset, whence);
  handleExceptionEnd
end;

// function
procedure TCefBytesWriteHandler_Tell(AObj: TCefBytesWriteHandler; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 4903}
  handleExceptionBegin
  Result := AObj.Tell();
  handleExceptionEnd
end;

// function
function TCefBytesWriteHandler_Flush(AObj: TCefBytesWriteHandler): Integer; extdecl;
begin
  {$define handleExceptionID := 4904}
  handleExceptionBegin
  Result := AObj.Flush();
  handleExceptionEnd
end;

// function
function TCefBytesWriteHandler_MayBlock(AObj: TCefBytesWriteHandler): LongBool; extdecl;
begin
  {$define handleExceptionID := 4905}
  handleExceptionBegin
  Result := AObj.MayBlock();
  handleExceptionEnd
end;

// function
function TCefBytesWriteHandler_GetData(AObj: TCefBytesWriteHandler): pointer; extdecl;
begin
  {$define handleExceptionID := 4906}
  handleExceptionBegin
  Result := AObj.GetData();
  handleExceptionEnd
end;

// function
procedure TCefBytesWriteHandler_GetDataSize(AObj: TCefBytesWriteHandler; var Result: int64); extdecl;
begin
  {$define handleExceptionID := 4907}
  handleExceptionBegin
  Result := AObj.GetDataSize();
  handleExceptionEnd
end;

exports
  TCefBytesWriteHandler_Create,
  TCefBytesWriteHandler_Write,
  TCefBytesWriteHandler_Seek,
  TCefBytesWriteHandler_Tell,
  TCefBytesWriteHandler_Flush,
  TCefBytesWriteHandler_MayBlock,
  TCefBytesWriteHandler_GetData,
  TCefBytesWriteHandler_GetDataSize;