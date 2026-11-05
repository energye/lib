// constructor
function TEngMediaRouteCreateCallback_Create(out IntfMediaRouteCreateCallback: ICefMediaRouteCreateCallback): TEngMediaRouteCreateCallback; extdecl;
begin
  {$define handleExceptionID := 15700}
  handleExceptionBegin
  Result := TEngMediaRouteCreateCallback.Create();
  IntfMediaRouteCreateCallback := Result as ICefMediaRouteCreateCallback;
  handleExceptionEnd
end;

// event
procedure TEngMediaRouteCreateCallback_OnMediaRouteCreateCallbackMediaRouteCreateFinished(AObj: TEngMediaRouteCreateCallback; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngMediaRouteCreateCallback_TOnMediaRouteCreateCallbackMediaRouteCreateFinishedEvent}
  {$DEFINE EventName := OnMediaRouteCreateCallbackMediaRouteCreateFinished}
  CEFEventMethodCode
end;

exports
  TEngMediaRouteCreateCallback_Create,
  TEngMediaRouteCreateCallback_OnMediaRouteCreateCallbackMediaRouteCreateFinished;