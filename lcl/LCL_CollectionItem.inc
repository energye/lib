
//constructor
function CollectionItem_Create(ACollection: TCollection): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result := TCollectionItem.Create(ACollection);
  handleExceptionEnd
end;

//property
function CollectionItem_Collection(AIsSet: LongBool; AObj: TCollectionItem; AValue: TCollection): TCollection; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Collection := AValue;
  end else
    Result := AObj.Collection;
  handleExceptionEnd
end;

//property
function CollectionItem_ID(AObj: TCollectionItem): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ID;
  handleExceptionEnd
end;

//property
function CollectionItem_Index(AIsSet: LongBool; AObj: TCollectionItem; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Index := AValue;
  end else
    Result := AObj.Index;
  handleExceptionEnd
end;

//property
function CollectionItem_DisplayName(AIsSet: LongBool; AObj: TCollectionItem; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisplayName := AValue;
  end else
    Result := ToPChar(AObj.DisplayName);
  handleExceptionEnd
end;

//function
function CollectionItem_Class(): TClass; extdecl;
begin
  Result := TCollectionItem;
end;


exports
  CollectionItem_Create,
  CollectionItem_Collection,
  CollectionItem_ID,
  CollectionItem_Index,
  CollectionItem_DisplayName,
  CollectionItem_Class;