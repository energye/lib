
//constructor
function ComboBoxEx_Create(TheOwner: TComponent): TComboBoxEx; extdecl;
begin
  handleExceptionBegin
  Result := TComboBoxEx.Create(TheOwner);
  handleExceptionEnd
end;

//property
function ComboBoxEx_BorderStyle(AIsSet: LongBool; AObj: TComboBoxEx; AValue: TBorderStyle): TBorderStyle; extdecl;
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
function ComboBoxEx_DragCursor(AIsSet: LongBool; AObj: TComboBoxEx; AValue: TCursor): TCursor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragCursor := AValue;
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

//property
function ComboBoxEx_DragKind(AIsSet: LongBool; AObj: TComboBoxEx; AValue: TDragKind): TDragKind; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragKind := AValue;
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

//property
function ComboBoxEx_DragMode(AIsSet: LongBool; AObj: TComboBoxEx; AValue: TDragMode): TDragMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragMode := AValue;
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

//property
function ComboBoxEx_ItemHeight(AIsSet: LongBool; AObj: TComboBoxEx; AValue: Integer): Integer; extdecl;
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
function ComboBoxEx_ItemWidth(AIsSet: LongBool; AObj: TComboBoxEx; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ItemWidth := AValue;
  end else
    Result := AObj.ItemWidth;
  handleExceptionEnd
end;

//property
function ComboBoxEx_MaxLength(AIsSet: LongBool; AObj: TComboBoxEx; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxLength := AValue;
  end else
    Result := AObj.MaxLength;
  handleExceptionEnd
end;

//property
function ComboBoxEx_ParentColor(AIsSet: LongBool; AObj: TComboBoxEx; AValue: LongBool): LongBool; extdecl;
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
function ComboBoxEx_ParentFont(AIsSet: LongBool; AObj: TComboBoxEx; AValue: LongBool): LongBool; extdecl;
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
function ComboBoxEx_ParentShowHint(AIsSet: LongBool; AObj: TComboBoxEx; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//function
function ComboBoxEx_Class(): TClass; extdecl;
begin
  Result := TComboBoxEx;
end;

//property event
procedure ComboBoxEx_SetOnChange(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnCloseUp(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCloseUp}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnContextPopup(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnDblClick(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnDragDrop(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnDragOver(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnDropDown(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDropDown}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnEditingDone(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnEndDock(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnEndDrag(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnGetItems(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnGetItems}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnMouseDown(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnMouseEnter(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnMouseLeave(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnMouseMove(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnMouseUp(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnMouseWheel(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnMouseWheelDown(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnMouseWheelUp(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnSelect(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSelect}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnStartDock(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure ComboBoxEx_SetOnStartDrag(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  ComboBoxEx_Create,
  ComboBoxEx_BorderStyle,
  ComboBoxEx_DragCursor,
  ComboBoxEx_DragKind,
  ComboBoxEx_DragMode,
  ComboBoxEx_ItemHeight,
  ComboBoxEx_ItemWidth,
  ComboBoxEx_MaxLength,
  ComboBoxEx_ParentColor,
  ComboBoxEx_ParentFont,
  ComboBoxEx_ParentShowHint,
  ComboBoxEx_Class,
  ComboBoxEx_SetOnChange,
  ComboBoxEx_SetOnCloseUp,
  ComboBoxEx_SetOnContextPopup,
  ComboBoxEx_SetOnDblClick,
  ComboBoxEx_SetOnDragDrop,
  ComboBoxEx_SetOnDragOver,
  ComboBoxEx_SetOnDropDown,
  ComboBoxEx_SetOnEditingDone,
  ComboBoxEx_SetOnEndDock,
  ComboBoxEx_SetOnEndDrag,
  ComboBoxEx_SetOnGetItems,
  ComboBoxEx_SetOnMouseDown,
  ComboBoxEx_SetOnMouseEnter,
  ComboBoxEx_SetOnMouseLeave,
  ComboBoxEx_SetOnMouseMove,
  ComboBoxEx_SetOnMouseUp,
  ComboBoxEx_SetOnMouseWheel,
  ComboBoxEx_SetOnMouseWheelDown,
  ComboBoxEx_SetOnMouseWheelUp,
  ComboBoxEx_SetOnSelect,
  ComboBoxEx_SetOnStartDock,
  ComboBoxEx_SetOnStartDrag;