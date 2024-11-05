
//constructor
function WKNavigationResponse_Create(): TWKNavigationResponse; extdecl;
begin
  handleExceptionBegin
  Result := TWKNavigationResponse.Create();
  handleExceptionEnd
end;

//constructor
function WKNavigationResponse_Create1(aData: WKNavigationResponse): TWKNavigationResponse; extdecl;
begin
  handleExceptionBegin
  Result := TWKNavigationResponse.Create(aData);
  handleExceptionEnd
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
  WKNavigationResponse_Create1,
  WKNavigationResponse_Data,
  WKNavigationResponse_IsForMainFrame,
  WKNavigationResponse_Response,
  WKNavigationResponse_CanShowMIMEType;