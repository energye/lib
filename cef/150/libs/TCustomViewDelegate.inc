// constructor
function TCustomViewDelegate_Create(const events: ICefViewDelegateEvents; out IntfViewDelegate: ICefViewDelegate): TCustomViewDelegate; extdecl;
begin
  {$define handleExceptionID := 8600}
  handleExceptionBegin
  Result := TCustomViewDelegate.Create(events);
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

exports
  TCustomViewDelegate_Create;
