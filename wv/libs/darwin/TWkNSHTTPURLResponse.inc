// constructor
function TWkNSHTTPURLResponse_Create(AData: NSHTTPURLResponse): TWkNSHTTPURLResponse; extdecl;
begin
  {$define handleExceptionID := 1600}
  handleExceptionBegin
  Result := TWkNSHTTPURLResponse.Create(AData);
  handleExceptionEnd
end;

// function static
function TWkNSHTTPURLResponse_NewToWkNSHTTPURLResponse(): TWkNSHTTPURLResponse; extdecl;
begin
  Result := TWkNSHTTPURLResponse.New();
end;

// function
function TWkNSHTTPURLResponse_InitWithURLStatusCodeHTTPVersionHeaderFields(AObj: TWkNSHTTPURLResponse; url_: NSURL; statusCode: Integer; HTTPVersion: PChar; headerFieldsJSONString: PChar): TWkNSHTTPURLResponse; extdecl;
begin
  {$define handleExceptionID := 1601}
  handleExceptionBegin
  Result := AObj.InitWithURLStatusCodeHTTPVersionHeaderFields(url_, statusCode, HTTPVersion, headerFieldsJSONString);
  handleExceptionEnd
end;

// function
function TWkNSHTTPURLResponse_StatusCode(AObj: TWkNSHTTPURLResponse): Integer; extdecl;
begin
  {$define handleExceptionID := 1602}
  handleExceptionBegin
  Result := AObj.StatusCode();
  handleExceptionEnd
end;

// function
procedure TWkNSHTTPURLResponse_AllHeaderFields(AObj: TWkNSHTTPURLResponse;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1603}
  handleExceptionBegin
  StringBufferCreate(AObj.AllHeaderFields(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function static
function TWkNSHTTPURLResponse_LocalizedStringForStatusCode(statusCode_: Integer): PChar; extdecl;
begin
  Result := ToPChar(TWkNSHTTPURLResponse.LocalizedStringForStatusCode(statusCode_));
end;

// procedure
procedure TWkNSHTTPURLResponse_Release(AObj: TWkNSHTTPURLResponse); extdecl;
begin
  {$define handleExceptionID := 1604}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkNSHTTPURLResponse_Create,
  TWkNSHTTPURLResponse_NewToWkNSHTTPURLResponse,
  TWkNSHTTPURLResponse_InitWithURLStatusCodeHTTPVersionHeaderFields,
  TWkNSHTTPURLResponse_StatusCode,
  TWkNSHTTPURLResponse_AllHeaderFields,
  TWkNSHTTPURLResponse_LocalizedStringForStatusCode,
  TWkNSHTTPURLResponse_Release;