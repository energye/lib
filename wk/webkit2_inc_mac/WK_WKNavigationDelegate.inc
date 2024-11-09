
//constructor
function WKNavigationDelegate_Create(event: IWKNavigationDelegateEvent): TWKNavigationDelegate; extdecl;
begin
  handleExceptionBegin
  Result := TWKNavigationDelegate.Create(event);
  handleExceptionEnd
end;

//function
function WKNavigationDelegate_Data(AObj: TWKNavigationDelegate): WKNavigationDelegateProtocol; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//procedure
procedure WKNavigationDelegate_Release(AObj: TWKNavigationDelegate); extdecl;
begin
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;


exports
  WKNavigationDelegate_Create,
  WKNavigationDelegate_Data,
  WKNavigationDelegate_Release;