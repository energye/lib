
//constructor
function CefCustomMediaRouteCreateCallback_Create(const aEvents: IChromiumEvents): TCefCustomMediaRouteCreateCallback; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomMediaRouteCreateCallback.Create(aEvents);
  handleExceptionEnd
end;


exports
  CefCustomMediaRouteCreateCallback_Create;