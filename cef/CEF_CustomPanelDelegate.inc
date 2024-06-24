
//constructor
function CustomPanelDelegate_Create(const events: ICefPanelDelegateEvents): TCustomPanelDelegate; extdecl;
begin
  handleExceptionBegin
  Result := TCustomPanelDelegate.Create(events);
  handleExceptionEnd
end;


exports
  CustomPanelDelegate_Create;