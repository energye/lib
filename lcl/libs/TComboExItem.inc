// constructor
function TComboExItem_Create(ACollection: TCollection): TComboExItem; extdecl;
begin
  {$define handleExceptionID := 21600}
  handleExceptionBegin
  Result := TComboExItem.Create(ACollection);
  handleExceptionEnd
end;

// property
function TComboExItem_Indent(ASet: LongBool; AObj: TComboExItem; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 21601}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Indent := AValue
  end else
    Result := AObj.Indent;
  handleExceptionEnd
end;

// property
function TComboExItem_OverlayImageIndex(ASet: LongBool; AObj: TComboExItem; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 21602}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OverlayImageIndex := AValue
  end else
    Result := AObj.OverlayImageIndex;
  handleExceptionEnd
end;

// property
function TComboExItem_SelectedImageIndex(ASet: LongBool; AObj: TComboExItem; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 21603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectedImageIndex := AValue
  end else
    Result := AObj.SelectedImageIndex;
  handleExceptionEnd
end;

exports
  TComboExItem_Create,
  TComboExItem_Indent,
  TComboExItem_OverlayImageIndex,
  TComboExItem_SelectedImageIndex;