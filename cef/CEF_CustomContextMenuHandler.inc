
//constructor
function CustomContextMenuHandler_Create(const events: IChromiumEvents): TCustomContextMenuHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomContextMenuHandler.Create(events);
  handleExceptionEnd
end;

//procedure
procedure CustomContextMenuHandler_AsInterface(AObj: TCustomContextMenuHandler; var Result: ICefContextMenuHandler); extdecl;
begin
  Result := AObj as ICefContextMenuHandler;
end;


exports
  CustomContextMenuHandler_Create,
  CustomContextMenuHandler_AsInterface;