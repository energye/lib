// constructor
function TCustomPanelDelegate_Create(const events: ICefPanelDelegateEvents; out IntfPanelDelegate: ICefPanelDelegate; out IntfViewDelegate: ICefViewDelegate): TCustomPanelDelegate; extdecl;
begin
  {$define handleExceptionID := 8300}
  handleExceptionBegin
  Result := TCustomPanelDelegate.Create(events);
  IntfPanelDelegate := Result as ICefPanelDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

exports
  TCustomPanelDelegate_Create;
