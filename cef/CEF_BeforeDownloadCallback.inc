
//function
procedure CefBeforeDownloadCallback_UnWrap(data: Pointer; var Result: ICefBeforeDownloadCallback); extdecl;
begin
  Result := TCefBeforeDownloadCallbackRef.UnWrap(data);
end;

//procedure
procedure CefBeforeDownloadCallback_Cont(AObj: ICefBeforeDownloadCallback; const downloadPath: PChar; showDialog: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Cont(downloadPath, showDialog);
  handleExceptionEnd
end;


exports
  CefBeforeDownloadCallback_UnWrap,
  CefBeforeDownloadCallback_Cont;