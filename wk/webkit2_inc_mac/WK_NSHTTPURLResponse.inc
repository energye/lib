
//constructor
function NSHTTPURLResponse_Create(aData: NSHTTPURLResponse): TNSHTTPURLResponse; extdecl;
begin
  handleExceptionBegin
  Result := TNSHTTPURLResponse.Create(aData);
  handleExceptionEnd
end;

//function
function NSHTTPURLResponse_New(): TNSHTTPURLResponse; extdecl;
begin
  Result := TNSHTTPURLResponse.New();
end;

//function
function NSHTTPURLResponse_LocalizedStringForStatusCode(statusCode: Integer): PChar; extdecl;
begin
  Result := ToPChar(TNSHTTPURLResponse.LocalizedStringForStatusCode(statusCode));
end;

//function
function NSHTTPURLResponse_InitWithURLStatusCodeHTTPVersionHeaderFields(AObj: TNSHTTPURLResponse; url: NSURL; statusCode: Integer; hTTPVersion: PChar; headerFieldsJSONString: PChar): TNSHTTPURLResponse; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InitWithURLStatusCodeHTTPVersionHeaderFields(url, statusCode, hTTPVersion, headerFieldsJSONString);
  handleExceptionEnd
end;

//function
function NSHTTPURLResponse_StatusCode(AObj: TNSHTTPURLResponse): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.StatusCode();
  handleExceptionEnd
end;

//function
function NSHTTPURLResponse_AllHeaderFields(AObj: TNSHTTPURLResponse): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.AllHeaderFields());
  handleExceptionEnd
end;


exports
  NSHTTPURLResponse_Create,
  NSHTTPURLResponse_New,
  NSHTTPURLResponse_LocalizedStringForStatusCode,
  NSHTTPURLResponse_InitWithURLStatusCodeHTTPVersionHeaderFields,
  NSHTTPURLResponse_StatusCode,
  NSHTTPURLResponse_AllHeaderFields;