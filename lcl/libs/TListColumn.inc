// constructor
function TListColumn_Create(ACollection: TCollection): TListColumn; extdecl;
begin
  {$define handleExceptionID := 13500}
  handleExceptionBegin
  Result := TListColumn.Create(ACollection);
  handleExceptionEnd
end;

// property
function TListColumn_WidthType(AObj: TListColumn): TWidth; extdecl;
begin
  {$define handleExceptionID := 13501}
  handleExceptionBegin
  Result := AObj.WidthType;
  handleExceptionEnd
end;

// property
function TListColumn_Alignment(ASet: LongBool; AObj: TListColumn; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 13502}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TListColumn_AutoSize(ASet: LongBool; AObj: TListColumn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 13503}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSize := AValue
  end else
    Result := AObj.AutoSize;
  handleExceptionEnd
end;

// property
procedure TListColumn_Caption(ASet: LongBool; AObj: TListColumn; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 13504}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Caption := AValue
  end else
    StringBufferCreate(AObj.Caption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TListColumn_ImageIndex(ASet: LongBool; AObj: TListColumn; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 13505}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TListColumn_MaxWidth(ASet: LongBool; AObj: TListColumn; AValue: TWidth): TWidth; extdecl;
begin
  {$define handleExceptionID := 13506}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxWidth := AValue
  end else
    Result := AObj.MaxWidth;
  handleExceptionEnd
end;

// property
function TListColumn_MinWidth(ASet: LongBool; AObj: TListColumn; AValue: TWidth): TWidth; extdecl;
begin
  {$define handleExceptionID := 13507}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinWidth := AValue
  end else
    Result := AObj.MinWidth;
  handleExceptionEnd
end;

// property
function TListColumn_Tag(ASet: LongBool; AObj: TListColumn; AValue: PtrInt): PtrInt; extdecl;
begin
  {$define handleExceptionID := 13508}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Tag := AValue
  end else
    Result := AObj.Tag;
  handleExceptionEnd
end;

// property
function TListColumn_Visible(ASet: LongBool; AObj: TListColumn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 13509}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Visible := AValue
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

// property
function TListColumn_Width(ASet: LongBool; AObj: TListColumn; AValue: TWidth): TWidth; extdecl;
begin
  {$define handleExceptionID := 13510}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

// property
function TListColumn_SortIndicator(ASet: LongBool; AObj: TListColumn; AValue: TSortIndicator): TSortIndicator; extdecl;
begin
  {$define handleExceptionID := 13511}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SortIndicator := AValue
  end else
    Result := AObj.SortIndicator;
  handleExceptionEnd
end;

exports
  TListColumn_Create,
  TListColumn_WidthType,
  TListColumn_Alignment,
  TListColumn_AutoSize,
  TListColumn_Caption,
  TListColumn_ImageIndex,
  TListColumn_MaxWidth,
  TListColumn_MinWidth,
  TListColumn_Tag,
  TListColumn_Visible,
  TListColumn_Width,
  TListColumn_SortIndicator;