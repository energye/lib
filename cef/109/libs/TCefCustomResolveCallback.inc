// constructor
function TCefCustomResolveCallback_Create(const aEvents: IChromiumEvents; out IntfResolveCallback: ICefResolveCallback): TCefCustomResolveCallback; extdecl;
begin
  {$define handleExceptionID := 3400}
  handleExceptionBegin
  Result := TCefCustomResolveCallback.Create(aEvents);
  IntfResolveCallback := Result as ICefResolveCallback;
  handleExceptionEnd
end;

exports
  TCefCustomResolveCallback_Create;
