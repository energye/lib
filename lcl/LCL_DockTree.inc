
//constructor
function DockTree_Create(TheDockSite: TWinControl): TDockTree; extdecl;
begin
  handleExceptionBegin
  Result := TDockTree.Create(TheDockSite);
  handleExceptionEnd
end;

//property
function DockTree_DockZoneClass(AObj: TDockTree): TDockZoneClass; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DockZoneClass;
  handleExceptionEnd
end;

//property
function DockTree_DockSite(AIsSet: LongBool; AObj: TDockTree; AValue: TWinControl): TWinControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DockSite := AValue;
  end else
    Result := AObj.DockSite;
  handleExceptionEnd
end;

//property
function DockTree_RootZone(AObj: TDockTree): TDockZone; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RootZone;
  handleExceptionEnd
end;

//function
function DockTree_Class(): TClass; extdecl;
begin
  Result := TDockTree;
end;

//procedure
procedure DockTree_AdjustDockRect(AObj: TDockTree; AControl: TControl; var ARect: TRect); extdecl;
var
  RetARect: TRect;
begin
  handleExceptionBegin
  RetARect := ARect;
  AObj.AdjustDockRect(AControl, RetARect);
  ARect := RetARect;
  handleExceptionEnd
end;

//procedure
procedure DockTree_DumpLayout(AObj: TDockTree; FileName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.DumpLayout(FileName);
  handleExceptionEnd
end;


exports
  DockTree_Create,
  DockTree_DockZoneClass,
  DockTree_DockSite,
  DockTree_RootZone,
  DockTree_Class,
  DockTree_AdjustDockRect,
  DockTree_DumpLayout;