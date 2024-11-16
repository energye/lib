
//constructor
function CustomMediaObserver_Create(const events: IChromiumEvents): TCustomMediaObserver; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomMediaObserver.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomMediaObserver_AsInterface(AObj: TCustomMediaObserver; var Result: ICefMediaObserver); extdecl;
begin
  Result := AObj as ICefMediaObserver;
end;


exports
  CustomMediaObserver_Create,
  CustomMediaObserver_AsInterface;