// constructor
function TCustomComboBoxEx_Create(TheOwner: TComponent): TCustomComboBoxEx; extdecl;
begin
  {$define handleExceptionID := 21100}
  handleExceptionBegin
  Result := TCustomComboBoxEx.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TCustomComboBoxEx_AddToInt(AObj: TCustomComboBoxEx): Integer; extdecl;
begin
  {$define handleExceptionID := 21101}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

// procedure
procedure TCustomComboBoxEx_AddWithStrIntIIndexX3(AObj: TCustomComboBoxEx; const ACaption: PChar; AIndent: Integer; AImgIdx: TImageIndex; AOverlayImgIdx: TImageIndex; ASelectedImgIdx: TImageIndex); extdecl;
begin
  {$define handleExceptionID := 21102}
  handleExceptionBegin
  AObj.Add(ACaption, AIndent, AImgIdx, AOverlayImgIdx, ASelectedImgIdx);
  handleExceptionEnd
end;

// procedure
procedure TCustomComboBoxEx_AssignItemsExWithStrings(AObj: TCustomComboBoxEx; AItems: TStrings); extdecl;
begin
  {$define handleExceptionID := 21103}
  handleExceptionBegin
  AObj.AssignItemsEx(AItems);
  handleExceptionEnd
end;

// procedure
procedure TCustomComboBoxEx_AssignItemsExWithComboExItems(AObj: TCustomComboBoxEx; AItemsEx: TComboExItems); extdecl;
begin
  {$define handleExceptionID := 21104}
  handleExceptionBegin
  AObj.AssignItemsEx(AItemsEx);
  handleExceptionEnd
end;

// procedure
procedure TCustomComboBoxEx_Delete(AObj: TCustomComboBoxEx; AIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 21105}
  handleExceptionBegin
  AObj.Delete(AIndex);
  handleExceptionEnd
end;

// procedure
procedure TCustomComboBoxEx_DeleteSelected(AObj: TCustomComboBoxEx); extdecl;
begin
  {$define handleExceptionID := 21106}
  handleExceptionBegin
  AObj.DeleteSelected();
  handleExceptionEnd
end;

// procedure
procedure TCustomComboBoxEx_Insert(AObj: TCustomComboBoxEx; AIndex: Integer; const ACaption: PChar; AIndent: Integer; AImgIdx: TImageIndex; AOverlayImgIdx: TImageIndex; ASelectedImgIdx: TImageIndex); extdecl;
begin
  {$define handleExceptionID := 21107}
  handleExceptionBegin
  AObj.Insert(AIndex, ACaption, AIndent, AImgIdx, AOverlayImgIdx, ASelectedImgIdx);
  handleExceptionEnd
end;

// property
function TCustomComboBoxEx_AutoCompleteOptions(ASet: LongBool; AObj: TCustomComboBoxEx; AValue: TAutoCompleteOptions): TAutoCompleteOptions; extdecl;
begin
  {$define handleExceptionID := 21108}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoCompleteOptions := AValue
  end else
    Result := AObj.AutoCompleteOptions;
  handleExceptionEnd
end;

// property
function TCustomComboBoxEx_Images(ASet: LongBool; AObj: TCustomComboBoxEx; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 21109}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TCustomComboBoxEx_ImagesWidth(ASet: LongBool; AObj: TCustomComboBoxEx; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 21110}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImagesWidth := AValue
  end else
    Result := AObj.ImagesWidth;
  handleExceptionEnd
end;

// property
function TCustomComboBoxEx_ItemsEx(ASet: LongBool; AObj: TCustomComboBoxEx; AValue: TComboExItems): TComboExItems; extdecl;
begin
  {$define handleExceptionID := 21111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemsEx := AValue
  end else
    Result := AObj.ItemsEx;
  handleExceptionEnd
end;

// property
function TCustomComboBoxEx_StyleToComboBoxExStyle(ASet: LongBool; AObj: TCustomComboBoxEx; AValue: TComboBoxExStyle): TComboBoxExStyle; extdecl;
begin
  {$define handleExceptionID := 21112}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

// property
function TCustomComboBoxEx_StyleEx(ASet: LongBool; AObj: TCustomComboBoxEx; AValue: TComboBoxExStyles): TComboBoxExStyles; extdecl;
begin
  {$define handleExceptionID := 21113}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StyleEx := AValue
  end else
    Result := AObj.StyleEx;
  handleExceptionEnd
end;

function TCustomComboBoxEx_TClass(): TClass; extdecl;
begin
  Result := TCustomComboBoxEx;
end;

exports
  TCustomComboBoxEx_Create,
  TCustomComboBoxEx_AddToInt,
  TCustomComboBoxEx_AddWithStrIntIIndexX3,
  TCustomComboBoxEx_AssignItemsExWithStrings,
  TCustomComboBoxEx_AssignItemsExWithComboExItems,
  TCustomComboBoxEx_Delete,
  TCustomComboBoxEx_DeleteSelected,
  TCustomComboBoxEx_Insert,
  TCustomComboBoxEx_AutoCompleteOptions,
  TCustomComboBoxEx_Images,
  TCustomComboBoxEx_ImagesWidth,
  TCustomComboBoxEx_ItemsEx,
  TCustomComboBoxEx_StyleToComboBoxExStyle,
  TCustomComboBoxEx_StyleEx,
  TCustomComboBoxEx_TClass;