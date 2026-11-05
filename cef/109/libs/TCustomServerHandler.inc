// constructor
function TCustomServerHandler_Create(const events: IServerEvents; out IntfServerHandler: ICefServerHandler): TCustomServerHandler; extdecl;
begin
  {$define handleExceptionID := 5400}
  handleExceptionBegin
  Result := TCustomServerHandler.Create(events);
  IntfServerHandler := Result as ICefServerHandler;
  handleExceptionEnd
end;

exports
  TCustomServerHandler_Create;
