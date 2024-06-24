
//constructor
function CustomViewDelegate_Create(const events: ICefViewDelegateEvents): TCustomViewDelegate; extdecl;
begin
  handleExceptionBegin
  Result := TCustomViewDelegate.Create(events);
  handleExceptionEnd
end;


exports
  CustomViewDelegate_Create;