// constructor
function TSizeConstraints_Create(AControl: TControl): TSizeConstraints; extdecl;
begin
  {$define handleExceptionID := 22000}
  handleExceptionBegin
  Result := TSizeConstraints.Create(AControl);
  handleExceptionEnd
end;

// function
function TSizeConstraints_EffectiveMinWidth(AObj: TSizeConstraints): Integer; extdecl;
begin
  {$define handleExceptionID := 22001}
  handleExceptionBegin
  Result := AObj.EffectiveMinWidth();
  handleExceptionEnd
end;

// function
function TSizeConstraints_EffectiveMinHeight(AObj: TSizeConstraints): Integer; extdecl;
begin
  {$define handleExceptionID := 22002}
  handleExceptionBegin
  Result := AObj.EffectiveMinHeight();
  handleExceptionEnd
end;

// function
function TSizeConstraints_EffectiveMaxWidth(AObj: TSizeConstraints): Integer; extdecl;
begin
  {$define handleExceptionID := 22003}
  handleExceptionBegin
  Result := AObj.EffectiveMaxWidth();
  handleExceptionEnd
end;

// function
function TSizeConstraints_EffectiveMaxHeight(AObj: TSizeConstraints): Integer; extdecl;
begin
  {$define handleExceptionID := 22004}
  handleExceptionBegin
  Result := AObj.EffectiveMaxHeight();
  handleExceptionEnd
end;

// function
function TSizeConstraints_MinMaxWidth(AObj: TSizeConstraints; Width: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 22005}
  handleExceptionBegin
  Result := AObj.MinMaxWidth(Width);
  handleExceptionEnd
end;

// function
function TSizeConstraints_MinMaxHeight(AObj: TSizeConstraints; Height: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 22006}
  handleExceptionBegin
  Result := AObj.MinMaxHeight(Height);
  handleExceptionEnd
end;

// procedure
procedure TSizeConstraints_UpdateInterfaceConstraints(AObj: TSizeConstraints); extdecl;
begin
  {$define handleExceptionID := 22007}
  handleExceptionBegin
  AObj.UpdateInterfaceConstraints();
  handleExceptionEnd
end;

// procedure
procedure TSizeConstraints_SetInterfaceConstraints(AObj: TSizeConstraints; MinW: Integer; MinH: Integer; MaxW: Integer; MaxH: Integer); extdecl;
begin
  {$define handleExceptionID := 22008}
  handleExceptionBegin
  AObj.SetInterfaceConstraints(MinW, MinH, MaxW, MaxH);
  handleExceptionEnd
end;

// procedure
procedure TSizeConstraints_AutoAdjustLayout(AObj: TSizeConstraints; var AXProportion: Double; var AYProportion: Double); extdecl;
begin
  {$define handleExceptionID := 22009}
  handleExceptionBegin
  AObj.AutoAdjustLayout(AXProportion, AYProportion);
  handleExceptionEnd
end;

// property
function TSizeConstraints_MaxInterfaceHeight(AObj: TSizeConstraints): Integer; extdecl;
begin
  {$define handleExceptionID := 22010}
  handleExceptionBegin
  Result := AObj.MaxInterfaceHeight;
  handleExceptionEnd
end;

// property
function TSizeConstraints_MaxInterfaceWidth(AObj: TSizeConstraints): Integer; extdecl;
begin
  {$define handleExceptionID := 22011}
  handleExceptionBegin
  Result := AObj.MaxInterfaceWidth;
  handleExceptionEnd
end;

// property
function TSizeConstraints_MinInterfaceHeight(AObj: TSizeConstraints): Integer; extdecl;
begin
  {$define handleExceptionID := 22012}
  handleExceptionBegin
  Result := AObj.MinInterfaceHeight;
  handleExceptionEnd
end;

// property
function TSizeConstraints_MinInterfaceWidth(AObj: TSizeConstraints): Integer; extdecl;
begin
  {$define handleExceptionID := 22013}
  handleExceptionBegin
  Result := AObj.MinInterfaceWidth;
  handleExceptionEnd
end;

// property
function TSizeConstraints_Control(AObj: TSizeConstraints): TControl; extdecl;
begin
  {$define handleExceptionID := 22014}
  handleExceptionBegin
  Result := AObj.Control;
  handleExceptionEnd
end;

// property
function TSizeConstraints_Options(ASet: LongBool; AObj: TSizeConstraints; AValue: TSizeConstraintsOptions): TSizeConstraintsOptions; extdecl;
begin
  {$define handleExceptionID := 22015}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// property
function TSizeConstraints_MaxHeight(ASet: LongBool; AObj: TSizeConstraints; AValue: TConstraintSize): TConstraintSize; extdecl;
begin
  {$define handleExceptionID := 22016}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxHeight := AValue
  end else
    Result := AObj.MaxHeight;
  handleExceptionEnd
end;

// property
function TSizeConstraints_MaxWidth(ASet: LongBool; AObj: TSizeConstraints; AValue: TConstraintSize): TConstraintSize; extdecl;
begin
  {$define handleExceptionID := 22017}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxWidth := AValue
  end else
    Result := AObj.MaxWidth;
  handleExceptionEnd
end;

// property
function TSizeConstraints_MinHeight(ASet: LongBool; AObj: TSizeConstraints; AValue: TConstraintSize): TConstraintSize; extdecl;
begin
  {$define handleExceptionID := 22018}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinHeight := AValue
  end else
    Result := AObj.MinHeight;
  handleExceptionEnd
end;

// property
function TSizeConstraints_MinWidth(ASet: LongBool; AObj: TSizeConstraints; AValue: TConstraintSize): TConstraintSize; extdecl;
begin
  {$define handleExceptionID := 22019}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinWidth := AValue
  end else
    Result := AObj.MinWidth;
  handleExceptionEnd
end;

// event
procedure TSizeConstraints_OnChange(AObj: TSizeConstraints; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

exports
  TSizeConstraints_Create,
  TSizeConstraints_EffectiveMinWidth,
  TSizeConstraints_EffectiveMinHeight,
  TSizeConstraints_EffectiveMaxWidth,
  TSizeConstraints_EffectiveMaxHeight,
  TSizeConstraints_MinMaxWidth,
  TSizeConstraints_MinMaxHeight,
  TSizeConstraints_UpdateInterfaceConstraints,
  TSizeConstraints_SetInterfaceConstraints,
  TSizeConstraints_AutoAdjustLayout,
  TSizeConstraints_MaxInterfaceHeight,
  TSizeConstraints_MaxInterfaceWidth,
  TSizeConstraints_MinInterfaceHeight,
  TSizeConstraints_MinInterfaceWidth,
  TSizeConstraints_Control,
  TSizeConstraints_Options,
  TSizeConstraints_MaxHeight,
  TSizeConstraints_MaxWidth,
  TSizeConstraints_MinHeight,
  TSizeConstraints_MinWidth,
  TSizeConstraints_OnChange;