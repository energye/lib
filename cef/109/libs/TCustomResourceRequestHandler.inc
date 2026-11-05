// constructor
function TCustomResourceRequestHandler_Create(const events: IChromiumEvents; out IntfResourceRequestHandler: ICefResourceRequestHandler): TCustomResourceRequestHandler; extdecl;
begin
  {$define handleExceptionID := 6000}
  handleExceptionBegin
  Result := TCustomResourceRequestHandler.Create(events);
  IntfResourceRequestHandler := Result as ICefResourceRequestHandler;
  handleExceptionEnd
end;

// procedure
procedure TCustomResourceRequestHandler_RemoveReferences(AObj: TCustomResourceRequestHandler); extdecl;
begin
  {$define handleExceptionID := 6001}
  handleExceptionBegin
  AObj.RemoveReferences();
  handleExceptionEnd
end;

exports
  TCustomResourceRequestHandler_Create,
  TCustomResourceRequestHandler_RemoveReferences;