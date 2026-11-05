// constructor
function TDockZone_Create(TheTree: TDockTree; TheChildControl: TControl): TDockZone; extdecl;
begin
  {$define handleExceptionID := 23400}
  handleExceptionBegin
  Result := TDockZone.Create(TheTree, TheChildControl);
  handleExceptionEnd
end;

// function
function TDockZone_FindZone(AObj: TDockZone; AControl: TControl): TDockZone; extdecl;
begin
  {$define handleExceptionID := 23401}
  handleExceptionBegin
  Result := AObj.FindZone(AControl);
  handleExceptionEnd
end;

// function
function TDockZone_FirstVisibleChild(AObj: TDockZone): TDockZone; extdecl;
begin
  {$define handleExceptionID := 23402}
  handleExceptionBegin
  Result := AObj.FirstVisibleChild();
  handleExceptionEnd
end;

// function
function TDockZone_GetNextVisibleZone(AObj: TDockZone): TDockZone; extdecl;
begin
  {$define handleExceptionID := 23403}
  handleExceptionBegin
  Result := AObj.GetNextVisibleZone();
  handleExceptionEnd
end;

// function
function TDockZone_NextVisible(AObj: TDockZone): TDockZone; extdecl;
begin
  {$define handleExceptionID := 23404}
  handleExceptionBegin
  Result := AObj.NextVisible();
  handleExceptionEnd
end;

// function
function TDockZone_PrevVisible(AObj: TDockZone): TDockZone; extdecl;
begin
  {$define handleExceptionID := 23405}
  handleExceptionBegin
  Result := AObj.PrevVisible();
  handleExceptionEnd
end;

// function
function TDockZone_GetLastChild(AObj: TDockZone): TDockZone; extdecl;
begin
  {$define handleExceptionID := 23406}
  handleExceptionBegin
  Result := AObj.GetLastChild();
  handleExceptionEnd
end;

// function
function TDockZone_GetIndex(AObj: TDockZone): Integer; extdecl;
begin
  {$define handleExceptionID := 23407}
  handleExceptionBegin
  Result := AObj.GetIndex();
  handleExceptionEnd
end;

// procedure
procedure TDockZone_AddSibling(AObj: TDockZone; NewZone: TDockZone; InsertAt: TAlign); extdecl;
begin
  {$define handleExceptionID := 23408}
  handleExceptionBegin
  AObj.AddSibling(NewZone, InsertAt);
  handleExceptionEnd
end;

// procedure
procedure TDockZone_AddAsFirstChild(AObj: TDockZone; NewChildZone: TDockZone); extdecl;
begin
  {$define handleExceptionID := 23409}
  handleExceptionBegin
  AObj.AddAsFirstChild(NewChildZone);
  handleExceptionEnd
end;

// procedure
procedure TDockZone_AddAsLastChild(AObj: TDockZone; NewChildZone: TDockZone); extdecl;
begin
  {$define handleExceptionID := 23410}
  handleExceptionBegin
  AObj.AddAsLastChild(NewChildZone);
  handleExceptionEnd
end;

// procedure
procedure TDockZone_ReplaceChild(AObj: TDockZone; OldChild: TDockZone; NewChild: TDockZone); extdecl;
begin
  {$define handleExceptionID := 23411}
  handleExceptionBegin
  AObj.ReplaceChild(OldChild, NewChild);
  handleExceptionEnd
end;

// procedure
procedure TDockZone_Remove(AObj: TDockZone; ChildZone: TDockZone); extdecl;
begin
  {$define handleExceptionID := 23412}
  handleExceptionBegin
  AObj.Remove(ChildZone);
  handleExceptionEnd
end;

// property
function TDockZone_ChildControl(AObj: TDockZone): TControl; extdecl;
begin
  {$define handleExceptionID := 23413}
  handleExceptionBegin
  Result := AObj.ChildControl;
  handleExceptionEnd
end;

// property
function TDockZone_ChildCount(AObj: TDockZone): Integer; extdecl;
begin
  {$define handleExceptionID := 23414}
  handleExceptionBegin
  Result := AObj.ChildCount;
  handleExceptionEnd
end;

// property
function TDockZone_FirstChild(AObj: TDockZone): TDockZone; extdecl;
begin
  {$define handleExceptionID := 23415}
  handleExceptionBegin
  Result := AObj.FirstChild;
  handleExceptionEnd
end;

// property
function TDockZone_Height(ASet: LongBool; AObj: TDockZone; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 23416}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Height := AValue
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TDockZone_Left(ASet: LongBool; AObj: TDockZone; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 23417}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Left := AValue
  end else
    Result := AObj.Left;
  handleExceptionEnd
end;

// property
function TDockZone_LimitBegin(ASet: LongBool; AObj: TDockZone; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 23418}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LimitBegin := AValue
  end else
    Result := AObj.LimitBegin;
  handleExceptionEnd
end;

// property
function TDockZone_LimitSize(ASet: LongBool; AObj: TDockZone; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 23419}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LimitSize := AValue
  end else
    Result := AObj.LimitSize;
  handleExceptionEnd
end;

// property
function TDockZone_Orientation(ASet: LongBool; AObj: TDockZone; AValue: TDockOrientation): TDockOrientation; extdecl;
begin
  {$define handleExceptionID := 23420}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Orientation := AValue
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

// property
function TDockZone_Parent(AObj: TDockZone): TDockZone; extdecl;
begin
  {$define handleExceptionID := 23421}
  handleExceptionBegin
  Result := AObj.Parent;
  handleExceptionEnd
end;

// property
function TDockZone_Top(ASet: LongBool; AObj: TDockZone; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 23422}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Top := AValue
  end else
    Result := AObj.Top;
  handleExceptionEnd
end;

// property
function TDockZone_Tree(AObj: TDockZone): TDockTree; extdecl;
begin
  {$define handleExceptionID := 23423}
  handleExceptionBegin
  Result := AObj.Tree;
  handleExceptionEnd
end;

// property
function TDockZone_Visible(AObj: TDockZone): LongBool; extdecl;
begin
  {$define handleExceptionID := 23424}
  handleExceptionBegin
  Result := AObj.Visible;
  handleExceptionEnd
end;

// property
function TDockZone_VisibleChildCount(AObj: TDockZone): Integer; extdecl;
begin
  {$define handleExceptionID := 23425}
  handleExceptionBegin
  Result := AObj.VisibleChildCount;
  handleExceptionEnd
end;

// property
function TDockZone_Width(ASet: LongBool; AObj: TDockZone; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 23426}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

// property
function TDockZone_NextSibling(AObj: TDockZone): TDockZone; extdecl;
begin
  {$define handleExceptionID := 23427}
  handleExceptionBegin
  Result := AObj.NextSibling;
  handleExceptionEnd
end;

// property
function TDockZone_PrevSibling(AObj: TDockZone): TDockZone; extdecl;
begin
  {$define handleExceptionID := 23428}
  handleExceptionBegin
  Result := AObj.PrevSibling;
  handleExceptionEnd
end;

exports
  TDockZone_Create,
  TDockZone_FindZone,
  TDockZone_FirstVisibleChild,
  TDockZone_GetNextVisibleZone,
  TDockZone_NextVisible,
  TDockZone_PrevVisible,
  TDockZone_GetLastChild,
  TDockZone_GetIndex,
  TDockZone_AddSibling,
  TDockZone_AddAsFirstChild,
  TDockZone_AddAsLastChild,
  TDockZone_ReplaceChild,
  TDockZone_Remove,
  TDockZone_ChildControl,
  TDockZone_ChildCount,
  TDockZone_FirstChild,
  TDockZone_Height,
  TDockZone_Left,
  TDockZone_LimitBegin,
  TDockZone_LimitSize,
  TDockZone_Orientation,
  TDockZone_Parent,
  TDockZone_Top,
  TDockZone_Tree,
  TDockZone_Visible,
  TDockZone_VisibleChildCount,
  TDockZone_Width,
  TDockZone_NextSibling,
  TDockZone_PrevSibling;