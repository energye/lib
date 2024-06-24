
//function
procedure CefFileDialogCallback_UnWrap(data: Pointer; var Result: ICefFileDialogCallback); extdecl;
begin
  Result := TCefFileDialogCallbackRef.UnWrap(data);
end;

//procedure
procedure CefFileDialogCallback_Cont(AObj: ICefFileDialogCallback; const filePaths: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.Cont(filePaths);
  handleExceptionEnd
end;

//procedure
procedure CefFileDialogCallback_Cancel(AObj: ICefFileDialogCallback); extdecl;
begin
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;


exports
  CefFileDialogCallback_UnWrap,
  CefFileDialogCallback_Cont,
  CefFileDialogCallback_Cancel;