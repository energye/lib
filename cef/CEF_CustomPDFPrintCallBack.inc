
//constructor
function CefCustomPDFPrintCallBack_Create(const aEvents: IChromiumEvents): TCefCustomPDFPrintCallBack; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefCustomPDFPrintCallBack.Create(aEvents);
  handleExceptionEnd
end;

//procedure
procedure CefCustomPDFPrintCallBack_AsInterface(AObj: TCefCustomPDFPrintCallBack; var Result: ICefPdfPrintCallback); extdecl;
begin
  Result := AObj as ICefPdfPrintCallback;
end;


exports
  CefCustomPDFPrintCallBack_Create,
  CefCustomPDFPrintCallBack_AsInterface;