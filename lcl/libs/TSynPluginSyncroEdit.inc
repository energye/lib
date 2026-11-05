// constructor
function TSynPluginSyncroEdit_Create(AOwner: TComponent): TSynPluginSyncroEdit; extdecl;
begin
  {$define handleExceptionID := 42800}
  handleExceptionBegin
  Result := TSynPluginSyncroEdit.Create(AOwner);
  handleExceptionEnd
end;

// property
function TSynPluginSyncroEdit_ScanModes(ASet: LongBool; AObj: TSynPluginSyncroEdit; AValue: TSynPluginSyncroScanModes): TSynPluginSyncroScanModes; extdecl;
begin
  {$define handleExceptionID := 42801}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScanModes := AValue
  end else
    Result := AObj.ScanModes;
  handleExceptionEnd
end;

// property
function TSynPluginSyncroEdit_GutterGlyph(ASet: LongBool; AObj: TSynPluginSyncroEdit; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionID := 42802}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GutterGlyph := AValue
  end else
    Result := AObj.GutterGlyph;
  handleExceptionEnd
end;

// property
function TSynPluginSyncroEdit_KeystrokesSelecting(ASet: LongBool; AObj: TSynPluginSyncroEdit; AValue: TSynEditKeyStrokes): TSynEditKeyStrokes; extdecl;
begin
  {$define handleExceptionID := 42803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeystrokesSelecting := AValue
  end else
    Result := AObj.KeystrokesSelecting;
  handleExceptionEnd
end;

// property
function TSynPluginSyncroEdit_Keystrokes(ASet: LongBool; AObj: TSynPluginSyncroEdit; AValue: TSynEditKeyStrokes): TSynEditKeyStrokes; extdecl;
begin
  {$define handleExceptionID := 42804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Keystrokes := AValue
  end else
    Result := AObj.Keystrokes;
  handleExceptionEnd
end;

// property
function TSynPluginSyncroEdit_KeystrokesOffCell(ASet: LongBool; AObj: TSynPluginSyncroEdit; AValue: TSynEditKeyStrokes): TSynEditKeyStrokes; extdecl;
begin
  {$define handleExceptionID := 42805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeystrokesOffCell := AValue
  end else
    Result := AObj.KeystrokesOffCell;
  handleExceptionEnd
end;

// event
procedure TSynPluginSyncroEdit_OnModeChange(AObj: TSynPluginSyncroEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnModeChange}
  LCLEventMethodCode
end;

// event
procedure TSynPluginSyncroEdit_OnBeginEdit(AObj: TSynPluginSyncroEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnBeginEdit}
  LCLEventMethodCode
end;

// event
procedure TSynPluginSyncroEdit_OnEndEdit(AObj: TSynPluginSyncroEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEndEdit}
  LCLEventMethodCode
end;

function TSynPluginSyncroEdit_TClass(): TClass; extdecl;
begin
  Result := TSynPluginSyncroEdit;
end;

exports
  TSynPluginSyncroEdit_Create,
  TSynPluginSyncroEdit_ScanModes,
  TSynPluginSyncroEdit_GutterGlyph,
  TSynPluginSyncroEdit_KeystrokesSelecting,
  TSynPluginSyncroEdit_Keystrokes,
  TSynPluginSyncroEdit_KeystrokesOffCell,
  TSynPluginSyncroEdit_OnModeChange,
  TSynPluginSyncroEdit_OnBeginEdit,
  TSynPluginSyncroEdit_OnEndEdit,
  TSynPluginSyncroEdit_TClass;