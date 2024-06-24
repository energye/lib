
//constructor
function CustomMediaObserver_Create(const events: IChromiumEvents): TCustomMediaObserver; extdecl;
begin
  handleExceptionBegin
  Result := TCustomMediaObserver.Create(events);
  handleExceptionEnd
end;


exports
  CustomMediaObserver_Create;