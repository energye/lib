
//constructor
function CefCustomCookieVisitor_Create(const aEvents: IChromiumEvents; aID: integer): TCefCustomCookieVisitor; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomCookieVisitor.Create(aEvents, aID);
  handleExceptionEnd
end;


exports
  CefCustomCookieVisitor_Create;
