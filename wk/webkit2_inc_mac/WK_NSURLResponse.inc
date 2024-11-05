
//constructor
function NSURLResponse_Create(): TNSURLResponse; extdecl;
begin
  handleExceptionBegin
  Result := TNSURLResponse.Create();
  handleExceptionEnd
end;

//constructor
function NSURLResponse_Create1(aData: NSURLResponse): TNSURLResponse; extdecl;
begin
  handleExceptionBegin
  Result := TNSURLResponse.Create(aData);
  handleExceptionEnd
end;

//function
function NSURLResponse_Data(AObj: TNSURLResponse): NSURLResponse; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function NSURLResponse_InitWithURLMIMETypeExpectedContentLengthTextEncodingName(AObj: TNSURLResponse; uRL: NSURL; mIMEType: PChar; length: Integer; name: PChar): TNSURLResponse; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InitWithURLMIMETypeExpectedContentLengthTextEncodingName(uRL, mIMEType, length, name);
  handleExceptionEnd
end;

//function
function NSURLResponse_URL(AObj: TNSURLResponse): NSURL; extdecl;
begin
  handleExceptionBegin
  Result := AObj.URL();
  handleExceptionEnd
end;

//function
function NSURLResponse_MIMEType(AObj: TNSURLResponse): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.MIMEType());
  handleExceptionEnd
end;

//function
procedure NSURLResponse_ExpectedContentLength(AObj: TNSURLResponse; var Result: int64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ExpectedContentLength();
  handleExceptionEnd
end;

//function
function NSURLResponse_TextEncodingName(AObj: TNSURLResponse): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.TextEncodingName());
  handleExceptionEnd
end;

//function
function NSURLResponse_SuggestedFilename(AObj: TNSURLResponse): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.SuggestedFilename());
  handleExceptionEnd
end;


exports
  NSURLResponse_Create,
  NSURLResponse_Create1,
  NSURLResponse_Data,
  NSURLResponse_InitWithURLMIMETypeExpectedContentLengthTextEncodingName,
  NSURLResponse_URL,
  NSURLResponse_MIMEType,
  NSURLResponse_ExpectedContentLength,
  NSURLResponse_TextEncodingName,
  NSURLResponse_SuggestedFilename;