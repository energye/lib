
//constructor
function CustomWindowDelegate_Create(const events: ICefWindowDelegateEvents): TCustomWindowDelegate; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomWindowDelegate.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomWindowDelegate_AsInterface(AObj: TCustomWindowDelegate; var Result: ICefWindowDelegate); extdecl;
begin
  Result := AObj as ICefWindowDelegate;
end;


exports
  CustomWindowDelegate_Create,
  CustomWindowDelegate_AsInterface;