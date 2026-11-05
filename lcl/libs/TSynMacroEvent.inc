// procedure
procedure TSynMacroEvent_Initialize(AObj: TSynMacroEvent; aCmd: TSynEditorCommand; const aChar: PChar; aData: Pointer); extdecl;
begin
  {$define handleExceptionID := 44700}
  handleExceptionBegin
  AObj.Initialize(aCmd, aChar, aData);
  handleExceptionEnd
end;

// procedure
procedure TSynMacroEvent_Assign(AObj: TSynMacroEvent; AnEvent: TSynMacroEvent); extdecl;
begin
  {$define handleExceptionID := 44701}
  handleExceptionBegin
  AObj.Assign(AnEvent);
  handleExceptionEnd
end;

// procedure
procedure TSynMacroEvent_LoadFromStream(AObj: TSynMacroEvent; aStream: TStream); extdecl;
begin
  {$define handleExceptionID := 44702}
  handleExceptionBegin
  AObj.LoadFromStream(aStream);
  handleExceptionEnd
end;

// procedure
procedure TSynMacroEvent_SaveToStream(AObj: TSynMacroEvent; aStream: TStream); extdecl;
begin
  {$define handleExceptionID := 44703}
  handleExceptionBegin
  AObj.SaveToStream(aStream);
  handleExceptionEnd
end;

// procedure
procedure TSynMacroEvent_LoadFromReader(AObj: TSynMacroEvent; aReader: TSynMacroEventReader); extdecl;
begin
  {$define handleExceptionID := 44704}
  handleExceptionBegin
  AObj.LoadFromReader(aReader);
  handleExceptionEnd
end;

// procedure
procedure TSynMacroEvent_SaveToWriter(AObj: TSynMacroEvent; aWriter: TSynMacroEventWriter); extdecl;
begin
  {$define handleExceptionID := 44705}
  handleExceptionBegin
  AObj.SaveToWriter(aWriter);
  handleExceptionEnd
end;

// procedure
procedure TSynMacroEvent_Playback(AObj: TSynMacroEvent; aEditor: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 44706}
  handleExceptionBegin
  AObj.Playback(aEditor);
  handleExceptionEnd
end;

// property
procedure TSynMacroEvent_AsString(AObj: TSynMacroEvent; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 44707}
  handleExceptionBegin
  StringBufferCreate(AObj.AsString, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TSynMacroEvent_RepeatCount(ASet: LongBool; AObj: TSynMacroEvent; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 44708}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RepeatCount := AValue
  end else
    Result := AObj.RepeatCount;
  handleExceptionEnd
end;

exports
  TSynMacroEvent_Initialize,
  TSynMacroEvent_Assign,
  TSynMacroEvent_LoadFromStream,
  TSynMacroEvent_SaveToStream,
  TSynMacroEvent_LoadFromReader,
  TSynMacroEvent_SaveToWriter,
  TSynMacroEvent_Playback,
  TSynMacroEvent_AsString,
  TSynMacroEvent_RepeatCount;