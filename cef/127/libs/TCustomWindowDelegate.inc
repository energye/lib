// constructor
function TCustomWindowDelegate_Create(const events: ICefWindowDelegateEvents; out IntfWindowDelegate: ICefWindowDelegate; out IntfPanelDelegate: ICefPanelDelegate; out IntfViewDelegate: ICefViewDelegate): TCustomWindowDelegate; extdecl;
begin
  {$define handleExceptionID := 7200}
  handleExceptionBegin
  Result := TCustomWindowDelegate.Create(events);
  IntfWindowDelegate := Result as ICefWindowDelegate;
  IntfPanelDelegate := Result as ICefPanelDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

exports
  TCustomWindowDelegate_Create;
