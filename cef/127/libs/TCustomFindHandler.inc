// constructor
function TCustomFindHandler_Create(const events: IChromiumEvents; out IntfFindHandler: ICefFindHandler): TCustomFindHandler; extdecl;
begin
  {$define handleExceptionID := 2100}
  handleExceptionBegin
  Result := TCustomFindHandler.Create(events);
  IntfFindHandler := Result as ICefFindHandler;
  handleExceptionEnd
end;

exports
  TCustomFindHandler_Create;
