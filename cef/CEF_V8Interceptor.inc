
//constructor
function V8Interceptor_Create(): TV8Interceptor; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TV8Interceptor.Create();
  handleExceptionEnd
end;

//procedure
procedure V8Interceptor_AsInterface(AObj: TV8Interceptor; var Result: ICefV8Interceptor); extdecl;
begin
  Result := AObj as ICefV8Interceptor;
end;

//property event
procedure V8Interceptor_SetOnGetByName(AObj: TV8Interceptor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := V8Interceptor_OnGetByName}
  {$DEFINE EventName := OnGetByName}
  CEFEventMethodCode
end;

//property event
procedure V8Interceptor_SetOnGetByIndex(AObj: TV8Interceptor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := V8Interceptor_OnGetByIndex}
  {$DEFINE EventName := OnGetByIndex}
  CEFEventMethodCode
end;

//property event
procedure V8Interceptor_SetOnSetByName(AObj: TV8Interceptor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := V8Interceptor_OnSetByName}
  {$DEFINE EventName := OnSetByName}
  CEFEventMethodCode
end;

//property event
procedure V8Interceptor_SetOnSetByIndex(AObj: TV8Interceptor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := V8Interceptor_OnSetByIndex}
  {$DEFINE EventName := OnSetByIndex}
  CEFEventMethodCode
end;


exports
  V8Interceptor_Create,
  V8Interceptor_AsInterface,
  V8Interceptor_SetOnGetByName,
  V8Interceptor_SetOnGetByIndex,
  V8Interceptor_SetOnSetByName,
  V8Interceptor_SetOnSetByIndex;