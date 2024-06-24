
//function
procedure CefPrintJobCallback_UnWrap(data: Pointer; var Result: ICefPrintJobCallback); extdecl;
begin
  Result := TCefPrintJobCallbackRef.UnWrap(data);
end;

//procedure
procedure CefPrintJobCallback_Cont(AObj: ICefPrintJobCallback); extdecl;
begin
  handleExceptionBegin
  AObj.cont();
  handleExceptionEnd
end;


exports
  CefPrintJobCallback_UnWrap,
  CefPrintJobCallback_Cont;