
//constructor
function CefCustomDownloadImageCallback_Create(const aEvents: IChromiumEvents): TCefCustomDownloadImageCallback; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomDownloadImageCallback.Create(aEvents);
  handleExceptionEnd
end;


exports
  CefCustomDownloadImageCallback_Create;