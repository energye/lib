
//constructor
function WKNavigationResponse_Create(aData: WKNavigationResponse): TWKNavigationResponse; extdecl;
begin
  handleExceptionBegin
  Result := TWKNavigationResponse.Create(aData);
  handleExceptionEnd
end;

//function
function WKNavigationResponse_New(): TWKNavigationResponse; extdecl;
begin
  Result := TWKNavigationResponse.New();
end;

//function
function WKNavigationResponse_Data(AObj: TWKNavigationResponse): WKNavigationResponse; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function WKNavigationResponse_IsForMainFrame(AObj: TWKNavigationResponse): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsForMainFrame();
  handleExceptionEnd
end;

//function
function WKNavigationResponse_Response(AObj: TWKNavigationResponse): NSURLResponse; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Response();
  handleExceptionEnd
end;

//function
function WKNavigationResponse_CanShowMIMEType(AObj: TWKNavigationResponse): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanShowMIMEType();
  handleExceptionEnd
end;


exports
  WKNavigationResponse_Create,
  WKNavigationResponse_New,
  WKNavigationResponse_Data,
  WKNavigationResponse_IsForMainFrame,
  WKNavigationResponse_Response,
  WKNavigationResponse_CanShowMIMEType;