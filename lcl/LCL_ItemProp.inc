
//constructor
function ItemProp_Create(AOwner: TValueListEditor): TItemProp; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TItemProp.Create(AOwner);
  handleExceptionEnd
end;

//property
function ItemProp_EditMask(AIsSet: LongBool; AObj: TItemProp; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='EditMask'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EditMask := AValue;
  end else
    Result := ToPChar(AObj.EditMask);
  handleExceptionEnd
end;

//property
function ItemProp_EditStyle(AIsSet: LongBool; AObj: TItemProp; AValue: TEditStyle): TEditStyle; extdecl;
begin
  {$define handleExceptionFuncName :='EditStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EditStyle := AValue;
  end else
    Result := AObj.EditStyle;
  handleExceptionEnd
end;

//property
function ItemProp_KeyDesc(AIsSet: LongBool; AObj: TItemProp; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='KeyDesc'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.KeyDesc := AValue;
  end else
    Result := ToPChar(AObj.KeyDesc);
  handleExceptionEnd
end;

//property
function ItemProp_PickList(AIsSet: LongBool; AObj: TItemProp; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionFuncName :='PickList'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PickList := AValue;
  end else
    Result := AObj.PickList;
  handleExceptionEnd
end;

//property
function ItemProp_MaxLength(AIsSet: LongBool; AObj: TItemProp; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='MaxLength'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxLength := AValue;
  end else
    Result := AObj.MaxLength;
  handleExceptionEnd
end;

//property
function ItemProp_ReadOnly(AIsSet: LongBool; AObj: TItemProp; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ReadOnly'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ReadOnly := AValue;
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

//function
function ItemProp_Class(): TClass; extdecl;
begin
  Result := TItemProp;
end;


exports
  ItemProp_Create,
  ItemProp_EditMask,
  ItemProp_EditStyle,
  ItemProp_KeyDesc,
  ItemProp_PickList,
  ItemProp_MaxLength,
  ItemProp_ReadOnly,
  ItemProp_Class;