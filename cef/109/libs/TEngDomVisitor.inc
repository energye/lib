// constructor
function TEngDomVisitor_Create(out IntfDomVisitor: ICefDomVisitor): TEngDomVisitor; extdecl;
begin
  {$define handleExceptionID := 11300}
  handleExceptionBegin
  Result := TEngDomVisitor.Create();
  IntfDomVisitor := Result as ICefDomVisitor;
  handleExceptionEnd
end;

// event
procedure TEngDomVisitor_OnDomVisitorVisit(AObj: TEngDomVisitor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDomVisitor_TOnDomVisitorVisitEvent}
  {$DEFINE EventName := OnDomVisitorVisit}
  CEFEventMethodCode
end;

exports
  TEngDomVisitor_Create,
  TEngDomVisitor_OnDomVisitorVisit;