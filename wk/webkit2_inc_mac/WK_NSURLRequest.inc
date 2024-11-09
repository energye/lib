
//constructor
function NSURLRequest_Create(aData: NSURLRequest): TNSURLRequest; extdecl;
begin
  handleExceptionBegin
  Result := TNSURLRequest.Create(aData);
  handleExceptionEnd
end;

//function
function NSURLRequest_New(): TNSURLRequest; extdecl;
begin
  Result := TNSURLRequest.New();
end;

//function
function NSURLRequest_RequestWithURL(uRL: NSURL): TNSURLRequest; extdecl;
begin
  Result := TNSURLRequest.RequestWithURL(uRL);
end;

//function
function NSURLRequest_SupportsSecureCoding(): LongBool; extdecl;
begin
  Result := TNSURLRequest.SupportsSecureCoding();
end;

//function
function NSURLRequest_RequestWithURLCachePolicyTimeoutInterval(uRL: NSURL; cachePolicy: NSURLRequestCachePolicy; var timeoutInterval: NSTimeInterval): TNSURLRequest; extdecl;
begin
  Result := TNSURLRequest.RequestWithURLCachePolicyTimeoutInterval(uRL, cachePolicy, timeoutInterval);
end;

//function
function NSURLRequest_Data(AObj: TNSURLRequest): NSURLRequest; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function NSURLRequest_URL(AObj: TNSURLRequest): NSURL; extdecl;
begin
  handleExceptionBegin
  Result := AObj.URL();
  handleExceptionEnd
end;

//function
function NSURLRequest_CachePolicy(AObj: TNSURLRequest): NSURLRequestCachePolicy; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CachePolicy();
  handleExceptionEnd
end;

//function
procedure NSURLRequest_TimeoutInterval(AObj: TNSURLRequest; var Result: double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.TimeoutInterval();
  handleExceptionEnd
end;

//function
function NSURLRequest_MainDocumentURL(AObj: TNSURLRequest): NSURL; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MainDocumentURL();
  handleExceptionEnd
end;

//function
function NSURLRequest_NetworkServiceType(AObj: TNSURLRequest): NSURLRequestNetworkServiceType; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NetworkServiceType();
  handleExceptionEnd
end;

//function
function NSURLRequest_AllowsCellularAccess(AObj: TNSURLRequest): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AllowsCellularAccess();
  handleExceptionEnd
end;

//function
function NSURLRequest_HTTPMethod(AObj: TNSURLRequest): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.HTTPMethod());
  handleExceptionEnd
end;

//function
function NSURLRequest_AllHTTPHeaderFields(AObj: TNSURLRequest): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.AllHTTPHeaderFields());
  handleExceptionEnd
end;

//function
function NSURLRequest_ValueForHTTPHeaderField(AObj: TNSURLRequest; aField: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ValueForHTTPHeaderField(aField));
  handleExceptionEnd
end;

//procedure
procedure NSURLRequest_Release(AObj: TNSURLRequest); extdecl;
begin
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;


exports
  NSURLRequest_Create,
  NSURLRequest_New,
  NSURLRequest_RequestWithURL,
  NSURLRequest_SupportsSecureCoding,
  NSURLRequest_RequestWithURLCachePolicyTimeoutInterval,
  NSURLRequest_Data,
  NSURLRequest_URL,
  NSURLRequest_CachePolicy,
  NSURLRequest_TimeoutInterval,
  NSURLRequest_MainDocumentURL,
  NSURLRequest_NetworkServiceType,
  NSURLRequest_AllowsCellularAccess,
  NSURLRequest_HTTPMethod,
  NSURLRequest_AllHTTPHeaderFields,
  NSURLRequest_ValueForHTTPHeaderField,
  NSURLRequest_Release;