
//constructor
function CefCustomDownloadImageCallback_Create(const aEvents: IChromiumEvents): TCefCustomDownloadImageCallback; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefCustomDownloadImageCallback.Create(aEvents);
  handleExceptionEnd
end;

//procedure
procedure CefCustomDownloadImageCallback_AsInterface(AObj: TCefCustomDownloadImageCallback; var Result: ICefDownloadImageCallback); extdecl;
begin
  Result := AObj as ICefDownloadImageCallback;
end;


exports
  CefCustomDownloadImageCallback_Create,
  CefCustomDownloadImageCallback_AsInterface;