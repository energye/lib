
//constructor
function ComboBox_Create(TheOwner: TComponent): TComboBox; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TComboBox.Create(TheOwner);
  handleExceptionEnd
end;

//property
function ComboBox_BorderStyle(AIsSet: LongBool; AObj: TComboBox; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  {$define handleExceptionFuncName :='BorderStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BorderStyle := AValue;
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

//property
function ComboBox_DragCursor(AIsSet: LongBool; AObj: TComboBox; AValue: TCursor): TCursor; extdecl;
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
function ComboBox_DragKind(AIsSet: LongBool; AObj: TComboBox; AValue: TDragKind): TDragKind; extdecl;
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
function ComboBox_DragMode(AIsSet: LongBool; AObj: TComboBox; AValue: TDragMode): TDragMode; extdecl;
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
function ComboBox_ItemHeight(AIsSet: LongBool; AObj: TComboBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ItemHeight'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ItemHeight := AValue;
  end else
    Result := AObj.ItemHeight;
  handleExceptionEnd
end;

//property
function ComboBox_ItemWidth(AIsSet: LongBool; AObj: TComboBox; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ItemWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ItemWidth := AValue;
  end else
    Result := AObj.ItemWidth;
  handleExceptionEnd
end;

//property
function ComboBox_MaxLength(AIsSet: LongBool; AObj: TComboBox; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='MaxLength'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxLength := AValue;
  end else
    Result := AObj.MaxLength;
  handleExceptionEnd
end;

//property
function ComboBox_ParentColor(AIsSet: LongBool; AObj: TComboBox; AValue: LongBool): LongBool; extdecl;
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
function ComboBox_ParentFont(AIsSet: LongBool; AObj: TComboBox; AValue: LongBool): LongBool; extdecl;
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
function ComboBox_ParentShowHint(AIsSet: LongBool; AObj: TComboBox; AValue: LongBool): LongBool; extdecl;
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
function ComboBox_Sorted(AIsSet: LongBool; AObj: TComboBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Sorted'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Sorted := AValue;
  end else
    Result := AObj.Sorted;
  handleExceptionEnd
end;

//function
function ComboBox_Class(): TClass; extdecl;
begin
  Result := TComboBox;
end;

//property event
procedure ComboBox_SetOnChange(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnCloseUp(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCloseUp}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnContextPopup(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnDblClick(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnDragDrop(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnDragOver(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnDrawItem(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDrawItemEvent}
  {$DEFINE EventName := OnDrawItem}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnEndDrag(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnDropDown(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDropDown}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnEditingDone(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnGetItems(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnGetItems}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnMeasureItem(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMeasureItemEvent}
  {$DEFINE EventName := OnMeasureItem}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnMouseDown(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnMouseEnter(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnMouseLeave(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnMouseMove(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnMouseUp(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnMouseWheel(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnMouseWheelDown(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnMouseWheelUp(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnSelect(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSelect}
  EventMethodCode
end;

//property event
procedure ComboBox_SetOnStartDrag(AObj: TComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  ComboBox_Create,
  ComboBox_BorderStyle,
  ComboBox_DragCursor,
  ComboBox_DragKind,
  ComboBox_DragMode,
  ComboBox_ItemHeight,
  ComboBox_ItemWidth,
  ComboBox_MaxLength,
  ComboBox_ParentColor,
  ComboBox_ParentFont,
  ComboBox_ParentShowHint,
  ComboBox_Sorted,
  ComboBox_Class,
  ComboBox_SetOnChange,
  ComboBox_SetOnCloseUp,
  ComboBox_SetOnContextPopup,
  ComboBox_SetOnDblClick,
  ComboBox_SetOnDragDrop,
  ComboBox_SetOnDragOver,
  ComboBox_SetOnDrawItem,
  ComboBox_SetOnEndDrag,
  ComboBox_SetOnDropDown,
  ComboBox_SetOnEditingDone,
  ComboBox_SetOnGetItems,
  ComboBox_SetOnMeasureItem,
  ComboBox_SetOnMouseDown,
  ComboBox_SetOnMouseEnter,
  ComboBox_SetOnMouseLeave,
  ComboBox_SetOnMouseMove,
  ComboBox_SetOnMouseUp,
  ComboBox_SetOnMouseWheel,
  ComboBox_SetOnMouseWheelDown,
  ComboBox_SetOnMouseWheelUp,
  ComboBox_SetOnSelect,
  ComboBox_SetOnStartDrag;