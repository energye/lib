// constructor
function TEngPanelDelegate_Create(out IntfPanelDelegate: ICefPanelDelegate; out IntfViewDelegate: ICefViewDelegate): TEngPanelDelegate; extdecl;
begin
  {$define handleExceptionID := 16100}
  handleExceptionBegin
  Result := TEngPanelDelegate.Create();
  IntfPanelDelegate := Result as ICefPanelDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

exports
  TEngPanelDelegate_Create;
