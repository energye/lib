// constructor
function TTreeFilterBranch_Create(AOwner: TTreeFilterEdit; ARootNode: TTreeNode): TTreeFilterBranch; extdecl;
begin
  {$define handleExceptionID := 34800}
  handleExceptionBegin
  Result := TTreeFilterBranch.Create(AOwner, ARootNode);
  handleExceptionEnd
end;

// function
function TTreeFilterBranch_GetData(AObj: TTreeFilterBranch; AIndex: integer): TObject; extdecl;
begin
  {$define handleExceptionID := 34801}
  handleExceptionBegin
  Result := AObj.GetData(AIndex);
  handleExceptionEnd
end;

// procedure
procedure TTreeFilterBranch_AddNodeData(AObj: TTreeFilterBranch; ANodeText: PChar; AData: TObject; AFullFilename: PChar); extdecl;
begin
  {$define handleExceptionID := 34802}
  handleExceptionBegin
  AObj.AddNodeData(ANodeText, AData, AFullFilename);
  handleExceptionEnd
end;

// procedure
procedure TTreeFilterBranch_DeleteData(AObj: TTreeFilterBranch; ANode: TTreeNode); extdecl;
begin
  {$define handleExceptionID := 34803}
  handleExceptionBegin
  AObj.DeleteData(ANode);
  handleExceptionEnd
end;

// procedure
procedure TTreeFilterBranch_FreeNodeData(AObj: TTreeFilterBranch; ANode: TTreeNode); extdecl;
begin
  {$define handleExceptionID := 34804}
  handleExceptionBegin
  AObj.FreeNodeData(ANode);
  handleExceptionEnd
end;

// procedure
procedure TTreeFilterBranch_ClearNodeData(AObj: TTreeFilterBranch); extdecl;
begin
  {$define handleExceptionID := 34805}
  handleExceptionBegin
  AObj.ClearNodeData();
  handleExceptionEnd
end;

// procedure
procedure TTreeFilterBranch_InvalidateBranch(AObj: TTreeFilterBranch); extdecl;
begin
  {$define handleExceptionID := 34806}
  handleExceptionBegin
  AObj.InvalidateBranch();
  handleExceptionEnd
end;

// procedure
procedure TTreeFilterBranch_Move(AObj: TTreeFilterBranch; CurIndex: integer; NewIndex: integer); extdecl;
begin
  {$define handleExceptionID := 34807}
  handleExceptionBegin
  AObj.Move(CurIndex, NewIndex);
  handleExceptionEnd
end;

// property
function TTreeFilterBranch_Items(AObj: TTreeFilterBranch): TStringList; extdecl;
begin
  {$define handleExceptionID := 34808}
  handleExceptionBegin
  Result := AObj.Items;
  handleExceptionEnd
end;

exports
  TTreeFilterBranch_Create,
  TTreeFilterBranch_GetData,
  TTreeFilterBranch_AddNodeData,
  TTreeFilterBranch_DeleteData,
  TTreeFilterBranch_FreeNodeData,
  TTreeFilterBranch_ClearNodeData,
  TTreeFilterBranch_InvalidateBranch,
  TTreeFilterBranch_Move,
  TTreeFilterBranch_Items;