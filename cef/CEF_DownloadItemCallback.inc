
//function
procedure CefDownloadItemCallback_UnWrap(data: Pointer; var Result: ICefDownloadItemCallback); extdecl;
begin
  Result := TCefDownloadItemCallbackRef.UnWrap(data);
end;

//procedure
procedure CefDownloadItemCallback_Cancel(AObj: ICefDownloadItemCallback); extdecl;
begin
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;

//procedure
procedure CefDownloadItemCallback_Pause(AObj: ICefDownloadItemCallback); extdecl;
begin
  handleExceptionBegin
  AObj.Pause();
  handleExceptionEnd
end;

//procedure
procedure CefDownloadItemCallback_Resume(AObj: ICefDownloadItemCallback); extdecl;
begin
  handleExceptionBegin
  AObj.Resume();
  handleExceptionEnd
end;


exports
  CefDownloadItemCallback_UnWrap,
  CefDownloadItemCallback_Cancel,
  CefDownloadItemCallback_Pause,
  CefDownloadItemCallback_Resume;