// constructor
function TCustomSynMacroEventReader_Create(): TCustomSynMacroEventReader; extdecl;
begin
  {$define handleExceptionID := 45500}
  handleExceptionBegin
  Result := TCustomSynMacroEventReader.Create();
  handleExceptionEnd
end;

// event
procedure TCustomSynMacroEventReader_OnGetParamAsInt(AObj: TCustomSynMacroEventReader; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynMacroReaderGetParamAsIntEvent}
  {$DEFINE EventName := OnGetParamAsInt}
  LCLEventMethodCode
end;

// event
procedure TCustomSynMacroEventReader_OnGetParamAsString(AObj: TCustomSynMacroEventReader; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynMacroReaderGetParamAsStringEvent}
  {$DEFINE EventName := OnGetParamAsString}
  LCLEventMethodCode
end;

// event
procedure TCustomSynMacroEventReader_OnGetParamType(AObj: TCustomSynMacroEventReader; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynMacroReaderGetParamTypeEvent}
  {$DEFINE EventName := OnGetParamType}
  LCLEventMethodCode
end;

// event
procedure TCustomSynMacroEventReader_OnEventCommand(AObj: TCustomSynMacroEventReader; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynMacroReaderEventCommandEvent}
  {$DEFINE EventName := OnEventCommand}
  LCLEventMethodCode
end;

// event
procedure TCustomSynMacroEventReader_OnParamCount(AObj: TCustomSynMacroEventReader; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynMacroReaderParamCountEvent}
  {$DEFINE EventName := OnParamCount}
  LCLEventMethodCode
end;

exports
  TCustomSynMacroEventReader_Create,
  TCustomSynMacroEventReader_OnGetParamAsInt,
  TCustomSynMacroEventReader_OnGetParamAsString,
  TCustomSynMacroEventReader_OnGetParamType,
  TCustomSynMacroEventReader_OnEventCommand,
  TCustomSynMacroEventReader_OnParamCount;