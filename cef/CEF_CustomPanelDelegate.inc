
//constructor
function CustomPanelDelegate_Create(const events: ICefPanelDelegateEvents): TCustomPanelDelegate; extdecl;
begin
  handleExceptionBegin
  Result := TCustomPanelDelegate.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomPanelDelegate_AsInterface(AObj: TCustomPanelDelegate; var Result: ICefPanelDelegate); extdecl;
begin
  Result := AObj as ICefPanelDelegate;
end;


exports
  CustomPanelDelegate_Create,
  CustomPanelDelegate_AsInterface;