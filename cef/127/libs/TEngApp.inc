// constructor
function TEngApp_Create(out IntfApp: ICefApp): TEngApp; extdecl;
begin
  {$define handleExceptionID := 17500}
  handleExceptionBegin
  Result := TEngApp.Create();
  IntfApp := Result as ICefApp;
  handleExceptionEnd
end;

// event
procedure TEngApp_OnAppBeforeCommandLineProcessing(AObj: TEngApp; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngApp_TOnAppBeforeCommandLineProcessingEvent}
  {$DEFINE EventName := OnAppBeforeCommandLineProcessing}
  CEFEventMethodCode
end;

// event
procedure TEngApp_OnAppRegisterCustomSchemes(AObj: TEngApp; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngApp_TOnAppRegisterCustomSchemesEvent}
  {$DEFINE EventName := OnAppRegisterCustomSchemes}
  CEFEventMethodCode
end;

// event
procedure TEngApp_OnAppGetResourceBundleHandler(AObj: TEngApp; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngApp_TOnAppGetResourceBundleHandlerEvent}
  {$DEFINE EventName := OnAppGetResourceBundleHandler}
  CEFEventMethodCode
end;

// event
procedure TEngApp_OnAppGetBrowserProcessHandler(AObj: TEngApp; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngApp_TOnAppGetBrowserProcessHandlerEvent}
  {$DEFINE EventName := OnAppGetBrowserProcessHandler}
  CEFEventMethodCode
end;

// event
procedure TEngApp_OnAppGetRenderProcessHandler(AObj: TEngApp; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngApp_TOnAppGetRenderProcessHandlerEvent}
  {$DEFINE EventName := OnAppGetRenderProcessHandler}
  CEFEventMethodCode
end;

exports
  TEngApp_Create,
  TEngApp_OnAppBeforeCommandLineProcessing,
  TEngApp_OnAppRegisterCustomSchemes,
  TEngApp_OnAppGetResourceBundleHandler,
  TEngApp_OnAppGetBrowserProcessHandler,
  TEngApp_OnAppGetRenderProcessHandler;