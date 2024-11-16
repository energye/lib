
//constructor
function CefCustomMediaRouteCreateCallback_Create(const aEvents: IChromiumEvents): TCefCustomMediaRouteCreateCallback; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefCustomMediaRouteCreateCallback.Create(aEvents);
  handleExceptionEnd
end;

//procedure
procedure CefCustomMediaRouteCreateCallback_AsInterface(AObj: TCefCustomMediaRouteCreateCallback; var Result: ICefMediaRouteCreateCallback); extdecl;
begin
  Result := AObj as ICefMediaRouteCreateCallback;
end;


exports
  CefCustomMediaRouteCreateCallback_Create,
  CefCustomMediaRouteCreateCallback_AsInterface;