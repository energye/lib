
//constructor
function VirtualTreeOptions_Create(AOwner: TBaseVirtualTree): TVirtualTreeOptions; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TVirtualTreeOptions.Create(AOwner);
  handleExceptionEnd
end;

//property
function VirtualTreeOptions_AnimationOptions(AIsSet: LongBool; AObj: TVirtualTreeOptions; AValue: TVTAnimationOptions): TVTAnimationOptions; extdecl;
begin
  {$define handleExceptionFuncName :='AnimationOptions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AnimationOptions := AValue;
  end else
    Result := AObj.AnimationOptions;
  handleExceptionEnd
end;

//property
function VirtualTreeOptions_AutoOptions(AIsSet: LongBool; AObj: TVirtualTreeOptions; AValue: TVTAutoOptions): TVTAutoOptions; extdecl;
begin
  {$define handleExceptionFuncName :='AutoOptions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoOptions := AValue;
  end else
    Result := AObj.AutoOptions;
  handleExceptionEnd
end;

//property
function VirtualTreeOptions_ExportMode(AIsSet: LongBool; AObj: TVirtualTreeOptions; AValue: TVTExportMode): TVTExportMode; extdecl;
begin
  {$define handleExceptionFuncName :='ExportMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExportMode := AValue;
  end else
    Result := AObj.ExportMode;
  handleExceptionEnd
end;

//property
function VirtualTreeOptions_MiscOptions(AIsSet: LongBool; AObj: TVirtualTreeOptions; AValue: TVTMiscOptions): TVTMiscOptions; extdecl;
begin
  {$define handleExceptionFuncName :='MiscOptions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MiscOptions := AValue;
  end else
    Result := AObj.MiscOptions;
  handleExceptionEnd
end;

//property
function VirtualTreeOptions_PaintOptions(AIsSet: LongBool; AObj: TVirtualTreeOptions; AValue: TVTPaintOptions): TVTPaintOptions; extdecl;
begin
  {$define handleExceptionFuncName :='PaintOptions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PaintOptions := AValue;
  end else
    Result := AObj.PaintOptions;
  handleExceptionEnd
end;

//property
function VirtualTreeOptions_SelectionOptions(AIsSet: LongBool; AObj: TVirtualTreeOptions; AValue: TVTSelectionOptions): TVTSelectionOptions; extdecl;
begin
  {$define handleExceptionFuncName :='SelectionOptions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectionOptions := AValue;
  end else
    Result := AObj.SelectionOptions;
  handleExceptionEnd
end;

//function
function VirtualTreeOptions_Class(): TClass; extdecl;
begin
  Result := TVirtualTreeOptions;
end;


exports
  VirtualTreeOptions_Create,
  VirtualTreeOptions_AnimationOptions,
  VirtualTreeOptions_AutoOptions,
  VirtualTreeOptions_ExportMode,
  VirtualTreeOptions_MiscOptions,
  VirtualTreeOptions_PaintOptions,
  VirtualTreeOptions_SelectionOptions,
  VirtualTreeOptions_Class;