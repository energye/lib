// constructor
function TCustomFrameHandler_Create(const events: IChromiumEvents; out IntfFrameHandler: ICefFrameHandler): TCustomFrameHandler; extdecl;
begin
  {$define handleExceptionID := 10300}
  handleExceptionBegin
  Result := TCustomFrameHandler.Create(events);
  IntfFrameHandler := Result as ICefFrameHandler;
  handleExceptionEnd
end;

exports
  TCustomFrameHandler_Create;
