// constructor
function TCustomListBox_Create(TheOwner: TComponent): TCustomListBox; extdecl;
begin
  {$define handleExceptionID := 4000}
  handleExceptionBegin
  Result := TCustomListBox.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TCustomListBox_GetIndexAtXY(AObj: TCustomListBox; X: integer; Y: integer): integer; extdecl;
begin
  {$define handleExceptionID := 4001}
  handleExceptionBegin
  Result := AObj.GetIndexAtXY(X, Y);
  handleExceptionEnd
end;

// function
function TCustomListBox_GetIndexAtY(AObj: TCustomListBox; Y: integer): integer; extdecl;
begin
  {$define handleExceptionID := 4002}
  handleExceptionBegin
  Result := AObj.GetIndexAtY(Y);
  handleExceptionEnd
end;

// function
procedure TCustomListBox_GetSelectedText(AObj: TCustomListBox;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4003}
  handleExceptionBegin
  StringBufferCreate(AObj.GetSelectedText(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCustomListBox_ItemAtPos(AObj: TCustomListBox; var Pos: TPoint; Existing: LongBool): Integer; extdecl;
begin
  {$define handleExceptionID := 4004}
  handleExceptionBegin
  Result := AObj.ItemAtPos(Pos, Existing);
  handleExceptionEnd
end;

// function
procedure TCustomListBox_ItemRect(AObj: TCustomListBox; Index: Integer; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 4005}
  handleExceptionBegin
  Result := AObj.ItemRect(Index);
  handleExceptionEnd
end;

// function
function TCustomListBox_ItemVisible(AObj: TCustomListBox; Index: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 4006}
  handleExceptionBegin
  Result := AObj.ItemVisible(Index);
  handleExceptionEnd
end;

// function
function TCustomListBox_ItemFullyVisible(AObj: TCustomListBox; Index: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 4007}
  handleExceptionBegin
  Result := AObj.ItemFullyVisible(Index);
  handleExceptionEnd
end;

// procedure
procedure TCustomListBox_AddItem(AObj: TCustomListBox; const Item: PChar; AnObject: TObject); extdecl;
begin
  {$define handleExceptionID := 4008}
  handleExceptionBegin
  AObj.AddItem(Item, AnObject);
  handleExceptionEnd
end;

// procedure
procedure TCustomListBox_Click(AObj: TCustomListBox); extdecl;
begin
  {$define handleExceptionID := 4009}
  handleExceptionBegin
  AObj.Click();
  handleExceptionEnd
end;

// procedure
procedure TCustomListBox_Clear(AObj: TCustomListBox); extdecl;
begin
  {$define handleExceptionID := 4010}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TCustomListBox_ClearSelection(AObj: TCustomListBox); extdecl;
begin
  {$define handleExceptionID := 4011}
  handleExceptionBegin
  AObj.ClearSelection();
  handleExceptionEnd
end;

// procedure
procedure TCustomListBox_LockSelectionChange(AObj: TCustomListBox); extdecl;
begin
  {$define handleExceptionID := 4012}
  handleExceptionBegin
  AObj.LockSelectionChange();
  handleExceptionEnd
end;

// procedure
procedure TCustomListBox_MakeCurrentVisible(AObj: TCustomListBox); extdecl;
begin
  {$define handleExceptionID := 4013}
  handleExceptionBegin
  AObj.MakeCurrentVisible();
  handleExceptionEnd
end;

// procedure
procedure TCustomListBox_MeasureItem(AObj: TCustomListBox; Index: Integer; var TheHeight: Integer); extdecl;
var
  OutTheHeight: Integer;
begin
  {$define handleExceptionID := 4014}
  handleExceptionBegin
  OutTheHeight := TheHeight;
  AObj.MeasureItem(Index, OutTheHeight);
  TheHeight := OutTheHeight;
  handleExceptionEnd
end;

// procedure
procedure TCustomListBox_SelectAll(AObj: TCustomListBox); extdecl;
begin
  {$define handleExceptionID := 4015}
  handleExceptionBegin
  AObj.SelectAll();
  handleExceptionEnd
end;

// procedure
procedure TCustomListBox_SelectRange(AObj: TCustomListBox; ALow: integer; AHigh: integer; ASelected: LongBool); extdecl;
begin
  {$define handleExceptionID := 4016}
  handleExceptionBegin
  AObj.SelectRange(ALow, AHigh, ASelected);
  handleExceptionEnd
end;

// procedure
procedure TCustomListBox_DeleteSelected(AObj: TCustomListBox); extdecl;
begin
  {$define handleExceptionID := 4017}
  handleExceptionBegin
  AObj.DeleteSelected();
  handleExceptionEnd
end;

// procedure
procedure TCustomListBox_UnlockSelectionChange(AObj: TCustomListBox); extdecl;
begin
  {$define handleExceptionID := 4018}
  handleExceptionBegin
  AObj.UnlockSelectionChange();
  handleExceptionEnd
end;

// property
function TCustomListBox_BorderStyle(ASet: LongBool; AObj: TCustomListBox; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  {$define handleExceptionID := 4019}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderStyle := AValue
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

// property
function TCustomListBox_Canvas(AObj: TCustomListBox): TCanvas; extdecl;
begin
  {$define handleExceptionID := 4020}
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

// property
function TCustomListBox_ClickOnSelChange(ASet: LongBool; AObj: TCustomListBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4021}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ClickOnSelChange := AValue
  end else
    Result := AObj.ClickOnSelChange;
  handleExceptionEnd
end;

// property
function TCustomListBox_Columns(ASet: LongBool; AObj: TCustomListBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 4022}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Columns := AValue
  end else
    Result := AObj.Columns;
  handleExceptionEnd
end;

// property
function TCustomListBox_Count(AObj: TCustomListBox): Integer; extdecl;
begin
  {$define handleExceptionID := 4023}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
function TCustomListBox_ExtendedSelect(ASet: LongBool; AObj: TCustomListBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4024}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExtendedSelect := AValue
  end else
    Result := AObj.ExtendedSelect;
  handleExceptionEnd
end;

// property
function TCustomListBox_IntegralHeight(ASet: LongBool; AObj: TCustomListBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4025}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IntegralHeight := AValue
  end else
    Result := AObj.IntegralHeight;
  handleExceptionEnd
end;

// property
function TCustomListBox_ItemHeight(ASet: LongBool; AObj: TCustomListBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 4026}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemHeight := AValue
  end else
    Result := AObj.ItemHeight;
  handleExceptionEnd
end;

// property
function TCustomListBox_ItemIndex(ASet: LongBool; AObj: TCustomListBox; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 4027}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemIndex := AValue
  end else
    Result := AObj.ItemIndex;
  handleExceptionEnd
end;

// property
function TCustomListBox_Items(ASet: LongBool; AObj: TCustomListBox; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 4028}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items := AValue
  end else
    Result := AObj.Items;
  handleExceptionEnd
end;

// property
function TCustomListBox_MultiSelect(ASet: LongBool; AObj: TCustomListBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4029}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MultiSelect := AValue
  end else
    Result := AObj.MultiSelect;
  handleExceptionEnd
end;

// property
function TCustomListBox_Options(ASet: LongBool; AObj: TCustomListBox; AValue: TListBoxOptions): TListBoxOptions; extdecl;
begin
  {$define handleExceptionID := 4030}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// property
function TCustomListBox_ParentColor(ASet: LongBool; AObj: TCustomListBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4031}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TCustomListBox_ParentFont(ASet: LongBool; AObj: TCustomListBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4032}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TCustomListBox_ParentShowHint(ASet: LongBool; AObj: TCustomListBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4033}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TCustomListBox_ScrollWidth(ASet: LongBool; AObj: TCustomListBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 4034}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollWidth := AValue
  end else
    Result := AObj.ScrollWidth;
  handleExceptionEnd
end;

// property
function TCustomListBox_SelCount(AObj: TCustomListBox): integer; extdecl;
begin
  {$define handleExceptionID := 4035}
  handleExceptionBegin
  Result := AObj.SelCount;
  handleExceptionEnd
end;

// property
function TCustomListBox_Selected(ASet: LongBool; AObj: TCustomListBox; Index: integer; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4036}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Selected[Index] := AValue
  end else
    Result := AObj.Selected[Index];
  handleExceptionEnd
end;

// property
function TCustomListBox_Sorted(ASet: LongBool; AObj: TCustomListBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4037}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Sorted := AValue
  end else
    Result := AObj.Sorted;
  handleExceptionEnd
end;

// property
function TCustomListBox_Style(ASet: LongBool; AObj: TCustomListBox; AValue: TListBoxStyle): TListBoxStyle; extdecl;
begin
  {$define handleExceptionID := 4038}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

// property
function TCustomListBox_TopIndex(ASet: LongBool; AObj: TCustomListBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 4039}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TopIndex := AValue
  end else
    Result := AObj.TopIndex;
  handleExceptionEnd
end;

// event
procedure TCustomListBox_OnDblClick(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TCustomListBox_OnDrawItem(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDrawItemEvent}
  {$DEFINE EventName := OnDrawItem}
  LCLEventMethodCode
end;

// event
procedure TCustomListBox_OnMeasureItem(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMeasureItemEvent}
  {$DEFINE EventName := OnMeasureItem}
  LCLEventMethodCode
end;

// event
procedure TCustomListBox_OnMouseDown(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TCustomListBox_OnMouseEnter(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TCustomListBox_OnMouseLeave(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TCustomListBox_OnMouseMove(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TCustomListBox_OnMouseUp(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TCustomListBox_OnMouseWheel(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TCustomListBox_OnMouseWheelDown(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TCustomListBox_OnMouseWheelUp(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TCustomListBox_OnSelectionChange(AObj: TCustomListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSelectionChangeEvent}
  {$DEFINE EventName := OnSelectionChange}
  LCLEventMethodCode
end;

function TCustomListBox_TClass(): TClass; extdecl;
begin
  Result := TCustomListBox;
end;

exports
  TCustomListBox_Create,
  TCustomListBox_GetIndexAtXY,
  TCustomListBox_GetIndexAtY,
  TCustomListBox_GetSelectedText,
  TCustomListBox_ItemAtPos,
  TCustomListBox_ItemRect,
  TCustomListBox_ItemVisible,
  TCustomListBox_ItemFullyVisible,
  TCustomListBox_AddItem,
  TCustomListBox_Click,
  TCustomListBox_Clear,
  TCustomListBox_ClearSelection,
  TCustomListBox_LockSelectionChange,
  TCustomListBox_MakeCurrentVisible,
  TCustomListBox_MeasureItem,
  TCustomListBox_SelectAll,
  TCustomListBox_SelectRange,
  TCustomListBox_DeleteSelected,
  TCustomListBox_UnlockSelectionChange,
  TCustomListBox_BorderStyle,
  TCustomListBox_Canvas,
  TCustomListBox_ClickOnSelChange,
  TCustomListBox_Columns,
  TCustomListBox_Count,
  TCustomListBox_ExtendedSelect,
  TCustomListBox_IntegralHeight,
  TCustomListBox_ItemHeight,
  TCustomListBox_ItemIndex,
  TCustomListBox_Items,
  TCustomListBox_MultiSelect,
  TCustomListBox_Options,
  TCustomListBox_ParentColor,
  TCustomListBox_ParentFont,
  TCustomListBox_ParentShowHint,
  TCustomListBox_ScrollWidth,
  TCustomListBox_SelCount,
  TCustomListBox_Selected,
  TCustomListBox_Sorted,
  TCustomListBox_Style,
  TCustomListBox_TopIndex,
  TCustomListBox_OnDblClick,
  TCustomListBox_OnDrawItem,
  TCustomListBox_OnMeasureItem,
  TCustomListBox_OnMouseDown,
  TCustomListBox_OnMouseEnter,
  TCustomListBox_OnMouseLeave,
  TCustomListBox_OnMouseMove,
  TCustomListBox_OnMouseUp,
  TCustomListBox_OnMouseWheel,
  TCustomListBox_OnMouseWheelDown,
  TCustomListBox_OnMouseWheelUp,
  TCustomListBox_OnSelectionChange,
  TCustomListBox_TClass;