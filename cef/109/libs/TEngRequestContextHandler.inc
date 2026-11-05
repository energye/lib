// constructor
function TEngRequestContextHandler_Create(out IntfRequestContextHandler: ICefRequestContextHandler): TEngRequestContextHandler; extdecl;
begin
  {$define handleExceptionID := 12900}
  handleExceptionBegin
  Result := TEngRequestContextHandler.Create();
  IntfRequestContextHandler := Result as ICefRequestContextHandler;
  handleExceptionEnd
end;

// event
procedure TEngRequestContextHandler_OnRequestContextRequestContextInitialized(AObj: TEngRequestContextHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRequestContextHandler_TOnRequestContextRequestContextInitializedEvent}
  {$DEFINE EventName := OnRequestContextRequestContextInitialized}
  CEFEventMethodCode
end;

// event
procedure TEngRequestContextHandler_OnRequestContextGetResourceRequestHandler(AObj: TEngRequestContextHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRequestContextHandler_TOnRequestContextGetResourceRequestHandlerEvent}
  {$DEFINE EventName := OnRequestContextGetResourceRequestHandler}
  CEFEventMethodCode
end;

exports
  TEngRequestContextHandler_Create,
  TEngRequestContextHandler_OnRequestContextRequestContextInitialized,
  TEngRequestContextHandler_OnRequestContextGetResourceRequestHandler;