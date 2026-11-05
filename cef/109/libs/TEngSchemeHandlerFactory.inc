// constructor
function TEngSchemeHandlerFactory_Create(const AClass: TCefResourceHandlerClass; out IntfSchemeHandlerFactory: ICefSchemeHandlerFactory): TEngSchemeHandlerFactory; extdecl;
begin
  {$define handleExceptionID := 13600}
  handleExceptionBegin
  Result := TEngSchemeHandlerFactory.Create(AClass);
  IntfSchemeHandlerFactory := Result as ICefSchemeHandlerFactory;
  handleExceptionEnd
end;

// event
procedure TEngSchemeHandlerFactory_OnSchemeFactoryNew(AObj: TEngSchemeHandlerFactory; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngSchemeHandlerFactory_TOnSchemeFactoryNewEvent}
  {$DEFINE EventName := OnSchemeFactoryNew}
  CEFEventMethodCode
end;

exports
  TEngSchemeHandlerFactory_Create,
  TEngSchemeHandlerFactory_OnSchemeFactoryNew;