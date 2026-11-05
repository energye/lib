// constructor
function TSynEditKeyStrokes_Create(AOwner: TPersistent): TSynEditKeyStrokes; extdecl;
begin
  {$define handleExceptionID := 37300}
  handleExceptionBegin
  Result := TSynEditKeyStrokes.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynEditKeyStrokes_AddToSynEditKeyStroke(AObj: TSynEditKeyStrokes): TSynEditKeyStroke; extdecl;
begin
  {$define handleExceptionID := 37301}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

// function
function TSynEditKeyStrokes_FindCommand(AObj: TSynEditKeyStrokes; Cmd: TSynEditorCommand): integer; extdecl;
begin
  {$define handleExceptionID := 37302}
  handleExceptionBegin
  Result := AObj.FindCommand(Cmd);
  handleExceptionEnd
end;

// function
function TSynEditKeyStrokes_FindKeycode(AObj: TSynEditKeyStrokes; Code: word; SS: TShiftState): integer; extdecl;
begin
  {$define handleExceptionID := 37303}
  handleExceptionBegin
  Result := AObj.FindKeycode(Code, SS);
  handleExceptionEnd
end;

// function
function TSynEditKeyStrokes_FindKeycodeEx(AObj: TSynEditKeyStrokes; Code: word; SS: TShiftState; var Data: pointer; var IsStartOfCombo: LongBool; FinishComboOnly: LongBool; ComboStart: TSynEditKeyStrokes): TSynEditorCommand; extdecl;
var
  OutData: pointer;
  OutIsStartOfCombo: boolean;
begin
  {$define handleExceptionID := 37304}
  handleExceptionBegin
  OutData := Data;
  Result := AObj.FindKeycodeEx(Code, SS, OutData, OutIsStartOfCombo, FinishComboOnly, ComboStart);
  Data := OutData;
  IsStartOfCombo := OutIsStartOfCombo;
  handleExceptionEnd
end;

// function
function TSynEditKeyStrokes_FindShortcut(AObj: TSynEditKeyStrokes; SC: TShortcut): integer; extdecl;
begin
  {$define handleExceptionID := 37305}
  handleExceptionBegin
  Result := AObj.FindShortcut(SC);
  handleExceptionEnd
end;

// function
function TSynEditKeyStrokes_FindShortcut2(AObj: TSynEditKeyStrokes; SC: TShortcut; SC2: TShortcut): integer; extdecl;
begin
  {$define handleExceptionID := 37306}
  handleExceptionBegin
  Result := AObj.FindShortcut2(SC, SC2);
  handleExceptionEnd
end;

// procedure
procedure TSynEditKeyStrokes_ResetKeyCombo(AObj: TSynEditKeyStrokes); extdecl;
begin
  {$define handleExceptionID := 37307}
  handleExceptionBegin
  AObj.ResetKeyCombo();
  handleExceptionEnd
end;

// procedure
procedure TSynEditKeyStrokes_LoadFromStream(AObj: TSynEditKeyStrokes; AStream: TStream); extdecl;
begin
  {$define handleExceptionID := 37308}
  handleExceptionBegin
  AObj.LoadFromStream(AStream);
  handleExceptionEnd
end;

// procedure
procedure TSynEditKeyStrokes_ResetDefaults(AObj: TSynEditKeyStrokes); extdecl;
begin
  {$define handleExceptionID := 37309}
  handleExceptionBegin
  AObj.ResetDefaults();
  handleExceptionEnd
end;

// procedure
procedure TSynEditKeyStrokes_SaveToStream(AObj: TSynEditKeyStrokes; AStream: TStream); extdecl;
begin
  {$define handleExceptionID := 37310}
  handleExceptionBegin
  AObj.SaveToStream(AStream);
  handleExceptionEnd
end;

// property
function TSynEditKeyStrokes_ItemsWithIntToSynEditKeyStroke(ASet: LongBool; AObj: TSynEditKeyStrokes; Index: Integer; AValue: TSynEditKeyStroke): TSynEditKeyStroke; extdecl;
begin
  {$define handleExceptionID := 37311}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[Index] := AValue
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

// property
function TSynEditKeyStrokes_PluginOffset(ASet: LongBool; AObj: TSynEditKeyStrokes; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 37312}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PluginOffset := AValue
  end else
    Result := AObj.PluginOffset;
  handleExceptionEnd
end;

// property
function TSynEditKeyStrokes_UsePluginOffset(ASet: LongBool; AObj: TSynEditKeyStrokes; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 37313}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UsePluginOffset := AValue
  end else
    Result := AObj.UsePluginOffset;
  handleExceptionEnd
end;

exports
  TSynEditKeyStrokes_Create,
  TSynEditKeyStrokes_AddToSynEditKeyStroke,
  TSynEditKeyStrokes_FindCommand,
  TSynEditKeyStrokes_FindKeycode,
  TSynEditKeyStrokes_FindKeycodeEx,
  TSynEditKeyStrokes_FindShortcut,
  TSynEditKeyStrokes_FindShortcut2,
  TSynEditKeyStrokes_ResetKeyCombo,
  TSynEditKeyStrokes_LoadFromStream,
  TSynEditKeyStrokes_ResetDefaults,
  TSynEditKeyStrokes_SaveToStream,
  TSynEditKeyStrokes_ItemsWithIntToSynEditKeyStroke,
  TSynEditKeyStrokes_PluginOffset,
  TSynEditKeyStrokes_UsePluginOffset;