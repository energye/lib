
//constructor
function V8Accessor_Create(): TV8Accessor; extdecl;
begin
  handleExceptionBegin
  Result := TV8Accessor.Create();
  handleExceptionEnd
end;

//function
procedure V8Accessor_AsInterface(AObj: TV8Accessor; var Result: ICefV8Accessor); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsInterface();
  handleExceptionEnd
end;

//property event
procedure V8Accessor_SetOnGet(AObj: TV8Accessor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := V8Accessor_OnGet}
  {$DEFINE EventName := OnGet}
  CEFEventMethodCode
end;

//property event
procedure V8Accessor_SetOnSet(AObj: TV8Accessor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := V8Accessor_OnSet}
  {$DEFINE EventName := OnSet}
  CEFEventMethodCode
end;


exports
  V8Accessor_Create,
  V8Accessor_AsInterface,
  V8Accessor_SetOnGet,
  V8Accessor_SetOnSet;