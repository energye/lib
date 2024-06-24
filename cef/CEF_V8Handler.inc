
//constructor
function V8Handler_Create(): TV8Handler; extdecl;
begin
  handleExceptionBegin
  Result := TV8Handler.Create();
  handleExceptionEnd
end;

//property event
procedure V8Handler_SetOnExecute(AObj: TV8Handler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := V8Handler_OnExecute}
  {$DEFINE EventName := OnExecute}
  CEFEventMethodCode
end;


exports
  V8Handler_Create,
  V8Handler_SetOnExecute;
