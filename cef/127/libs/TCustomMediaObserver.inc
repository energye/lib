// constructor
function TCustomMediaObserver_Create(const events: IChromiumEvents; out IntfMediaObserver: ICefMediaObserver): TCustomMediaObserver; extdecl;
begin
  {$define handleExceptionID := 7000}
  handleExceptionBegin
  Result := TCustomMediaObserver.Create(events);
  IntfMediaObserver := Result as ICefMediaObserver;
  handleExceptionEnd
end;

exports
  TCustomMediaObserver_Create;
