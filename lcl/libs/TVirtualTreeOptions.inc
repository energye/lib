// constructor
function TVirtualTreeOptions_Create(AOwner: TBaseVirtualTree): TVirtualTreeOptions; extdecl;
begin
  {$define handleExceptionID := 29800}
  handleExceptionBegin
  Result := TVirtualTreeOptions.Create(AOwner);
  handleExceptionEnd
end;

// property
function TVirtualTreeOptions_AnimationOptions(ASet: LongBool; AObj: TVirtualTreeOptions; AValue: TVTAnimationOptions): TVTAnimationOptions; extdecl;
begin
  {$define handleExceptionID := 29801}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AnimationOptions := AValue
  end else
    Result := AObj.AnimationOptions;
  handleExceptionEnd
end;

// property
function TVirtualTreeOptions_AutoOptions(ASet: LongBool; AObj: TVirtualTreeOptions; AValue: TVTAutoOptions): TVTAutoOptions; extdecl;
begin
  {$define handleExceptionID := 29802}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoOptions := AValue
  end else
    Result := AObj.AutoOptions;
  handleExceptionEnd
end;

// property
function TVirtualTreeOptions_ExportMode(ASet: LongBool; AObj: TVirtualTreeOptions; AValue: TVTExportMode): TVTExportMode; extdecl;
begin
  {$define handleExceptionID := 29803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExportMode := AValue
  end else
    Result := AObj.ExportMode;
  handleExceptionEnd
end;

// property
function TVirtualTreeOptions_MiscOptions(ASet: LongBool; AObj: TVirtualTreeOptions; AValue: TVTMiscOptions): TVTMiscOptions; extdecl;
begin
  {$define handleExceptionID := 29804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MiscOptions := AValue
  end else
    Result := AObj.MiscOptions;
  handleExceptionEnd
end;

// property
function TVirtualTreeOptions_PaintOptions(ASet: LongBool; AObj: TVirtualTreeOptions; AValue: TVTPaintOptions): TVTPaintOptions; extdecl;
begin
  {$define handleExceptionID := 29805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PaintOptions := AValue
  end else
    Result := AObj.PaintOptions;
  handleExceptionEnd
end;

// property
function TVirtualTreeOptions_SelectionOptions(ASet: LongBool; AObj: TVirtualTreeOptions; AValue: TVTSelectionOptions): TVTSelectionOptions; extdecl;
begin
  {$define handleExceptionID := 29806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectionOptions := AValue
  end else
    Result := AObj.SelectionOptions;
  handleExceptionEnd
end;

exports
  TVirtualTreeOptions_Create,
  TVirtualTreeOptions_AnimationOptions,
  TVirtualTreeOptions_AutoOptions,
  TVirtualTreeOptions_ExportMode,
  TVirtualTreeOptions_MiscOptions,
  TVirtualTreeOptions_PaintOptions,
  TVirtualTreeOptions_SelectionOptions;