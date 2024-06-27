
//constructor
function CefCustomCookieVisitor_Create(const aEvents: IChromiumEvents; aID: integer): TCefCustomCookieVisitor; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomCookieVisitor.Create(aEvents, aID);
  handleExceptionEnd
end;

//procedure
procedure CefCustomCookieVisitor_AsInterface(AObj: TCefCustomCookieVisitor; var Result: ICefCookieVisitor); extdecl;
begin
  Result := AObj as ICefCookieVisitor;
end;


exports
  CefCustomCookieVisitor_Create,
  CefCustomCookieVisitor_AsInterface;