// constructor
function TValueListEditor_Create(AOwner: TComponent): TValueListEditor; extdecl;
begin
  {$define handleExceptionID := 19000}
  handleExceptionBegin
  Result := TValueListEditor.Create(AOwner);
  handleExceptionEnd
end;

// function
function TValueListEditor_FindRow(AObj: TValueListEditor; const KeyName: PChar; var aRow: Integer): LongBool; extdecl;
var
  OutaRow: Integer;
begin
  {$define handleExceptionID := 19001}
  handleExceptionBegin
  Result := AObj.FindRow(KeyName, OutaRow);
  aRow := OutaRow;
  handleExceptionEnd
end;

// function
function TValueListEditor_InsertRow(AObj: TValueListEditor; const KeyName: PChar; const Value: PChar; Append: LongBool): Integer; extdecl;
begin
  {$define handleExceptionID := 19002}
  handleExceptionBegin
  Result := AObj.InsertRow(KeyName, Value, Append);
  handleExceptionEnd
end;

// function
function TValueListEditor_IsEmptyRowToBool(AObj: TValueListEditor): LongBool; extdecl;
begin
  {$define handleExceptionID := 19003}
  handleExceptionBegin
  Result := AObj.IsEmptyRow();
  handleExceptionEnd
end;

// function
function TValueListEditor_IsEmptyRowWithInt(AObj: TValueListEditor; aRow: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 19004}
  handleExceptionBegin
  Result := AObj.IsEmptyRow(aRow);
  handleExceptionEnd
end;

// function
function TValueListEditor_RestoreCurrentRow(AObj: TValueListEditor): LongBool; extdecl;
begin
  {$define handleExceptionID := 19005}
  handleExceptionBegin
  Result := AObj.RestoreCurrentRow();
  handleExceptionEnd
end;

// procedure
procedure TValueListEditor_Clear(AObj: TValueListEditor); extdecl;
begin
  {$define handleExceptionID := 19006}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TValueListEditor_DeleteColRowWithBoolInt(AObj: TValueListEditor; IsColumn: LongBool; index: Integer); extdecl;
begin
  {$define handleExceptionID := 19007}
  handleExceptionBegin
  AObj.DeleteColRow(IsColumn, index);
  handleExceptionEnd
end;

// procedure
procedure TValueListEditor_InsertColRowWithBoolInt(AObj: TValueListEditor; IsColumn: LongBool; index: integer); extdecl;
begin
  {$define handleExceptionID := 19008}
  handleExceptionBegin
  AObj.InsertColRow(IsColumn, index);
  handleExceptionEnd
end;

// procedure
procedure TValueListEditor_MoveColRowWithBoolIntX2(AObj: TValueListEditor; IsColumn: LongBool; FromIndex: Integer; ToIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 19009}
  handleExceptionBegin
  AObj.MoveColRow(IsColumn, FromIndex, ToIndex);
  handleExceptionEnd
end;

// procedure
procedure TValueListEditor_SortWithIntX3(AObj: TValueListEditor; Index: Integer; IndxFrom: Integer; IndxTo: Integer); extdecl;
begin
  {$define handleExceptionID := 19010}
  handleExceptionBegin
  AObj.Sort(Index, IndxFrom, IndxTo);
  handleExceptionEnd
end;

// procedure
procedure TValueListEditor_SortWithVleSortCol(AObj: TValueListEditor; ACol: TVleSortCol); extdecl;
begin
  {$define handleExceptionID := 19011}
  handleExceptionBegin
  AObj.Sort(ACol);
  handleExceptionEnd
end;

// property
function TValueListEditor_Modified(ASet: LongBool; AObj: TValueListEditor; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19012}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Modified := AValue
  end else
    Result := AObj.Modified;
  handleExceptionEnd
end;

// property
procedure TValueListEditor_Keys(ASet: LongBool; AObj: TValueListEditor; Index: Integer; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19013}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Keys[Index] := AValue
  end else
    StringBufferCreate(AObj.Keys[Index], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TValueListEditor_Values(ASet: LongBool; AObj: TValueListEditor; const Key: PChar; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19014}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Values[Key] := AValue
  end else
    StringBufferCreate(AObj.Values[Key], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TValueListEditor_ItemProps(ASet: LongBool; AObj: TValueListEditor; const AKeyOrIndex: Variant; AValue: TItemProp): TItemProp; extdecl;
begin
  {$define handleExceptionID := 19015}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemProps[AKeyOrIndex] := AValue
  end else
    Result := AObj.ItemProps[AKeyOrIndex];
  handleExceptionEnd
end;

// property
function TValueListEditor_AlternateColor(ASet: LongBool; AObj: TValueListEditor; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 19016}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AlternateColor := AValue
  end else
    Result := AObj.AlternateColor;
  handleExceptionEnd
end;

// property
function TValueListEditor_AutoEdit(ASet: LongBool; AObj: TValueListEditor; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19017}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoEdit := AValue
  end else
    Result := AObj.AutoEdit;
  handleExceptionEnd
end;

// property
function TValueListEditor_DragCursor(ASet: LongBool; AObj: TValueListEditor; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 19018}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TValueListEditor_DragKind(ASet: LongBool; AObj: TValueListEditor; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 19019}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TValueListEditor_DragMode(ASet: LongBool; AObj: TValueListEditor; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 19020}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TValueListEditor_HeaderHotZones(ASet: LongBool; AObj: TValueListEditor; AValue: TGridZoneSet): TGridZoneSet; extdecl;
begin
  {$define handleExceptionID := 19021}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HeaderHotZones := AValue
  end else
    Result := AObj.HeaderHotZones;
  handleExceptionEnd
end;

// property
function TValueListEditor_HeaderPushZones(ASet: LongBool; AObj: TValueListEditor; AValue: TGridZoneSet): TGridZoneSet; extdecl;
begin
  {$define handleExceptionID := 19022}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HeaderPushZones := AValue
  end else
    Result := AObj.HeaderPushZones;
  handleExceptionEnd
end;

// property
function TValueListEditor_MouseWheelOption(ASet: LongBool; AObj: TValueListEditor; AValue: TMouseWheelOption): TMouseWheelOption; extdecl;
begin
  {$define handleExceptionID := 19023}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MouseWheelOption := AValue
  end else
    Result := AObj.MouseWheelOption;
  handleExceptionEnd
end;

// property
function TValueListEditor_ParentColor(ASet: LongBool; AObj: TValueListEditor; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19024}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TValueListEditor_ParentFont(ASet: LongBool; AObj: TValueListEditor; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 19025}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TValueListEditor_TitleFont(ASet: LongBool; AObj: TValueListEditor; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionID := 19026}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TitleFont := AValue
  end else
    Result := AObj.TitleFont;
  handleExceptionEnd
end;

// property
function TValueListEditor_TitleImageList(ASet: LongBool; AObj: TValueListEditor; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 19027}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TitleImageList := AValue
  end else
    Result := AObj.TitleImageList;
  handleExceptionEnd
end;

// property
function TValueListEditor_TitleStyle(ASet: LongBool; AObj: TValueListEditor; AValue: TTitleStyle): TTitleStyle; extdecl;
begin
  {$define handleExceptionID := 19028}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TitleStyle := AValue
  end else
    Result := AObj.TitleStyle;
  handleExceptionEnd
end;

// property
function TValueListEditor_DisplayOptions(ASet: LongBool; AObj: TValueListEditor; AValue: TDisplayOptions): TDisplayOptions; extdecl;
begin
  {$define handleExceptionID := 19029}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisplayOptions := AValue
  end else
    Result := AObj.DisplayOptions;
  handleExceptionEnd
end;

// property
function TValueListEditor_DropDownRows(ASet: LongBool; AObj: TValueListEditor; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 19030}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DropDownRows := AValue
  end else
    Result := AObj.DropDownRows;
  handleExceptionEnd
end;

// property
function TValueListEditor_KeyOptions(ASet: LongBool; AObj: TValueListEditor; AValue: TKeyOptions): TKeyOptions; extdecl;
begin
  {$define handleExceptionID := 19031}
  handleExceptionBegin
  if ASet then
  begin
    AObj.KeyOptions := AValue
  end else
    Result := AObj.KeyOptions;
  handleExceptionEnd
end;

// property
function TValueListEditor_Strings(ASet: LongBool; AObj: TValueListEditor; AValue: TValueListStrings): TValueListStrings; extdecl;
begin
  {$define handleExceptionID := 19032}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Strings := AValue
  end else
    Result := AObj.Strings;
  handleExceptionEnd
end;

// property
function TValueListEditor_TitleCaptions(ASet: LongBool; AObj: TValueListEditor; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 19033}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TitleCaptions := AValue
  end else
    Result := AObj.TitleCaptions;
  handleExceptionEnd
end;

// event
procedure TValueListEditor_OnCheckboxToggled(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTToggledCheckboxEvent}
  {$DEFINE EventName := OnCheckboxToggled}
  LCLEventMethodCode
end;

// event
procedure TValueListEditor_OnEditingDone(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TValueListEditor_OnMouseWheelHorz(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TValueListEditor_OnMouseWheelLeft(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TValueListEditor_OnMouseWheelRight(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TValueListEditor_OnUserCheckboxBitmap(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUserCheckboxBitmapEvent}
  {$DEFINE EventName := OnUserCheckboxBitmap}
  LCLEventMethodCode
end;

// event
procedure TValueListEditor_OnGetPickList(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetPickListEvent}
  {$DEFINE EventName := OnGetPickList}
  LCLEventMethodCode
end;

// event
procedure TValueListEditor_OnStringsChange(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnStringsChange}
  LCLEventMethodCode
end;

// event
procedure TValueListEditor_OnStringsChanging(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnStringsChanging}
  LCLEventMethodCode
end;

// event
procedure TValueListEditor_OnValidate(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnValidateEvent}
  {$DEFINE EventName := OnValidate}
  LCLEventMethodCode
end;

function TValueListEditor_TClass(): TClass; extdecl;
begin
  Result := TValueListEditor;
end;

exports
  TValueListEditor_Create,
  TValueListEditor_FindRow,
  TValueListEditor_InsertRow,
  TValueListEditor_IsEmptyRowToBool,
  TValueListEditor_IsEmptyRowWithInt,
  TValueListEditor_RestoreCurrentRow,
  TValueListEditor_Clear,
  TValueListEditor_DeleteColRowWithBoolInt,
  TValueListEditor_InsertColRowWithBoolInt,
  TValueListEditor_MoveColRowWithBoolIntX2,
  TValueListEditor_SortWithIntX3,
  TValueListEditor_SortWithVleSortCol,
  TValueListEditor_Modified,
  TValueListEditor_Keys,
  TValueListEditor_Values,
  TValueListEditor_ItemProps,
  TValueListEditor_AlternateColor,
  TValueListEditor_AutoEdit,
  TValueListEditor_DragCursor,
  TValueListEditor_DragKind,
  TValueListEditor_DragMode,
  TValueListEditor_HeaderHotZones,
  TValueListEditor_HeaderPushZones,
  TValueListEditor_MouseWheelOption,
  TValueListEditor_ParentColor,
  TValueListEditor_ParentFont,
  TValueListEditor_TitleFont,
  TValueListEditor_TitleImageList,
  TValueListEditor_TitleStyle,
  TValueListEditor_DisplayOptions,
  TValueListEditor_DropDownRows,
  TValueListEditor_KeyOptions,
  TValueListEditor_Strings,
  TValueListEditor_TitleCaptions,
  TValueListEditor_OnCheckboxToggled,
  TValueListEditor_OnEditingDone,
  TValueListEditor_OnMouseWheelHorz,
  TValueListEditor_OnMouseWheelLeft,
  TValueListEditor_OnMouseWheelRight,
  TValueListEditor_OnUserCheckboxBitmap,
  TValueListEditor_OnGetPickList,
  TValueListEditor_OnStringsChange,
  TValueListEditor_OnStringsChanging,
  TValueListEditor_OnValidate,
  TValueListEditor_TClass;