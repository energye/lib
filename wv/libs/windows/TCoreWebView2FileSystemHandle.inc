// constructor
function TCoreWebView2FileSystemHandle_Create(const aBaseIntf: ICoreWebView2FileSystemHandle): TCoreWebView2FileSystemHandle; extdecl;
begin
  {$define handleExceptionID := 7800}
  handleExceptionBegin
  Result := TCoreWebView2FileSystemHandle.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2FileSystemHandle_Initialized(AObj: TCoreWebView2FileSystemHandle): LongBool; extdecl;
begin
  {$define handleExceptionID := 7801}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2FileSystemHandle_BaseIntf(AObj: TCoreWebView2FileSystemHandle; var Result: ICoreWebView2FileSystemHandle); extdecl;
begin
  {$define handleExceptionID := 7802}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2FileSystemHandle_Kind(AObj: TCoreWebView2FileSystemHandle): TWVFileSystemHandleKind; extdecl;
begin
  {$define handleExceptionID := 7803}
  handleExceptionBegin
  Result := AObj.Kind;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2FileSystemHandle_Path(AObj: TCoreWebView2FileSystemHandle; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7804}
  handleExceptionBegin
  StringBufferCreate(AObj.Path, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2FileSystemHandle_Permission(AObj: TCoreWebView2FileSystemHandle): TWVFileSystemHandlePermission; extdecl;
begin
  {$define handleExceptionID := 7805}
  handleExceptionBegin
  Result := AObj.Permission;
  handleExceptionEnd
end;

exports
  TCoreWebView2FileSystemHandle_Create,
  TCoreWebView2FileSystemHandle_Initialized,
  TCoreWebView2FileSystemHandle_BaseIntf,
  TCoreWebView2FileSystemHandle_Kind,
  TCoreWebView2FileSystemHandle_Path,
  TCoreWebView2FileSystemHandle_Permission;