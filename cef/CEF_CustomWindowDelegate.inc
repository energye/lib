
//constructor
function CustomWindowDelegate_Create(const events: ICefWindowDelegateEvents): TCustomWindowDelegate; extdecl;
begin
  handleExceptionBegin
  Result := TCustomWindowDelegate.Create(events);
  handleExceptionEnd
end;


exports
  CustomWindowDelegate_Create;