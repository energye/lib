// constructor
function TCustomBrowserViewDelegate_Create(const events: ICefBrowserViewDelegateEvents; out IntfBrowserViewDelegate: ICefBrowserViewDelegate; out IntfViewDelegate: ICefViewDelegate): TCustomBrowserViewDelegate; extdecl;
begin
  {$define handleExceptionID := 8000}
  handleExceptionBegin
  Result := TCustomBrowserViewDelegate.Create(events);
  IntfBrowserViewDelegate := Result as ICefBrowserViewDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

exports
  TCustomBrowserViewDelegate_Create;
