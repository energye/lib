// constructor
function TEngCommandHandler_Create(out IntfCommandHandler: ICefCommandHandler): TEngCommandHandler; extdecl;
begin
  {$define handleExceptionID := 16100}
  handleExceptionBegin
  Result := TEngCommandHandler.Create();
  IntfCommandHandler := Result as ICefCommandHandler;
  handleExceptionEnd
end;

// event
procedure TEngCommandHandler_OnCommandChromeCommand(AObj: TEngCommandHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngCommandHandler_TOnCommandChromeCommandEvent}
  {$DEFINE EventName := OnCommandChromeCommand}
  CEFEventMethodCode
end;

exports
  TEngCommandHandler_Create,
  TEngCommandHandler_OnCommandChromeCommand;