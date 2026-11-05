// constructor
function TCustomDialogHandler_Create(const events: IChromiumEvents; out IntfDialogHandler: ICefDialogHandler): TCustomDialogHandler; extdecl;
begin
  {$define handleExceptionID := 1500}
  handleExceptionBegin
  Result := TCustomDialogHandler.Create(events);
  IntfDialogHandler := Result as ICefDialogHandler;
  handleExceptionEnd
end;

exports
  TCustomDialogHandler_Create;
