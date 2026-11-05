// constructor
function TEngDownloadImageCallback_Create(out IntfDownloadImageCallback: ICefDownloadImageCallback): TEngDownloadImageCallback; extdecl;
begin
  {$define handleExceptionID := 12100}
  handleExceptionBegin
  Result := TEngDownloadImageCallback.Create();
  IntfDownloadImageCallback := Result as ICefDownloadImageCallback;
  handleExceptionEnd
end;

// event
procedure TEngDownloadImageCallback_OnDownloadImageCallbackDownloadImageFinished(AObj: TEngDownloadImageCallback; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDownloadImageCallback_TOnDownloadImageCallbackDownloadImageFinishedEvent}
  {$DEFINE EventName := OnDownloadImageCallbackDownloadImageFinished}
  CEFEventMethodCode
end;

exports
  TEngDownloadImageCallback_Create,
  TEngDownloadImageCallback_OnDownloadImageCallbackDownloadImageFinished;