// constructor
function TCefSharedMemoryRegionRef_Create(data: Pointer; out IntfSharedMemoryRegion: ICefSharedMemoryRegion): TCefSharedMemoryRegionRef; extdecl;
begin
  {$define handleExceptionID := 25800}
  handleExceptionBegin
  Result := TCefSharedMemoryRegionRef.Create(data);
  IntfSharedMemoryRegion := Result as ICefSharedMemoryRegion;
  handleExceptionEnd
end;

// function
function TCefSharedMemoryRegionRef_IsValid(AObj: ICefSharedMemoryRegion): LongBool; extdecl;
begin
  {$define handleExceptionID := 25801}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefSharedMemoryRegionRef_Size(AObj: ICefSharedMemoryRegion): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 25802}
  handleExceptionBegin
  Result := AObj.Size();
  handleExceptionEnd
end;

// function
function TCefSharedMemoryRegionRef_Memory(AObj: ICefSharedMemoryRegion): pointer; extdecl;
begin
  {$define handleExceptionID := 25803}
  handleExceptionBegin
  Result := AObj.Memory();
  handleExceptionEnd
end;

// function static
procedure TCefSharedMemoryRegionRef_UnWrap(data: Pointer; var Result: ICefSharedMemoryRegion); extdecl;
begin
  Result := TCefSharedMemoryRegionRef.UnWrap(data);
end;

exports
  TCefSharedMemoryRegionRef_Create,
  TCefSharedMemoryRegionRef_IsValid,
  TCefSharedMemoryRegionRef_Size,
  TCefSharedMemoryRegionRef_Memory,
  TCefSharedMemoryRegionRef_UnWrap;