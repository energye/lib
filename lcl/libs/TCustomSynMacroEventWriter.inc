// constructor
function TCustomSynMacroEventWriter_Create(): TCustomSynMacroEventWriter; extdecl;
begin
  {$define handleExceptionID := 45300}
  handleExceptionBegin
  Result := TCustomSynMacroEventWriter.Create();
  handleExceptionEnd
end;

// event
procedure TCustomSynMacroEventWriter_OnWriteEventCommand(AObj: TCustomSynMacroEventWriter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynMacroWriteCommandEvent}
  {$DEFINE EventName := OnWriteEventCommand}
  LCLEventMethodCode
end;

// event
procedure TCustomSynMacroEventWriter_OnWriteEventStr(AObj: TCustomSynMacroEventWriter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynMacroWriteEventStrEvent}
  {$DEFINE EventName := OnWriteEventStr}
  LCLEventMethodCode
end;

// event
procedure TCustomSynMacroEventWriter_OnWriteEventInt(AObj: TCustomSynMacroEventWriter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynMacroWriteEventIntEvent}
  {$DEFINE EventName := OnWriteEventInt}
  LCLEventMethodCode
end;

exports
  TCustomSynMacroEventWriter_Create,
  TCustomSynMacroEventWriter_OnWriteEventCommand,
  TCustomSynMacroEventWriter_OnWriteEventStr,
  TCustomSynMacroEventWriter_OnWriteEventInt;