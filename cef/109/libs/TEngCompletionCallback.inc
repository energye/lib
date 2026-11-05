// constructor
function TEngCompletionCallback_Create(out IntfCompletionCallback: ICefCompletionCallback): TEngCompletionCallback; extdecl;
begin
  {$define handleExceptionID := 10700}
  handleExceptionBegin
  Result := TEngCompletionCallback.Create();
  IntfCompletionCallback := Result as ICefCompletionCallback;
  handleExceptionEnd
end;

// event
procedure TEngCompletionCallback_OnCompletionCallbackComplete(AObj: TEngCompletionCallback; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngCompletionCallback_TOnCompletionCallbackCompleteEvent}
  {$DEFINE EventName := OnCompletionCallbackComplete}
  CEFEventMethodCode
end;

exports
  TEngCompletionCallback_Create,
  TEngCompletionCallback_OnCompletionCallbackComplete;