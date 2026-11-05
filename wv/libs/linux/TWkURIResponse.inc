// constructor
function TWkURIResponse_Create(aURIResponse: WebKitURIResponse): TWkURIResponse; extdecl;
begin
  {$define handleExceptionID := 3200}
  handleExceptionBegin
  Result := TWkURIResponse.Create(aURIResponse);
  handleExceptionEnd
end;

// function
function TWkURIResponse_Data(AObj: TWkURIResponse): WebKitURIResponse; extdecl;
begin
  {$define handleExceptionID := 3201}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkURIResponse_Headers(AObj: TWkURIResponse): PSoupMessageHeaders; extdecl;
begin
  {$define handleExceptionID := 3202}
  handleExceptionBegin
  Result := AObj.Headers();
  handleExceptionEnd
end;

// function
function TWkURIResponse_GetStatusCode(AObj: TWkURIResponse): integer; extdecl;
begin
  {$define handleExceptionID := 3203}
  handleExceptionBegin
  Result := AObj.GetStatusCode();
  handleExceptionEnd
end;

// function
procedure TWkURIResponse_GetContentLength(AObj: TWkURIResponse; var Result: uint64); extdecl;
begin
  {$define handleExceptionID := 3204}
  handleExceptionBegin
  Result := AObj.GetContentLength();
  handleExceptionEnd
end;

// function
procedure TWkURIResponse_GetMimeType(AObj: TWkURIResponse;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3205}
  handleExceptionBegin
  StringBufferCreate(AObj.GetMimeType(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkURIResponse_GetSuggestedFilename(AObj: TWkURIResponse;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3206}
  handleExceptionBegin
  StringBufferCreate(AObj.GetSuggestedFilename(), AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWkURIResponse_URI(AObj: TWkURIResponse; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3207}
  handleExceptionBegin
  StringBufferCreate(AObj.URI, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TWkURIResponse_Create,
  TWkURIResponse_Data,
  TWkURIResponse_Headers,
  TWkURIResponse_GetStatusCode,
  TWkURIResponse_GetContentLength,
  TWkURIResponse_GetMimeType,
  TWkURIResponse_GetSuggestedFilename,
  TWkURIResponse_URI;