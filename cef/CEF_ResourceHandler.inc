
//constructor
function ResourceHandler_Create(const browser: ICefBrowser; const frame: ICefFrame; const schemeName: PChar; const request: ICefRequest): TResourceHandler; extdecl;
begin
  handleExceptionBegin
  Result := TResourceHandler.Create(browser, frame, schemeName, request);
  handleExceptionEnd
end;

//property event
procedure ResourceHandler_SetOnOpen(AObj: TResourceHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ResourceHandler_OnOpen}
  {$DEFINE EventName := OnOpen}
  CEFEventMethodCode
end;

//property event
procedure ResourceHandler_SetOnProcessRequest(AObj: TResourceHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ResourceHandler_OnProcessRequest}
  {$DEFINE EventName := OnProcessRequest}
  CEFEventMethodCode
end;

//property event
procedure ResourceHandler_SetOnGetResponseHeaders(AObj: TResourceHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ResourceHandler_OnGetResponseHeaders}
  {$DEFINE EventName := OnGetResponseHeaders}
  CEFEventMethodCode
end;

//property event
procedure ResourceHandler_SetOnSkip(AObj: TResourceHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ResourceHandler_OnSkip}
  {$DEFINE EventName := OnSkip}
  CEFEventMethodCode
end;

//property event
procedure ResourceHandler_SetOnRead(AObj: TResourceHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ResourceHandler_OnRead}
  {$DEFINE EventName := OnRead}
  CEFEventMethodCode
end;

//property event
procedure ResourceHandler_SetOnReadResponse(AObj: TResourceHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ResourceHandler_OnReadResponse}
  {$DEFINE EventName := OnReadResponse}
  CEFEventMethodCode
end;

//property event
procedure ResourceHandler_SetOnCancel(AObj: TResourceHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ResourceHandler_OnCancel}
  {$DEFINE EventName := OnCancel}
  CEFEventMethodCode
end;


exports
  ResourceHandler_Create,
  ResourceHandler_SetOnOpen,
  ResourceHandler_SetOnProcessRequest,
  ResourceHandler_SetOnGetResponseHeaders,
  ResourceHandler_SetOnSkip,
  ResourceHandler_SetOnRead,
  ResourceHandler_SetOnReadResponse,
  ResourceHandler_SetOnCancel;