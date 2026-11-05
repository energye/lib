// constructor
function TEngSetCookieCallback_Create(out IntfSetCookieCallback: ICefSetCookieCallback): TEngSetCookieCallback; extdecl;
begin
  {$define handleExceptionID := 14500}
  handleExceptionBegin
  Result := TEngSetCookieCallback.Create();
  IntfSetCookieCallback := Result as ICefSetCookieCallback;
  handleExceptionEnd
end;

// event
procedure TEngSetCookieCallback_OnSetCookieCallbackComplete(AObj: TEngSetCookieCallback; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngSetCookieCallback_TOnSetCookieCallbackCompleteEvent}
  {$DEFINE EventName := OnSetCookieCallbackComplete}
  CEFEventMethodCode
end;

exports
  TEngSetCookieCallback_Create,
  TEngSetCookieCallback_OnSetCookieCallbackComplete;