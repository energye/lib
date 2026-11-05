// constructor
function TEngCookieVisitor_Create(out IntfCookieVisitor: ICefCookieVisitor): TEngCookieVisitor; extdecl;
begin
  {$define handleExceptionID := 10900}
  handleExceptionBegin
  Result := TEngCookieVisitor.Create();
  IntfCookieVisitor := Result as ICefCookieVisitor;
  handleExceptionEnd
end;

// event
procedure TEngCookieVisitor_OnCookieVisitorVisit(AObj: TEngCookieVisitor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngCookieVisitor_TOnCookieVisitorVisitEvent}
  {$DEFINE EventName := OnCookieVisitorVisit}
  CEFEventMethodCode
end;

exports
  TEngCookieVisitor_Create,
  TEngCookieVisitor_OnCookieVisitorVisit;