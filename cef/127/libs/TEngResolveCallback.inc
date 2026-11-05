// constructor
function TEngResolveCallback_Create(out IntfResolveCallback: ICefResolveCallback): TEngResolveCallback; extdecl;
begin
  {$define handleExceptionID := 13700}
  handleExceptionBegin
  Result := TEngResolveCallback.Create();
  IntfResolveCallback := Result as ICefResolveCallback;
  handleExceptionEnd
end;

// event
procedure TEngResolveCallback_OnResolveCallbackResolveCompleted(AObj: TEngResolveCallback; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResolveCallback_TOnResolveCallbackResolveCompletedEvent}
  {$DEFINE EventName := OnResolveCallbackResolveCompleted}
  CEFEventMethodCode
end;

exports
  TEngResolveCallback_Create,
  TEngResolveCallback_OnResolveCallbackResolveCompleted;