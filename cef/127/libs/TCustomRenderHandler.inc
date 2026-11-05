// constructor
function TCustomRenderHandler_Create(const events: IChromiumEvents; out IntfRenderHandler: ICefRenderHandler): TCustomRenderHandler; extdecl;
begin
  {$define handleExceptionID := 3100}
  handleExceptionBegin
  Result := TCustomRenderHandler.Create(events);
  IntfRenderHandler := Result as ICefRenderHandler;
  handleExceptionEnd
end;

exports
  TCustomRenderHandler_Create;
