
//constructor
function ComboExItems_Create(AOwner: TPersistent; AItemClass: TCollectionItemClass): TComboExItems; extdecl;
begin
  handleExceptionBegin
  Result := TComboExItems.Create(AOwner, AItemClass);
  handleExceptionEnd
end;

//property
function ComboExItems_ComboItems(AObj: TComboExItems; AIndex: Integer): TComboExItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ComboItems[AIndex];
  handleExceptionEnd
end;

//function
function ComboExItems_AddForComboExItem(AObj: TComboExItems): TComboExItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

//function
function ComboExItems_AddItem(AObj: TComboExItems; const ACaption: PChar; AImageIndex: SmallInt; AOverlayImageIndex: SmallInt; ASelectedImageIndex: SmallInt; AIndent: SmallInt; AData: TCustomData): TComboExItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddItem(ACaption, AImageIndex, AOverlayImageIndex, ASelectedImageIndex, AIndent, AData);
  handleExceptionEnd
end;

//function
function ComboExItems_InsertForComboExItem(AObj: TComboExItems; AIndex: Integer): TComboExItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Insert(AIndex);
  handleExceptionEnd
end;

//function
function ComboExItems_Class(): TClass; extdecl;
begin
  Result := TComboExItems;
end;


exports
  ComboExItems_Create,
  ComboExItems_ComboItems,
  ComboExItems_AddForComboExItem,
  ComboExItems_AddItem,
  ComboExItems_InsertForComboExItem,
  ComboExItems_Class;