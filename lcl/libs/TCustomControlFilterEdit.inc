// function
procedure TCustomControlFilterEdit_ForceFilter(AObj: TCustomControlFilterEdit; AFilter: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 34500}
  handleExceptionBegin
  StringBufferCreate(AObj.ForceFilter(AFilter), AStrData, AStrSize);
  handleExceptionEnd
end;

// procedure
procedure TCustomControlFilterEdit_InvalidateFilter(AObj: TCustomControlFilterEdit); extdecl;
begin
  {$define handleExceptionID := 34501}
  handleExceptionBegin
  AObj.InvalidateFilter();
  handleExceptionEnd
end;

// procedure
procedure TCustomControlFilterEdit_ResetFilter(AObj: TCustomControlFilterEdit); extdecl;
begin
  {$define handleExceptionID := 34502}
  handleExceptionBegin
  AObj.ResetFilter();
  handleExceptionEnd
end;

// procedure
procedure TCustomControlFilterEdit_StoreSelection(AObj: TCustomControlFilterEdit); extdecl;
begin
  {$define handleExceptionID := 34503}
  handleExceptionBegin
  AObj.StoreSelection();
  handleExceptionEnd
end;

// procedure
procedure TCustomControlFilterEdit_RestoreSelection(AObj: TCustomControlFilterEdit); extdecl;
begin
  {$define handleExceptionID := 34504}
  handleExceptionBegin
  AObj.RestoreSelection();
  handleExceptionEnd
end;

// property
procedure TCustomControlFilterEdit_Filter(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 34505}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Filter := AValue
  end else
    StringBufferCreate(AObj.Filter, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomControlFilterEdit_FilterLowercase(AObj: TCustomControlFilterEdit; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 34506}
  handleExceptionBegin
  StringBufferCreate(AObj.FilterLowercase, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_IdleConnected(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34507}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IdleConnected := AValue
  end else
    Result := AObj.IdleConnected;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_SortData(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34508}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SortData := AValue
  end else
    Result := AObj.SortData;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_SelectedPart(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: TObject): TObject; extdecl;
begin
  {$define handleExceptionID := 34509}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectedPart := AValue
  end else
    Result := AObj.SelectedPart;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_FilterOptions(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: TFilterStringOptions): TFilterStringOptions; extdecl;
begin
  {$define handleExceptionID := 34510}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FilterOptions := AValue
  end else
    Result := AObj.FilterOptions;
  handleExceptionEnd
end;

// property
procedure TCustomControlFilterEdit_ButtonCaption(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 34511}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonCaption := AValue
  end else
    StringBufferCreate(AObj.ButtonCaption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_ButtonCursor(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 34512}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonCursor := AValue
  end else
    Result := AObj.ButtonCursor;
  handleExceptionEnd
end;

// property
procedure TCustomControlFilterEdit_ButtonHint(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 34513}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonHint := AValue
  end else
    StringBufferCreate(AObj.ButtonHint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_ButtonOnlyWhenFocused(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34514}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonOnlyWhenFocused := AValue
  end else
    Result := AObj.ButtonOnlyWhenFocused;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_ButtonWidth(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 34515}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonWidth := AValue
  end else
    Result := AObj.ButtonWidth;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_DirectInput(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34516}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DirectInput := AValue
  end else
    Result := AObj.DirectInput;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_Flat(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34517}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Flat := AValue
  end else
    Result := AObj.Flat;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_FocusOnButtonClick(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34518}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FocusOnButtonClick := AValue
  end else
    Result := AObj.FocusOnButtonClick;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_AutoSelect(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34519}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSelect := AValue
  end else
    Result := AObj.AutoSelect;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_DragCursor(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 34520}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_DragMode(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 34521}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_Glyph(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionID := 34522}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Glyph := AValue
  end else
    Result := AObj.Glyph;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_NumGlyphs(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 34523}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NumGlyphs := AValue
  end else
    Result := AObj.NumGlyphs;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_Images(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 34524}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_ImageIndex(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 34525}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_ImageWidth(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 34526}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageWidth := AValue
  end else
    Result := AObj.ImageWidth;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_Layout(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: TLeftRight): TLeftRight; extdecl;
begin
  {$define handleExceptionID := 34527}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Layout := AValue
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_ParentFont(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34528}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_ParentShowHint(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34529}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TCustomControlFilterEdit_Spacing(ASet: LongBool; AObj: TCustomControlFilterEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 34530}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Spacing := AValue
  end else
    Result := AObj.Spacing;
  handleExceptionEnd
end;

// event
procedure TCustomControlFilterEdit_OnAfterFilter(AObj: TCustomControlFilterEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnAfterFilter}
  LCLEventMethodCode
end;

// event
procedure TCustomControlFilterEdit_OnFilterItem(AObj: TCustomControlFilterEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTFilterItemEvent}
  {$DEFINE EventName := OnFilterItem}
  LCLEventMethodCode
end;

// event
procedure TCustomControlFilterEdit_OnFilterItemEx(AObj: TCustomControlFilterEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTFilterItemExEvent}
  {$DEFINE EventName := OnFilterItemEx}
  LCLEventMethodCode
end;

// event
procedure TCustomControlFilterEdit_OnCheckItem(AObj: TCustomControlFilterEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCheckItemEvent}
  {$DEFINE EventName := OnCheckItem}
  LCLEventMethodCode
end;

// event
procedure TCustomControlFilterEdit_OnButtonClick(AObj: TCustomControlFilterEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnButtonClick}
  LCLEventMethodCode
end;

exports
  TCustomControlFilterEdit_ForceFilter,
  TCustomControlFilterEdit_InvalidateFilter,
  TCustomControlFilterEdit_ResetFilter,
  TCustomControlFilterEdit_StoreSelection,
  TCustomControlFilterEdit_RestoreSelection,
  TCustomControlFilterEdit_Filter,
  TCustomControlFilterEdit_FilterLowercase,
  TCustomControlFilterEdit_IdleConnected,
  TCustomControlFilterEdit_SortData,
  TCustomControlFilterEdit_SelectedPart,
  TCustomControlFilterEdit_FilterOptions,
  TCustomControlFilterEdit_ButtonCaption,
  TCustomControlFilterEdit_ButtonCursor,
  TCustomControlFilterEdit_ButtonHint,
  TCustomControlFilterEdit_ButtonOnlyWhenFocused,
  TCustomControlFilterEdit_ButtonWidth,
  TCustomControlFilterEdit_DirectInput,
  TCustomControlFilterEdit_Flat,
  TCustomControlFilterEdit_FocusOnButtonClick,
  TCustomControlFilterEdit_AutoSelect,
  TCustomControlFilterEdit_DragCursor,
  TCustomControlFilterEdit_DragMode,
  TCustomControlFilterEdit_Glyph,
  TCustomControlFilterEdit_NumGlyphs,
  TCustomControlFilterEdit_Images,
  TCustomControlFilterEdit_ImageIndex,
  TCustomControlFilterEdit_ImageWidth,
  TCustomControlFilterEdit_Layout,
  TCustomControlFilterEdit_ParentFont,
  TCustomControlFilterEdit_ParentShowHint,
  TCustomControlFilterEdit_Spacing,
  TCustomControlFilterEdit_OnAfterFilter,
  TCustomControlFilterEdit_OnFilterItem,
  TCustomControlFilterEdit_OnFilterItemEx,
  TCustomControlFilterEdit_OnCheckItem,
  TCustomControlFilterEdit_OnButtonClick;