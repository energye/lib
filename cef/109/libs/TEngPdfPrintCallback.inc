// constructor
function TEngPdfPrintCallback_Create(out IntfPdfPrintCallback: ICefPdfPrintCallback): TEngPdfPrintCallback; extdecl;
begin
  {$define handleExceptionID := 12600}
  handleExceptionBegin
  Result := TEngPdfPrintCallback.Create();
  IntfPdfPrintCallback := Result as ICefPdfPrintCallback;
  handleExceptionEnd
end;

// event
procedure TEngPdfPrintCallback_OnPdfPrintCallbackPdfPrintFinished(AObj: TEngPdfPrintCallback; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngPdfPrintCallback_TOnPdfPrintCallbackPdfPrintFinishedEvent}
  {$DEFINE EventName := OnPdfPrintCallbackPdfPrintFinished}
  CEFEventMethodCode
end;

exports
  TEngPdfPrintCallback_Create,
  TEngPdfPrintCallback_OnPdfPrintCallbackPdfPrintFinished;