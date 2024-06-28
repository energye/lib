
//constructor
function CustomLifeSpanHandler_Create(const events: IChromiumEvents): TCustomLifeSpanHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomLifeSpanHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomLifeSpanHandler_AsInterface(AObj: TCustomLifeSpanHandler; var Result: ICefLifeSpanHandler); extdecl;
begin
  Result := AObj as ICefLifeSpanHandler;
end;


exports
  CustomLifeSpanHandler_Create,
  CustomLifeSpanHandler_AsInterface;