// constructor
function TCefCustomDownloadImageCallback_Create(const aEvents: IChromiumEvents; out IntfDownloadImageCallback: ICefDownloadImageCallback): TCefCustomDownloadImageCallback; extdecl;
begin
  {$define handleExceptionID := 1800}
  handleExceptionBegin
  Result := TCefCustomDownloadImageCallback.Create(aEvents);
  IntfDownloadImageCallback := Result as ICefDownloadImageCallback;
  handleExceptionEnd
end;

exports
  TCefCustomDownloadImageCallback_Create;
