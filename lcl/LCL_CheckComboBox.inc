
//constructor
function CheckComboBox_Create(AOwner: TComponent): TCheckComboBox; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCheckComboBox.Create(AOwner);
  handleExceptionEnd
end;

//property
function CheckComboBox_BorderStyle(AIsSet: LongBool; AObj: TCheckComboBox; AValue: TBorderStyle): TBorderStyle; extdecl;
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
function CheckComboBox_DragCursor(AIsSet: LongBool; AObj: TCheckComboBox; AValue: TCursor): TCursor; extdecl;
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
function CheckComboBox_DragKind(AIsSet: LongBool; AObj: TCheckComboBox; AValue: TDragKind): TDragKind; extdecl;
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
function CheckComboBox_DragMode(AIsSet: LongBool; AObj: TCheckComboBox; AValue: TDragMode): TDragMode; extdecl;
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
function CheckComboBox_ItemHeight(AIsSet: LongBool; AObj: TCheckComboBox; AValue: Integer): Integer; extdecl;
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
function CheckComboBox_ItemWidth(AIsSet: LongBool; AObj: TCheckComboBox; AValue: Integer): Integer; extdecl;
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
function CheckComboBox_MaxLength(AIsSet: LongBool; AObj: TCheckComboBox; AValue: integer): integer; extdecl;
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
function CheckComboBox_ParentColor(AIsSet: LongBool; AObj: TCheckComboBox; AValue: LongBool): LongBool; extdecl;
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
function CheckComboBox_ParentFont(AIsSet: LongBool; AObj: TCheckComboBox; AValue: LongBool): LongBool; extdecl;
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
function CheckComboBox_ParentShowHint(AIsSet: LongBool; AObj: TCheckComboBox; AValue: LongBool): LongBool; extdecl;
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
function CheckComboBox_Sorted(AIsSet: LongBool; AObj: TCheckComboBox; AValue: LongBool): LongBool; extdecl;
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
function CheckComboBox_Class(): TClass; extdecl;
begin
  Result := TCheckComboBox;
end;

//property event
procedure CheckComboBox_SetOnChange(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnCloseUp(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCloseUp}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnContextPopup(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnDblClick(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnDragDrop(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnDragOver(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnEndDrag(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnDropDown(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDropDown}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnEditingDone(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnGetItems(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnGetItems}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnMouseDown(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnMouseEnter(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnMouseLeave(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnMouseMove(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnMouseUp(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnMouseWheel(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnMouseWheelDown(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnMouseWheelUp(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnStartDrag(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;

//property event
procedure CheckComboBox_SetOnSelect(AObj: TCheckComboBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSelect}
  EventMethodCode
end;


exports
  CheckComboBox_Create,
  CheckComboBox_BorderStyle,
  CheckComboBox_DragCursor,
  CheckComboBox_DragKind,
  CheckComboBox_DragMode,
  CheckComboBox_ItemHeight,
  CheckComboBox_ItemWidth,
  CheckComboBox_MaxLength,
  CheckComboBox_ParentColor,
  CheckComboBox_ParentFont,
  CheckComboBox_ParentShowHint,
  CheckComboBox_Sorted,
  CheckComboBox_Class,
  CheckComboBox_SetOnChange,
  CheckComboBox_SetOnCloseUp,
  CheckComboBox_SetOnContextPopup,
  CheckComboBox_SetOnDblClick,
  CheckComboBox_SetOnDragDrop,
  CheckComboBox_SetOnDragOver,
  CheckComboBox_SetOnEndDrag,
  CheckComboBox_SetOnDropDown,
  CheckComboBox_SetOnEditingDone,
  CheckComboBox_SetOnGetItems,
  CheckComboBox_SetOnMouseDown,
  CheckComboBox_SetOnMouseEnter,
  CheckComboBox_SetOnMouseLeave,
  CheckComboBox_SetOnMouseMove,
  CheckComboBox_SetOnMouseUp,
  CheckComboBox_SetOnMouseWheel,
  CheckComboBox_SetOnMouseWheelDown,
  CheckComboBox_SetOnMouseWheelUp,
  CheckComboBox_SetOnStartDrag,
  CheckComboBox_SetOnSelect;