
//constructor
function ListControlItem_Create(ACollection: TCollection): TListControlItem; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TListControlItem.Create(ACollection);
  handleExceptionEnd
end;

//property
function ListControlItem_Data(AIsSet: LongBool; AObj: TListControlItem; AValue: TCustomData): TCustomData; extdecl;
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
function ListControlItem_Caption(AIsSet: LongBool; AObj: TListControlItem; AValue: PChar): PChar; extdecl;
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
function ListControlItem_ImageIndex(AIsSet: LongBool; AObj: TListControlItem; AValue: TImageIndex): TImageIndex; extdecl;
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

//function
function ListControlItem_Class(): TClass; extdecl;
begin
  Result := TListControlItem;
end;


exports
  ListControlItem_Create,
  ListControlItem_Data,
  ListControlItem_Caption,
  ListControlItem_ImageIndex,
  ListControlItem_Class;