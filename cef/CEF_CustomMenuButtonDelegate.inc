
//constructor
function CustomMenuButtonDelegate_Create(const events: ICefMenuButtonDelegateEvents): TCustomMenuButtonDelegate; extdecl;
begin
  handleExceptionBegin
  Result := TCustomMenuButtonDelegate.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomMenuButtonDelegate_AsInterface(AObj: TCustomMenuButtonDelegate; var Result: ICefMenuButtonDelegate); extdecl;
begin
  Result := AObj as ICefMenuButtonDelegate;
end;


exports
  CustomMenuButtonDelegate_Create,
  CustomMenuButtonDelegate_AsInterface;