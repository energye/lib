// constructor
function TListItem_Create(AOwner: TListItems): TListItem; extdecl;
begin
  {$define handleExceptionID := 12600}
  handleExceptionBegin
  Result := TListItem.Create(AOwner);
  handleExceptionEnd
end;

// function
procedure TListItem_DisplayRect(AObj: TListItem; Code: TDisplayCode; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 12601}
  handleExceptionBegin
  Result := AObj.DisplayRect(Code);
  handleExceptionEnd
end;

// function
procedure TListItem_DisplayRectSubItem(AObj: TListItem; subItem: integer; Code: TDisplayCode; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 12602}
  handleExceptionBegin
  Result := AObj.DisplayRectSubItem(subItem, Code);
  handleExceptionEnd
end;

// function
function TListItem_EditCaption(AObj: TListItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 12603}
  handleExceptionBegin
  Result := AObj.EditCaption();
  handleExceptionEnd
end;

// function
function TListItem_GetStates(AObj: TListItem): TListItemStates; extdecl;
begin
  {$define handleExceptionID := 12604}
  handleExceptionBegin
  Result := AObj.GetStates();
  handleExceptionEnd
end;

// procedure
procedure TListItem_Delete(AObj: TListItem); extdecl;
begin
  {$define handleExceptionID := 12605}
  handleExceptionBegin
  AObj.Delete();
  handleExceptionEnd
end;

// procedure
procedure TListItem_MakeVisible(AObj: TListItem; PartialOK: LongBool); extdecl;
begin
  {$define handleExceptionID := 12606}
  handleExceptionBegin
  AObj.MakeVisible(PartialOK);
  handleExceptionEnd
end;

// property
procedure TListItem_Caption(ASet: LongBool; AObj: TListItem; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 12607}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Caption := AValue
  end else
    StringBufferCreate(AObj.Caption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TListItem_Checked(ASet: LongBool; AObj: TListItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12608}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Checked := AValue
  end else
    Result := AObj.Checked;
  handleExceptionEnd
end;

// property
function TListItem_Cut(ASet: LongBool; AObj: TListItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12609}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cut := AValue
  end else
    Result := AObj.Cut;
  handleExceptionEnd
end;

// property
function TListItem_Data(ASet: LongBool; AObj: TListItem; AValue: Pointer): Pointer; extdecl;
begin
  {$define handleExceptionID := 12610}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Data := AValue
  end else
    Result := AObj.Data;
  handleExceptionEnd
end;

// property
function TListItem_DropTarget(ASet: LongBool; AObj: TListItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12611}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DropTarget := AValue
  end else
    Result := AObj.DropTarget;
  handleExceptionEnd
end;

// property
function TListItem_Focused(ASet: LongBool; AObj: TListItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12612}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Focused := AValue
  end else
    Result := AObj.Focused;
  handleExceptionEnd
end;

// property
function TListItem_Index(AObj: TListItem): Integer; extdecl;
begin
  {$define handleExceptionID := 12613}
  handleExceptionBegin
  Result := AObj.Index;
  handleExceptionEnd
end;

// property
function TListItem_ImageIndex(ASet: LongBool; AObj: TListItem; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 12614}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TListItem_Left(ASet: LongBool; AObj: TListItem; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12615}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Left := AValue
  end else
    Result := AObj.Left;
  handleExceptionEnd
end;

// property
function TListItem_ListView(AObj: TListItem): TCustomListView; extdecl;
begin
  {$define handleExceptionID := 12616}
  handleExceptionBegin
  Result := AObj.ListView;
  handleExceptionEnd
end;

// property
function TListItem_Owner(AObj: TListItem): TListItems; extdecl;
begin
  {$define handleExceptionID := 12617}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

// property
procedure TListItem_Position(ASet: LongBool; AObj: TListItem; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 12618}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Position := AValue
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

// property
function TListItem_Selected(ASet: LongBool; AObj: TListItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12619}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Selected := AValue
  end else
    Result := AObj.Selected;
  handleExceptionEnd
end;

// property
function TListItem_StateIndex(ASet: LongBool; AObj: TListItem; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 12620}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StateIndex := AValue
  end else
    Result := AObj.StateIndex;
  handleExceptionEnd
end;

// property
function TListItem_SubItems(ASet: LongBool; AObj: TListItem; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 12621}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SubItems := AValue
  end else
    Result := AObj.SubItems;
  handleExceptionEnd
end;

// property
function TListItem_SubItemImages(ASet: LongBool; AObj: TListItem; const AIndex: Integer; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12622}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SubItemImages[AIndex] := AValue
  end else
    Result := AObj.SubItemImages[AIndex];
  handleExceptionEnd
end;

// property
function TListItem_Top(ASet: LongBool; AObj: TListItem; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12623}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Top := AValue
  end else
    Result := AObj.Top;
  handleExceptionEnd
end;

exports
  TListItem_Create,
  TListItem_DisplayRect,
  TListItem_DisplayRectSubItem,
  TListItem_EditCaption,
  TListItem_GetStates,
  TListItem_Delete,
  TListItem_MakeVisible,
  TListItem_Caption,
  TListItem_Checked,
  TListItem_Cut,
  TListItem_Data,
  TListItem_DropTarget,
  TListItem_Focused,
  TListItem_Index,
  TListItem_ImageIndex,
  TListItem_Left,
  TListItem_ListView,
  TListItem_Owner,
  TListItem_Position,
  TListItem_Selected,
  TListItem_StateIndex,
  TListItem_SubItems,
  TListItem_SubItemImages,
  TListItem_Top;