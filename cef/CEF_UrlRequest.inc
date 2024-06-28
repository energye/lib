
//function
procedure CefUrlRequest_UnWrap(data: Pointer; var Result: ICefUrlRequest); extdecl;
begin
  Result := TCefUrlRequestRef.UnWrap(data);
end;

//function
procedure CefUrlRequest_New(const request: ICefRequest; const client: ICefUrlRequestClient; const requestContext: ICefRequestContext; var Result: ICefUrlRequest); extdecl;
begin
  Result := TCefUrlRequestRef.New(request, client, requestContext);
end;

//function
procedure CefUrlRequest_GetRequest(AObj: ICefUrlRequest; var Result: ICefRequest); extdecl;
begin
  {$define handleExceptionFuncName :='GetRequest'}
  handleExceptionBegin
  Result := AObj.GetRequest();
  handleExceptionEnd
end;

//function
procedure CefUrlRequest_GetClient(AObj: ICefUrlRequest; var Result: ICefUrlrequestClient); extdecl;
begin
  {$define handleExceptionFuncName :='GetClient'}
  handleExceptionBegin
  Result := AObj.GetClient();
  handleExceptionEnd
end;

//function
function CefUrlRequest_GetRequestStatus(AObj: ICefUrlRequest): TCefUrlRequestStatus; extdecl;
begin
  {$define handleExceptionFuncName :='GetRequestStatus'}
  handleExceptionBegin
  Result := AObj.GetRequestStatus();
  handleExceptionEnd
end;

//function
function CefUrlRequest_GetRequestError(AObj: ICefUrlRequest): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetRequestError'}
  handleExceptionBegin
  Result := AObj.GetRequestError();
  handleExceptionEnd
end;

//function
procedure CefUrlRequest_GetResponse(AObj: ICefUrlRequest; var Result: ICefResponse); extdecl;
begin
  {$define handleExceptionFuncName :='GetResponse'}
  handleExceptionBegin
  Result := AObj.GetResponse();
  handleExceptionEnd
end;

//function
function CefUrlRequest_GetResponseWasCached(AObj: ICefUrlRequest): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='GetResponseWasCached'}
  handleExceptionBegin
  Result := AObj.GetResponseWasCached();
  handleExceptionEnd
end;

//procedure
procedure CefUrlRequest_Cancel(AObj: ICefUrlRequest); extdecl;
begin
  {$define handleExceptionFuncName :='Cancel'}
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;


exports
  CefUrlRequest_UnWrap,
  CefUrlRequest_New,
  CefUrlRequest_GetRequest,
  CefUrlRequest_GetClient,
  CefUrlRequest_GetRequestStatus,
  CefUrlRequest_GetRequestError,
  CefUrlRequest_GetResponse,
  CefUrlRequest_GetResponseWasCached,
  CefUrlRequest_Cancel;