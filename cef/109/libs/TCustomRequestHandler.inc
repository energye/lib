// constructor
function TCustomRequestHandler_Create(const events: IChromiumEvents; out IntfRequestHandler: ICefRequestHandler): TCustomRequestHandler; extdecl;
begin
  {$define handleExceptionID := 3300}
  handleExceptionBegin
  Result := TCustomRequestHandler.Create(events);
  IntfRequestHandler := Result as ICefRequestHandler;
  handleExceptionEnd
end;

// procedure
procedure TCustomRequestHandler_RemoveReferences(AObj: TCustomRequestHandler); extdecl;
begin
  {$define handleExceptionID := 3301}
  handleExceptionBegin
  AObj.RemoveReferences();
  handleExceptionEnd
end;

exports
  TCustomRequestHandler_Create,
  TCustomRequestHandler_RemoveReferences;