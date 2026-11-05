// constructor
function TCustomDownloadHandler_Create(const events: IChromiumEvents; out IntfDownloadHandler: ICefDownloadHandler): TCustomDownloadHandler; extdecl;
begin
  {$define handleExceptionID := 1700}
  handleExceptionBegin
  Result := TCustomDownloadHandler.Create(events);
  IntfDownloadHandler := Result as ICefDownloadHandler;
  handleExceptionEnd
end;

exports
  TCustomDownloadHandler_Create;
