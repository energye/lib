// constructor
function TWkURISchemeRequest_Create(URISchemeRequest: WebKitURISchemeRequest): TWkURISchemeRequest; extdecl;
begin
  {$define handleExceptionID := 3300}
  handleExceptionBegin
  Result := TWkURISchemeRequest.Create(URISchemeRequest);
  handleExceptionEnd
end;

// function
function TWkURISchemeRequest_Data(AObj: TWkURISchemeRequest): WebKitURISchemeRequest; extdecl;
begin
  {$define handleExceptionID := 3301}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
procedure TWkURISchemeRequest_Scheme(AObj: TWkURISchemeRequest;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3302}
  handleExceptionBegin
  StringBufferCreate(AObj.Scheme(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkURISchemeRequest_Uri(AObj: TWkURISchemeRequest;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3303}
  handleExceptionBegin
  StringBufferCreate(AObj.Uri(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkURISchemeRequest_Path(AObj: TWkURISchemeRequest;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3304}
  handleExceptionBegin
  StringBufferCreate(AObj.Path(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TWkURISchemeRequest_WebView(AObj: TWkURISchemeRequest): WebKitWebView; extdecl;
begin
  {$define handleExceptionID := 3305}
  handleExceptionBegin
  Result := AObj.WebView();
  handleExceptionEnd
end;

// function
procedure TWkURISchemeRequest_Method(AObj: TWkURISchemeRequest;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3306}
  handleExceptionBegin
  StringBufferCreate(AObj.Method(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TWkURISchemeRequest_Headers(AObj: TWkURISchemeRequest): PSoupMessageHeaders; extdecl;
begin
  {$define handleExceptionID := 3307}
  handleExceptionBegin
  Result := AObj.Headers();
  handleExceptionEnd
end;

// function
function TWkURISchemeRequest_Body(AObj: TWkURISchemeRequest): PInputStream; extdecl;
begin
  {$define handleExceptionID := 3308}
  handleExceptionBegin
  Result := AObj.Body();
  handleExceptionEnd
end;

// procedure
procedure TWkURISchemeRequest_Finish(AObj: TWkURISchemeRequest; stream: PInputStream; var stream_length: int64; content_type: PChar); extdecl;
begin
  {$define handleExceptionID := 3309}
  handleExceptionBegin
  AObj.Finish(stream, stream_length, content_type);
  handleExceptionEnd
end;

// procedure
procedure TWkURISchemeRequest_FinishWithResponse(AObj: TWkURISchemeRequest; response: WebKitURISchemeResponse); extdecl;
begin
  {$define handleExceptionID := 3310}
  handleExceptionBegin
  AObj.FinishWithResponse(response);
  handleExceptionEnd
end;

// procedure
procedure TWkURISchemeRequest_FinishError(AObj: TWkURISchemeRequest; domain: integer; code: integer; errorMessage: PChar); extdecl;
begin
  {$define handleExceptionID := 3311}
  handleExceptionBegin
  AObj.FinishError(domain, code, errorMessage);
  handleExceptionEnd
end;

exports
  TWkURISchemeRequest_Create,
  TWkURISchemeRequest_Data,
  TWkURISchemeRequest_Scheme,
  TWkURISchemeRequest_Uri,
  TWkURISchemeRequest_Path,
  TWkURISchemeRequest_WebView,
  TWkURISchemeRequest_Method,
  TWkURISchemeRequest_Headers,
  TWkURISchemeRequest_Body,
  TWkURISchemeRequest_Finish,
  TWkURISchemeRequest_FinishWithResponse,
  TWkURISchemeRequest_FinishError;