
//constructor
function EditButton_Create(AOwner: TComponent): TEditButton; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TEditButton.Create(AOwner);
  handleExceptionEnd
end;

//property
function EditButton_AutoSelected(AIsSet: LongBool; AObj: TEditButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AutoSelected'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSelected := AValue;
  end else
    Result := AObj.AutoSelected;
  handleExceptionEnd
end;

//property
function EditButton_Button(AObj: TEditButton): TSpeedButton; extdecl;
begin
  {$define handleExceptionFuncName :='Button'}
  handleExceptionBegin
  Result := AObj.Button;
  handleExceptionEnd
end;

//property
function EditButton_Edit(AObj: TEditButton): TEbEdit; extdecl;
begin
  {$define handleExceptionFuncName :='Edit'}
  handleExceptionBegin
  Result := AObj.Edit;
  handleExceptionEnd
end;

//property
function EditButton_AutoSelect(AIsSet: LongBool; AObj: TEditButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AutoSelect'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSelect := AValue;
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

//property
function EditButton_ButtonCaption(AIsSet: LongBool; AObj: TEditButton; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ButtonCaption'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonCaption := AValue;
  end else
    Result := ToPChar(AObj.ButtonCaption);
  handleExceptionEnd
end;

//property
function EditButton_ButtonCursor(AIsSet: LongBool; AObj: TEditButton; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionFuncName :='ButtonCursor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonCursor := AValue;
  end else
    Result := AObj.ButtonCursor;
  handleExceptionEnd
end;

//property
function EditButton_ButtonHint(AIsSet: LongBool; AObj: TEditButton; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ButtonHint'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonHint := AValue;
  end else
    Result := ToPChar(AObj.ButtonHint);
  handleExceptionEnd
end;

//property
function EditButton_ButtonOnlyWhenFocused(AIsSet: LongBool; AObj: TEditButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ButtonOnlyWhenFocused'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonOnlyWhenFocused := AValue;
  end else
    Result := AObj.ButtonOnlyWhenFocused;
  handleExceptionEnd
end;

//property
function EditButton_ButtonWidth(AIsSet: LongBool; AObj: TEditButton; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ButtonWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonWidth := AValue;
  end else
    Result := AObj.ButtonWidth;
  handleExceptionEnd
end;

//property
function EditButton_DirectInput(AIsSet: LongBool; AObj: TEditButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DirectInput'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DirectInput := AValue;
  end else
    Result := AObj.DirectInput;
  handleExceptionEnd
end;

//property
function EditButton_Flat(AIsSet: LongBool; AObj: TEditButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Flat'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Flat := AValue;
  end else
    Result := AObj.Flat;
  handleExceptionEnd
end;

//property
function EditButton_FocusOnButtonClick(AIsSet: LongBool; AObj: TEditButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='FocusOnButtonClick'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FocusOnButtonClick := AValue;
  end else
    Result := AObj.FocusOnButtonClick;
  handleExceptionEnd
end;

//property
function EditButton_Glyph(AIsSet: LongBool; AObj: TEditButton; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionFuncName :='Glyph'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Glyph := AValue;
  end else
    Result := AObj.Glyph;
  handleExceptionEnd
end;

//property
function EditButton_Images(AIsSet: LongBool; AObj: TEditButton; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionFuncName :='Images'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Images := AValue;
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

//property
function EditButton_ImageIndex(AIsSet: LongBool; AObj: TEditButton; AValue: TImageIndex): TImageIndex; extdecl;
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
function EditButton_ImageWidth(AIsSet: LongBool; AObj: TEditButton; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ImageWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageWidth := AValue;
  end else
    Result := AObj.ImageWidth;
  handleExceptionEnd
end;

//property
function EditButton_Layout(AIsSet: LongBool; AObj: TEditButton; AValue: TLeftRight): TLeftRight; extdecl;
begin
  {$define handleExceptionFuncName :='Layout'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Layout := AValue;
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

//property
function EditButton_NumGlyphs(AIsSet: LongBool; AObj: TEditButton; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='NumGlyphs'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NumGlyphs := AValue;
  end else
    Result := AObj.NumGlyphs;
  handleExceptionEnd
end;

//property
function EditButton_ParentFont(AIsSet: LongBool; AObj: TEditButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentFont'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentFont := AValue;
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

//property
function EditButton_ParentShowHint(AIsSet: LongBool; AObj: TEditButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentShowHint'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//property
function EditButton_Spacing(AIsSet: LongBool; AObj: TEditButton; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Spacing'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Spacing := AValue;
  end else
    Result := AObj.Spacing;
  handleExceptionEnd
end;

//function
function EditButton_Class(): TClass; extdecl;
begin
  Result := TEditButton;
end;

//property event
procedure EditButton_SetOnButtonClick(AObj: TEditButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnButtonClick}
  EventMethodCode
end;


exports
  EditButton_Create,
  EditButton_AutoSelected,
  EditButton_Button,
  EditButton_Edit,
  EditButton_AutoSelect,
  EditButton_ButtonCaption,
  EditButton_ButtonCursor,
  EditButton_ButtonHint,
  EditButton_ButtonOnlyWhenFocused,
  EditButton_ButtonWidth,
  EditButton_DirectInput,
  EditButton_Flat,
  EditButton_FocusOnButtonClick,
  EditButton_Glyph,
  EditButton_Images,
  EditButton_ImageIndex,
  EditButton_ImageWidth,
  EditButton_Layout,
  EditButton_NumGlyphs,
  EditButton_ParentFont,
  EditButton_ParentShowHint,
  EditButton_Spacing,
  EditButton_Class,
  EditButton_SetOnButtonClick;