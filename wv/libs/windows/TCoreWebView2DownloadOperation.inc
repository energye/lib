// constructor
function TCoreWebView2DownloadOperation_Create(const aBaseIntf: ICoreWebView2DownloadOperation; aDownloadID: integer): TCoreWebView2DownloadOperation; extdecl;
begin
  {$define handleExceptionID := 4400}
  handleExceptionBegin
  Result := TCoreWebView2DownloadOperation.Create(aBaseIntf, aDownloadID);
  handleExceptionEnd
end;

// function
function TCoreWebView2DownloadOperation_AddAllBrowserEvents(AObj: TCoreWebView2DownloadOperation; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 4401}
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2DownloadOperation_Cancel(AObj: TCoreWebView2DownloadOperation): LongBool; extdecl;
begin
  {$define handleExceptionID := 4402}
  handleExceptionBegin
  Result := AObj.Cancel();
  handleExceptionEnd
end;

// function
function TCoreWebView2DownloadOperation_Pause(AObj: TCoreWebView2DownloadOperation): LongBool; extdecl;
begin
  {$define handleExceptionID := 4403}
  handleExceptionBegin
  Result := AObj.Pause();
  handleExceptionEnd
end;

// function
function TCoreWebView2DownloadOperation_Resume(AObj: TCoreWebView2DownloadOperation): LongBool; extdecl;
begin
  {$define handleExceptionID := 4404}
  handleExceptionBegin
  Result := AObj.Resume();
  handleExceptionEnd
end;

// property
function TCoreWebView2DownloadOperation_Initialized(AObj: TCoreWebView2DownloadOperation): LongBool; extdecl;
begin
  {$define handleExceptionID := 4405}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DownloadOperation_BaseIntf(AObj: TCoreWebView2DownloadOperation; var Result: ICoreWebView2DownloadOperation); extdecl;
begin
  {$define handleExceptionID := 4406}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2DownloadOperation_DownloadID(AObj: TCoreWebView2DownloadOperation): integer; extdecl;
begin
  {$define handleExceptionID := 4407}
  handleExceptionBegin
  Result := AObj.DownloadID;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DownloadOperation_URI(AObj: TCoreWebView2DownloadOperation; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4408}
  handleExceptionBegin
  StringBufferCreate(AObj.URI, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DownloadOperation_ContentDisposition(AObj: TCoreWebView2DownloadOperation; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4409}
  handleExceptionBegin
  StringBufferCreate(AObj.ContentDisposition, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DownloadOperation_MimeType(AObj: TCoreWebView2DownloadOperation; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4410}
  handleExceptionBegin
  StringBufferCreate(AObj.MimeType, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DownloadOperation_TotalBytesToReceive(AObj: TCoreWebView2DownloadOperation; var Result: int64); extdecl;
begin
  {$define handleExceptionID := 4411}
  handleExceptionBegin
  Result := AObj.TotalBytesToReceive;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DownloadOperation_BytesReceived(AObj: TCoreWebView2DownloadOperation; var Result: int64); extdecl;
begin
  {$define handleExceptionID := 4412}
  handleExceptionBegin
  Result := AObj.BytesReceived;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DownloadOperation_EstimatedEndTime(AObj: TCoreWebView2DownloadOperation; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 4413}
  handleExceptionBegin
  Result := AObj.EstimatedEndTime;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2DownloadOperation_ResultFilePath(AObj: TCoreWebView2DownloadOperation; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4414}
  handleExceptionBegin
  StringBufferCreate(AObj.ResultFilePath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2DownloadOperation_State(AObj: TCoreWebView2DownloadOperation): TWVDownloadState; extdecl;
begin
  {$define handleExceptionID := 4415}
  handleExceptionBegin
  Result := AObj.State;
  handleExceptionEnd
end;

// property
function TCoreWebView2DownloadOperation_InterruptReason(AObj: TCoreWebView2DownloadOperation): TWVDownloadInterruptReason; extdecl;
begin
  {$define handleExceptionID := 4416}
  handleExceptionBegin
  Result := AObj.InterruptReason;
  handleExceptionEnd
end;

// property
function TCoreWebView2DownloadOperation_CanResume(AObj: TCoreWebView2DownloadOperation): LongBool; extdecl;
begin
  {$define handleExceptionID := 4417}
  handleExceptionBegin
  Result := AObj.CanResume;
  handleExceptionEnd
end;

exports
  TCoreWebView2DownloadOperation_Create,
  TCoreWebView2DownloadOperation_AddAllBrowserEvents,
  TCoreWebView2DownloadOperation_Cancel,
  TCoreWebView2DownloadOperation_Pause,
  TCoreWebView2DownloadOperation_Resume,
  TCoreWebView2DownloadOperation_Initialized,
  TCoreWebView2DownloadOperation_BaseIntf,
  TCoreWebView2DownloadOperation_DownloadID,
  TCoreWebView2DownloadOperation_URI,
  TCoreWebView2DownloadOperation_ContentDisposition,
  TCoreWebView2DownloadOperation_MimeType,
  TCoreWebView2DownloadOperation_TotalBytesToReceive,
  TCoreWebView2DownloadOperation_BytesReceived,
  TCoreWebView2DownloadOperation_EstimatedEndTime,
  TCoreWebView2DownloadOperation_ResultFilePath,
  TCoreWebView2DownloadOperation_State,
  TCoreWebView2DownloadOperation_InterruptReason,
  TCoreWebView2DownloadOperation_CanResume;