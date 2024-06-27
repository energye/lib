
//constructor
function CefCustomResolveCallback_Create(const aEvents: IChromiumEvents): TCefCustomResolveCallback; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomResolveCallback.Create(aEvents);
  handleExceptionEnd
end;

//procedure
procedure CefCustomResolveCallback_AsInterface(AObj: TCefCustomResolveCallback; var Result: ICefResolveCallback); extdecl;
begin
  Result := AObj as ICefResolveCallback;
end;


exports
  CefCustomResolveCallback_Create,
  CefCustomResolveCallback_AsInterface;