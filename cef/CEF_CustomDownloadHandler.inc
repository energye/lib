
//constructor
function CustomDownloadHandler_Create(const events: IChromiumEvents): TCustomDownloadHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomDownloadHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomDownloadHandler_AsInterface(AObj: TCustomDownloadHandler; var Result: ICefDownloadHandler); extdecl;
begin
  Result := AObj as ICefDownloadHandler;
end;


exports
  CustomDownloadHandler_Create,
  CustomDownloadHandler_AsInterface;