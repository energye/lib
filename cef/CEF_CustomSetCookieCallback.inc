
//constructor
function CefCustomSetCookieCallback_Create(const aEvents: IChromiumEvents; aID: integer): TCefCustomSetCookieCallback; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomSetCookieCallback.Create(aEvents, aID);
  handleExceptionEnd
end;


exports
  CefCustomSetCookieCallback_Create;