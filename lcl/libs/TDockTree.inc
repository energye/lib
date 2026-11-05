// constructor
function TDockTree_Create(TheDockSite: TWinControl): TDockTree; extdecl;
begin
  {$define handleExceptionID := 23500}
  handleExceptionBegin
  Result := TDockTree.Create(TheDockSite);
  handleExceptionEnd
end;

// procedure
procedure TDockTree_AdjustDockRect(AObj: TDockTree; AControl: TControl; var ARect: TRect); extdecl;
var
  OutARect: TRect;
begin
  {$define handleExceptionID := 23501}
  handleExceptionBegin
  OutARect := ARect;
  AObj.AdjustDockRect(AControl, OutARect);
  ARect := OutARect;
  handleExceptionEnd
end;

// procedure
procedure TDockTree_DumpLayout(AObj: TDockTree; FileName: PChar); extdecl;
begin
  {$define handleExceptionID := 23502}
  handleExceptionBegin
  AObj.DumpLayout(FileName);
  handleExceptionEnd
end;

// property
function TDockTree_DockZoneClass(AObj: TDockTree): TDockZoneClass; extdecl;
begin
  {$define handleExceptionID := 23503}
  handleExceptionBegin
  Result := AObj.DockZoneClass;
  handleExceptionEnd
end;

// property
function TDockTree_DockSite(ASet: LongBool; AObj: TDockTree; AValue: TWinControl): TWinControl; extdecl;
begin
  {$define handleExceptionID := 23504}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DockSite := AValue
  end else
    Result := AObj.DockSite;
  handleExceptionEnd
end;

// property
function TDockTree_RootZone(AObj: TDockTree): TDockZone; extdecl;
begin
  {$define handleExceptionID := 23505}
  handleExceptionBegin
  Result := AObj.RootZone;
  handleExceptionEnd
end;

exports
  TDockTree_Create,
  TDockTree_AdjustDockRect,
  TDockTree_DumpLayout,
  TDockTree_DockZoneClass,
  TDockTree_DockSite,
  TDockTree_RootZone;