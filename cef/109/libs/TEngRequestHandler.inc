// constructor
function TEngRequestHandler_Create(out IntfRequestHandler: ICefRequestHandler): TEngRequestHandler; extdecl;
begin
  {$define handleExceptionID := 13000}
  handleExceptionBegin
  Result := TEngRequestHandler.Create();
  IntfRequestHandler := Result as ICefRequestHandler;
  handleExceptionEnd
end;

// event
procedure TEngRequestHandler_OnRequestBeforeBrowse(AObj: TEngRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRequestHandler_TOnRequestBeforeBrowseEvent}
  {$DEFINE EventName := OnRequestBeforeBrowse}
  CEFEventMethodCode
end;

// event
procedure TEngRequestHandler_OnRequestOpenUrlFromTab(AObj: TEngRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRequestHandler_TOnRequestOpenUrlFromTabEvent}
  {$DEFINE EventName := OnRequestOpenUrlFromTab}
  CEFEventMethodCode
end;

// event
procedure TEngRequestHandler_OnRequestGetAuthCredentials(AObj: TEngRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRequestHandler_TOnRequestGetAuthCredentialsEvent}
  {$DEFINE EventName := OnRequestGetAuthCredentials}
  CEFEventMethodCode
end;

// event
procedure TEngRequestHandler_OnRequestCertificateError(AObj: TEngRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRequestHandler_TOnRequestCertificateErrorEvent}
  {$DEFINE EventName := OnRequestCertificateError}
  CEFEventMethodCode
end;

// event
procedure TEngRequestHandler_OnRequestSelectClientCertificate(AObj: TEngRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRequestHandler_TOnRequestSelectClientCertificateEvent}
  {$DEFINE EventName := OnRequestSelectClientCertificate}
  CEFEventMethodCode
end;

// event
procedure TEngRequestHandler_OnRequestGetResourceRequestHandler(AObj: TEngRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRequestHandler_TOnRequestGetResourceRequestHandlerEvent}
  {$DEFINE EventName := OnRequestGetResourceRequestHandler}
  CEFEventMethodCode
end;

// event
procedure TEngRequestHandler_OnRequestRenderViewReady(AObj: TEngRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRequestHandler_TOnRequestRenderViewReadyEvent}
  {$DEFINE EventName := OnRequestRenderViewReady}
  CEFEventMethodCode
end;

// event
procedure TEngRequestHandler_OnRequestRenderProcessTerminated(AObj: TEngRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRequestHandler_TOnRequestRenderProcessTerminatedEvent}
  {$DEFINE EventName := OnRequestRenderProcessTerminated}
  CEFEventMethodCode
end;

// event
procedure TEngRequestHandler_OnRequestDocumentAvailableInMainFrame(AObj: TEngRequestHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngRequestHandler_TOnRequestDocumentAvailableInMainFrameEvent}
  {$DEFINE EventName := OnRequestDocumentAvailableInMainFrame}
  CEFEventMethodCode
end;

exports
  TEngRequestHandler_Create,
  TEngRequestHandler_OnRequestBeforeBrowse,
  TEngRequestHandler_OnRequestOpenUrlFromTab,
  TEngRequestHandler_OnRequestGetAuthCredentials,
  TEngRequestHandler_OnRequestCertificateError,
  TEngRequestHandler_OnRequestSelectClientCertificate,
  TEngRequestHandler_OnRequestGetResourceRequestHandler,
  TEngRequestHandler_OnRequestRenderViewReady,
  TEngRequestHandler_OnRequestRenderProcessTerminated,
  TEngRequestHandler_OnRequestDocumentAvailableInMainFrame;