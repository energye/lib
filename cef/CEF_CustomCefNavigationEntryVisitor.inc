
//constructor
function CustomCefNavigationEntryVisitor_Create(const aEvents: IChromiumEvents): TCustomCefNavigationEntryVisitor; extdecl;
begin
  handleExceptionBegin
  Result := TCustomCefNavigationEntryVisitor.Create(aEvents);
  handleExceptionEnd
end;


exports
  CustomCefNavigationEntryVisitor_Create;