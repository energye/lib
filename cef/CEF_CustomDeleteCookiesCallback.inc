
//constructor
function CefCustomDeleteCookiesCallback_Create(const aEvents: IChromiumEvents): TCefCustomDeleteCookiesCallback; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomDeleteCookiesCallback.Create(aEvents);
  handleExceptionEnd
end;

//procedure
procedure CefCustomDeleteCookiesCallback_AsInterface(AObj: TCefCustomDeleteCookiesCallback; var Result: ICefDeleteCookiesCallback); extdecl;
begin
  Result := AObj as ICefDeleteCookiesCallback;
end;


exports
  CefCustomDeleteCookiesCallback_Create,
  CefCustomDeleteCookiesCallback_AsInterface;