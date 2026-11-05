// constructor
function TEngResourceHandler_Create(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: PChar; const request: ICefRequest; out IntfResourceHandler: ICefResourceHandler): TEngResourceHandler; extdecl;
begin
  {$define handleExceptionID := 13900}
  handleExceptionBegin
  Result := TEngResourceHandler.Create(browser, frame, schemeName, request);
  IntfResourceHandler := Result as ICefResourceHandler;
  handleExceptionEnd
end;

// event
procedure TEngResourceHandler_OnResourceOpen(AObj: TEngResourceHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceHandler_TOnResourceOpenEvent}
  {$DEFINE EventName := OnResourceOpen}
  CEFEventMethodCode
end;

// event
procedure TEngResourceHandler_OnResourceProcessRequest(AObj: TEngResourceHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceHandler_TOnResourceProcessRequestEvent}
  {$DEFINE EventName := OnResourceProcessRequest}
  CEFEventMethodCode
end;

// event
procedure TEngResourceHandler_OnResourceSkip(AObj: TEngResourceHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceHandler_TOnResourceSkipEvent}
  {$DEFINE EventName := OnResourceSkip}
  CEFEventMethodCode
end;

// event
procedure TEngResourceHandler_OnResourceRead(AObj: TEngResourceHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceHandler_TOnResourceReadEvent}
  {$DEFINE EventName := OnResourceRead}
  CEFEventMethodCode
end;

// event
procedure TEngResourceHandler_OnResourceReadResponse(AObj: TEngResourceHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceHandler_TOnResourceReadResponseEvent}
  {$DEFINE EventName := OnResourceReadResponse}
  CEFEventMethodCode
end;

// event
procedure TEngResourceHandler_OnResourceGetResponseHeaders(AObj: TEngResourceHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceHandler_TOnResourceGetResponseHeadersEvent}
  {$DEFINE EventName := OnResourceGetResponseHeaders}
  CEFEventMethodCode
end;

// event
procedure TEngResourceHandler_OnResourceCancel(AObj: TEngResourceHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceHandler_TOnResourceCancelEvent}
  {$DEFINE EventName := OnResourceCancel}
  CEFEventMethodCode
end;

exports
  TEngResourceHandler_Create,
  TEngResourceHandler_OnResourceOpen,
  TEngResourceHandler_OnResourceProcessRequest,
  TEngResourceHandler_OnResourceSkip,
  TEngResourceHandler_OnResourceRead,
  TEngResourceHandler_OnResourceReadResponse,
  TEngResourceHandler_OnResourceGetResponseHeaders,
  TEngResourceHandler_OnResourceCancel;