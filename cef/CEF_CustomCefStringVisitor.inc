
//constructor
function CustomCefStringVisitor_Create(const aEvents: IChromiumEvents): TCustomCefStringVisitor; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomCefStringVisitor.Create(aEvents);
  handleExceptionEnd
end;

//procedure
procedure CustomCefStringVisitor_AsInterface(AObj: TCustomCefStringVisitor; var Result: ICefStringVisitor); extdecl;
begin
  Result := AObj as ICefStringVisitor;
end;


exports
  CustomCefStringVisitor_Create,
  CustomCefStringVisitor_AsInterface;