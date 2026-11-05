// constructor
function TCefCustomDeleteCookiesCallback_Create(const aEvents: IChromiumEvents; out IntfDeleteCookiesCallback: ICefDeleteCookiesCallback): TCefCustomDeleteCookiesCallback; extdecl;
begin
  {$define handleExceptionID := 1400}
  handleExceptionBegin
  Result := TCefCustomDeleteCookiesCallback.Create(aEvents);
  IntfDeleteCookiesCallback := Result as ICefDeleteCookiesCallback;
  handleExceptionEnd
end;

exports
  TCefCustomDeleteCookiesCallback_Create;
