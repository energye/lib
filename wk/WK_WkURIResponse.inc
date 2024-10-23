
//constructor
function WkURIResponse_Create(aURIResponse: WebKitURIResponse): TWkURIResponse; extdecl;
begin
  handleExceptionBegin
  Result := TWkURIResponse.Create(aURIResponse);
  handleExceptionEnd
end;

//property
function WkURIResponse_URI(AObj: TWkURIResponse): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.URI);
  handleExceptionEnd
end;

//function
function WkURIResponse_Headers(AObj: TWkURIResponse): PSoupMessageHeaders; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Headers();
  handleExceptionEnd
end;

//function
function WkURIResponse_GetStatusCode(AObj: TWkURIResponse): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetStatusCode();
  handleExceptionEnd
end;

//function
procedure WkURIResponse_GetContentLength(AObj: TWkURIResponse; var Result: uint64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetContentLength();
  handleExceptionEnd
end;

//function
function WkURIResponse_GetMimeType(AObj: TWkURIResponse): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetMimeType());
  handleExceptionEnd
end;

//function
function WkURIResponse_GetSuggestedFilename(AObj: TWkURIResponse): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetSuggestedFilename());
  handleExceptionEnd
end;


exports
  WkURIResponse_Create,
  WkURIResponse_URI,
  WkURIResponse_Headers,
  WkURIResponse_GetStatusCode,
  WkURIResponse_GetContentLength,
  WkURIResponse_GetMimeType,
  WkURIResponse_GetSuggestedFilename;