
//constructor
function CefCustomSetCookieCallback_Create(const aEvents: IChromiumEvents; aID: integer): TCefCustomSetCookieCallback; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefCustomSetCookieCallback.Create(aEvents, aID);
  handleExceptionEnd
end;

//procedure
procedure CefCustomSetCookieCallback_AsInterface(AObj: TCefCustomSetCookieCallback; var Result: ICefSetCookieCallback); extdecl;
begin
  Result := AObj as ICefSetCookieCallback;
end;


exports
  CefCustomSetCookieCallback_Create,
  CefCustomSetCookieCallback_AsInterface;