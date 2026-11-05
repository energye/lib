// constructor
function TCustomClientHandler_Create(const events: IChromiumEvents; aDevToolsClient: LongBool; out IntfClient: ICefClient): TCustomClientHandler; extdecl;
begin
  {$define handleExceptionID := 11000}
  handleExceptionBegin
  Result := TCustomClientHandler.Create(events, aDevToolsClient);
  IntfClient := Result as ICefClient;
  handleExceptionEnd
end;

// procedure
procedure TCustomClientHandler_RemoveReferences(AObj: TCustomClientHandler); extdecl;
begin
  {$define handleExceptionID := 11001}
  handleExceptionBegin
  AObj.RemoveReferences();
  handleExceptionEnd
end;

exports
  TCustomClientHandler_Create,
  TCustomClientHandler_RemoveReferences;