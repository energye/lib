// constructor
function TWkDownloadDelegate_Create(event: IWKDownloadDelegateEvent): TWkDownloadDelegate; extdecl;
begin
  {$define handleExceptionID := 1800}
  handleExceptionBegin
  Result := TWkDownloadDelegate.Create(event);
  handleExceptionEnd
end;

// function
function TWkDownloadDelegate_Data(AObj: TWkDownloadDelegate): WKDownloadDelegateProtocol; extdecl;
begin
  {$define handleExceptionID := 1801}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// procedure
procedure TWkDownloadDelegate_Release(AObj: TWkDownloadDelegate); extdecl;
begin
  {$define handleExceptionID := 1802}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkDownloadDelegate_Create,
  TWkDownloadDelegate_Data,
  TWkDownloadDelegate_Release;