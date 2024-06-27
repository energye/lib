
//constructor
function CustomClientHandler_Create(const events: IChromiumEvents; aDevToolsClient: LongBool): TCustomClientHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCustomClientHandler.Create(events, aDevToolsClient);
  handleExceptionEnd
end;

//procedure
procedure CustomClientHandler_AsInterface(AObj: TCustomClientHandler; var Result: ICefClient); extdecl;
begin
  Result := AObj as ICefClient;
end;

//procedure
procedure CustomClientHandler_RemoveReferences(AObj: TCustomClientHandler); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveReferences();
  handleExceptionEnd
end;


exports
  CustomClientHandler_Create,
  CustomClientHandler_AsInterface,
  CustomClientHandler_RemoveReferences;