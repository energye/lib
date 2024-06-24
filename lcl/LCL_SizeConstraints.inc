
//constructor
function SizeConstraints_Create(AControl: TControl): TSizeConstraints; extdecl;
begin
  handleExceptionBegin
  Result := TSizeConstraints.Create(AControl);
  handleExceptionEnd
end;

//property
function SizeConstraints_MaxInterfaceHeight(AObj: TSizeConstraints): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MaxInterfaceHeight;
  handleExceptionEnd
end;

//property
function SizeConstraints_MaxInterfaceWidth(AObj: TSizeConstraints): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MaxInterfaceWidth;
  handleExceptionEnd
end;

//property
function SizeConstraints_MinInterfaceHeight(AObj: TSizeConstraints): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MinInterfaceHeight;
  handleExceptionEnd
end;

//property
function SizeConstraints_MinInterfaceWidth(AObj: TSizeConstraints): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MinInterfaceWidth;
  handleExceptionEnd
end;

//property
function SizeConstraints_Control(AObj: TSizeConstraints): TControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Control;
  handleExceptionEnd
end;

//property
function SizeConstraints_Options(AIsSet: LongBool; AObj: TSizeConstraints; AValue: TSizeConstraintsOptions): TSizeConstraintsOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options := AValue;
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

//property
function SizeConstraints_MaxHeight(AIsSet: LongBool; AObj: TSizeConstraints; AValue: TConstraintSize): TConstraintSize; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxHeight := AValue;
  end else
    Result := AObj.MaxHeight;
  handleExceptionEnd
end;

//property
function SizeConstraints_MaxWidth(AIsSet: LongBool; AObj: TSizeConstraints; AValue: TConstraintSize): TConstraintSize; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxWidth := AValue;
  end else
    Result := AObj.MaxWidth;
  handleExceptionEnd
end;

//property
function SizeConstraints_MinHeight(AIsSet: LongBool; AObj: TSizeConstraints; AValue: TConstraintSize): TConstraintSize; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinHeight := AValue;
  end else
    Result := AObj.MinHeight;
  handleExceptionEnd
end;

//property
function SizeConstraints_MinWidth(AIsSet: LongBool; AObj: TSizeConstraints; AValue: TConstraintSize): TConstraintSize; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinWidth := AValue;
  end else
    Result := AObj.MinWidth;
  handleExceptionEnd
end;

//function
function SizeConstraints_EffectiveMinWidth(AObj: TSizeConstraints): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EffectiveMinWidth();
  handleExceptionEnd
end;

//function
function SizeConstraints_EffectiveMinHeight(AObj: TSizeConstraints): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EffectiveMinHeight();
  handleExceptionEnd
end;

//function
function SizeConstraints_EffectiveMaxWidth(AObj: TSizeConstraints): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EffectiveMaxWidth();
  handleExceptionEnd
end;

//function
function SizeConstraints_EffectiveMaxHeight(AObj: TSizeConstraints): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.EffectiveMaxHeight();
  handleExceptionEnd
end;

//function
function SizeConstraints_MinMaxWidth(AObj: TSizeConstraints; Width: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MinMaxWidth(Width);
  handleExceptionEnd
end;

//function
function SizeConstraints_MinMaxHeight(AObj: TSizeConstraints; Height: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MinMaxHeight(Height);
  handleExceptionEnd
end;

//function
function SizeConstraints_Class(): TClass; extdecl;
begin
  Result := TSizeConstraints;
end;

//procedure
procedure SizeConstraints_UpdateInterfaceConstraints(AObj: TSizeConstraints); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateInterfaceConstraints();
  handleExceptionEnd
end;

//procedure
procedure SizeConstraints_SetInterfaceConstraints(AObj: TSizeConstraints; MinW, MinH, MaxW, MaxH: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetInterfaceConstraints(MinW, MinH, MaxW, MaxH);
  handleExceptionEnd
end;

//procedure
procedure SizeConstraints_AutoAdjustLayout(AObj: TSizeConstraints; var AXProportion, AYProportion: Double); extdecl;
begin
  handleExceptionBegin
  AObj.AutoAdjustLayout(AXProportion, AYProportion);
  handleExceptionEnd
end;

//property event
procedure SizeConstraints_SetOnChange(AObj: TSizeConstraints; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;


exports
  SizeConstraints_Create,
  SizeConstraints_MaxInterfaceHeight,
  SizeConstraints_MaxInterfaceWidth,
  SizeConstraints_MinInterfaceHeight,
  SizeConstraints_MinInterfaceWidth,
  SizeConstraints_Control,
  SizeConstraints_Options,
  SizeConstraints_MaxHeight,
  SizeConstraints_MaxWidth,
  SizeConstraints_MinHeight,
  SizeConstraints_MinWidth,
  SizeConstraints_EffectiveMinWidth,
  SizeConstraints_EffectiveMinHeight,
  SizeConstraints_EffectiveMaxWidth,
  SizeConstraints_EffectiveMaxHeight,
  SizeConstraints_MinMaxWidth,
  SizeConstraints_MinMaxHeight,
  SizeConstraints_Class,
  SizeConstraints_UpdateInterfaceConstraints,
  SizeConstraints_SetInterfaceConstraints,
  SizeConstraints_AutoAdjustLayout,
  SizeConstraints_SetOnChange;