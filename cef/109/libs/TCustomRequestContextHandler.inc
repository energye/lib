// constructor
function TCustomRequestContextHandler_Create(const events: IChromiumEvents; out IntfRequestContextHandler: ICefRequestContextHandler): TCustomRequestContextHandler; extdecl;
begin
  {$define handleExceptionID := 3200}
  handleExceptionBegin
  Result := TCustomRequestContextHandler.Create(events);
  IntfRequestContextHandler := Result as ICefRequestContextHandler;
  handleExceptionEnd
end;

// procedure
procedure TCustomRequestContextHandler_RemoveReferences(AObj: TCustomRequestContextHandler); extdecl;
begin
  {$define handleExceptionID := 3201}
  handleExceptionBegin
  AObj.RemoveReferences();
  handleExceptionEnd
end;

exports
  TCustomRequestContextHandler_Create,
  TCustomRequestContextHandler_RemoveReferences;