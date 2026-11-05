// constructor
function TSynGutterLineOverview_Create(AOwner: TComponent): TSynGutterLineOverview; extdecl;
begin
  {$define handleExceptionID := 38900}
  handleExceptionBegin
  Result := TSynGutterLineOverview.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TSynGutterLineOverview_AddMark(AObj: TSynGutterLineOverview; AMark: TSynGutterLOvMark); extdecl;
begin
  {$define handleExceptionID := 38901}
  handleExceptionBegin
  AObj.AddMark(AMark);
  handleExceptionEnd
end;

// property
function TSynGutterLineOverview_Providers(AObj: TSynGutterLineOverview): TSynGutterLineOverviewProviderList; extdecl;
begin
  {$define handleExceptionID := 38902}
  handleExceptionBegin
  Result := AObj.Providers;
  handleExceptionEnd
end;

// property
function TSynGutterLineOverview_MarkHeight(ASet: LongBool; AObj: TSynGutterLineOverview; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 38903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarkHeight := AValue
  end else
    Result := AObj.MarkHeight;
  handleExceptionEnd
end;

// property
function TSynGutterLineOverview_MouseActionsForMarks(ASet: LongBool; AObj: TSynGutterLineOverview; AValue: TSynEditMouseActions): TSynEditMouseActions; extdecl;
begin
  {$define handleExceptionID := 38904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MouseActionsForMarks := AValue
  end else
    Result := AObj.MouseActionsForMarks;
  handleExceptionEnd
end;

function TSynGutterLineOverview_TClass(): TClass; extdecl;
begin
  Result := TSynGutterLineOverview;
end;

exports
  TSynGutterLineOverview_Create,
  TSynGutterLineOverview_AddMark,
  TSynGutterLineOverview_Providers,
  TSynGutterLineOverview_MarkHeight,
  TSynGutterLineOverview_MouseActionsForMarks,
  TSynGutterLineOverview_TClass;