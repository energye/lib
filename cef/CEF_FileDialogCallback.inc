
//function
procedure CefFileDialogCallback_UnWrap(data: Pointer; var Result: ICefFileDialogCallback); extdecl;
begin
  Result := TCefFileDialogCallbackRef.UnWrap(data);
end;

//procedure
procedure CefFileDialogCallback_Cont(AObj: ICefFileDialogCallback; selectedAcceptFilter: Integer; const filePaths: TStrings); extdecl;
begin
  {$define handleExceptionFuncName :='Cont'}
  handleExceptionBegin
  AObj.Cont(selectedAcceptFilter, filePaths);
  handleExceptionEnd
end;

//procedure
procedure CefFileDialogCallback_Cancel(AObj: ICefFileDialogCallback); extdecl;
begin
  {$define handleExceptionFuncName :='Cancel'}
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;


exports
  CefFileDialogCallback_UnWrap,
  CefFileDialogCallback_Cont,
  CefFileDialogCallback_Cancel;