// constructor
function TCefCustomMediaRouteCreateCallback_Create(const aEvents: IChromiumEvents; out IntfMediaRouteCreateCallback: ICefMediaRouteCreateCallback): TCefCustomMediaRouteCreateCallback; extdecl;
begin
  {$define handleExceptionID := 7100}
  handleExceptionBegin
  Result := TCefCustomMediaRouteCreateCallback.Create(aEvents);
  IntfMediaRouteCreateCallback := Result as ICefMediaRouteCreateCallback;
  handleExceptionEnd
end;

exports
  TCefCustomMediaRouteCreateCallback_Create;
