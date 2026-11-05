// constructor
function THeaderSection_Create(ACollection: TCollection): THeaderSection; extdecl;
begin
  {$define handleExceptionID := 19300}
  handleExceptionBegin
  Result := THeaderSection.Create(ACollection);
  handleExceptionEnd
end;

// property
function THeaderSection_Left(AObj: THeaderSection): Integer; extdecl;
begin
  {$define handleExceptionID := 19301}
  handleExceptionBegin
  Result := AObj.Left;
  handleExceptionEnd
end;

// property
function THeaderSection_Right(AObj: THeaderSection): Integer; extdecl;
begin
  {$define handleExceptionID := 19302}
  handleExceptionBegin
  Result := AObj.Right;
  handleExceptionEnd
end;

// property
function THeaderSection_State(ASet: LongBool; AObj: THeaderSection; AValue: THeaderSectionState): THeaderSectionState; extdecl;
begin
  {$define handleExceptionID := 19303}
  handleExceptionBegin
  if ASet then
  begin
    AObj.State := AValue
  end else
    Result := AObj.State;
  handleExceptionEnd
end;

// property
function THeaderSection_OriginalIndex(AObj: THeaderSection): Integer; extdecl;
begin
  {$define handleExceptionID := 19304}
  handleExceptionBegin
  Result := AObj.OriginalIndex;
  handleExceptionEnd
end;

// property
function THeaderSection_Alignment(ASet: LongBool; AObj: THeaderSection; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 19305}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function THeaderSection_ImageIndex(ASet: LongBool; AObj: THeaderSection; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 19306}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function THeaderSection_MaxWidth(ASet: LongBool; AObj: THeaderSection; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 19307}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxWidth := AValue
  end else
    Result := AObj.MaxWidth;
  handleExceptionEnd
end;

// property
function THeaderSection_MinWidth(ASet: LongBool; AObj: THeaderSection; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 19308}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinWidth := AValue
  end else
    Result := AObj.MinWidth;
  handleExceptionEnd
end;

// property
procedure THeaderSection_Text(ASet: LongBool; AObj: THeaderSection; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19309}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Text := AValue
  end else
    StringBufferCreate(AObj.Text, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function THeaderSection_Width(ASet: LongBool; AObj: THeaderSection; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 19310}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

// property
function THeaderSection_Visible(ASet: LongBool; AObj: THeaderSection; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19311}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Visible := AValue
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

exports
  THeaderSection_Create,
  THeaderSection_Left,
  THeaderSection_Right,
  THeaderSection_State,
  THeaderSection_OriginalIndex,
  THeaderSection_Alignment,
  THeaderSection_ImageIndex,
  THeaderSection_MaxWidth,
  THeaderSection_MinWidth,
  THeaderSection_Text,
  THeaderSection_Width,
  THeaderSection_Visible;