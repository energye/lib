// constructor
function TSynPluginSyncronizedEditBase_Create(AOwner: TComponent): TSynPluginSyncronizedEditBase; extdecl;
begin
  {$define handleExceptionID := 42600}
  handleExceptionBegin
  Result := TSynPluginSyncronizedEditBase.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TSynPluginSyncronizedEditBase_Clear(AObj: TSynPluginSyncronizedEditBase); extdecl;
begin
  {$define handleExceptionID := 42601}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// property
function TSynPluginSyncronizedEditBase_Enabled(ASet: LongBool; AObj: TSynPluginSyncronizedEditBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42602}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Enabled := AValue
  end else
    Result := AObj.Enabled;
  handleExceptionEnd
end;

// property
function TSynPluginSyncronizedEditBase_Active(ASet: LongBool; AObj: TSynPluginSyncronizedEditBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Active := AValue
  end else
    Result := AObj.Active;
  handleExceptionEnd
end;

// property
function TSynPluginSyncronizedEditBase_PreActive(ASet: LongBool; AObj: TSynPluginSyncronizedEditBase; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 42604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PreActive := AValue
  end else
    Result := AObj.PreActive;
  handleExceptionEnd
end;

// property
function TSynPluginSyncronizedEditBase_MarkupInfo(ASet: LongBool; AObj: TSynPluginSyncronizedEditBase; AValue: TSynSelectedColor): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 42605}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarkupInfo := AValue
  end else
    Result := AObj.MarkupInfo;
  handleExceptionEnd
end;

// property
function TSynPluginSyncronizedEditBase_MarkupInfoCurrent(ASet: LongBool; AObj: TSynPluginSyncronizedEditBase; AValue: TSynSelectedColor): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 42606}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarkupInfoCurrent := AValue
  end else
    Result := AObj.MarkupInfoCurrent;
  handleExceptionEnd
end;

// property
function TSynPluginSyncronizedEditBase_MarkupInfoSync(ASet: LongBool; AObj: TSynPluginSyncronizedEditBase; AValue: TSynSelectedColor): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 42607}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarkupInfoSync := AValue
  end else
    Result := AObj.MarkupInfoSync;
  handleExceptionEnd
end;

// property
function TSynPluginSyncronizedEditBase_MarkupInfoArea(ASet: LongBool; AObj: TSynPluginSyncronizedEditBase; AValue: TSynSelectedColor): TSynSelectedColor; extdecl;
begin
  {$define handleExceptionID := 42608}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarkupInfoArea := AValue
  end else
    Result := AObj.MarkupInfoArea;
  handleExceptionEnd
end;

// event
procedure TSynPluginSyncronizedEditBase_OnActivate(AObj: TSynPluginSyncronizedEditBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnActivate}
  LCLEventMethodCode
end;

// event
procedure TSynPluginSyncronizedEditBase_OnDeactivate(AObj: TSynPluginSyncronizedEditBase; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDeactivate}
  LCLEventMethodCode
end;

function TSynPluginSyncronizedEditBase_TClass(): TClass; extdecl;
begin
  Result := TSynPluginSyncronizedEditBase;
end;

exports
  TSynPluginSyncronizedEditBase_Create,
  TSynPluginSyncronizedEditBase_Clear,
  TSynPluginSyncronizedEditBase_Enabled,
  TSynPluginSyncronizedEditBase_Active,
  TSynPluginSyncronizedEditBase_PreActive,
  TSynPluginSyncronizedEditBase_MarkupInfo,
  TSynPluginSyncronizedEditBase_MarkupInfoCurrent,
  TSynPluginSyncronizedEditBase_MarkupInfoSync,
  TSynPluginSyncronizedEditBase_MarkupInfoArea,
  TSynPluginSyncronizedEditBase_OnActivate,
  TSynPluginSyncronizedEditBase_OnDeactivate,
  TSynPluginSyncronizedEditBase_TClass;