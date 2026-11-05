// constructor
function TEngBrowserProcessHandler_Create(out IntfBrowserProcessHandler: ICefBrowserProcessHandler): TEngBrowserProcessHandler; extdecl;
begin
  {$define handleExceptionID := 10600}
  handleExceptionBegin
  Result := TEngBrowserProcessHandler.Create();
  IntfBrowserProcessHandler := Result as ICefBrowserProcessHandler;
  handleExceptionEnd
end;

// event
procedure TEngBrowserProcessHandler_OnBrowserProcessRegisterCustomPreferences(AObj: TEngBrowserProcessHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngBrowserProcessHandler_TOnBrowserProcessRegisterCustomPreferencesEvent}
  {$DEFINE EventName := OnBrowserProcessRegisterCustomPreferences}
  CEFEventMethodCode
end;

// event
procedure TEngBrowserProcessHandler_OnBrowserProcessContextInitialized(AObj: TEngBrowserProcessHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngBrowserProcessHandler_TOnBrowserProcessContextInitializedEvent}
  {$DEFINE EventName := OnBrowserProcessContextInitialized}
  CEFEventMethodCode
end;

// event
procedure TEngBrowserProcessHandler_OnBrowserProcessBeforeChildProcessLaunch(AObj: TEngBrowserProcessHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngBrowserProcessHandler_TOnBrowserProcessBeforeChildProcessLaunchEvent}
  {$DEFINE EventName := OnBrowserProcessBeforeChildProcessLaunch}
  CEFEventMethodCode
end;

// event
procedure TEngBrowserProcessHandler_OnBrowserProcessScheduleMessagePumpWork(AObj: TEngBrowserProcessHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngBrowserProcessHandler_TOnBrowserProcessScheduleMessagePumpWorkEvent}
  {$DEFINE EventName := OnBrowserProcessScheduleMessagePumpWork}
  CEFEventMethodCode
end;

// event
procedure TEngBrowserProcessHandler_OnBrowserProcessGetDefaultClient(AObj: TEngBrowserProcessHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngBrowserProcessHandler_TOnBrowserProcessGetDefaultClientEvent}
  {$DEFINE EventName := OnBrowserProcessGetDefaultClient}
  CEFEventMethodCode
end;

exports
  TEngBrowserProcessHandler_Create,
  TEngBrowserProcessHandler_OnBrowserProcessRegisterCustomPreferences,
  TEngBrowserProcessHandler_OnBrowserProcessContextInitialized,
  TEngBrowserProcessHandler_OnBrowserProcessBeforeChildProcessLaunch,
  TEngBrowserProcessHandler_OnBrowserProcessScheduleMessagePumpWork,
  TEngBrowserProcessHandler_OnBrowserProcessGetDefaultClient;