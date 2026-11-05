// constructor
function TSynDividerDrawConfig_Create(): TSynDividerDrawConfig; extdecl;
begin
  {$define handleExceptionID := 39800}
  handleExceptionBegin
  Result := TSynDividerDrawConfig.Create();
  handleExceptionEnd
end;

// procedure
procedure TSynDividerDrawConfig_Assign(AObj: TSynDividerDrawConfig; Src: TSynDividerDrawConfig); extdecl;
begin
  {$define handleExceptionID := 39801}
  handleExceptionBegin
  AObj.Assign(Src);
  handleExceptionEnd
end;

// property
procedure TSynDividerDrawConfig_TopSetting(AObj: TSynDividerDrawConfig; var Result: TSynDividerDrawConfigSettingPtr); extdecl;
begin
  {$define handleExceptionID := 39802}
  handleExceptionBegin
  Result := TSynDividerDrawConfigSettingToGo(AObj.TopSetting);
  handleExceptionEnd
end;

// property
procedure TSynDividerDrawConfig_NestSetting(AObj: TSynDividerDrawConfig; var Result: TSynDividerDrawConfigSettingPtr); extdecl;
begin
  {$define handleExceptionID := 39803}
  handleExceptionBegin
  Result := TSynDividerDrawConfigSettingToGo(AObj.NestSetting);
  handleExceptionEnd
end;

// property
function TSynDividerDrawConfig_MaxDrawDepth(ASet: LongBool; AObj: TSynDividerDrawConfig; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 39804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxDrawDepth := AValue
  end else
    Result := AObj.MaxDrawDepth;
  handleExceptionEnd
end;

// property
function TSynDividerDrawConfig_TopColor(ASet: LongBool; AObj: TSynDividerDrawConfig; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 39805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TopColor := AValue
  end else
    Result := AObj.TopColor;
  handleExceptionEnd
end;

// property
function TSynDividerDrawConfig_NestColor(ASet: LongBool; AObj: TSynDividerDrawConfig; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 39806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NestColor := AValue
  end else
    Result := AObj.NestColor;
  handleExceptionEnd
end;

// event
procedure TSynDividerDrawConfig_OnChange(AObj: TSynDividerDrawConfig; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

exports
  TSynDividerDrawConfig_Create,
  TSynDividerDrawConfig_Assign,
  TSynDividerDrawConfig_TopSetting,
  TSynDividerDrawConfig_NestSetting,
  TSynDividerDrawConfig_MaxDrawDepth,
  TSynDividerDrawConfig_TopColor,
  TSynDividerDrawConfig_NestColor,
  TSynDividerDrawConfig_OnChange;