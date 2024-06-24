
//constructor
function LazDockTree_Create(TheDockSite: TWinControl): TLazDockTree; extdecl;
begin
  handleExceptionBegin
  Result := TLazDockTree.Create(TheDockSite);
  handleExceptionEnd
end;

//property
function LazDockTree_AutoFreeDockSite(AIsSet: LongBool; AObj: TLazDockTree; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoFreeDockSite := AValue;
  end else
    Result := AObj.AutoFreeDockSite;
  handleExceptionEnd
end;

//function
function LazDockTree_FindBorderControl(AObj: TLazDockTree; Zone: TLazDockZone; Side: TAnchorKind): TControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindBorderControl(Zone, Side);
  handleExceptionEnd
end;

//function
function LazDockTree_GetAnchorControl(AObj: TLazDockTree; Zone: TLazDockZone; Side: TAnchorKind; OutSide: LongBool): TControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetAnchorControl(Zone, Side, OutSide);
  handleExceptionEnd
end;

//function
function LazDockTree_Class(): TClass; extdecl;
begin
  Result := TLazDockTree;
end;

//procedure
procedure LazDockTree_BuildDockLayout(AObj: TLazDockTree; Zone: TLazDockZone); extdecl;
begin
  handleExceptionBegin
  AObj.BuildDockLayout(Zone);
  handleExceptionEnd
end;

//procedure
procedure LazDockTree_FindBorderControls(AObj: TLazDockTree; Zone: TLazDockZone; Side: TAnchorKind; var List: TFPList); extdecl;
var
  RetList: TFPList;
begin
  handleExceptionBegin
  RetList := List;
  AObj.FindBorderControls(Zone, Side, RetList);
  List := RetList;
  handleExceptionEnd
end;


exports
  LazDockTree_Create,
  LazDockTree_AutoFreeDockSite,
  LazDockTree_FindBorderControl,
  LazDockTree_GetAnchorControl,
  LazDockTree_Class,
  LazDockTree_BuildDockLayout,
  LazDockTree_FindBorderControls;