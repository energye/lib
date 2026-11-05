// constructor
function TWkNSURLRequest_Create(AData: NSURLRequest): TWkNSURLRequest; extdecl;
begin
  {$define handleExceptionID := 1300}
  handleExceptionBegin
  Result := TWkNSURLRequest.Create(AData);
  handleExceptionEnd
end;

// function
function TWkNSURLRequest_Data(AObj: TWkNSURLRequest): NSURLRequest; extdecl;
begin
  {$define handleExceptionID := 1301}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function static
function TWkNSURLRequest_New(): TWkNSURLRequest; extdecl;
begin
  Result := TWkNSURLRequest.New();
end;

// function static
function TWkNSURLRequest_RequestWithURL(URL: NSURL): TWkNSURLRequest; extdecl;
begin
  Result := TWkNSURLRequest.RequestWithURL(URL);
end;

// function static
function TWkNSURLRequest_SupportsSecureCoding(): LongBool; extdecl;
begin
  Result := TWkNSURLRequest.SupportsSecureCoding();
end;

// function static
function TWkNSURLRequest_RequestWithURLCachePolicyTimeoutInterval(URL: NSURL; cachePolicy: NSURLRequestCachePolicy; var timeoutInterval: NSTimeInterval): TWkNSURLRequest; extdecl;
begin
  Result := TWkNSURLRequest.RequestWithURLCachePolicyTimeoutInterval(URL, cachePolicy, timeoutInterval);
end;

// function
function TWkNSURLRequest_URL(AObj: TWkNSURLRequest): NSURL; extdecl;
begin
  {$define handleExceptionID := 1302}
  handleExceptionBegin
  Result := AObj.URL();
  handleExceptionEnd
end;

// function
function TWkNSURLRequest_CachePolicy(AObj: TWkNSURLRequest): NSURLRequestCachePolicy; extdecl;
begin
  {$define handleExceptionID := 1303}
  handleExceptionBegin
  Result := AObj.CachePolicy();
  handleExceptionEnd
end;

// function
procedure TWkNSURLRequest_TimeoutInterval(AObj: TWkNSURLRequest; var Result: double); extdecl;
begin
  {$define handleExceptionID := 1304}
  handleExceptionBegin
  Result := AObj.TimeoutInterval();
  handleExceptionEnd
end;

// function
function TWkNSURLRequest_MainDocumentURL(AObj: TWkNSURLRequest): NSURL; extdecl;
begin
  {$define handleExceptionID := 1305}
  handleExceptionBegin
  Result := AObj.MainDocumentURL();
  handleExceptionEnd
end;

// function
function TWkNSURLRequest_NetworkServiceType(AObj: TWkNSURLRequest): NSURLRequestNetworkServiceType; extdecl;
begin
  {$define handleExceptionID := 1306}
  handleExceptionBegin
  Result := AObj.NetworkServiceType();
  handleExceptionEnd
end;

// function
function TWkNSURLRequest_AllowsCellularAccess(AObj: TWkNSURLRequest): LongBool; extdecl;
begin
  {$define handleExceptionID := 1307}
  handleExceptionBegin
  Result := AObj.AllowsCellularAccess();
  handleExceptionEnd
end;

// function
procedure TWkNSURLRequest_HTTPMethod(AObj: TWkNSURLRequest;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1308}
  handleExceptionBegin
  StringBufferCreate(AObj.HTTPMethod(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkNSURLRequest_AllHTTPHeaderFields(AObj: TWkNSURLRequest;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1309}
  handleExceptionBegin
  StringBufferCreate(AObj.AllHTTPHeaderFields(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkNSURLRequest_ValueForHTTPHeaderField(AObj: TWkNSURLRequest; aField: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1310}
  handleExceptionBegin
  StringBufferCreate(AObj.ValueForHTTPHeaderField(aField), AStrData, AStrSize);
  handleExceptionEnd
end;

// procedure
procedure TWkNSURLRequest_Release(AObj: TWkNSURLRequest); extdecl;
begin
  {$define handleExceptionID := 1311}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkNSURLRequest_Create,
  TWkNSURLRequest_Data,
  TWkNSURLRequest_New,
  TWkNSURLRequest_RequestWithURL,
  TWkNSURLRequest_SupportsSecureCoding,
  TWkNSURLRequest_RequestWithURLCachePolicyTimeoutInterval,
  TWkNSURLRequest_URL,
  TWkNSURLRequest_CachePolicy,
  TWkNSURLRequest_TimeoutInterval,
  TWkNSURLRequest_MainDocumentURL,
  TWkNSURLRequest_NetworkServiceType,
  TWkNSURLRequest_AllowsCellularAccess,
  TWkNSURLRequest_HTTPMethod,
  TWkNSURLRequest_AllHTTPHeaderFields,
  TWkNSURLRequest_ValueForHTTPHeaderField,
  TWkNSURLRequest_Release;