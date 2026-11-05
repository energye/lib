// constructor
function TCustomJsDialogHandler_Create(const events: IChromiumEvents; out IntfJsDialogHandler: ICefJsDialogHandler): TCustomJsDialogHandler; extdecl;
begin
  {$define handleExceptionID := 2300}
  handleExceptionBegin
  Result := TCustomJsDialogHandler.Create(events);
  IntfJsDialogHandler := Result as ICefJsDialogHandler;
  handleExceptionEnd
end;

exports
  TCustomJsDialogHandler_Create;
