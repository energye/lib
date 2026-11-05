// constructor
function TWkDownload_Create(AData: WKDownload; AWebViewDelegate: IWKDownloadDelegateEvent): TWkDownload; extdecl;
begin
  {$define handleExceptionID := 1700}
  handleExceptionBegin
  Result := TWkDownload.Create(AData, AWebViewDelegate);
  handleExceptionEnd
end;

// function
function TWkDownload_Data(AObj: TWkDownload): WKDownload; extdecl;
begin
  {$define handleExceptionID := 1701}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkDownload_OriginalRequest(AObj: TWkDownload): NSURLRequest; extdecl;
begin
  {$define handleExceptionID := 1702}
  handleExceptionBegin
  Result := AObj.OriginalRequest();
  handleExceptionEnd
end;

// function
function TWkDownload_Progress(AObj: TWkDownload): NSProgress; extdecl;
begin
  {$define handleExceptionID := 1703}
  handleExceptionBegin
  Result := AObj.Progress();
  handleExceptionEnd
end;

// procedure
procedure TWkDownload_Release(AObj: TWkDownload); extdecl;
begin
  {$define handleExceptionID := 1704}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

// procedure
procedure TWkDownload_SetDelegate(AObj: TWkDownload; downloadDelegate: TWkDownloadDelegate); extdecl;
begin
  {$define handleExceptionID := 1705}
  handleExceptionBegin
  AObj.SetDelegate(downloadDelegate);
  handleExceptionEnd
end;

// procedure
procedure TWkDownload_Cancel(AObj: TWkDownload); extdecl;
begin
  {$define handleExceptionID := 1706}
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;

exports
  TWkDownload_Create,
  TWkDownload_Data,
  TWkDownload_OriginalRequest,
  TWkDownload_Progress,
  TWkDownload_Release,
  TWkDownload_SetDelegate,
  TWkDownload_Cancel;