// constructor
function TCefDownloadItemCallbackRef_Create(data: Pointer; out IntfDownloadItemCallback: ICefDownloadItemCallback): TCefDownloadItemCallbackRef; extdecl;
begin
  {$define handleExceptionID := 19200}
  handleExceptionBegin
  Result := TCefDownloadItemCallbackRef.Create(data);
  IntfDownloadItemCallback := Result as ICefDownloadItemCallback;
  handleExceptionEnd
end;

// function static
procedure TCefDownloadItemCallbackRef_UnWrap(data: Pointer; var Result: ICefDownloadItemCallback); extdecl;
begin
  Result := TCefDownloadItemCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefDownloadItemCallbackRef_Cancel(AObj: ICefDownloadItemCallback); extdecl;
begin
  {$define handleExceptionID := 19201}
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;

// procedure
procedure TCefDownloadItemCallbackRef_Pause(AObj: ICefDownloadItemCallback); extdecl;
begin
  {$define handleExceptionID := 19202}
  handleExceptionBegin
  AObj.Pause();
  handleExceptionEnd
end;

// procedure
procedure TCefDownloadItemCallbackRef_Resume(AObj: ICefDownloadItemCallback); extdecl;
begin
  {$define handleExceptionID := 19203}
  handleExceptionBegin
  AObj.Resume();
  handleExceptionEnd
end;

exports
  TCefDownloadItemCallbackRef_Create,
  TCefDownloadItemCallbackRef_UnWrap,
  TCefDownloadItemCallbackRef_Cancel,
  TCefDownloadItemCallbackRef_Pause,
  TCefDownloadItemCallbackRef_Resume;