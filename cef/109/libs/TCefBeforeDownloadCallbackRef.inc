// constructor
function TCefBeforeDownloadCallbackRef_Create(data: Pointer; out IntfBeforeDownloadCallback: ICefBeforeDownloadCallback): TCefBeforeDownloadCallbackRef; extdecl;
begin
  {$define handleExceptionID := 17100}
  handleExceptionBegin
  Result := TCefBeforeDownloadCallbackRef.Create(data);
  IntfBeforeDownloadCallback := Result as ICefBeforeDownloadCallback;
  handleExceptionEnd
end;

// function static
procedure TCefBeforeDownloadCallbackRef_UnWrap(data: Pointer; var Result: ICefBeforeDownloadCallback); extdecl;
begin
  Result := TCefBeforeDownloadCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefBeforeDownloadCallbackRef_Cont(AObj: ICefBeforeDownloadCallback; const downloadPath: PChar; showDialog: LongBool); extdecl;
begin
  {$define handleExceptionID := 17101}
  handleExceptionBegin
  AObj.Cont(PCharToUStr(downloadPath), showDialog);
  handleExceptionEnd
end;

exports
  TCefBeforeDownloadCallbackRef_Create,
  TCefBeforeDownloadCallbackRef_UnWrap,
  TCefBeforeDownloadCallbackRef_Cont;