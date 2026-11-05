// constructor
function TListControlItem_Create(ACollection: TCollection): TListControlItem; extdecl;
begin
  {$define handleExceptionID := 21500}
  handleExceptionBegin
  Result := TListControlItem.Create(ACollection);
  handleExceptionEnd
end;

// property
function TListControlItem_Data(ASet: LongBool; AObj: TListControlItem; AValue: TCustomData): TCustomData; extdecl;
begin
  {$define handleExceptionID := 21501}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Data := AValue
  end else
    Result := AObj.Data;
  handleExceptionEnd
end;

// property
procedure TListControlItem_Caption(ASet: LongBool; AObj: TListControlItem; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 21502}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Caption := AValue
  end else
    StringBufferCreate(AObj.Caption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TListControlItem_ImageIndex(ASet: LongBool; AObj: TListControlItem; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 21503}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

exports
  TListControlItem_Create,
  TListControlItem_Data,
  TListControlItem_Caption,
  TListControlItem_ImageIndex;