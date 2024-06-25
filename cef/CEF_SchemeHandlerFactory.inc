
//constructor
function SchemeHandlerFactory_Create(const aClass: TCefResourceHandlerClass): TSchemeHandlerFactory; extdecl;
begin
  handleExceptionBegin
  Result := TSchemeHandlerFactory.Create(aClass);
  handleExceptionEnd
end;

//function
procedure SchemeHandlerFactory_AsInterface(AObj: TSchemeHandlerFactory; var Result: ICefSchemeHandlerFactory); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsInterface();
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
  SchemeHandlerFactory_AsInterface,
  SchemeHandlerFactory_SetOnNew;