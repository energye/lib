
//constructor
function DomVisitor_Create(): TDomVisitor; extdecl;
begin
  handleExceptionBegin
  Result := TDomVisitor.Create();
  handleExceptionEnd
end;

//property event
procedure DomVisitor_SetOnDomVisitor(AObj: TDomVisitor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := DomVisitor_OnDomVisitor}
  {$DEFINE EventName := OnDomVisitor}
  CEFEventMethodCode
end;


exports
  DomVisitor_Create,
  DomVisitor_SetOnDomVisitor;