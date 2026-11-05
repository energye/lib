// constructor
function TSynMacroRecorder_Create(aOwner: TComponent): TSynMacroRecorder; extdecl;
begin
  {$define handleExceptionID := 42500}
  handleExceptionBegin
  Result := TSynMacroRecorder.Create(aOwner);
  handleExceptionEnd
end;

// property
function TSynMacroRecorder_RecordCommandID(ASet: LongBool; AObj: TSynMacroRecorder; AValue: TSynEditorCommand): TSynEditorCommand; extdecl;
begin
  {$define handleExceptionID := 42501}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RecordCommandID := AValue
  end else
    Result := AObj.RecordCommandID;
  handleExceptionEnd
end;

// property
function TSynMacroRecorder_PlaybackCommandID(ASet: LongBool; AObj: TSynMacroRecorder; AValue: TSynEditorCommand): TSynEditorCommand; extdecl;
begin
  {$define handleExceptionID := 42502}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PlaybackCommandID := AValue
  end else
    Result := AObj.PlaybackCommandID;
  handleExceptionEnd
end;

function TSynMacroRecorder_TClass(): TClass; extdecl;
begin
  Result := TSynMacroRecorder;
end;

exports
  TSynMacroRecorder_Create,
  TSynMacroRecorder_RecordCommandID,
  TSynMacroRecorder_PlaybackCommandID,
  TSynMacroRecorder_TClass;