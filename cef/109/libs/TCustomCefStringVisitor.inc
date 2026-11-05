// constructor
function TCustomCefStringVisitor_Create(const aEvents: IChromiumEvents; out IntfStringVisitor: ICefStringVisitor): TCustomCefStringVisitor; extdecl;
begin
  {$define handleExceptionID := 4200}
  handleExceptionBegin
  Result := TCustomCefStringVisitor.Create(aEvents);
  IntfStringVisitor := Result as ICefStringVisitor;
  handleExceptionEnd
end;

exports
  TCustomCefStringVisitor_Create;
