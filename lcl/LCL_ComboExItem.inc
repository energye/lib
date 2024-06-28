
//constructor
function ComboExItem_Create(ACollection: TCollection): TComboExItem; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TComboExItem.Create(ACollection);
  handleExceptionEnd
end;

//property
function ComboExItem_Indent(AIsSet: LongBool; AObj: TComboExItem; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Indent'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Indent := AValue;
  end else
    Result := AObj.Indent;
  handleExceptionEnd
end;

//property
function ComboExItem_OverlayImageIndex(AIsSet: LongBool; AObj: TComboExItem; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionFuncName :='OverlayImageIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.OverlayImageIndex := AValue;
  end else
    Result := AObj.OverlayImageIndex;
  handleExceptionEnd
end;

//property
function ComboExItem_SelectedImageIndex(AIsSet: LongBool; AObj: TComboExItem; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionFuncName :='SelectedImageIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectedImageIndex := AValue;
  end else
    Result := AObj.SelectedImageIndex;
  handleExceptionEnd
end;

//function
function ComboExItem_Class(): TClass; extdecl;
begin
  Result := TComboExItem;
end;


exports
  ComboExItem_Create,
  ComboExItem_Indent,
  ComboExItem_OverlayImageIndex,
  ComboExItem_SelectedImageIndex,
  ComboExItem_Class;