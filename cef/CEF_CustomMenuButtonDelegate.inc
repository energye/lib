
//constructor
function CustomMenuButtonDelegate_Create(const events: ICefMenuButtonDelegateEvents): TCustomMenuButtonDelegate; extdecl;
begin
  handleExceptionBegin
  Result := TCustomMenuButtonDelegate.Create(events);
  handleExceptionEnd
end;


exports
  CustomMenuButtonDelegate_Create;