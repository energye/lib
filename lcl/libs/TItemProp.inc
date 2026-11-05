// constructor
function TItemProp_Create(AOwner: TValueListEditor): TItemProp; extdecl;
begin
  {$define handleExceptionID := 26200}
  handleExceptionBegin
  Result := TItemProp.Create(AOwner);
  handleExceptionEnd
end;

// property
procedure TItemProp_EditMask(ASet: LongBool; AObj: TItemProp; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 26201}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EditMask := AValue
  end else
    StringBufferCreate(AObj.EditMask, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TItemProp_EditStyle(ASet: LongBool; AObj: TItemProp; AValue: TEditStyle): TEditStyle; extdecl;
begin
  {$define handleExceptionID := 26202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EditStyle := AValue
  end else
    Result := AObj.EditStyle;
  handleExceptionEnd
end;

// property
procedure TItemProp_KeyDesc(ASet: LongBool; AObj: TItemProp; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 26203}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeyDesc := AValue
  end else
    StringBufferCreate(AObj.KeyDesc, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TItemProp_PickList(ASet: LongBool; AObj: TItemProp; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 26204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PickList := AValue
  end else
    Result := AObj.PickList;
  handleExceptionEnd
end;

// property
function TItemProp_MaxLength(ASet: LongBool; AObj: TItemProp; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 26205}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxLength := AValue
  end else
    Result := AObj.MaxLength;
  handleExceptionEnd
end;

// property
function TItemProp_ReadOnly(ASet: LongBool; AObj: TItemProp; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 26206}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReadOnly := AValue
  end else
    Result := AObj.ReadOnly;
  handleExceptionEnd
end;

exports
  TItemProp_Create,
  TItemProp_EditMask,
  TItemProp_EditStyle,
  TItemProp_KeyDesc,
  TItemProp_PickList,
  TItemProp_MaxLength,
  TItemProp_ReadOnly;