// constructor
function TCollectionItem_Create(ACollection: TCollection): TCollectionItem; extdecl;
begin
  {$define handleExceptionID := 13400}
  handleExceptionBegin
  Result := TCollectionItem.Create(ACollection);
  handleExceptionEnd
end;

// property
function TCollectionItem_Collection(ASet: LongBool; AObj: TCollectionItem; AValue: TCollection): TCollection; extdecl;
begin
  {$define handleExceptionID := 13401}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Collection := AValue
  end else
    Result := AObj.Collection;
  handleExceptionEnd
end;

// property
function TCollectionItem_ID(AObj: TCollectionItem): Integer; extdecl;
begin
  {$define handleExceptionID := 13402}
  handleExceptionBegin
  Result := AObj.ID;
  handleExceptionEnd
end;

// property
function TCollectionItem_Index(ASet: LongBool; AObj: TCollectionItem; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 13403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Index := AValue
  end else
    Result := AObj.Index;
  handleExceptionEnd
end;

// property
procedure TCollectionItem_DisplayName(ASet: LongBool; AObj: TCollectionItem; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 13404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisplayName := AValue
  end else
    StringBufferCreate(AObj.DisplayName, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TCollectionItem_Create,
  TCollectionItem_Collection,
  TCollectionItem_ID,
  TCollectionItem_Index,
  TCollectionItem_DisplayName;