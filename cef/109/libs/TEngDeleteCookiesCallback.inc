// constructor
function TEngDeleteCookiesCallback_Create(out IntfDeleteCookiesCallback: ICefDeleteCookiesCallback): TEngDeleteCookiesCallback; extdecl;
begin
  {$define handleExceptionID := 11000}
  handleExceptionBegin
  Result := TEngDeleteCookiesCallback.Create();
  IntfDeleteCookiesCallback := Result as ICefDeleteCookiesCallback;
  handleExceptionEnd
end;

// event
procedure TEngDeleteCookiesCallback_OnDeleteCookiesCallbackComplete(AObj: TEngDeleteCookiesCallback; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDeleteCookiesCallback_TOnDeleteCookiesCallbackCompleteEvent}
  {$DEFINE EventName := OnDeleteCookiesCallbackComplete}
  CEFEventMethodCode
end;

exports
  TEngDeleteCookiesCallback_Create,
  TEngDeleteCookiesCallback_OnDeleteCookiesCallbackComplete;