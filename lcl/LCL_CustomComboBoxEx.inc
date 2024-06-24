
//constructor
function CustomComboBoxEx_Create(TheOwner: TComponent): TCustomComboBoxEx; extdecl;
begin
  handleExceptionBegin
  Result := TCustomComboBoxEx.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomComboBoxEx_AutoCompleteOptions(AIsSet: LongBool; AObj: TCustomComboBoxEx; AValue: TAutoCompleteOptions): TAutoCompleteOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoCompleteOptions := AValue;
  end else
    Result := AObj.AutoCompleteOptions;
  handleExceptionEnd
end;

//property
function CustomComboBoxEx_Images(AIsSet: LongBool; AObj: TCustomComboBoxEx; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Images := AValue;
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

//property
function CustomComboBoxEx_ImagesWidth(AIsSet: LongBool; AObj: TCustomComboBoxEx; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImagesWidth := AValue;
  end else
    Result := AObj.ImagesWidth;
  handleExceptionEnd
end;

//property
function CustomComboBoxEx_ItemsEx(AIsSet: LongBool; AObj: TCustomComboBoxEx; AValue: TComboExItems): TComboExItems; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ItemsEx := AValue;
  end else
    Result := AObj.ItemsEx;
  handleExceptionEnd
end;

//property
function CustomComboBoxEx_StyleForComboBoxExStyle(AIsSet: LongBool; AObj: TCustomComboBoxEx; AValue: TComboBoxExStyle): TComboBoxExStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Style := AValue;
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

//property
function CustomComboBoxEx_StyleEx(AIsSet: LongBool; AObj: TCustomComboBoxEx; AValue: TComboBoxExStyles): TComboBoxExStyles; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StyleEx := AValue;
  end else
    Result := AObj.StyleEx;
  handleExceptionEnd
end;

//function
function CustomComboBoxEx_Add(AObj: TCustomComboBoxEx): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

//function
function CustomComboBoxEx_Class(): TClass; extdecl;
begin
  Result := TCustomComboBoxEx;
end;

//procedure
procedure CustomComboBoxEx_Add1(AObj: TCustomComboBoxEx; const ACaption: PChar; AIndent: Integer; AImgIdx: TImageIndex; AOverlayImgIdx: TImageIndex; ASelectedImgIdx: TImageIndex); extdecl;
begin
  handleExceptionBegin
  AObj.Add(ACaption, AIndent, AImgIdx, AOverlayImgIdx, ASelectedImgIdx);
  handleExceptionEnd
end;

//procedure
procedure CustomComboBoxEx_AssignItemsEx(AObj: TCustomComboBoxEx; AItems: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.AssignItemsEx(AItems);
  handleExceptionEnd
end;

//procedure
procedure CustomComboBoxEx_AssignItemsEx1(AObj: TCustomComboBoxEx; AItemsEx: TComboExItems); extdecl;
begin
  handleExceptionBegin
  AObj.AssignItemsEx(AItemsEx);
  handleExceptionEnd
end;

//procedure
procedure CustomComboBoxEx_Delete(AObj: TCustomComboBoxEx; AIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(AIndex);
  handleExceptionEnd
end;

//procedure
procedure CustomComboBoxEx_DeleteSelected(AObj: TCustomComboBoxEx); extdecl;
begin
  handleExceptionBegin
  AObj.DeleteSelected();
  handleExceptionEnd
end;

//procedure
procedure CustomComboBoxEx_Insert(AObj: TCustomComboBoxEx; AIndex: Integer; const ACaption: PChar; AIndent: Integer; AImgIdx: TImageIndex; AOverlayImgIdx: TImageIndex; ASelectedImgIdx: TImageIndex); extdecl;
begin
  handleExceptionBegin
  AObj.Insert(AIndex, ACaption, AIndent, AImgIdx, AOverlayImgIdx, ASelectedImgIdx);
  handleExceptionEnd
end;


exports
  CustomComboBoxEx_Create,
  CustomComboBoxEx_AutoCompleteOptions,
  CustomComboBoxEx_Images,
  CustomComboBoxEx_ImagesWidth,
  CustomComboBoxEx_ItemsEx,
  CustomComboBoxEx_StyleForComboBoxExStyle,
  CustomComboBoxEx_StyleEx,
  CustomComboBoxEx_Add,
  CustomComboBoxEx_Class,
  CustomComboBoxEx_Add1,
  CustomComboBoxEx_AssignItemsEx,
  CustomComboBoxEx_AssignItemsEx1,
  CustomComboBoxEx_Delete,
  CustomComboBoxEx_DeleteSelected,
  CustomComboBoxEx_Insert;