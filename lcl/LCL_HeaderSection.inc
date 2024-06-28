
//constructor
function HeaderSection_Create(ACollection: TCollection): THeaderSection; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := THeaderSection.Create(ACollection);
  handleExceptionEnd
end;

//property
function HeaderSection_Left(AObj: THeaderSection): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Left'}
  handleExceptionBegin
  Result := AObj.Left;
  handleExceptionEnd
end;

//property
function HeaderSection_Right(AObj: THeaderSection): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Right'}
  handleExceptionBegin
  Result := AObj.Right;
  handleExceptionEnd
end;

//property
function HeaderSection_State(AIsSet: LongBool; AObj: THeaderSection; AValue: THeaderSectionState): THeaderSectionState; extdecl;
begin
  {$define handleExceptionFuncName :='State'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.State := AValue;
  end else
    Result := AObj.State;
  handleExceptionEnd
end;

//property
function HeaderSection_Alignment(AIsSet: LongBool; AObj: THeaderSection; AValue: TAlignment): TAlignment; extdecl;
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
function HeaderSection_ImageIndex(AIsSet: LongBool; AObj: THeaderSection; AValue: TImageIndex): TImageIndex; extdecl;
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
function HeaderSection_MaxWidth(AIsSet: LongBool; AObj: THeaderSection; AValue: Integer): Integer; extdecl;
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
function HeaderSection_MinWidth(AIsSet: LongBool; AObj: THeaderSection; AValue: Integer): Integer; extdecl;
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
function HeaderSection_Text(AIsSet: LongBool; AObj: THeaderSection; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Text'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Text := AValue;
  end else
    Result := ToPChar(AObj.Text);
  handleExceptionEnd
end;

//property
function HeaderSection_Width(AIsSet: LongBool; AObj: THeaderSection; AValue: Integer): Integer; extdecl;
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
function HeaderSection_Visible(AIsSet: LongBool; AObj: THeaderSection; AValue: LongBool): LongBool; extdecl;
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
function HeaderSection_OriginalIndex(AObj: THeaderSection): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='OriginalIndex'}
  handleExceptionBegin
  Result := AObj.OriginalIndex;
  handleExceptionEnd
end;

//function
function HeaderSection_Class(): TClass; extdecl;
begin
  Result := THeaderSection;
end;


exports
  HeaderSection_Create,
  HeaderSection_Left,
  HeaderSection_Right,
  HeaderSection_State,
  HeaderSection_Alignment,
  HeaderSection_ImageIndex,
  HeaderSection_MaxWidth,
  HeaderSection_MinWidth,
  HeaderSection_Text,
  HeaderSection_Width,
  HeaderSection_Visible,
  HeaderSection_OriginalIndex,
  HeaderSection_Class;