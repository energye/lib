// constructor
function TSynCustomFoldConfig_Create(): TSynCustomFoldConfig; extdecl;
begin
  {$define handleExceptionID := 44100}
  handleExceptionBegin
  Result := TSynCustomFoldConfig.Create();
  handleExceptionEnd
end;

// constructor
function TSynCustomFoldConfig_CreateWithSynCustomFoldConfigModesBool(ASupportedModes: TSynCustomFoldConfigModes; AnIsEssential: LongBool): TSynCustomFoldConfig; extdecl;
begin
  {$define handleExceptionID := 44101}
  handleExceptionBegin
  Result := TSynCustomFoldConfig.Create(ASupportedModes, AnIsEssential);
  handleExceptionEnd
end;

// procedure
procedure TSynCustomFoldConfig_AssignWithSynCustomFoldConfig(AObj: TSynCustomFoldConfig; Src: TSynCustomFoldConfig); extdecl;
begin
  {$define handleExceptionID := 44102}
  handleExceptionBegin
  AObj.Assign(Src);
  handleExceptionEnd
end;

// property
function TSynCustomFoldConfig_IsEssential(AObj: TSynCustomFoldConfig): LongBool; extdecl;
begin
  {$define handleExceptionID := 44103}
  handleExceptionBegin
  Result := AObj.IsEssential;
  handleExceptionEnd
end;

// property
function TSynCustomFoldConfig_SupportedModes(ASet: LongBool; AObj: TSynCustomFoldConfig; AValue: TSynCustomFoldConfigModes): TSynCustomFoldConfigModes; extdecl;
begin
  {$define handleExceptionID := 44104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SupportedModes := AValue
  end else
    Result := AObj.SupportedModes;
  handleExceptionEnd
end;

// property
function TSynCustomFoldConfig_FoldActions(AObj: TSynCustomFoldConfig): TSynFoldActions; extdecl;
begin
  {$define handleExceptionID := 44105}
  handleExceptionBegin
  Result := AObj.FoldActions;
  handleExceptionEnd
end;

// property
function TSynCustomFoldConfig_Enabled(ASet: LongBool; AObj: TSynCustomFoldConfig; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 44106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Enabled := AValue
  end else
    Result := AObj.Enabled;
  handleExceptionEnd
end;

// property
function TSynCustomFoldConfig_Modes(ASet: LongBool; AObj: TSynCustomFoldConfig; AValue: TSynCustomFoldConfigModes): TSynCustomFoldConfigModes; extdecl;
begin
  {$define handleExceptionID := 44107}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Modes := AValue
  end else
    Result := AObj.Modes;
  handleExceptionEnd
end;

// event
procedure TSynCustomFoldConfig_OnChange(AObj: TSynCustomFoldConfig; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

exports
  TSynCustomFoldConfig_Create,
  TSynCustomFoldConfig_CreateWithSynCustomFoldConfigModesBool,
  TSynCustomFoldConfig_AssignWithSynCustomFoldConfig,
  TSynCustomFoldConfig_IsEssential,
  TSynCustomFoldConfig_SupportedModes,
  TSynCustomFoldConfig_FoldActions,
  TSynCustomFoldConfig_Enabled,
  TSynCustomFoldConfig_Modes,
  TSynCustomFoldConfig_OnChange;