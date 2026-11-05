// constructor
function TEngPanelDelegate_Create(out IntfPanelDelegate: ICefPanelDelegate; out IntfViewDelegate: ICefViewDelegate): TEngPanelDelegate; extdecl;
begin
  {$define handleExceptionID := 15300}
  handleExceptionBegin
  Result := TEngPanelDelegate.Create();
  IntfPanelDelegate := Result as ICefPanelDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

exports
  TEngPanelDelegate_Create;
