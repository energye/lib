// constructor
function TCustomCommandHandler_Create(const events: IChromiumEvents; out IntfCommandHandler: ICefCommandHandler): TCustomCommandHandler; extdecl;
begin
  {$define handleExceptionID := 9800}
  handleExceptionBegin
  Result := TCustomCommandHandler.Create(events);
  IntfCommandHandler := Result as ICefCommandHandler;
  handleExceptionEnd
end;

exports
  TCustomCommandHandler_Create;
