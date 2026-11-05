// constructor
function TCefCustomCookieVisitor_Create(const aEvents: IChromiumEvents; aID: integer; out IntfCookieVisitor: ICefCookieVisitor): TCefCustomCookieVisitor; extdecl;
begin
  {$define handleExceptionID := 1400}
  handleExceptionBegin
  Result := TCefCustomCookieVisitor.Create(aEvents, aID);
  IntfCookieVisitor := Result as ICefCookieVisitor;
  handleExceptionEnd
end;

exports
  TCefCustomCookieVisitor_Create;
