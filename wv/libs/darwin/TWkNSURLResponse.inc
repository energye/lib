// constructor
function TWkNSURLResponse_Create(AData: NSURLResponse): TWkNSURLResponse; extdecl;
begin
  {$define handleExceptionID := 1500}
  handleExceptionBegin
  Result := TWkNSURLResponse.Create(AData);
  handleExceptionEnd
end;

// function
function TWkNSURLResponse_Data(AObj: TWkNSURLResponse): NSURLResponse; extdecl;
begin
  {$define handleExceptionID := 1501}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function static
function TWkNSURLResponse_New(): TWkNSURLResponse; extdecl;
begin
  Result := TWkNSURLResponse.New();
end;

// function
function TWkNSURLResponse_InitWithURLMIMETypeExpectedContentLengthTextEncodingName(AObj: TWkNSURLResponse; URL: NSURL; MIMEType: PChar; length: Integer; name: PChar): TWkNSURLResponse; extdecl;
begin
  {$define handleExceptionID := 1502}
  handleExceptionBegin
  Result := AObj.InitWithURLMIMETypeExpectedContentLengthTextEncodingName(URL, MIMEType, length, name);
  handleExceptionEnd
end;

// function
function TWkNSURLResponse_URL(AObj: TWkNSURLResponse): NSURL; extdecl;
begin
  {$define handleExceptionID := 1503}
  handleExceptionBegin
  Result := AObj.URL();
  handleExceptionEnd
end;

// function
procedure TWkNSURLResponse_MIMEType(AObj: TWkNSURLResponse;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1504}
  handleExceptionBegin
  StringBufferCreate(AObj.MIMEType(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkNSURLResponse_ExpectedContentLength(AObj: TWkNSURLResponse; var Result: int64); extdecl;
begin
  {$define handleExceptionID := 1505}
  handleExceptionBegin
  Result := AObj.ExpectedContentLength();
  handleExceptionEnd
end;

// function
procedure TWkNSURLResponse_TextEncodingName(AObj: TWkNSURLResponse;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1506}
  handleExceptionBegin
  StringBufferCreate(AObj.TextEncodingName(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkNSURLResponse_SuggestedFilename(AObj: TWkNSURLResponse;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1507}
  handleExceptionBegin
  StringBufferCreate(AObj.SuggestedFilename(), AStrData, AStrSize);
  handleExceptionEnd
end;

// procedure
procedure TWkNSURLResponse_Release(AObj: TWkNSURLResponse); extdecl;
begin
  {$define handleExceptionID := 1508}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkNSURLResponse_Create,
  TWkNSURLResponse_Data,
  TWkNSURLResponse_New,
  TWkNSURLResponse_InitWithURLMIMETypeExpectedContentLengthTextEncodingName,
  TWkNSURLResponse_URL,
  TWkNSURLResponse_MIMEType,
  TWkNSURLResponse_ExpectedContentLength,
  TWkNSURLResponse_TextEncodingName,
  TWkNSURLResponse_SuggestedFilename,
  TWkNSURLResponse_Release;