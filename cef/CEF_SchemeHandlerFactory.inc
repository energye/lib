
//constructor
function SchemeHandlerFactory_Create(const aClass: TCefResourceHandlerClass): TSchemeHandlerFactory; extdecl;
begin
  handleExceptionBegin
  Result := TSchemeHandlerFactory.Create(aClass);
  handleExceptionEnd
end;

//property event
procedure SchemeHandlerFactory_SetOnNew(AObj: TSchemeHandlerFactory; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := SchemeHandlerFactory_OnNew}
  {$DEFINE EventName := OnNew}
  CEFEventMethodCode
end;


exports
  SchemeHandlerFactory_Create,
  SchemeHandlerFactory_SetOnNew;