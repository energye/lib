// constructor
function TCustomFocusHandler_Create(const events: IChromiumEvents; out IntfFocusHandler: ICefFocusHandler): TCustomFocusHandler; extdecl;
begin
  {$define handleExceptionID := 2200}
  handleExceptionBegin
  Result := TCustomFocusHandler.Create(events);
  IntfFocusHandler := Result as ICefFocusHandler;
  handleExceptionEnd
end;

exports
  TCustomFocusHandler_Create;
