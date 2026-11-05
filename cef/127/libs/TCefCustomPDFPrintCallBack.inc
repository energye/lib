// constructor
function TCefCustomPDFPrintCallBack_Create(const aEvents: IChromiumEvents; out IntfPdfPrintCallback: ICefPdfPrintCallback): TCefCustomPDFPrintCallBack; extdecl;
begin
  {$define handleExceptionID := 2900}
  handleExceptionBegin
  Result := TCefCustomPDFPrintCallBack.Create(aEvents);
  IntfPdfPrintCallback := Result as ICefPdfPrintCallback;
  handleExceptionEnd
end;

exports
  TCefCustomPDFPrintCallBack_Create;
