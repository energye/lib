// constructor
function TCefCustomSetCookieCallback_Create(const aEvents: IChromiumEvents; aID: integer; out IntfSetCookieCallback: ICefSetCookieCallback): TCefCustomSetCookieCallback; extdecl;
begin
  {$define handleExceptionID := 4000}
  handleExceptionBegin
  Result := TCefCustomSetCookieCallback.Create(aEvents, aID);
  IntfSetCookieCallback := Result as ICefSetCookieCallback;
  handleExceptionEnd
end;

exports
  TCefCustomSetCookieCallback_Create;
