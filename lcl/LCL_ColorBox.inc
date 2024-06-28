
//constructor
function ColorBox_Create(AOwner: TComponent): TColorBox; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TColorBox.Create(AOwner);
  handleExceptionEnd
end;

//property
function ColorBox_DragCursor(AIsSet: LongBool; AObj: TColorBox; AValue: TCursor): TCursor; extdecl;
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
function ColorBox_DragMode(AIsSet: LongBool; AObj: TColorBox; AValue: TDragMode): TDragMode; extdecl;
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
function ColorBox_ItemHeight(AIsSet: LongBool; AObj: TColorBox; AValue: Integer): Integer; extdecl;
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
function ColorBox_ItemWidth(AIsSet: LongBool; AObj: TColorBox; AValue: Integer): Integer; extdecl;
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
function ColorBox_ParentColor(AIsSet: LongBool; AObj: TColorBox; AValue: LongBool): LongBool; extdecl;
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
function ColorBox_ParentFont(AIsSet: LongBool; AObj: TColorBox; AValue: LongBool): LongBool; extdecl;
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
function ColorBox_ParentShowHint(AIsSet: LongBool; AObj: TColorBox; AValue: LongBool): LongBool; extdecl;
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

//function
function ColorBox_Class(): TClass; extdecl;
begin
  Result := TColorBox;
end;

//property event
procedure ColorBox_SetOnChange(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnCloseUp(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCloseUp}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnContextPopup(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnDblClick(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnDragDrop(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnDragOver(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnEndDrag(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnDropDown(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDropDown}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnEditingDone(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnMouseDown(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnMouseEnter(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnMouseLeave(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnMouseMove(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnMouseUp(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnMouseWheel(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnMouseWheelDown(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnMouseWheelUp(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnStartDrag(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;

//property event
procedure ColorBox_SetOnSelect(AObj: TColorBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSelect}
  EventMethodCode
end;


exports
  ColorBox_Create,
  ColorBox_DragCursor,
  ColorBox_DragMode,
  ColorBox_ItemHeight,
  ColorBox_ItemWidth,
  ColorBox_ParentColor,
  ColorBox_ParentFont,
  ColorBox_ParentShowHint,
  ColorBox_Class,
  ColorBox_SetOnChange,
  ColorBox_SetOnCloseUp,
  ColorBox_SetOnContextPopup,
  ColorBox_SetOnDblClick,
  ColorBox_SetOnDragDrop,
  ColorBox_SetOnDragOver,
  ColorBox_SetOnEndDrag,
  ColorBox_SetOnDropDown,
  ColorBox_SetOnEditingDone,
  ColorBox_SetOnMouseDown,
  ColorBox_SetOnMouseEnter,
  ColorBox_SetOnMouseLeave,
  ColorBox_SetOnMouseMove,
  ColorBox_SetOnMouseUp,
  ColorBox_SetOnMouseWheel,
  ColorBox_SetOnMouseWheelDown,
  ColorBox_SetOnMouseWheelUp,
  ColorBox_SetOnStartDrag,
  ColorBox_SetOnSelect;