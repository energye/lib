
//constructor
function CoreWebView2DownloadOperation_Create(const aBaseIntf: ICoreWebView2DownloadOperation; aDownloadID: integer): TCoreWebView2DownloadOperation; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2DownloadOperation.Create(aBaseIntf, aDownloadID);
  handleExceptionEnd
end;

//property
function CoreWebView2DownloadOperation_Initialized(AObj: TCoreWebView2DownloadOperation): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2DownloadOperation_BaseIntf(AObj: TCoreWebView2DownloadOperation; var Result: ICoreWebView2DownloadOperation); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2DownloadOperation_DownloadID(AObj: TCoreWebView2DownloadOperation): integer; extdecl;
begin
  {$define handleExceptionFuncName :='DownloadID'}
  handleExceptionBegin
  Result := AObj.DownloadID;
  handleExceptionEnd
end;

//property
function CoreWebView2DownloadOperation_URI(AObj: TCoreWebView2DownloadOperation): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='URI'}
  handleExceptionBegin
  Result := ToPChar(AObj.URI);
  handleExceptionEnd
end;

//property
function CoreWebView2DownloadOperation_ContentDisposition(AObj: TCoreWebView2DownloadOperation): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ContentDisposition'}
  handleExceptionBegin
  Result := ToPChar(AObj.ContentDisposition);
  handleExceptionEnd
end;

//property
function CoreWebView2DownloadOperation_MimeType(AObj: TCoreWebView2DownloadOperation): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='MimeType'}
  handleExceptionBegin
  Result := ToPChar(AObj.MimeType);
  handleExceptionEnd
end;

//property
procedure CoreWebView2DownloadOperation_TotalBytesToReceive(AObj: TCoreWebView2DownloadOperation; var Result: int64); extdecl;
begin
  {$define handleExceptionFuncName :='TotalBytesToReceive'}
  handleExceptionBegin
  Result := AObj.TotalBytesToReceive;
  handleExceptionEnd
end;

//property
procedure CoreWebView2DownloadOperation_BytesReceived(AObj: TCoreWebView2DownloadOperation; var Result: int64); extdecl;
begin
  {$define handleExceptionFuncName :='BytesReceived'}
  handleExceptionBegin
  Result := AObj.BytesReceived;
  handleExceptionEnd
end;

//property
procedure CoreWebView2DownloadOperation_EstimatedEndTime(AObj: TCoreWebView2DownloadOperation; var Result: TDateTime); extdecl;
begin
  {$define handleExceptionFuncName :='EstimatedEndTime'}
  handleExceptionBegin
  Result := AObj.EstimatedEndTime;
  handleExceptionEnd
end;

//property
function CoreWebView2DownloadOperation_ResultFilePath(AObj: TCoreWebView2DownloadOperation): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ResultFilePath'}
  handleExceptionBegin
  Result := ToPChar(AObj.ResultFilePath);
  handleExceptionEnd
end;

//property
function CoreWebView2DownloadOperation_State(AObj: TCoreWebView2DownloadOperation): TWVDownloadState; extdecl;
begin
  {$define handleExceptionFuncName :='State'}
  handleExceptionBegin
  Result := AObj.State;
  handleExceptionEnd
end;

//property
function CoreWebView2DownloadOperation_InterruptReason(AObj: TCoreWebView2DownloadOperation): TWVDownloadInterruptReason; extdecl;
begin
  {$define handleExceptionFuncName :='InterruptReason'}
  handleExceptionBegin
  Result := AObj.InterruptReason;
  handleExceptionEnd
end;

//property
function CoreWebView2DownloadOperation_CanResume(AObj: TCoreWebView2DownloadOperation): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CanResume'}
  handleExceptionBegin
  Result := AObj.CanResume;
  handleExceptionEnd
end;

//function
function CoreWebView2DownloadOperation_AddAllBrowserEvents(AObj: TCoreWebView2DownloadOperation; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AddAllBrowserEvents'}
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2DownloadOperation_Cancel(AObj: TCoreWebView2DownloadOperation): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Cancel'}
  handleExceptionBegin
  Result := AObj.Cancel();
  handleExceptionEnd
end;

//function
function CoreWebView2DownloadOperation_Pause(AObj: TCoreWebView2DownloadOperation): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Pause'}
  handleExceptionBegin
  Result := AObj.Pause();
  handleExceptionEnd
end;

//function
function CoreWebView2DownloadOperation_Resume(AObj: TCoreWebView2DownloadOperation): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Resume'}
  handleExceptionBegin
  Result := AObj.Resume();
  handleExceptionEnd
end;


exports
  CoreWebView2DownloadOperation_Create,
  CoreWebView2DownloadOperation_Initialized,
  CoreWebView2DownloadOperation_BaseIntf,
  CoreWebView2DownloadOperation_DownloadID,
  CoreWebView2DownloadOperation_URI,
  CoreWebView2DownloadOperation_ContentDisposition,
  CoreWebView2DownloadOperation_MimeType,
  CoreWebView2DownloadOperation_TotalBytesToReceive,
  CoreWebView2DownloadOperation_BytesReceived,
  CoreWebView2DownloadOperation_EstimatedEndTime,
  CoreWebView2DownloadOperation_ResultFilePath,
  CoreWebView2DownloadOperation_State,
  CoreWebView2DownloadOperation_InterruptReason,
  CoreWebView2DownloadOperation_CanResume,
  CoreWebView2DownloadOperation_AddAllBrowserEvents,
  CoreWebView2DownloadOperation_Cancel,
  CoreWebView2DownloadOperation_Pause,
  CoreWebView2DownloadOperation_Resume;