// constructor
function TEngStringVisitor_Create(out IntfStringVisitor: ICefStringVisitor): TEngStringVisitor; extdecl;
begin
  {$define handleExceptionID := 14400}
  handleExceptionBegin
  Result := TEngStringVisitor.Create();
  IntfStringVisitor := Result as ICefStringVisitor;
  handleExceptionEnd
end;

// event
procedure TEngStringVisitor_OnStringVisitorVisit(AObj: TEngStringVisitor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngStringVisitor_TOnStringVisitorVisitEvent}
  {$DEFINE EventName := OnStringVisitorVisit}
  CEFEventMethodCode
end;

exports
  TEngStringVisitor_Create,
  TEngStringVisitor_OnStringVisitorVisit;