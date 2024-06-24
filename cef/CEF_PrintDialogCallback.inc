
//function
procedure CefPrintDialogCallback_UnWrap(data: Pointer; var Result: ICefPrintDialogCallback); extdecl;
begin
  Result := TCefPrintDialogCallbackRef.UnWrap(data);
end;

//procedure
procedure CefPrintDialogCallback_Cont(AObj: ICefPrintDialogCallback; const settings: ICefPrintSettings); extdecl;
begin
  handleExceptionBegin
  AObj.cont(settings);
  handleExceptionEnd
end;

//procedure
procedure CefPrintDialogCallback_Cancel(AObj: ICefPrintDialogCallback); extdecl;
begin
  handleExceptionBegin
  AObj.cancel();
  handleExceptionEnd
end;


exports
  CefPrintDialogCallback_UnWrap,
  CefPrintDialogCallback_Cont,
  CefPrintDialogCallback_Cancel;