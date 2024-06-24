
//constructor
function CustomBrowserViewDelegate_Create(const events: ICefBrowserViewDelegateEvents): TCustomBrowserViewDelegate; extdecl;
begin
  handleExceptionBegin
  Result := TCustomBrowserViewDelegate.Create(events);
  handleExceptionEnd
end;


exports
  CustomBrowserViewDelegate_Create;