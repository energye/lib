
//constructor
function CustomCommandHandler_Create(const events: IChromiumEvents): TCustomCommandHandler; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomCommandHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomCommandHandler_AsInterface(AObj: TCustomCommandHandler; var Result: ICefCommandHandler); extdecl;
begin
  Result := AObj as ICefCommandHandler;
end;


exports
  CustomCommandHandler_Create,
  CustomCommandHandler_AsInterface;