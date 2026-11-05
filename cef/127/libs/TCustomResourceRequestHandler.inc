// constructor
function TCustomResourceRequestHandler_Create(const events: IChromiumEvents; out IntfResourceRequestHandler: ICefResourceRequestHandler): TCustomResourceRequestHandler; extdecl;
begin
  {$define handleExceptionID := 6600}
  handleExceptionBegin
  Result := TCustomResourceRequestHandler.Create(events);
  IntfResourceRequestHandler := Result as ICefResourceRequestHandler;
  handleExceptionEnd
end;

// procedure
procedure TCustomResourceRequestHandler_RemoveReferences(AObj: TCustomResourceRequestHandler); extdecl;
begin
  {$define handleExceptionID := 6601}
  handleExceptionBegin
  AObj.RemoveReferences();
  handleExceptionEnd
end;

exports
  TCustomResourceRequestHandler_Create,
  TCustomResourceRequestHandler_RemoveReferences;