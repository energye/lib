// constructor
function TCustomButtonDelegate_Create(const events: ICefButtonDelegateEvents; out IntfButtonDelegate: ICefButtonDelegate; out IntfViewDelegate: ICefViewDelegate): TCustomButtonDelegate; extdecl;
begin
  {$define handleExceptionID := 7900}
  handleExceptionBegin
  Result := TCustomButtonDelegate.Create(events);
  IntfButtonDelegate := Result as ICefButtonDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

exports
  TCustomButtonDelegate_Create;
