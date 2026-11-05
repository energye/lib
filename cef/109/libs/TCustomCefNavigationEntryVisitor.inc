// constructor
function TCustomCefNavigationEntryVisitor_Create(const aEvents: IChromiumEvents; out IntfNavigationEntryVisitor: ICefNavigationEntryVisitor): TCustomCefNavigationEntryVisitor; extdecl;
begin
  {$define handleExceptionID := 2700}
  handleExceptionBegin
  Result := TCustomCefNavigationEntryVisitor.Create(aEvents);
  IntfNavigationEntryVisitor := Result as ICefNavigationEntryVisitor;
  handleExceptionEnd
end;

exports
  TCustomCefNavigationEntryVisitor_Create;
