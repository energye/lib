// constructor
function TCustomMenuButtonDelegate_Create(const events: ICefMenuButtonDelegateEvents; out IntfMenuButtonDelegate: ICefMenuButtonDelegate; out IntfButtonDelegate: ICefButtonDelegate; out IntfViewDelegate: ICefViewDelegate): TCustomMenuButtonDelegate; extdecl;
begin
  {$define handleExceptionID := 7000}
  handleExceptionBegin
  Result := TCustomMenuButtonDelegate.Create(events);
  IntfMenuButtonDelegate := Result as ICefMenuButtonDelegate;
  IntfButtonDelegate := Result as ICefButtonDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

exports
  TCustomMenuButtonDelegate_Create;
