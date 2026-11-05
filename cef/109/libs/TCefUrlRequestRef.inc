// constructor
function TCefUrlRequestRef_Create(data: Pointer; out IntfUrlRequest: ICefUrlRequest): TCefUrlRequestRef; extdecl;
begin
  {$define handleExceptionID := 21100}
  handleExceptionBegin
  Result := TCefUrlRequestRef.Create(data);
  IntfUrlRequest := Result as ICefUrlRequest;
  handleExceptionEnd
end;

// function
procedure TCefUrlRequestRef_GetRequest(AObj: ICefUrlRequest; var Result: ICefRequest); extdecl;
begin
  {$define handleExceptionID := 21101}
  handleExceptionBegin
  Result := AObj.GetRequest();
  handleExceptionEnd
end;

// function
function TCefUrlRequestRef_GetRequestStatus(AObj: ICefUrlRequest): TCefUrlRequestStatus; extdecl;
begin
  {$define handleExceptionID := 21102}
  handleExceptionBegin
  Result := AObj.GetRequestStatus();
  handleExceptionEnd
end;

// function
function TCefUrlRequestRef_GetRequestError(AObj: ICefUrlRequest): Integer; extdecl;
begin
  {$define handleExceptionID := 21103}
  handleExceptionBegin
  Result := AObj.GetRequestError();
  handleExceptionEnd
end;

// function
procedure TCefUrlRequestRef_GetResponse(AObj: ICefUrlRequest; var Result: ICefResponse); extdecl;
begin
  {$define handleExceptionID := 21104}
  handleExceptionBegin
  Result := AObj.GetResponse();
  handleExceptionEnd
end;

// function
function TCefUrlRequestRef_GetResponseWasCached(AObj: ICefUrlRequest): LongBool; extdecl;
begin
  {$define handleExceptionID := 21105}
  handleExceptionBegin
  Result := AObj.GetResponseWasCached();
  handleExceptionEnd
end;

// function static
procedure TCefUrlRequestRef_UnWrap(data: Pointer; var Result: ICefUrlRequest); extdecl;
begin
  Result := TCefUrlRequestRef.UnWrap(data);
end;

// function static
procedure TCefUrlRequestRef_New(const request: ICefRequest; const client: ICefUrlRequestClient; const requestContext: ICefRequestContext; var Result: ICefUrlRequest); extdecl;
begin
  Result := TCefUrlRequestRef.New(request, client, requestContext);
end;

// procedure
procedure TCefUrlRequestRef_Cancel(AObj: ICefUrlRequest); extdecl;
begin
  {$define handleExceptionID := 21106}
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;

exports
  TCefUrlRequestRef_Create,
  TCefUrlRequestRef_GetRequest,
  TCefUrlRequestRef_GetRequestStatus,
  TCefUrlRequestRef_GetRequestError,
  TCefUrlRequestRef_GetResponse,
  TCefUrlRequestRef_GetResponseWasCached,
  TCefUrlRequestRef_UnWrap,
  TCefUrlRequestRef_New,
  TCefUrlRequestRef_Cancel;