// constructor
function TWVBrowser_Create(AOwner: TComponent; out IntfWVBrowserEvents: IWVBrowserEvents): TWVBrowser; extdecl;
begin
  {$define handleExceptionID := 600}
  handleExceptionBegin
  Result := TWVBrowser.Create(AOwner);
  IntfWVBrowserEvents := Result as IWVBrowserEvents;
  handleExceptionEnd
end;

exports
  TWVBrowser_Create;
