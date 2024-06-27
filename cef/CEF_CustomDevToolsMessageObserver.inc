
//constructor
function CustomDevToolsMessageObserver_Create(const events: IChromiumEvents): TCustomDevToolsMessageObserver; extdecl;
begin
  handleExceptionBegin
  Result := TCustomDevToolsMessageObserver.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomDevToolsMessageObserver_AsInterface(AObj: TCustomDevToolsMessageObserver; var Result: ICefDevToolsMessageObserver); extdecl;
begin
  Result := AObj as ICefDevToolsMessageObserver;
end;


exports
  CustomDevToolsMessageObserver_Create,
  CustomDevToolsMessageObserver_AsInterface;