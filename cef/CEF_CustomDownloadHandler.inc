
//constructor
function CustomDownloadHandler_Create(const events: IChromiumEvents): TCustomDownloadHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomDownloadHandler.Create(events);
  handleExceptionEnd
end;


exports
  CustomDownloadHandler_Create;