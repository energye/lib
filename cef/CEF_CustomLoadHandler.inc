
//constructor
function CustomLoadHandler_Create(const events: IChromiumEvents): TCustomLoadHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomLoadHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomLoadHandler_AsInterface(AObj: TCustomLoadHandler; var Result: ICefLoadHandler); extdecl;
begin
  Result := AObj as ICefLoadHandler;
end;


exports
  CustomLoadHandler_Create,
  CustomLoadHandler_AsInterface;