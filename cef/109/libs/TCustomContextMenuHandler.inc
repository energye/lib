// constructor
function TCustomContextMenuHandler_Create(const events: IChromiumEvents; out IntfContextMenuHandler: ICefContextMenuHandler): TCustomContextMenuHandler; extdecl;
begin
  {$define handleExceptionID := 1200}
  handleExceptionBegin
  Result := TCustomContextMenuHandler.Create(events);
  IntfContextMenuHandler := Result as ICefContextMenuHandler;
  handleExceptionEnd
end;

exports
  TCustomContextMenuHandler_Create;
