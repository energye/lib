
//constructor
function ListItem_Create(AOwner: TListItems): TListItem; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TListItem.Create(AOwner);
  handleExceptionEnd
end;

//property
function ListItem_Caption(AIsSet: LongBool; AObj: TListItem; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Caption'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Caption := AValue;
  end else
    Result := ToPChar(AObj.Caption);
  handleExceptionEnd
end;

//property
function ListItem_Checked(AIsSet: LongBool; AObj: TListItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Checked'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Checked := AValue;
  end else
    Result := AObj.Checked;
  handleExceptionEnd
end;

//property
function ListItem_Cut(AIsSet: LongBool; AObj: TListItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Cut'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Cut := AValue;
  end else
    Result := AObj.Cut;
  handleExceptionEnd
end;

//property
function ListItem_Data(AIsSet: LongBool; AObj: TListItem; AValue: Pointer): Pointer; extdecl;
begin
  {$define handleExceptionFuncName :='Data'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Data := AValue;
  end else
    Result := AObj.Data;
  handleExceptionEnd
end;

//property
function ListItem_DropTarget(AIsSet: LongBool; AObj: TListItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DropTarget'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DropTarget := AValue;
  end else
    Result := AObj.DropTarget;
  handleExceptionEnd
end;

//property
function ListItem_Focused(AIsSet: LongBool; AObj: TListItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Focused'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Focused := AValue;
  end else
    Result := AObj.Focused;
  handleExceptionEnd
end;

//property
function ListItem_Index(AObj: TListItem): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Index'}
  handleExceptionBegin
  Result := AObj.Index;
  handleExceptionEnd
end;

//property
function ListItem_ImageIndex(AIsSet: LongBool; AObj: TListItem; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionFuncName :='ImageIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageIndex := AValue;
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

//property
function ListItem_Left(AIsSet: LongBool; AObj: TListItem; AValue: Integer): Integer; extdecl;
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
function ListItem_ListView(AObj: TListItem): TCustomListView; extdecl;
begin
  {$define handleExceptionFuncName :='ListView'}
  handleExceptionBegin
  Result := AObj.ListView;
  handleExceptionEnd
end;

//property
function ListItem_Owner(AObj: TListItem): TListItems; extdecl;
begin
  {$define handleExceptionFuncName :='Owner'}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

//property
procedure ListItem_Position(AIsSet: LongBool; AObj: TListItem; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionFuncName :='Position'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Position := AValue;
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

//property
function ListItem_Selected(AIsSet: LongBool; AObj: TListItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Selected'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Selected := AValue;
  end else
    Result := AObj.Selected;
  handleExceptionEnd
end;

//property
function ListItem_StateIndex(AIsSet: LongBool; AObj: TListItem; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionFuncName :='StateIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StateIndex := AValue;
  end else
    Result := AObj.StateIndex;
  handleExceptionEnd
end;

//property
function ListItem_SubItems(AIsSet: LongBool; AObj: TListItem; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionFuncName :='SubItems'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SubItems := AValue;
  end else
    Result := AObj.SubItems;
  handleExceptionEnd
end;

//property
function ListItem_SubItemImages(AIsSet: LongBool; AObj: TListItem; const AIndex: Integer; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='SubItemImages'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SubItemImages[AIndex] := AValue;
  end else
    Result := AObj.SubItemImages[AIndex];
  handleExceptionEnd
end;

//property
function ListItem_Top(AIsSet: LongBool; AObj: TListItem; AValue: Integer): Integer; extdecl;
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

//function
procedure ListItem_DisplayRect(AObj: TListItem; Code: TDisplayCode; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='DisplayRect'}
  handleExceptionBegin
  Result := AObj.DisplayRect(Code);
  handleExceptionEnd
end;

//function
procedure ListItem_DisplayRectSubItem(AObj: TListItem; subItem: integer; Code: TDisplayCode; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='DisplayRectSubItem'}
  handleExceptionBegin
  Result := AObj.DisplayRectSubItem(subItem, Code);
  handleExceptionEnd
end;

//function
function ListItem_EditCaption(AObj: TListItem): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='EditCaption'}
  handleExceptionBegin
  Result := AObj.EditCaption();
  handleExceptionEnd
end;

//function
function ListItem_GetStates(AObj: TListItem): TListItemStates; extdecl;
begin
  {$define handleExceptionFuncName :='GetStates'}
  handleExceptionBegin
  Result := AObj.GetStates();
  handleExceptionEnd
end;

//function
function ListItem_Class(): TClass; extdecl;
begin
  Result := TListItem;
end;

//procedure
procedure ListItem_Delete(AObj: TListItem); extdecl;
begin
  {$define handleExceptionFuncName :='Delete'}
  handleExceptionBegin
  AObj.Delete();
  handleExceptionEnd
end;

//procedure
procedure ListItem_MakeVisible(AObj: TListItem; PartialOK: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='MakeVisible'}
  handleExceptionBegin
  AObj.MakeVisible(PartialOK);
  handleExceptionEnd
end;


exports
  ListItem_Create,
  ListItem_Caption,
  ListItem_Checked,
  ListItem_Cut,
  ListItem_Data,
  ListItem_DropTarget,
  ListItem_Focused,
  ListItem_Index,
  ListItem_ImageIndex,
  ListItem_Left,
  ListItem_ListView,
  ListItem_Owner,
  ListItem_Position,
  ListItem_Selected,
  ListItem_StateIndex,
  ListItem_SubItems,
  ListItem_SubItemImages,
  ListItem_Top,
  ListItem_DisplayRect,
  ListItem_DisplayRectSubItem,
  ListItem_EditCaption,
  ListItem_GetStates,
  ListItem_Class,
  ListItem_Delete,
  ListItem_MakeVisible;