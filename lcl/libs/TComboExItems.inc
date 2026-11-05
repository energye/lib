// constructor
function TComboExItems_Create(AOwner: TPersistent; AItemClass: TCollectionItemClass): TComboExItems; extdecl;
begin
  {$define handleExceptionID := 21400}
  handleExceptionBegin
  Result := TComboExItems.Create(AOwner, AItemClass);
  handleExceptionEnd
end;

// function
function TComboExItems_AddToComboExItem(AObj: TComboExItems): TComboExItem; extdecl;
begin
  {$define handleExceptionID := 21401}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

// function
function TComboExItems_AddItem(AObj: TComboExItems; const ACaption: PChar; AImageIndex: SmallInt; AOverlayImageIndex: SmallInt; ASelectedImageIndex: SmallInt; AIndent: SmallInt; AData: TCustomData): TComboExItem; extdecl;
begin
  {$define handleExceptionID := 21402}
  handleExceptionBegin
  Result := AObj.AddItem(ACaption, AImageIndex, AOverlayImageIndex, ASelectedImageIndex, AIndent, AData);
  handleExceptionEnd
end;

// function
function TComboExItems_InsertWithInt(AObj: TComboExItems; AIndex: Integer): TComboExItem; extdecl;
begin
  {$define handleExceptionID := 21403}
  handleExceptionBegin
  Result := AObj.Insert(AIndex);
  handleExceptionEnd
end;

// property
function TComboExItems_ComboItems(AObj: TComboExItems; AIndex: Integer): TComboExItem; extdecl;
begin
  {$define handleExceptionID := 21404}
  handleExceptionBegin
  Result := AObj.ComboItems[AIndex];
  handleExceptionEnd
end;

exports
  TComboExItems_Create,
  TComboExItems_AddToComboExItem,
  TComboExItems_AddItem,
  TComboExItems_InsertWithInt,
  TComboExItems_ComboItems;