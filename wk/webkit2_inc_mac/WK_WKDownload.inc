
//constructor
function WKDownload_Create(aData: WKDownload; aWebViewDelegate: IWKDownloadEvent): TWKDownload; extdecl;
begin
  handleExceptionBegin
  Result := TWKDownload.Create(aData, aWebViewDelegate);
  handleExceptionEnd
end;

//function
function WKDownload_Data(AObj: TWKDownload): WKDownload; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function WKDownload_OriginalRequest(AObj: TWKDownload): NSURLRequest; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OriginalRequest();
  handleExceptionEnd
end;

//procedure
procedure WKDownload_SetDelegate(AObj: TWKDownload; downloadDelegate: TWKDownloadDelegate); extdecl;
begin
  handleExceptionBegin
  AObj.SetDelegate(downloadDelegate);
  handleExceptionEnd
end;

//procedure
procedure WKDownload_Cancel(AObj: TWKDownload); extdecl;
begin
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;


exports
  WKDownload_Create,
  WKDownload_Data,
  WKDownload_OriginalRequest,
  WKDownload_SetDelegate,
  WKDownload_Cancel;