
//constructor
function DockZone_Create(TheTree: TDockTree; TheChildControl: TControl): TDockZone; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TDockZone.Create(TheTree, TheChildControl);
  handleExceptionEnd
end;

//property
function DockZone_ChildControl(AObj: TDockZone): TControl; extdecl;
begin
  {$define handleExceptionFuncName :='ChildControl'}
  handleExceptionBegin
  Result := AObj.ChildControl;
  handleExceptionEnd
end;

//property
function DockZone_ChildCount(AObj: TDockZone): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ChildCount'}
  handleExceptionBegin
  Result := AObj.ChildCount;
  handleExceptionEnd
end;

//property
function DockZone_FirstChild(AObj: TDockZone): TDockZone; extdecl;
begin
  {$define handleExceptionFuncName :='FirstChild'}
  handleExceptionBegin
  Result := AObj.FirstChild;
  handleExceptionEnd
end;

//property
function DockZone_Height(AIsSet: LongBool; AObj: TDockZone; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Height'}
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
  {$define handleExceptionFuncName :='Left'}
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
  {$define handleExceptionFuncName :='LimitBegin'}
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
  {$define handleExceptionFuncName :='LimitSize'}
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
  {$define handleExceptionFuncName :='Orientation'}
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
  {$define handleExceptionFuncName :='Parent'}
  handleExceptionBegin
  Result := AObj.Parent;
  handleExceptionEnd
end;

//property
function DockZone_Top(AIsSet: LongBool; AObj: TDockZone; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Top'}
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
  {$define handleExceptionFuncName :='Tree'}
  handleExceptionBegin
  Result := AObj.Tree;
  handleExceptionEnd
end;

//property
function DockZone_Visible(AObj: TDockZone): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Visible'}
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

//property
function DockZone_VisibleChildCount(AObj: TDockZone): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='VisibleChildCount'}
  handleExceptionBegin
  Result := AObj.VisibleChildCount;
  handleExceptionEnd
end;

//property
function DockZone_Width(AIsSet: LongBool; AObj: TDockZone; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Width'}
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
  {$define handleExceptionFuncName :='NextSibling'}
  handleExceptionBegin
  Result := AObj.NextSibling;
  handleExceptionEnd
end;

//property
function DockZone_PrevSibling(AObj: TDockZone): TDockZone; extdecl;
begin
  {$define handleExceptionFuncName :='PrevSibling'}
  handleExceptionBegin
  Result := AObj.PrevSibling;
  handleExceptionEnd
end;

//function
function DockZone_FindZone(AObj: TDockZone; AControl: TControl): TDockZone; extdecl;
begin
  {$define handleExceptionFuncName :='FindZone'}
  handleExceptionBegin
  Result := AObj.FindZone(AControl);
  handleExceptionEnd
end;

//function
function DockZone_FirstVisibleChild(AObj: TDockZone): TDockZone; extdecl;
begin
  {$define handleExceptionFuncName :='FirstVisibleChild'}
  handleExceptionBegin
  Result := AObj.FirstVisibleChild();
  handleExceptionEnd
end;

//function
function DockZone_GetNextVisibleZone(AObj: TDockZone): TDockZone; extdecl;
begin
  {$define handleExceptionFuncName :='GetNextVisibleZone'}
  handleExceptionBegin
  Result := AObj.GetNextVisibleZone();
  handleExceptionEnd
end;

//function
function DockZone_NextVisible(AObj: TDockZone): TDockZone; extdecl;
begin
  {$define handleExceptionFuncName :='NextVisible'}
  handleExceptionBegin
  Result := AObj.NextVisible();
  handleExceptionEnd
end;

//function
function DockZone_PrevVisible(AObj: TDockZone): TDockZone; extdecl;
begin
  {$define handleExceptionFuncName :='PrevVisible'}
  handleExceptionBegin
  Result := AObj.PrevVisible();
  handleExceptionEnd
end;

//function
function DockZone_GetLastChild(AObj: TDockZone): TDockZone; extdecl;
begin
  {$define handleExceptionFuncName :='GetLastChild'}
  handleExceptionBegin
  Result := AObj.GetLastChild();
  handleExceptionEnd
end;

//function
function DockZone_GetIndex(AObj: TDockZone): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetIndex'}
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
  {$define handleExceptionFuncName :='AddSibling'}
  handleExceptionBegin
  AObj.AddSibling(NewZone, InsertAt);
  handleExceptionEnd
end;

//procedure
procedure DockZone_AddAsFirstChild(AObj: TDockZone; NewChildZone: TDockZone); extdecl;
begin
  {$define handleExceptionFuncName :='AddAsFirstChild'}
  handleExceptionBegin
  AObj.AddAsFirstChild(NewChildZone);
  handleExceptionEnd
end;

//procedure
procedure DockZone_AddAsLastChild(AObj: TDockZone; NewChildZone: TDockZone); extdecl;
begin
  {$define handleExceptionFuncName :='AddAsLastChild'}
  handleExceptionBegin
  AObj.AddAsLastChild(NewChildZone);
  handleExceptionEnd
end;

//procedure
procedure DockZone_ReplaceChild(AObj: TDockZone; OldChild, NewChild: TDockZone); extdecl;
begin
  {$define handleExceptionFuncName :='ReplaceChild'}
  handleExceptionBegin
  AObj.ReplaceChild(OldChild, NewChild);
  handleExceptionEnd
end;

//procedure
procedure DockZone_Remove(AObj: TDockZone; ChildZone: TDockZone); extdecl;
begin
  {$define handleExceptionFuncName :='Remove'}
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