// constructor
function TEngNavigationEntryVisitor_Create(out IntfNavigationEntryVisitor: ICefNavigationEntryVisitor): TEngNavigationEntryVisitor; extdecl;
begin
  {$define handleExceptionID := 13300}
  handleExceptionBegin
  Result := TEngNavigationEntryVisitor.Create();
  IntfNavigationEntryVisitor := Result as ICefNavigationEntryVisitor;
  handleExceptionEnd
end;

// event
procedure TEngNavigationEntryVisitor_OnNavigationEntryVisitorVisit(AObj: TEngNavigationEntryVisitor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngNavigationEntryVisitor_TOnNavigationEntryVisitorVisitEvent}
  {$DEFINE EventName := OnNavigationEntryVisitorVisit}
  CEFEventMethodCode
end;

exports
  TEngNavigationEntryVisitor_Create,
  TEngNavigationEntryVisitor_OnNavigationEntryVisitorVisit;