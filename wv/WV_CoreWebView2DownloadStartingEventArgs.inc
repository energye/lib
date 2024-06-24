
//constructor
function CoreWebView2DownloadStartingEventArgs_Create(const aArgs: ICoreWebView2DownloadStartingEventArgs): TCoreWebView2DownloadStartingEventArgs; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2DownloadStartingEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2DownloadStartingEventArgs_Initialized(AObj: TCoreWebView2DownloadStartingEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2DownloadStartingEventArgs_BaseIntf(AObj: TCoreWebView2DownloadStartingEventArgs; var Result: ICoreWebView2DownloadStartingEventArgs); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
procedure CoreWebView2DownloadStartingEventArgs_DownloadOperation(AObj: TCoreWebView2DownloadStartingEventArgs; var Result: ICoreWebView2DownloadOperation); extdecl;
begin
  handleExceptionBegin
  Result := AObj.DownloadOperation;
  handleExceptionEnd
end;

//property
function CoreWebView2DownloadStartingEventArgs_Cancel(AIsSet: LongBool; AObj: TCoreWebView2DownloadStartingEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Cancel := AValue;
  end else
    Result := AObj.Cancel;
  handleExceptionEnd
end;

//property
function CoreWebView2DownloadStartingEventArgs_ResultFilePath(AIsSet: LongBool; AObj: TCoreWebView2DownloadStartingEventArgs; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ResultFilePath := AValue;
  end else
    Result := ToPChar(AObj.ResultFilePath);
  handleExceptionEnd
end;

//property
function CoreWebView2DownloadStartingEventArgs_Handled(AIsSet: LongBool; AObj: TCoreWebView2DownloadStartingEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Handled := AValue;
  end else
    Result := AObj.Handled;
  handleExceptionEnd
end;

//property
procedure CoreWebView2DownloadStartingEventArgs_Deferral(AObj: TCoreWebView2DownloadStartingEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;


exports
  CoreWebView2DownloadStartingEventArgs_Create,
  CoreWebView2DownloadStartingEventArgs_Initialized,
  CoreWebView2DownloadStartingEventArgs_BaseIntf,
  CoreWebView2DownloadStartingEventArgs_DownloadOperation,
  CoreWebView2DownloadStartingEventArgs_Cancel,
  CoreWebView2DownloadStartingEventArgs_ResultFilePath,
  CoreWebView2DownloadStartingEventArgs_Handled,
  CoreWebView2DownloadStartingEventArgs_Deferral;