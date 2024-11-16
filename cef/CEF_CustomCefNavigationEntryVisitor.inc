
//constructor
function CustomCefNavigationEntryVisitor_Create(const aEvents: IChromiumEvents): TCustomCefNavigationEntryVisitor; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomCefNavigationEntryVisitor.Create(aEvents);
  handleExceptionEnd
end;

//procedure
procedure CustomCefNavigationEntryVisitor_AsInterface(AObj: TCustomCefNavigationEntryVisitor; var Result: ICefNavigationEntryVisitor); extdecl;
begin
  Result := AObj as ICefNavigationEntryVisitor;
end;


exports
  CustomCefNavigationEntryVisitor_Create,
  CustomCefNavigationEntryVisitor_AsInterface;