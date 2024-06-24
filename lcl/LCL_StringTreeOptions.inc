
//constructor
function StringTreeOptions_Create(AOwner: TBaseVirtualTree): TStringTreeOptions; extdecl;
begin
  handleExceptionBegin
  Result := TStringTreeOptions.Create(AOwner);
  handleExceptionEnd
end;

//property
function StringTreeOptions_AnimationOptions(AIsSet: LongBool; AObj: TStringTreeOptions; AValue: TVTAnimationOptions): TVTAnimationOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AnimationOptions := AValue;
  end else
    Result := AObj.AnimationOptions;
  handleExceptionEnd
end;

//property
function StringTreeOptions_AutoOptions(AIsSet: LongBool; AObj: TStringTreeOptions; AValue: TVTAutoOptions): TVTAutoOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoOptions := AValue;
  end else
    Result := AObj.AutoOptions;
  handleExceptionEnd
end;

//property
function StringTreeOptions_ExportMode(AIsSet: LongBool; AObj: TStringTreeOptions; AValue: TVTExportMode): TVTExportMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExportMode := AValue;
  end else
    Result := AObj.ExportMode;
  handleExceptionEnd
end;

//property
function StringTreeOptions_MiscOptions(AIsSet: LongBool; AObj: TStringTreeOptions; AValue: TVTMiscOptions): TVTMiscOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MiscOptions := AValue;
  end else
    Result := AObj.MiscOptions;
  handleExceptionEnd
end;

//property
function StringTreeOptions_PaintOptions(AIsSet: LongBool; AObj: TStringTreeOptions; AValue: TVTPaintOptions): TVTPaintOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PaintOptions := AValue;
  end else
    Result := AObj.PaintOptions;
  handleExceptionEnd
end;

//property
function StringTreeOptions_SelectionOptions(AIsSet: LongBool; AObj: TStringTreeOptions; AValue: TVTSelectionOptions): TVTSelectionOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectionOptions := AValue;
  end else
    Result := AObj.SelectionOptions;
  handleExceptionEnd
end;

//property
function StringTreeOptions_StringOptions(AIsSet: LongBool; AObj: TStringTreeOptions; AValue: TVTStringOptions): TVTStringOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StringOptions := AValue;
  end else
    Result := AObj.StringOptions;
  handleExceptionEnd
end;

//function
function StringTreeOptions_Class(): TClass; extdecl;
begin
  Result := TStringTreeOptions;
end;


exports
  StringTreeOptions_Create,
  StringTreeOptions_AnimationOptions,
  StringTreeOptions_AutoOptions,
  StringTreeOptions_ExportMode,
  StringTreeOptions_MiscOptions,
  StringTreeOptions_PaintOptions,
  StringTreeOptions_SelectionOptions,
  StringTreeOptions_StringOptions,
  StringTreeOptions_Class;