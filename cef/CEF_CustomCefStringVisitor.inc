
//constructor
function CustomCefStringVisitor_Create(const aEvents: IChromiumEvents): TCustomCefStringVisitor; extdecl;
begin
  handleExceptionBegin
  Result := TCustomCefStringVisitor.Create(aEvents);
  handleExceptionEnd
end;


exports
  CustomCefStringVisitor_Create;