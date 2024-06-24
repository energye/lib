
//function
procedure CefJsDialogCallback_UnWrap(data: Pointer; var Result: ICefJsDialogCallback); extdecl;
begin
  Result := TCefJsDialogCallbackRef.UnWrap(data);
end;

//procedure
procedure CefJsDialogCallback_Cont(AObj: ICefJsDialogCallback; success: LongBool; const userInput: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Cont(success, userInput);
  handleExceptionEnd
end;


exports
  CefJsDialogCallback_UnWrap,
  CefJsDialogCallback_Cont;