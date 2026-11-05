// constructor
function TLazDockTree_Create(TheDockSite: TWinControl): TLazDockTree; extdecl;
begin
  {$define handleExceptionID := 23700}
  handleExceptionBegin
  Result := TLazDockTree.Create(TheDockSite);
  handleExceptionEnd
end;

// function
function TLazDockTree_FindBorderControl(AObj: TLazDockTree; Zone: TLazDockZone; Side: TAnchorKind): TControl; extdecl;
begin
  {$define handleExceptionID := 23701}
  handleExceptionBegin
  Result := AObj.FindBorderControl(Zone, Side);
  handleExceptionEnd
end;

// function
function TLazDockTree_GetAnchorControl(AObj: TLazDockTree; Zone: TLazDockZone; Side: TAnchorKind; OutSide: LongBool): TControl; extdecl;
begin
  {$define handleExceptionID := 23702}
  handleExceptionBegin
  Result := AObj.GetAnchorControl(Zone, Side, OutSide);
  handleExceptionEnd
end;

// procedure
procedure TLazDockTree_BuildDockLayout(AObj: TLazDockTree; Zone: TLazDockZone); extdecl;
begin
  {$define handleExceptionID := 23703}
  handleExceptionBegin
  AObj.BuildDockLayout(Zone);
  handleExceptionEnd
end;

// procedure
procedure TLazDockTree_FindBorderControls(AObj: TLazDockTree; Zone: TLazDockZone; Side: TAnchorKind; var List: TFPList); extdecl;
var
  OutList: TFPList;
begin
  {$define handleExceptionID := 23704}
  handleExceptionBegin
  OutList := List;
  AObj.FindBorderControls(Zone, Side, OutList);
  List := OutList;
  handleExceptionEnd
end;

// property
function TLazDockTree_AutoFreeDockSite(ASet: LongBool; AObj: TLazDockTree; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 23705}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoFreeDockSite := AValue
  end else
    Result := AObj.AutoFreeDockSite;
  handleExceptionEnd
end;

exports
  TLazDockTree_Create,
  TLazDockTree_FindBorderControl,
  TLazDockTree_GetAnchorControl,
  TLazDockTree_BuildDockLayout,
  TLazDockTree_FindBorderControls,
  TLazDockTree_AutoFreeDockSite;