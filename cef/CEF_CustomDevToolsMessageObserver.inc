
//constructor
function CustomDevToolsMessageObserver_Create(const events: IChromiumEvents): TCustomDevToolsMessageObserver; extdecl;
begin
  handleExceptionBegin
  Result := TCustomDevToolsMessageObserver.Create(events);
  handleExceptionEnd
end;


exports
  CustomDevToolsMessageObserver_Create;