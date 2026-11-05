// constructor
function TCustomDevToolsMessageObserver_Create(const events: IChromiumEvents; out IntfDevToolsMessageObserver: ICefDevToolsMessageObserver): TCustomDevToolsMessageObserver; extdecl;
begin
  {$define handleExceptionID := 9700}
  handleExceptionBegin
  Result := TCustomDevToolsMessageObserver.Create(events);
  IntfDevToolsMessageObserver := Result as ICefDevToolsMessageObserver;
  handleExceptionEnd
end;

exports
  TCustomDevToolsMessageObserver_Create;
