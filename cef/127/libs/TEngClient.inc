// constructor
function TEngClient_Create(out IntfClient: ICefClient): TEngClient; extdecl;
begin
  {$define handleExceptionID := 17000}
  handleExceptionBegin
  Result := TEngClient.Create();
  IntfClient := Result as ICefClient;
  handleExceptionEnd
end;

// event
procedure TEngClient_OnClientProcessMessageReceived(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientProcessMessageReceivedEvent}
  {$DEFINE EventName := OnClientProcessMessageReceived}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetAudioHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetAudioHandlerEvent}
  {$DEFINE EventName := OnClientGetAudioHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetCommandHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetCommandHandlerEvent}
  {$DEFINE EventName := OnClientGetCommandHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetContextMenuHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetContextMenuHandlerEvent}
  {$DEFINE EventName := OnClientGetContextMenuHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetDialogHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetDialogHandlerEvent}
  {$DEFINE EventName := OnClientGetDialogHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetDisplayHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetDisplayHandlerEvent}
  {$DEFINE EventName := OnClientGetDisplayHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetDownloadHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetDownloadHandlerEvent}
  {$DEFINE EventName := OnClientGetDownloadHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetDragHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetDragHandlerEvent}
  {$DEFINE EventName := OnClientGetDragHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetFindHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetFindHandlerEvent}
  {$DEFINE EventName := OnClientGetFindHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetFocusHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetFocusHandlerEvent}
  {$DEFINE EventName := OnClientGetFocusHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetFrameHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetFrameHandlerEvent}
  {$DEFINE EventName := OnClientGetFrameHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetPermissionHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetPermissionHandlerEvent}
  {$DEFINE EventName := OnClientGetPermissionHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetJsdialogHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetJsdialogHandlerEvent}
  {$DEFINE EventName := OnClientGetJsdialogHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetKeyboardHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetKeyboardHandlerEvent}
  {$DEFINE EventName := OnClientGetKeyboardHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetLifeSpanHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetLifeSpanHandlerEvent}
  {$DEFINE EventName := OnClientGetLifeSpanHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetLoadHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetLoadHandlerEvent}
  {$DEFINE EventName := OnClientGetLoadHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetPrintHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetPrintHandlerEvent}
  {$DEFINE EventName := OnClientGetPrintHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetRenderHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetRenderHandlerEvent}
  {$DEFINE EventName := OnClientGetRenderHandler}
  CEFEventMethodCode
end;

// event
procedure TEngClient_OnClientGetRequestHandler(AObj: TEngClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngClient_TOnClientGetRequestHandlerEvent}
  {$DEFINE EventName := OnClientGetRequestHandler}
  CEFEventMethodCode
end;

exports
  TEngClient_Create,
  TEngClient_OnClientProcessMessageReceived,
  TEngClient_OnClientGetAudioHandler,
  TEngClient_OnClientGetCommandHandler,
  TEngClient_OnClientGetContextMenuHandler,
  TEngClient_OnClientGetDialogHandler,
  TEngClient_OnClientGetDisplayHandler,
  TEngClient_OnClientGetDownloadHandler,
  TEngClient_OnClientGetDragHandler,
  TEngClient_OnClientGetFindHandler,
  TEngClient_OnClientGetFocusHandler,
  TEngClient_OnClientGetFrameHandler,
  TEngClient_OnClientGetPermissionHandler,
  TEngClient_OnClientGetJsdialogHandler,
  TEngClient_OnClientGetKeyboardHandler,
  TEngClient_OnClientGetLifeSpanHandler,
  TEngClient_OnClientGetLoadHandler,
  TEngClient_OnClientGetPrintHandler,
  TEngClient_OnClientGetRenderHandler,
  TEngClient_OnClientGetRequestHandler;