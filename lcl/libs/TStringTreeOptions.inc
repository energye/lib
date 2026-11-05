// constructor
function TStringTreeOptions_Create(AOwner: TBaseVirtualTree): TStringTreeOptions; extdecl;
begin
  {$define handleExceptionID := 30200}
  handleExceptionBegin
  Result := TStringTreeOptions.Create(AOwner);
  handleExceptionEnd
end;

// property
function TStringTreeOptions_AnimationOptions(ASet: LongBool; AObj: TStringTreeOptions; AValue: TVTAnimationOptions): TVTAnimationOptions; extdecl;
begin
  {$define handleExceptionID := 30201}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AnimationOptions := AValue
  end else
    Result := AObj.AnimationOptions;
  handleExceptionEnd
end;

// property
function TStringTreeOptions_AutoOptions(ASet: LongBool; AObj: TStringTreeOptions; AValue: TVTAutoOptions): TVTAutoOptions; extdecl;
begin
  {$define handleExceptionID := 30202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoOptions := AValue
  end else
    Result := AObj.AutoOptions;
  handleExceptionEnd
end;

// property
function TStringTreeOptions_ExportMode(ASet: LongBool; AObj: TStringTreeOptions; AValue: TVTExportMode): TVTExportMode; extdecl;
begin
  {$define handleExceptionID := 30203}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExportMode := AValue
  end else
    Result := AObj.ExportMode;
  handleExceptionEnd
end;

// property
function TStringTreeOptions_MiscOptions(ASet: LongBool; AObj: TStringTreeOptions; AValue: TVTMiscOptions): TVTMiscOptions; extdecl;
begin
  {$define handleExceptionID := 30204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MiscOptions := AValue
  end else
    Result := AObj.MiscOptions;
  handleExceptionEnd
end;

// property
function TStringTreeOptions_PaintOptions(ASet: LongBool; AObj: TStringTreeOptions; AValue: TVTPaintOptions): TVTPaintOptions; extdecl;
begin
  {$define handleExceptionID := 30205}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaintOptions := AValue
  end else
    Result := AObj.PaintOptions;
  handleExceptionEnd
end;

// property
function TStringTreeOptions_SelectionOptions(ASet: LongBool; AObj: TStringTreeOptions; AValue: TVTSelectionOptions): TVTSelectionOptions; extdecl;
begin
  {$define handleExceptionID := 30206}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectionOptions := AValue
  end else
    Result := AObj.SelectionOptions;
  handleExceptionEnd
end;

// property
function TStringTreeOptions_StringOptions(ASet: LongBool; AObj: TStringTreeOptions; AValue: TVTStringOptions): TVTStringOptions; extdecl;
begin
  {$define handleExceptionID := 30207}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StringOptions := AValue
  end else
    Result := AObj.StringOptions;
  handleExceptionEnd
end;

exports
  TStringTreeOptions_Create,
  TStringTreeOptions_AnimationOptions,
  TStringTreeOptions_AutoOptions,
  TStringTreeOptions_ExportMode,
  TStringTreeOptions_MiscOptions,
  TStringTreeOptions_PaintOptions,
  TStringTreeOptions_SelectionOptions,
  TStringTreeOptions_StringOptions;