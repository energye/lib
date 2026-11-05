// constructor
function TEngPermissionHandler_Create(out IntfPermissionHandler: ICefPermissionHandler): TEngPermissionHandler; extdecl;
begin
  {$define handleExceptionID := 16200}
  handleExceptionBegin
  Result := TEngPermissionHandler.Create();
  IntfPermissionHandler := Result as ICefPermissionHandler;
  handleExceptionEnd
end;

// event
procedure TEngPermissionHandler_OnPermissionRequestMediaAccessPermission(AObj: TEngPermissionHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngPermissionHandler_TOnPermissionRequestMediaAccessPermissionEvent}
  {$DEFINE EventName := OnPermissionRequestMediaAccessPermission}
  CEFEventMethodCode
end;

// event
procedure TEngPermissionHandler_OnPermissionShowPermissionPrompt(AObj: TEngPermissionHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngPermissionHandler_TOnPermissionShowPermissionPromptEvent}
  {$DEFINE EventName := OnPermissionShowPermissionPrompt}
  CEFEventMethodCode
end;

// event
procedure TEngPermissionHandler_OnPermissionDismissPermissionPrompt(AObj: TEngPermissionHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngPermissionHandler_TOnPermissionDismissPermissionPromptEvent}
  {$DEFINE EventName := OnPermissionDismissPermissionPrompt}
  CEFEventMethodCode
end;

exports
  TEngPermissionHandler_Create,
  TEngPermissionHandler_OnPermissionRequestMediaAccessPermission,
  TEngPermissionHandler_OnPermissionShowPermissionPrompt,
  TEngPermissionHandler_OnPermissionDismissPermissionPrompt;