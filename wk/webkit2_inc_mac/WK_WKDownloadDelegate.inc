
//constructor
function WKDownloadDelegate_Create(event: IWKDownloadDelegateEvent): TWKDownloadDelegate; extdecl;
begin
  handleExceptionBegin
  Result := TWKDownloadDelegate.Create(event);
  handleExceptionEnd
end;

//function
function WKDownloadDelegate_Data(AObj: TWKDownloadDelegate): WKDownloadDelegateProtocol; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;


exports
  WKDownloadDelegate_Create,
  WKDownloadDelegate_Data;
