// constructor
function TEngEndTracingCallback_Create(out IntfEndTracingCallback: ICefEndTracingCallback): TEngEndTracingCallback; extdecl;
begin
  {$define handleExceptionID := 12500}
  handleExceptionBegin
  Result := TEngEndTracingCallback.Create();
  IntfEndTracingCallback := Result as ICefEndTracingCallback;
  handleExceptionEnd
end;

// event
procedure TEngEndTracingCallback_OnEndTracingCallbackEndTracingComplete(AObj: TEngEndTracingCallback; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngEndTracingCallback_TOnEndTracingCallbackEndTracingCompleteEvent}
  {$DEFINE EventName := OnEndTracingCallbackEndTracingComplete}
  CEFEventMethodCode
end;

exports
  TEngEndTracingCallback_Create,
  TEngEndTracingCallback_OnEndTracingCallbackEndTracingComplete;