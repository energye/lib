// constructor
function TEngResourceRequestHandler_Create(out IntfResourceRequestHandler: ICefResourceRequestHandler): TEngResourceRequestHandler; extdecl;
begin
  {$define handleExceptionID := 15300}
  handleExceptionBegin
  Result := TEngResourceRequestHandler.Create();
  IntfResourceRequestHandler := Result as ICefResourceRequestHandler;
  handleExceptionEnd
end;

// event
procedure TEngResourceRequestHandler_OnResourceRequestBeforeResourceLoad(AObj: TEngResourceRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceRequestHandler_TOnResourceRequestBeforeResourceLoadEvent}
  {$DEFINE EventName := OnResourceRequestBeforeResourceLoad}
  CEFEventMethodCode
end;

// event
procedure TEngResourceRequestHandler_OnResourceRequestResourceResponse(AObj: TEngResourceRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceRequestHandler_TOnResourceRequestResourceResponseEvent}
  {$DEFINE EventName := OnResourceRequestResourceResponse}
  CEFEventMethodCode
end;

// event
procedure TEngResourceRequestHandler_OnResourceRequestGetCookieAccessFilter(AObj: TEngResourceRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceRequestHandler_TOnResourceRequestGetCookieAccessFilterEvent}
  {$DEFINE EventName := OnResourceRequestGetCookieAccessFilter}
  CEFEventMethodCode
end;

// event
procedure TEngResourceRequestHandler_OnResourceRequestGetResourceHandler(AObj: TEngResourceRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceRequestHandler_TOnResourceRequestGetResourceHandlerEvent}
  {$DEFINE EventName := OnResourceRequestGetResourceHandler}
  CEFEventMethodCode
end;

// event
procedure TEngResourceRequestHandler_OnResourceRequestResourceRedirect(AObj: TEngResourceRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceRequestHandler_TOnResourceRequestResourceRedirectEvent}
  {$DEFINE EventName := OnResourceRequestResourceRedirect}
  CEFEventMethodCode
end;

// event
procedure TEngResourceRequestHandler_OnResourceRequestGetResourceResponseFilter(AObj: TEngResourceRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceRequestHandler_TOnResourceRequestGetResourceResponseFilterEvent}
  {$DEFINE EventName := OnResourceRequestGetResourceResponseFilter}
  CEFEventMethodCode
end;

// event
procedure TEngResourceRequestHandler_OnResourceRequestResourceLoadComplete(AObj: TEngResourceRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceRequestHandler_TOnResourceRequestResourceLoadCompleteEvent}
  {$DEFINE EventName := OnResourceRequestResourceLoadComplete}
  CEFEventMethodCode
end;

// event
procedure TEngResourceRequestHandler_OnResourceRequestProtocolExecution(AObj: TEngResourceRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceRequestHandler_TOnResourceRequestProtocolExecutionEvent}
  {$DEFINE EventName := OnResourceRequestProtocolExecution}
  CEFEventMethodCode
end;

exports
  TEngResourceRequestHandler_Create,
  TEngResourceRequestHandler_OnResourceRequestBeforeResourceLoad,
  TEngResourceRequestHandler_OnResourceRequestResourceResponse,
  TEngResourceRequestHandler_OnResourceRequestGetCookieAccessFilter,
  TEngResourceRequestHandler_OnResourceRequestGetResourceHandler,
  TEngResourceRequestHandler_OnResourceRequestResourceRedirect,
  TEngResourceRequestHandler_OnResourceRequestGetResourceResponseFilter,
  TEngResourceRequestHandler_OnResourceRequestResourceLoadComplete,
  TEngResourceRequestHandler_OnResourceRequestProtocolExecution;