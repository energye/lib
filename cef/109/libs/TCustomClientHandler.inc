// constructor
function TCustomClientHandler_Create(const events: IChromiumEvents; aDevToolsClient: LongBool; out IntfClient: ICefClient): TCustomClientHandler; extdecl;
begin
  {$define handleExceptionID := 10300}
  handleExceptionBegin
  Result := TCustomClientHandler.Create(events, aDevToolsClient);
  IntfClient := Result as ICefClient;
  handleExceptionEnd
end;

// procedure
procedure TCustomClientHandler_RemoveReferences(AObj: TCustomClientHandler); extdecl;
begin
  {$define handleExceptionID := 10301}
  handleExceptionBegin
  AObj.RemoveReferences();
  handleExceptionEnd
end;

exports
  TCustomClientHandler_Create,
  TCustomClientHandler_RemoveReferences;