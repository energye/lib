
//constructor
function CefCustomPDFPrintCallBack_Create(const aEvents: IChromiumEvents): TCefCustomPDFPrintCallBack; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomPDFPrintCallBack.Create(aEvents);
  handleExceptionEnd
end;


exports
  CefCustomPDFPrintCallBack_Create;