
//constructor
function CefBytesWriteHandler_Create(aGrow: NativeUInt): TCefBytesWriteHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefBytesWriteHandler.Create(aGrow);
  handleExceptionEnd
end;

//procedure
procedure CefBytesWriteHandler_AsInterface(AObj: TCefBytesWriteHandler; var Result: ICefWriteHandler); extdecl;
begin
  Result := AObj as ICefWriteHandler;
end;

//function
function CefBytesWriteHandler_Write(AObj: TCefBytesWriteHandler; const ptr: Pointer; size,  n: NativeUInt): NativeUInt; extdecl;
begin
  {$define handleExceptionFuncName :='Write'}
  handleExceptionBegin
  Result := AObj.Write(ptr, size,  n);
  handleExceptionEnd
end;

//function
function CefBytesWriteHandler_Seek(AObj: TCefBytesWriteHandler; var offset: Int64; whence: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Seek'}
  handleExceptionBegin
  Result := AObj.Seek(offset, whence);
  handleExceptionEnd
end;

//function
procedure CefBytesWriteHandler_Tell(AObj: TCefBytesWriteHandler; var Result: Int64); extdecl;
begin
  {$define handleExceptionFuncName :='Tell'}
  handleExceptionBegin
  Result := AObj.Tell();
  handleExceptionEnd
end;

//function
function CefBytesWriteHandler_Flush(AObj: TCefBytesWriteHandler): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Flush'}
  handleExceptionBegin
  Result := AObj.Flush();
  handleExceptionEnd
end;

//function
function CefBytesWriteHandler_MayBlock(AObj: TCefBytesWriteHandler): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MayBlock'}
  handleExceptionBegin
  Result := AObj.MayBlock();
  handleExceptionEnd
end;

//function
function CefBytesWriteHandler_GetData(AObj: TCefBytesWriteHandler): pointer; extdecl;
begin
  {$define handleExceptionFuncName :='GetData'}
  handleExceptionBegin
  Result := AObj.GetData();
  handleExceptionEnd
end;

//function
procedure CefBytesWriteHandler_GetDataSize(AObj: TCefBytesWriteHandler; var Result: int64); extdecl;
begin
  {$define handleExceptionFuncName :='GetDataSize'}
  handleExceptionBegin
  Result := AObj.GetDataSize();
  handleExceptionEnd
end;


exports
  CefBytesWriteHandler_Create,
  CefBytesWriteHandler_AsInterface,
  CefBytesWriteHandler_Write,
  CefBytesWriteHandler_Seek,
  CefBytesWriteHandler_Tell,
  CefBytesWriteHandler_Flush,
  CefBytesWriteHandler_MayBlock,
  CefBytesWriteHandler_GetData,
  CefBytesWriteHandler_GetDataSize;