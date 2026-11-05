// constructor
function TCustomDragHandler_Create(const events: IChromiumEvents; out IntfDragHandler: ICefDragHandler): TCustomDragHandler; extdecl;
begin
  {$define handleExceptionID := 1900}
  handleExceptionBegin
  Result := TCustomDragHandler.Create(events);
  IntfDragHandler := Result as ICefDragHandler;
  handleExceptionEnd
end;

exports
  TCustomDragHandler_Create;
