
//constructor
function WkURISchemeRequest_Create(uRISchemeRequest: WebKitURISchemeRequest): TWkURISchemeRequest; extdecl;
begin
  handleExceptionBegin
  Result := TWkURISchemeRequest.Create(uRISchemeRequest);
  handleExceptionEnd
end;

//function
function WkURISchemeRequest_Data(AObj: TWkURISchemeRequest): WebKitURISchemeRequest; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function WkURISchemeRequest_Scheme(AObj: TWkURISchemeRequest): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Scheme());
  handleExceptionEnd
end;

//function
function WkURISchemeRequest_Uri(AObj: TWkURISchemeRequest): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Uri());
  handleExceptionEnd
end;

//function
function WkURISchemeRequest_Path(AObj: TWkURISchemeRequest): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Path());
  handleExceptionEnd
end;

//function
function WkURISchemeRequest_WebView(AObj: TWkURISchemeRequest): WebKitWebView; extdecl;
begin
  handleExceptionBegin
  Result := AObj.WebView();
  handleExceptionEnd
end;

//function
function WkURISchemeRequest_Method(AObj: TWkURISchemeRequest): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Method());
  handleExceptionEnd
end;

//function
procedure WkURISchemeRequest_Headers(AObj: TWkURISchemeRequest; var Result: IWkHeaders); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Headers();
  handleExceptionEnd
end;

//function
procedure WkURISchemeRequest_Body(AObj: TWkURISchemeRequest; var Result: IWkInputStream); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Body();
  handleExceptionEnd
end;

//procedure
procedure WkURISchemeRequest_Finish(AObj: TWkURISchemeRequest; stream: IWkInputStream; var streamlength: int64; contenttype: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Finish(stream, streamlength, contenttype);
  handleExceptionEnd
end;

//procedure
procedure WkURISchemeRequest_FinishWithResponse(AObj: TWkURISchemeRequest; response: WebKitURISchemeResponse); extdecl;
begin
  handleExceptionBegin
  AObj.FinishWithResponse(response);
  handleExceptionEnd
end;

//procedure
procedure WkURISchemeRequest_FinishError(AObj: TWkURISchemeRequest; code: integer; errorMessage: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.FinishError(code, errorMessage);
  handleExceptionEnd
end;


exports
  WkURISchemeRequest_Create,
  WkURISchemeRequest_Data,
  WkURISchemeRequest_Scheme,
  WkURISchemeRequest_Uri,
  WkURISchemeRequest_Path,
  WkURISchemeRequest_WebView,
  WkURISchemeRequest_Method,
  WkURISchemeRequest_Headers,
  WkURISchemeRequest_Body,
  WkURISchemeRequest_Finish,
  WkURISchemeRequest_FinishWithResponse,
  WkURISchemeRequest_FinishError;