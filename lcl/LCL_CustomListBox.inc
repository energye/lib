
//constructor
function CustomListBox_Create(TheOwner: TComponent): TCustomListBox; extdecl;
begin
  handleExceptionBegin
  Result := TCustomListBox.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomListBox_BorderStyle(AIsSet: LongBool; AObj: TCustomListBox; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BorderStyle := AValue;
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

//property
function CustomListBox_Canvas(AObj: TCustomListBox): TCanvas; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

//property
function CustomListBox_ClickOnSelChange(AIsSet: LongBool; AObj: TCustomListBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ClickOnSelChange := AValue;
  end else
    Result := AObj.ClickOnSelChange;
  handleExceptionEnd
end;

//property
function CustomListBox_Columns(AIsSet: LongBool; AObj: TCustomListBox; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Columns := AValue;
  end else
    Result := AObj.Columns;
  handleExceptionEnd
end;

//property
function CustomListBox_Count(AObj: TCustomListBox): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
function CustomListBox_ExtendedSelect(AIsSet: LongBool; AObj: TCustomListBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExtendedSelect := AValue;
  end else
    Result := AObj.ExtendedSelect;
  handleExceptionEnd
end;

//property
function CustomListBox_IntegralHeight(AIsSet: LongBool; AObj: TCustomListBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IntegralHeight := AValue;
  end else
    Result := AObj.IntegralHeight;
  handleExceptionEnd
end;

//property
function CustomListBox_ItemHeight(AIsSet: LongBool; AObj: TCustomListBox; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ItemHeight := AValue;
  end else
    Result := AObj.ItemHeight;
  handleExceptionEnd
end;

//property
function CustomListBox_ItemIndex(AIsSet: LongBool; AObj: TCustomListBox; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ItemIndex := AValue;
  end else
    Result := AObj.ItemIndex;
  handleExceptionEnd
end;

//property
function CustomListBox_Items(AIsSet: LongBool; AObj: TCustomListBox; AValue: TStrings): TStrings; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Items := AValue;
  end else
    Result := AObj.Items;
  handleExceptionEnd
end;

//property
function CustomListBox_MultiSelect(AIsSet: LongBool; AObj: TCustomListBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MultiSelect := AValue;
  end else
    Result := AObj.MultiSelect;
  handleExceptionEnd
end;

//property
function CustomListBox_Options(AIsSet: LongBool; AObj: TCustomListBox; AValue: TListBoxOptions): TListBoxOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options := AValue;
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

//property
function CustomListBox_ParentColor(AIsSet: LongBool; AObj: TCustomListBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//property
function CustomListBox_ParentFont(AIsSet: LongBool; AObj: TCustomListBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentFont := AValue;
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

//property
function CustomListBox_ParentShowHint(AIsSet: LongBool; AObj: TCustomListBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//property
function CustomListBox_ScrollWidth(AIsSet: LongBool; AObj: TCustomListBox; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScrollWidth := AValue;
  end else
    Result := AObj.ScrollWidth;
  handleExceptionEnd
end;

//property
function CustomListBox_SelCount(AObj: TCustomListBox): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SelCount;
  handleExceptionEnd
end;

//property
function CustomListBox_Selected(AIsSet: LongBool; AObj: TCustomListBox; Index: integer; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Selected[Index] := AValue;
  end else
    Result := AObj.Selected[Index];
  handleExceptionEnd
end;

//property
function CustomListBox_Sorted(AIsSet: LongBool; AObj: TCustomListBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Sorted := AValue;
  end else
    Result := AObj.Sorted;
  handleExceptionEnd
end;

//property
function CustomListBox_Style(AIsSet: LongBool; AObj: TCustomListBox; AValue: TListBoxStyle): TListBoxStyle; extdecl;
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
function CustomListBox_TopIndex(AIsSet: LongBool; AObj: TCustomListBox; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TopIndex := AValue;
  end else
    Result := AObj.TopIndex;
  handleExceptionEnd
end;

//function
function CustomListBox_GetIndexAtXY(AObj: TCustomListBox; X, Y: integer): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetIndexAtXY(X, Y);
  handleExceptionEnd
end;

//function
function CustomListBox_GetIndexAtY(AObj: TCustomListBox; Y: integer): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetIndexAtY(Y);
  handleExceptionEnd
end;

//function
function CustomListBox_GetSelectedText(AObj: TCustomListBox): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetSelectedText());
  handleExceptionEnd
end;

//function
function CustomListBox_ItemAtPos(AObj: TCustomListBox; var Pos: TPoint; Existing: LongBool): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ItemAtPos(Pos, Existing);
  handleExceptionEnd
end;

//function
procedure CustomListBox_ItemRect(AObj: TCustomListBox; Index: Integer; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ItemRect(Index);
  handleExceptionEnd
end;

//function
function CustomListBox_ItemVisible(AObj: TCustomListBox; Index: Integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ItemVisible(Index);
  handleExceptionEnd
end;

//function
function CustomListBox_ItemFullyVisible(AObj: TCustomListBox; Index: Integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ItemFullyVisible(Index);
  handleExceptionEnd
end;

//function
function CustomListBox_Class(): TClass; extdecl;
begin
  Result := TCustomListBox;
end;

//procedure
procedure CustomListBox_AddItem(AObj: TCustomListBox; const Item: PChar; AnObject: TObject); extdecl;
begin
  handleExceptionBegin
  AObj.AddItem(Item, AnObject);
  handleExceptionEnd
end;

//procedure
procedure CustomListBox_Click(AObj: TCustomListBox); extdecl;
begin
  handleExceptionBegin
  AObj.Click();
  handleExceptionEnd
end;

//procedure
procedure CustomListBox_Clear(AObj: TCustomListBox); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure CustomListBox_ClearSelection(AObj: TCustomListBox); extdecl;
begin
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

//procedure
procedure CustomListBox_LockSelectionChange(AObj: TCustomListBox); extdecl;
begin
  handleExceptionBegin
  AObj.LockSelectionChange();
  handleExceptionEnd
end;

//procedure
procedure CustomListBox_MakeCurrentVisible(AObj: TCustomListBox); extdecl;
begin
  handleExceptionBegin
  AObj.MakeCurrentVisible();
  handleExceptionEnd
end;

//procedure
procedure CustomListBox_MeasureItem(AObj: TCustomListBox; Index: Integer; var TheHeight: Integer); extdecl;
var
  RetTheHeight: Integer;
begin
  handleExceptionBegin
  RetTheHeight := TheHeight;
  AObj.MeasureItem(Index, RetTheHeight);
  TheHeight := RetTheHeight;
  handleExceptionEnd
end;

//procedure
procedure CustomListBox_SelectAll(AObj: TCustomListBox); extdecl;
begin
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;

//procedure
procedure CustomListBox_SelectRange(AObj: TCustomListBox; ALow, AHigh: integer; ASelected: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SelectRange(ALow, AHigh, ASelected);
  handleExceptionEnd
end;

//procedure
procedure CustomListBox_DeleteSelected(AObj: TCustomListBox); extdecl;
begin
  handleExceptionBegin
  AObj.DeleteSelected();
  handleExceptionEnd
end;

//procedure
procedure CustomListBox_UnlockSelectionChange(AObj: TCustomListBox); extdecl;
begin
  handleExceptionBegin
  AObj.UnlockSelectionChange();
  handleExceptionEnd
end;

//property event
procedure CustomListBox_SetOnDblClick(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure CustomListBox_SetOnDrawItem(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDrawItemEvent}
  {$DEFINE EventName := OnDrawItem}
  EventMethodCode
end;

//property event
procedure CustomListBox_SetOnMeasureItem(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMeasureItemEvent}
  {$DEFINE EventName := OnMeasureItem}
  EventMethodCode
end;

//property event
procedure CustomListBox_SetOnMouseDown(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure CustomListBox_SetOnMouseEnter(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure CustomListBox_SetOnMouseLeave(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure CustomListBox_SetOnMouseMove(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure CustomListBox_SetOnMouseUp(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure CustomListBox_SetOnMouseWheel(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure CustomListBox_SetOnMouseWheelDown(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure CustomListBox_SetOnMouseWheelUp(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure CustomListBox_SetOnSelectionChange(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSelectionChangeEvent}
  {$DEFINE EventName := OnSelectionChange}
  EventMethodCode
end;


exports
  CustomListBox_Create,
  CustomListBox_BorderStyle,
  CustomListBox_Canvas,
  CustomListBox_ClickOnSelChange,
  CustomListBox_Columns,
  CustomListBox_Count,
  CustomListBox_ExtendedSelect,
  CustomListBox_IntegralHeight,
  CustomListBox_ItemHeight,
  CustomListBox_ItemIndex,
  CustomListBox_Items,
  CustomListBox_MultiSelect,
  CustomListBox_Options,
  CustomListBox_ParentColor,
  CustomListBox_ParentFont,
  CustomListBox_ParentShowHint,
  CustomListBox_ScrollWidth,
  CustomListBox_SelCount,
  CustomListBox_Selected,
  CustomListBox_Sorted,
  CustomListBox_Style,
  CustomListBox_TopIndex,
  CustomListBox_GetIndexAtXY,
  CustomListBox_GetIndexAtY,
  CustomListBox_GetSelectedText,
  CustomListBox_ItemAtPos,
  CustomListBox_ItemRect,
  CustomListBox_ItemVisible,
  CustomListBox_ItemFullyVisible,
  CustomListBox_Class,
  CustomListBox_AddItem,
  CustomListBox_Click,
  CustomListBox_Clear,
  CustomListBox_ClearSelection,
  CustomListBox_LockSelectionChange,
  CustomListBox_MakeCurrentVisible,
  CustomListBox_MeasureItem,
  CustomListBox_SelectAll,
  CustomListBox_SelectRange,
  CustomListBox_DeleteSelected,
  CustomListBox_UnlockSelectionChange,
  CustomListBox_SetOnDblClick,
  CustomListBox_SetOnDrawItem,
  CustomListBox_SetOnMeasureItem,
  CustomListBox_SetOnMouseDown,
  CustomListBox_SetOnMouseEnter,
  CustomListBox_SetOnMouseLeave,
  CustomListBox_SetOnMouseMove,
  CustomListBox_SetOnMouseUp,
  CustomListBox_SetOnMouseWheel,
  CustomListBox_SetOnMouseWheelDown,
  CustomListBox_SetOnMouseWheelUp,
  CustomListBox_SetOnSelectionChange;