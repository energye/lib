// constructor
function TTreeFilterEdit_Create(AOwner: TComponent): TTreeFilterEdit; extdecl;
begin
  {$define handleExceptionID := 34700}
  handleExceptionBegin
  Result := TTreeFilterEdit.Create(AOwner);
  handleExceptionEnd
end;

// function
function TTreeFilterEdit_GetExistingBranch(AObj: TTreeFilterEdit; ARootNode: TTreeNode): TTreeFilterBranch; extdecl;
begin
  {$define handleExceptionID := 34701}
  handleExceptionBegin
  Result := AObj.GetExistingBranch(ARootNode);
  handleExceptionEnd
end;

// function
function TTreeFilterEdit_GetCleanBranch(AObj: TTreeFilterEdit; ARootNode: TTreeNode): TTreeFilterBranch; extdecl;
begin
  {$define handleExceptionID := 34702}
  handleExceptionBegin
  Result := AObj.GetCleanBranch(ARootNode);
  handleExceptionEnd
end;

// function
function TTreeFilterEdit_DeleteBranch(AObj: TTreeFilterEdit; ARootNode: TTreeNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 34703}
  handleExceptionBegin
  Result := AObj.DeleteBranch(ARootNode);
  handleExceptionEnd
end;

// procedure
procedure TTreeFilterEdit_SetTreeFilterSilently(AObj: TTreeFilterEdit; ATree: TCustomTreeview; AFilter: PChar); extdecl;
begin
  {$define handleExceptionID := 34704}
  handleExceptionBegin
  AObj.SetTreeFilterSilently(ATree, AFilter);
  handleExceptionEnd
end;

// property
function TTreeFilterEdit_ImageIndexDirectory(ASet: LongBool; AObj: TTreeFilterEdit; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 34705}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndexDirectory := AValue
  end else
    Result := AObj.ImageIndexDirectory;
  handleExceptionEnd
end;

// property
procedure TTreeFilterEdit_ScrolledPos(AObj: TTreeFilterEdit; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 34706}
  handleExceptionBegin
  Result := AObj.ScrolledPos;
  handleExceptionEnd
end;

// property
function TTreeFilterEdit_SelectionList(AObj: TTreeFilterEdit): TStringList; extdecl;
begin
  {$define handleExceptionID := 34707}
  handleExceptionBegin
  Result := AObj.SelectionList;
  handleExceptionEnd
end;

// property
function TTreeFilterEdit_ShowDirHierarchy(ASet: LongBool; AObj: TTreeFilterEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34708}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowDirHierarchy := AValue
  end else
    Result := AObj.ShowDirHierarchy;
  handleExceptionEnd
end;

// property
function TTreeFilterEdit_FilteredTreeview(ASet: LongBool; AObj: TTreeFilterEdit; AValue: TCustomTreeview): TCustomTreeview; extdecl;
begin
  {$define handleExceptionID := 34709}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FilteredTreeview := AValue
  end else
    Result := AObj.FilteredTreeview;
  handleExceptionEnd
end;

// property
function TTreeFilterEdit_ExpandAllInitially(ASet: LongBool; AObj: TTreeFilterEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34710}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExpandAllInitially := AValue
  end else
    Result := AObj.ExpandAllInitially;
  handleExceptionEnd
end;

// event
procedure TTreeFilterEdit_OnGetImageIndex(AObj: TTreeFilterEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTImageIndexEvent}
  {$DEFINE EventName := OnGetImageIndex}
  LCLEventMethodCode
end;

// event
procedure TTreeFilterEdit_OnFilterNode(AObj: TTreeFilterEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTFilterNodeEvent}
  {$DEFINE EventName := OnFilterNode}
  LCLEventMethodCode
end;

function TTreeFilterEdit_TClass(): TClass; extdecl;
begin
  Result := TTreeFilterEdit;
end;

exports
  TTreeFilterEdit_Create,
  TTreeFilterEdit_GetExistingBranch,
  TTreeFilterEdit_GetCleanBranch,
  TTreeFilterEdit_DeleteBranch,
  TTreeFilterEdit_SetTreeFilterSilently,
  TTreeFilterEdit_ImageIndexDirectory,
  TTreeFilterEdit_ScrolledPos,
  TTreeFilterEdit_SelectionList,
  TTreeFilterEdit_ShowDirHierarchy,
  TTreeFilterEdit_FilteredTreeview,
  TTreeFilterEdit_ExpandAllInitially,
  TTreeFilterEdit_OnGetImageIndex,
  TTreeFilterEdit_OnFilterNode,
  TTreeFilterEdit_TClass;