
//constructor
function WVBrowser_Create(AOwner: TComponent): TWVBrowser; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TWVBrowser.Create(AOwner);
  handleExceptionEnd
end;


exports
  WVBrowser_Create;