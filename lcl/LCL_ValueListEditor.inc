
//constructor
function ValueListEditor_Create(AOwner: TComponent): TValueListEditor; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TValueListEditor.Create(AOwner);
  handleExceptionEnd
end;

//property
function ValueListEditor_Modified(AIsSet: LongBool; AObj: TValueListEditor; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Modified'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Modified := AValue;
  end else
    Result := AObj.Modified;
  handleExceptionEnd
end;

//property
function ValueListEditor_Keys(AIsSet: LongBool; AObj: TValueListEditor; Index: Integer; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Keys'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Keys[Index] := AValue;
  end else
    Result := ToPChar(AObj.Keys[Index]);
  handleExceptionEnd
end;

//property
function ValueListEditor_Values(AIsSet: LongBool; AObj: TValueListEditor; const Key: PChar; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Values'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Values[Key] := AValue;
  end else
    Result := ToPChar(AObj.Values[Key]);
  handleExceptionEnd
end;

//property
function ValueListEditor_ItemProps(AIsSet: LongBool; AObj: TValueListEditor; const AKeyOrIndex: Pointer; AValue: TItemProp): TItemProp; extdecl;
begin
  {$define handleExceptionFuncName :='ItemProps'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ItemProps[AKeyOrIndex] := AValue;
  end else
    Result := AObj.ItemProps[AKeyOrIndex];
  handleExceptionEnd
end;

//property
function ValueListEditor_AlternateColor(AIsSet: LongBool; AObj: TValueListEditor; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='AlternateColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AlternateColor := AValue;
  end else
    Result := AObj.AlternateColor;
  handleExceptionEnd
end;

//property
function ValueListEditor_AutoEdit(AIsSet: LongBool; AObj: TValueListEditor; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AutoEdit'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoEdit := AValue;
  end else
    Result := AObj.AutoEdit;
  handleExceptionEnd
end;

//property
function ValueListEditor_DragCursor(AIsSet: LongBool; AObj: TValueListEditor; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionFuncName :='DragCursor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragCursor := AValue;
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

//property
function ValueListEditor_DragKind(AIsSet: LongBool; AObj: TValueListEditor; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionFuncName :='DragKind'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragKind := AValue;
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

//property
function ValueListEditor_DragMode(AIsSet: LongBool; AObj: TValueListEditor; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionFuncName :='DragMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragMode := AValue;
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

//property
function ValueListEditor_HeaderHotZones(AIsSet: LongBool; AObj: TValueListEditor; AValue: TGridZoneSet): TGridZoneSet; extdecl;
begin
  {$define handleExceptionFuncName :='HeaderHotZones'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HeaderHotZones := AValue;
  end else
    Result := AObj.HeaderHotZones;
  handleExceptionEnd
end;

//property
function ValueListEditor_HeaderPushZones(AIsSet: LongBool; AObj: TValueListEditor; AValue: TGridZoneSet): TGridZoneSet; extdecl;
begin
  {$define handleExceptionFuncName :='HeaderPushZones'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HeaderPushZones := AValue;
  end else
    Result := AObj.HeaderPushZones;
  handleExceptionEnd
end;

//property
function ValueListEditor_MouseWheelOption(AIsSet: LongBool; AObj: TValueListEditor; AValue: TMouseWheelOption): TMouseWheelOption; extdecl;
begin
  {$define handleExceptionFuncName :='MouseWheelOption'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MouseWheelOption := AValue;
  end else
    Result := AObj.MouseWheelOption;
  handleExceptionEnd
end;

//property
function ValueListEditor_ParentColor(AIsSet: LongBool; AObj: TValueListEditor; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//property
function ValueListEditor_ParentFont(AIsSet: LongBool; AObj: TValueListEditor; AValue: LongBool): LongBool; extdecl;
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
function ValueListEditor_TitleFont(AIsSet: LongBool; AObj: TValueListEditor; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionFuncName :='TitleFont'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TitleFont := AValue;
  end else
    Result := AObj.TitleFont;
  handleExceptionEnd
end;

//property
function ValueListEditor_TitleImageList(AIsSet: LongBool; AObj: TValueListEditor; AValue: TImageList): TImageList; extdecl;
begin
  {$define handleExceptionFuncName :='TitleImageList'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TitleImageList := AValue;
  end else
    Result := AObj.TitleImageList;
  handleExceptionEnd
end;

//property
function ValueListEditor_TitleStyle(AIsSet: LongBool; AObj: TValueListEditor; AValue: TTitleStyle): TTitleStyle; extdecl;
begin
  {$define handleExceptionFuncName :='TitleStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TitleStyle := AValue;
  end else
    Result := AObj.TitleStyle;
  handleExceptionEnd
end;

//property
function ValueListEditor_DisplayOptions(AIsSet: LongBool; AObj: TValueListEditor; AValue: TDisplayOptions): TDisplayOptions; extdecl;
begin
  {$define handleExceptionFuncName :='DisplayOptions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisplayOptions := AValue;
  end else
    Result := AObj.DisplayOptions;
  handleExceptionEnd
end;

//property
function ValueListEditor_DropDownRows(AIsSet: LongBool; AObj: TValueListEditor; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='DropDownRows'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DropDownRows := AValue;
  end else
    Result := AObj.DropDownRows;
  handleExceptionEnd
end;

//property
function ValueListEditor_KeyOptions(AIsSet: LongBool; AObj: TValueListEditor; AValue: TKeyOptions): TKeyOptions; extdecl;
begin
  {$define handleExceptionFuncName :='KeyOptions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.KeyOptions := AValue;
  end else
    Result := AObj.KeyOptions;
  handleExceptionEnd
end;

//property
function ValueListEditor_Strings(AIsSet: LongBool; AObj: TValueListEditor; AValue: TValueListStrings): TValueListStrings; extdecl;
begin
  {$define handleExceptionFuncName :='Strings'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Strings := AValue;
  end else
    Result := AObj.Strings;
  handleExceptionEnd
end;

//property
function ValueListEditor_TitleCaptions(AIsSet: LongBool; AObj: TValueListEditor; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionFuncName :='TitleCaptions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TitleCaptions := AValue;
  end else
    Result := AObj.TitleCaptions;
  handleExceptionEnd
end;

//function
function ValueListEditor_FindRow(AObj: TValueListEditor; const KeyName: PChar; out OutRow: Integer): LongBool; extdecl;
var
  RetOutRow: Integer;
begin
  {$define handleExceptionFuncName :='FindRow'}
  handleExceptionBegin
  RetOutRow := OutRow;
  Result := AObj.FindRow(KeyName, RetOutRow);
  OutRow := RetOutRow;
  handleExceptionEnd
end;

//function
function ValueListEditor_InsertRow(AObj: TValueListEditor; const KeyName, Value: PChar; Append: LongBool): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='InsertRow'}
  handleExceptionBegin
  Result := AObj.InsertRow(KeyName, Value, Append);
  handleExceptionEnd
end;

//function
function ValueListEditor_IsEmptyRow(AObj: TValueListEditor): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsEmptyRow'}
  handleExceptionBegin
  Result := AObj.IsEmptyRow();
  handleExceptionEnd
end;

//function
function ValueListEditor_IsEmptyRow1(AObj: TValueListEditor; aRow: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsEmptyRow1'}
  handleExceptionBegin
  Result := AObj.IsEmptyRow(aRow);
  handleExceptionEnd
end;

//function
function ValueListEditor_RestoreCurrentRow(AObj: TValueListEditor): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='RestoreCurrentRow'}
  handleExceptionBegin
  Result := AObj.RestoreCurrentRow();
  handleExceptionEnd
end;

//function
function ValueListEditor_Class(): TClass; extdecl;
begin
  Result := TValueListEditor;
end;

//procedure
procedure ValueListEditor_Sort(AObj: TValueListEditor; Index, IndxFrom, IndxTo: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='Sort'}
  handleExceptionBegin
  AObj.Sort(Index, IndxFrom, IndxTo);
  handleExceptionEnd
end;

//procedure
procedure ValueListEditor_Sort1(AObj: TValueListEditor; ACol: TVleSortCol); extdecl;
begin
  {$define handleExceptionFuncName :='Sort1'}
  handleExceptionBegin
  AObj.Sort(ACol);
  handleExceptionEnd
end;

//property event
procedure ValueListEditor_SetOnCheckboxToggled(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTToggledCheckboxEvent}
  {$DEFINE EventName := OnCheckboxToggled}
  EventMethodCode
end;

//property event
procedure ValueListEditor_SetOnEditingDone(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure ValueListEditor_SetOnMouseWheelHorz(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure ValueListEditor_SetOnMouseWheelLeft(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure ValueListEditor_SetOnMouseWheelRight(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure ValueListEditor_SetOnUserCheckboxBitmap(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUserCheckboxBitmapEvent}
  {$DEFINE EventName := OnUserCheckboxBitmap}
  EventMethodCode
end;

//property event
procedure ValueListEditor_SetOnGetPickList(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetPickListEvent}
  {$DEFINE EventName := OnGetPickList}
  EventMethodCode
end;

//property event
procedure ValueListEditor_SetOnStringsChange(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnStringsChange}
  EventMethodCode
end;

//property event
procedure ValueListEditor_SetOnStringsChanging(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnStringsChanging}
  EventMethodCode
end;

//property event
procedure ValueListEditor_SetOnValidate(AObj: TValueListEditor; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTOnValidateEvent}
  {$DEFINE EventName := OnValidate}
  EventMethodCode
end;


exports
  ValueListEditor_Create,
  ValueListEditor_Modified,
  ValueListEditor_Keys,
  ValueListEditor_Values,
  ValueListEditor_ItemProps,
  ValueListEditor_AlternateColor,
  ValueListEditor_AutoEdit,
  ValueListEditor_DragCursor,
  ValueListEditor_DragKind,
  ValueListEditor_DragMode,
  ValueListEditor_HeaderHotZones,
  ValueListEditor_HeaderPushZones,
  ValueListEditor_MouseWheelOption,
  ValueListEditor_ParentColor,
  ValueListEditor_ParentFont,
  ValueListEditor_TitleFont,
  ValueListEditor_TitleImageList,
  ValueListEditor_TitleStyle,
  ValueListEditor_DisplayOptions,
  ValueListEditor_DropDownRows,
  ValueListEditor_KeyOptions,
  ValueListEditor_Strings,
  ValueListEditor_TitleCaptions,
  ValueListEditor_FindRow,
  ValueListEditor_InsertRow,
  ValueListEditor_IsEmptyRow,
  ValueListEditor_IsEmptyRow1,
  ValueListEditor_RestoreCurrentRow,
  ValueListEditor_Class,
  ValueListEditor_Sort,
  ValueListEditor_Sort1,
  ValueListEditor_SetOnCheckboxToggled,
  ValueListEditor_SetOnEditingDone,
  ValueListEditor_SetOnMouseWheelHorz,
  ValueListEditor_SetOnMouseWheelLeft,
  ValueListEditor_SetOnMouseWheelRight,
  ValueListEditor_SetOnUserCheckboxBitmap,
  ValueListEditor_SetOnGetPickList,
  ValueListEditor_SetOnStringsChange,
  ValueListEditor_SetOnStringsChanging,
  ValueListEditor_SetOnValidate;