
//function
procedure CefSharedMemoryRegion_UnWrap(data: Pointer; var Result: ICefSharedMemoryRegion); extdecl;
begin
  Result := TCefSharedMemoryRegionRef.UnWrap(data);
end;

//function
function CefSharedMemoryRegion_IsValid(AObj: ICefSharedMemoryRegion): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefSharedMemoryRegion_Size(AObj: ICefSharedMemoryRegion): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Size();
  handleExceptionEnd
end;

//function
function CefSharedMemoryRegion_Memory(AObj: ICefSharedMemoryRegion): pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Memory();
  handleExceptionEnd
end;


exports
  CefSharedMemoryRegion_UnWrap,
  CefSharedMemoryRegion_IsValid,
  CefSharedMemoryRegion_Size,
  CefSharedMemoryRegion_Memory;