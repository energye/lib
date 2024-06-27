
//constructor
function CustomBrowserViewDelegate_Create(const events: ICefBrowserViewDelegateEvents): TCustomBrowserViewDelegate; extdecl;
begin
  handleExceptionBegin
  Result := TCustomBrowserViewDelegate.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomBrowserViewDelegate_AsInterface(AObj: TCustomBrowserViewDelegate; var Result: ICefBrowserViewDelegate); extdecl;
begin
  Result := AObj as ICefBrowserViewDelegate;
end;


exports
  CustomBrowserViewDelegate_Create,
  CustomBrowserViewDelegate_AsInterface;