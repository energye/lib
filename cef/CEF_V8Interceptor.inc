
//constructor
function V8Interceptor_Create(): TV8Interceptor; extdecl;
begin
  handleExceptionBegin
  Result := TV8Interceptor.Create();
  handleExceptionEnd
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
  V8Interceptor_SetOnGetByName,
  V8Interceptor_SetOnGetByIndex,
  V8Interceptor_SetOnSetByName,
  V8Interceptor_SetOnSetByIndex;