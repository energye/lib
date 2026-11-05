// constructor
function TWkNavigationDelegate_Create(event: IWKNavigationDelegateEvent): TWkNavigationDelegate; extdecl;
begin
  {$define handleExceptionID := 2200}
  handleExceptionBegin
  Result := TWkNavigationDelegate.Create(event);
  handleExceptionEnd
end;

// function
function TWkNavigationDelegate_Data(AObj: TWkNavigationDelegate): WKNavigationDelegateProtocol; extdecl;
begin
  {$define handleExceptionID := 2201}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// procedure
procedure TWkNavigationDelegate_Release(AObj: TWkNavigationDelegate); extdecl;
begin
  {$define handleExceptionID := 2202}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkNavigationDelegate_Create,
  TWkNavigationDelegate_Data,
  TWkNavigationDelegate_Release;