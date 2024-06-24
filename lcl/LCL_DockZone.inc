
//constructor
function DockZone_Create(TheTree: TDockTree; TheChildControl: TControl): TDockZone; extdecl;
begin
  handleExceptionBegin
  Result := TDockZone.Create(TheTree, TheChildControl);
  handleExceptionEnd
end;

//property
function DockZone_ChildControl(AObj: TDockZone): TControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ChildControl;
  handleExceptionEnd
end;

//property
function DockZone_ChildCount(AObj: TDockZone): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ChildCount;
  handleExceptionEnd
end;

//property
function DockZone_FirstChild(AObj: TDockZone): TDockZone; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FirstChild;
  handleExceptionEnd
end;

//property
function DockZone_Height(AIsSet: LongBool; AObj: TDockZone; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Height := AValue;
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

//property
function DockZone_Left(AIsSet: LongBool; AObj: TDockZone; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Left := AValue;
  end else
    Result := AObj.Left;
  handleExceptionEnd
end;

//property
function DockZone_LimitBegin(AIsSet: LongBool; AObj: TDockZone; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LimitBegin := AValue;
  end else
    Result := AObj.LimitBegin;
  handleExceptionEnd
end;

//property
function DockZone_LimitSize(AIsSet: LongBool; AObj: TDockZone; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LimitSize := AValue;
  end else
    Result := AObj.LimitSize;
  handleExceptionEnd
end;

//property
function DockZone_Orientation(AIsSet: LongBool; AObj: TDockZone; AValue: TDockOrientation): TDockOrientation; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Orientation := AValue;
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

//property
function DockZone_Parent(AObj: TDockZone): TDockZone; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Parent;
  handleExceptionEnd
end;

//property
function DockZone_Top(AIsSet: LongBool; AObj: TDockZone; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Top := AValue;
  end else
    Result := AObj.Top;
  handleExceptionEnd
end;

//property
function DockZone_Tree(AObj: TDockZone): TDockTree; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Tree;
  handleExceptionEnd
end;

//property
function DockZone_Visible(AObj: TDockZone): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

//property
function DockZone_VisibleChildCount(AObj: TDockZone): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.VisibleChildCount;
  handleExceptionEnd
end;

//property
function DockZone_Width(AIsSet: LongBool; AObj: TDockZone; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Width := AValue;
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

//property
function DockZone_NextSibling(AObj: TDockZone): TDockZone; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NextSibling;
  handleExceptionEnd
end;

//property
function DockZone_PrevSibling(AObj: TDockZone): TDockZone; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PrevSibling;
  handleExceptionEnd
end;

//function
function DockZone_FindZone(AObj: TDockZone; AControl: TControl): TDockZone; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindZone(AControl);
  handleExceptionEnd
end;

//function
function DockZone_FirstVisibleChild(AObj: TDockZone): TDockZone; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FirstVisibleChild();
  handleExceptionEnd
end;

//function
function DockZone_GetNextVisibleZone(AObj: TDockZone): TDockZone; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetNextVisibleZone();
  handleExceptionEnd
end;

//function
function DockZone_NextVisible(AObj: TDockZone): TDockZone; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NextVisible();
  handleExceptionEnd
end;

//function
function DockZone_PrevVisible(AObj: TDockZone): TDockZone; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PrevVisible();
  handleExceptionEnd
end;

//function
function DockZone_GetLastChild(AObj: TDockZone): TDockZone; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetLastChild();
  handleExceptionEnd
end;

//function
function DockZone_GetIndex(AObj: TDockZone): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetIndex();
  handleExceptionEnd
end;

//function
function DockZone_Class(): TClass; extdecl;
begin
  Result := TDockZone;
end;

//procedure
procedure DockZone_AddSibling(AObj: TDockZone; NewZone: TDockZone; InsertAt: TAlign); extdecl;
begin
  handleExceptionBegin
  AObj.AddSibling(NewZone, InsertAt);
  handleExceptionEnd
end;

//procedure
procedure DockZone_AddAsFirstChild(AObj: TDockZone; NewChildZone: TDockZone); extdecl;
begin
  handleExceptionBegin
  AObj.AddAsFirstChild(NewChildZone);
  handleExceptionEnd
end;

//procedure
procedure DockZone_AddAsLastChild(AObj: TDockZone; NewChildZone: TDockZone); extdecl;
begin
  handleExceptionBegin
  AObj.AddAsLastChild(NewChildZone);
  handleExceptionEnd
end;

//procedure
procedure DockZone_ReplaceChild(AObj: TDockZone; OldChild, NewChild: TDockZone); extdecl;
begin
  handleExceptionBegin
  AObj.ReplaceChild(OldChild, NewChild);
  handleExceptionEnd
end;

//procedure
procedure DockZone_Remove(AObj: TDockZone; ChildZone: TDockZone); extdecl;
begin
  handleExceptionBegin
  AObj.Remove(ChildZone);
  handleExceptionEnd
end;


exports
  DockZone_Create,
  DockZone_ChildControl,
  DockZone_ChildCount,
  DockZone_FirstChild,
  DockZone_Height,
  DockZone_Left,
  DockZone_LimitBegin,
  DockZone_LimitSize,
  DockZone_Orientation,
  DockZone_Parent,
  DockZone_Top,
  DockZone_Tree,
  DockZone_Visible,
  DockZone_VisibleChildCount,
  DockZone_Width,
  DockZone_NextSibling,
  DockZone_PrevSibling,
  DockZone_FindZone,
  DockZone_FirstVisibleChild,
  DockZone_GetNextVisibleZone,
  DockZone_NextVisible,
  DockZone_PrevVisible,
  DockZone_GetLastChild,
  DockZone_GetIndex,
  DockZone_Class,
  DockZone_AddSibling,
  DockZone_AddAsFirstChild,
  DockZone_AddAsLastChild,
  DockZone_ReplaceChild,
  DockZone_Remove;