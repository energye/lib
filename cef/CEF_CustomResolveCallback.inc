
//constructor
function CefCustomResolveCallback_Create(const aEvents: IChromiumEvents): TCefCustomResolveCallback; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomResolveCallback.Create(aEvents);
  handleExceptionEnd
end;


exports
  CefCustomResolveCallback_Create;