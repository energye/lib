
//constructor
function WVBrowser_Create(AOwner: TComponent): TWVBrowser; extdecl;
begin
  handleExceptionBegin
  Result := TWVBrowser.Create(AOwner);
  handleExceptionEnd
end;


exports
  WVBrowser_Create;