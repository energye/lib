
//constructor
function DomVisitor_Create(): TDomVisitor; extdecl;
begin
  handleExceptionBegin
  Result := TDomVisitor.Create();
  handleExceptionEnd
end;

//procedure
procedure DomVisitor_AsInterface(AObj: TDomVisitor; var Result: ICefDomVisitor); extdecl;
begin
  Result := AObj as ICefDomVisitor;
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
  DomVisitor_AsInterface,
  DomVisitor_SetOnDomVisitor;