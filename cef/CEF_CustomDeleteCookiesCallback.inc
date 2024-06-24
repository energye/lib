
//constructor
function CefCustomDeleteCookiesCallback_Create(const aEvents: IChromiumEvents): TCefCustomDeleteCookiesCallback; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomDeleteCookiesCallback.Create(aEvents);
  handleExceptionEnd
end;


exports
  CefCustomDeleteCookiesCallback_Create;