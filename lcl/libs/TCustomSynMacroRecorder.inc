// constructor
function TCustomSynMacroRecorder_Create(aOwner: TComponent): TCustomSynMacroRecorder; extdecl;
begin
  {$define handleExceptionID := 42400}
  handleExceptionBegin
  Result := TCustomSynMacroRecorder.Create(aOwner);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_Error(AObj: TCustomSynMacroRecorder; const aMsg: PChar); extdecl;
begin
  {$define handleExceptionID := 42401}
  handleExceptionBegin
  AObj.Error(aMsg);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_RecordMacro(AObj: TCustomSynMacroRecorder; aEditor: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 42402}
  handleExceptionBegin
  AObj.RecordMacro(aEditor);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_PlaybackMacro(AObj: TCustomSynMacroRecorder; aEditor: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 42403}
  handleExceptionBegin
  AObj.PlaybackMacro(aEditor);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_Stop(AObj: TCustomSynMacroRecorder); extdecl;
begin
  {$define handleExceptionID := 42404}
  handleExceptionBegin
  AObj.Stop();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_Pause(AObj: TCustomSynMacroRecorder); extdecl;
begin
  {$define handleExceptionID := 42405}
  handleExceptionBegin
  AObj.Pause();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_Resume(AObj: TCustomSynMacroRecorder); extdecl;
begin
  {$define handleExceptionID := 42406}
  handleExceptionBegin
  AObj.Resume();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_AssignEventsFrom(AObj: TCustomSynMacroRecorder; AMacroRecorder: TCustomSynMacroRecorder); extdecl;
begin
  {$define handleExceptionID := 42407}
  handleExceptionBegin
  AObj.AssignEventsFrom(AMacroRecorder);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_Clear(AObj: TCustomSynMacroRecorder); extdecl;
begin
  {$define handleExceptionID := 42408}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_AddEvent(AObj: TCustomSynMacroRecorder; aCmd: TSynEditorCommand; aChar: char; aData: pointer); extdecl;
begin
  {$define handleExceptionID := 42409}
  handleExceptionBegin
  AObj.AddEvent(aCmd, aChar, aData);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_InsertEvent(AObj: TCustomSynMacroRecorder; aIndex: integer; aCmd: TSynEditorCommand; aChar: char; aData: pointer); extdecl;
begin
  {$define handleExceptionID := 42410}
  handleExceptionBegin
  AObj.InsertEvent(aIndex, aCmd, aChar, aData);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_AddCustomEvent(AObj: TCustomSynMacroRecorder; aEvent: TSynMacroEvent); extdecl;
begin
  {$define handleExceptionID := 42411}
  handleExceptionBegin
  AObj.AddCustomEvent(aEvent);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_InsertCustomEvent(AObj: TCustomSynMacroRecorder; aIndex: integer; aEvent: TSynMacroEvent); extdecl;
begin
  {$define handleExceptionID := 42412}
  handleExceptionBegin
  AObj.InsertCustomEvent(aIndex, aEvent);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_DeleteEvent(AObj: TCustomSynMacroRecorder; aIndex: integer); extdecl;
begin
  {$define handleExceptionID := 42413}
  handleExceptionBegin
  AObj.DeleteEvent(aIndex);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_LoadFromStream(AObj: TCustomSynMacroRecorder; aSrc: TStream); extdecl;
begin
  {$define handleExceptionID := 42414}
  handleExceptionBegin
  AObj.LoadFromStream(aSrc);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_LoadFromStreamEx(AObj: TCustomSynMacroRecorder; aSrc: TStream; aClear: LongBool); extdecl;
begin
  {$define handleExceptionID := 42415}
  handleExceptionBegin
  AObj.LoadFromStreamEx(aSrc, aClear);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_SaveToStream(AObj: TCustomSynMacroRecorder; aDest: TStream); extdecl;
begin
  {$define handleExceptionID := 42416}
  handleExceptionBegin
  AObj.SaveToStream(aDest);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_LoadFromFile(AObj: TCustomSynMacroRecorder; aFilename: PChar); extdecl;
begin
  {$define handleExceptionID := 42417}
  handleExceptionBegin
  AObj.LoadFromFile(aFilename);
  handleExceptionEnd
end;

// procedure
procedure TCustomSynMacroRecorder_SaveToFile(AObj: TCustomSynMacroRecorder; aFilename: PChar); extdecl;
begin
  {$define handleExceptionID := 42418}
  handleExceptionBegin
  AObj.SaveToFile(aFilename);
  handleExceptionEnd
end;

// property
function TCustomSynMacroRecorder_IsEmpty(AObj: TCustomSynMacroRecorder): LongBool; extdecl;
begin
  {$define handleExceptionID := 42419}
  handleExceptionBegin
  Result := AObj.IsEmpty;
  handleExceptionEnd
end;

// property
function TCustomSynMacroRecorder_State(AObj: TCustomSynMacroRecorder): TSynMacroState; extdecl;
begin
  {$define handleExceptionID := 42420}
  handleExceptionBegin
  Result := AObj.State;
  handleExceptionEnd
end;

// property
function TCustomSynMacroRecorder_EventCount(AObj: TCustomSynMacroRecorder): integer; extdecl;
begin
  {$define handleExceptionID := 42421}
  handleExceptionBegin
  Result := AObj.EventCount;
  handleExceptionEnd
end;

// property
function TCustomSynMacroRecorder_Events(AObj: TCustomSynMacroRecorder; aIndex: integer): TSynMacroEvent; extdecl;
begin
  {$define handleExceptionID := 42422}
  handleExceptionBegin
  Result := AObj.Events[aIndex];
  handleExceptionEnd
end;

// property
function TCustomSynMacroRecorder_CurrentEditor(AObj: TCustomSynMacroRecorder): TCustomSynEdit; extdecl;
begin
  {$define handleExceptionID := 42423}
  handleExceptionBegin
  Result := AObj.CurrentEditor;
  handleExceptionEnd
end;

// property
function TCustomSynMacroRecorder_RecordShortCut(ASet: LongBool; AObj: TCustomSynMacroRecorder; AValue: TShortCut): TShortCut; extdecl;
begin
  {$define handleExceptionID := 42424}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RecordShortCut := AValue
  end else
    Result := AObj.RecordShortCut;
  handleExceptionEnd
end;

// property
function TCustomSynMacroRecorder_PlaybackShortCut(ASet: LongBool; AObj: TCustomSynMacroRecorder; AValue: TShortCut): TShortCut; extdecl;
begin
  {$define handleExceptionID := 42425}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PlaybackShortCut := AValue
  end else
    Result := AObj.PlaybackShortCut;
  handleExceptionEnd
end;

// property
function TCustomSynMacroRecorder_SaveMarkerPos(ASet: LongBool; AObj: TCustomSynMacroRecorder; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42426}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SaveMarkerPos := AValue
  end else
    Result := AObj.SaveMarkerPos;
  handleExceptionEnd
end;

// property
procedure TCustomSynMacroRecorder_AsString(ASet: LongBool; AObj: TCustomSynMacroRecorder; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 42427}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AsString := AValue
  end else
    StringBufferCreate(AObj.AsString, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomSynMacroRecorder_MacroName(ASet: LongBool; AObj: TCustomSynMacroRecorder; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 42428}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MacroName := AValue
  end else
    StringBufferCreate(AObj.MacroName, AStrData, AStrSize);
  handleExceptionEnd
end;

// event
procedure TCustomSynMacroRecorder_OnStateChange(AObj: TCustomSynMacroRecorder; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnStateChange}
  LCLEventMethodCode
end;

// event
procedure TCustomSynMacroRecorder_OnUserCommand(AObj: TCustomSynMacroRecorder; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynUserCommandEvent}
  {$DEFINE EventName := OnUserCommand}
  LCLEventMethodCode
end;

function TCustomSynMacroRecorder_TClass(): TClass; extdecl;
begin
  Result := TCustomSynMacroRecorder;
end;

exports
  TCustomSynMacroRecorder_Create,
  TCustomSynMacroRecorder_Error,
  TCustomSynMacroRecorder_RecordMacro,
  TCustomSynMacroRecorder_PlaybackMacro,
  TCustomSynMacroRecorder_Stop,
  TCustomSynMacroRecorder_Pause,
  TCustomSynMacroRecorder_Resume,
  TCustomSynMacroRecorder_AssignEventsFrom,
  TCustomSynMacroRecorder_Clear,
  TCustomSynMacroRecorder_AddEvent,
  TCustomSynMacroRecorder_InsertEvent,
  TCustomSynMacroRecorder_AddCustomEvent,
  TCustomSynMacroRecorder_InsertCustomEvent,
  TCustomSynMacroRecorder_DeleteEvent,
  TCustomSynMacroRecorder_LoadFromStream,
  TCustomSynMacroRecorder_LoadFromStreamEx,
  TCustomSynMacroRecorder_SaveToStream,
  TCustomSynMacroRecorder_LoadFromFile,
  TCustomSynMacroRecorder_SaveToFile,
  TCustomSynMacroRecorder_IsEmpty,
  TCustomSynMacroRecorder_State,
  TCustomSynMacroRecorder_EventCount,
  TCustomSynMacroRecorder_Events,
  TCustomSynMacroRecorder_CurrentEditor,
  TCustomSynMacroRecorder_RecordShortCut,
  TCustomSynMacroRecorder_PlaybackShortCut,
  TCustomSynMacroRecorder_SaveMarkerPos,
  TCustomSynMacroRecorder_AsString,
  TCustomSynMacroRecorder_MacroName,
  TCustomSynMacroRecorder_OnStateChange,
  TCustomSynMacroRecorder_OnUserCommand,
  TCustomSynMacroRecorder_TClass;