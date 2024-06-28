
//constructor
function ListColumn_Create(ACollection: TCollection): TListColumn; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TListColumn.Create(ACollection);
  handleExceptionEnd
end;

//property
function ListColumn_WidthType(AObj: TListColumn): TWidth; extdecl;
begin
  {$define handleExceptionFuncName :='WidthType'}
  handleExceptionBegin
  Result := AObj.WidthType;
  handleExceptionEnd
end;

//property
function ListColumn_Alignment(AIsSet: LongBool; AObj: TListColumn; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionFuncName :='Alignment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function ListColumn_AutoSize(AIsSet: LongBool; AObj: TListColumn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AutoSize'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSize := AValue;
  end else
    Result := AObj.AutoSize;
  handleExceptionEnd
end;

//property
function ListColumn_Caption(AIsSet: LongBool; AObj: TListColumn; AValue: PChar): PChar; extdecl;
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
function ListColumn_ImageIndex(AIsSet: LongBool; AObj: TListColumn; AValue: TImageIndex): TImageIndex; extdecl;
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
function ListColumn_MaxWidth(AIsSet: LongBool; AObj: TListColumn; AValue: TWidth): TWidth; extdecl;
begin
  {$define handleExceptionFuncName :='MaxWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxWidth := AValue;
  end else
    Result := AObj.MaxWidth;
  handleExceptionEnd
end;

//property
function ListColumn_MinWidth(AIsSet: LongBool; AObj: TListColumn; AValue: TWidth): TWidth; extdecl;
begin
  {$define handleExceptionFuncName :='MinWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinWidth := AValue;
  end else
    Result := AObj.MinWidth;
  handleExceptionEnd
end;

//property
function ListColumn_Tag(AIsSet: LongBool; AObj: TListColumn; AValue: NativeInt): NativeInt; extdecl;
begin
  {$define handleExceptionFuncName :='Tag'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Tag := AValue;
  end else
    Result := AObj.Tag;
  handleExceptionEnd
end;

//property
function ListColumn_Visible(AIsSet: LongBool; AObj: TListColumn; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Visible'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Visible := AValue;
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

//property
function ListColumn_Width(AIsSet: LongBool; AObj: TListColumn; AValue: TWidth): TWidth; extdecl;
begin
  {$define handleExceptionFuncName :='Width'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Width := AValue;
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

//property
function ListColumn_SortIndicator(AIsSet: LongBool; AObj: TListColumn; AValue: TSortIndicator): TSortIndicator; extdecl;
begin
  {$define handleExceptionFuncName :='SortIndicator'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SortIndicator := AValue;
  end else
    Result := AObj.SortIndicator;
  handleExceptionEnd
end;

//function
function ListColumn_Class(): TClass; extdecl;
begin
  Result := TListColumn;
end;


exports
  ListColumn_Create,
  ListColumn_WidthType,
  ListColumn_Alignment,
  ListColumn_AutoSize,
  ListColumn_Caption,
  ListColumn_ImageIndex,
  ListColumn_MaxWidth,
  ListColumn_MinWidth,
  ListColumn_Tag,
  ListColumn_Visible,
  ListColumn_Width,
  ListColumn_SortIndicator,
  ListColumn_Class;