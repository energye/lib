
//constructor
function ToolBar_Create(TheOwner: TComponent): TToolBar; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TToolBar.Create(TheOwner);
  handleExceptionEnd
end;

//property
function ToolBar_ButtonCount(AObj: TToolBar): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ButtonCount'}
  handleExceptionBegin
  Result := AObj.ButtonCount;
  handleExceptionEnd
end;

//property
function ToolBar_Buttons(AObj: TToolBar; Index: Integer): TToolButton; extdecl;
begin
  {$define handleExceptionFuncName :='Buttons'}
  handleExceptionBegin
  Result := AObj.Buttons[Index];
  handleExceptionEnd
end;

//property
function ToolBar_ButtonList(AObj: TToolBar): TList; extdecl;
begin
  {$define handleExceptionFuncName :='ButtonList'}
  handleExceptionBegin
  Result := AObj.ButtonList;
  handleExceptionEnd
end;

//property
function ToolBar_RowCount(AObj: TToolBar): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='RowCount'}
  handleExceptionBegin
  Result := AObj.RowCount;
  handleExceptionEnd
end;

//property
function ToolBar_ButtonDropWidth(AObj: TToolBar): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ButtonDropWidth'}
  handleExceptionBegin
  Result := AObj.ButtonDropWidth;
  handleExceptionEnd
end;

//property
function ToolBar_ButtonHeight(AIsSet: LongBool; AObj: TToolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ButtonHeight'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonHeight := AValue;
  end else
    Result := AObj.ButtonHeight;
  handleExceptionEnd
end;

//property
function ToolBar_ButtonWidth(AIsSet: LongBool; AObj: TToolBar; AValue: Integer): Integer; extdecl;
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
function ToolBar_DisabledImages(AIsSet: LongBool; AObj: TToolBar; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionFuncName :='DisabledImages'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DisabledImages := AValue;
  end else
    Result := AObj.DisabledImages;
  handleExceptionEnd
end;

//property
function ToolBar_DragCursor(AIsSet: LongBool; AObj: TToolBar; AValue: TCursor): TCursor; extdecl;
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
function ToolBar_DragKind(AIsSet: LongBool; AObj: TToolBar; AValue: TDragKind): TDragKind; extdecl;
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
function ToolBar_DragMode(AIsSet: LongBool; AObj: TToolBar; AValue: TDragMode): TDragMode; extdecl;
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
function ToolBar_DropDownWidth(AIsSet: LongBool; AObj: TToolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='DropDownWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DropDownWidth := AValue;
  end else
    Result := AObj.DropDownWidth;
  handleExceptionEnd
end;

//property
function ToolBar_Flat(AIsSet: LongBool; AObj: TToolBar; AValue: LongBool): LongBool; extdecl;
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
function ToolBar_HotImages(AIsSet: LongBool; AObj: TToolBar; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionFuncName :='HotImages'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HotImages := AValue;
  end else
    Result := AObj.HotImages;
  handleExceptionEnd
end;

//property
function ToolBar_Images(AIsSet: LongBool; AObj: TToolBar; AValue: TCustomImageList): TCustomImageList; extdecl;
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
function ToolBar_ImagesWidth(AIsSet: LongBool; AObj: TToolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ImagesWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImagesWidth := AValue;
  end else
    Result := AObj.ImagesWidth;
  handleExceptionEnd
end;

//property
function ToolBar_Indent(AIsSet: LongBool; AObj: TToolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Indent'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Indent := AValue;
  end else
    Result := AObj.Indent;
  handleExceptionEnd
end;

//property
function ToolBar_List(AIsSet: LongBool; AObj: TToolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='List'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.List := AValue;
  end else
    Result := AObj.List;
  handleExceptionEnd
end;

//property
function ToolBar_ParentColor(AIsSet: LongBool; AObj: TToolBar; AValue: LongBool): LongBool; extdecl;
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
function ToolBar_ParentFont(AIsSet: LongBool; AObj: TToolBar; AValue: LongBool): LongBool; extdecl;
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
function ToolBar_ParentShowHint(AIsSet: LongBool; AObj: TToolBar; AValue: LongBool): LongBool; extdecl;
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
function ToolBar_ShowCaptions(AIsSet: LongBool; AObj: TToolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShowCaptions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowCaptions := AValue;
  end else
    Result := AObj.ShowCaptions;
  handleExceptionEnd
end;

//property
function ToolBar_Transparent(AIsSet: LongBool; AObj: TToolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Transparent'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Transparent := AValue;
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

//property
function ToolBar_Wrapable(AIsSet: LongBool; AObj: TToolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Wrapable'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Wrapable := AValue;
  end else
    Result := AObj.Wrapable;
  handleExceptionEnd
end;

//function
function ToolBar_GetEnumeratorForToolBarEnumerator(AObj: TToolBar): TToolBarEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='GetEnumeratorForToolBarEnumerator'}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function ToolBar_Class(): TClass; extdecl;
begin
  Result := TToolBar;
end;

//procedure
procedure ToolBar_SetButtonSize(AObj: TToolBar; NewButtonWidth, NewButtonHeight: integer); extdecl;
begin
  {$define handleExceptionFuncName :='SetButtonSize'}
  handleExceptionBegin
  AObj.SetButtonSize(NewButtonWidth, NewButtonHeight);
  handleExceptionEnd
end;

//property event
procedure ToolBar_SetOnContextPopup(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure ToolBar_SetOnDblClick(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure ToolBar_SetOnDragDrop(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure ToolBar_SetOnDragOver(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure ToolBar_SetOnPaintButton(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTToolBarOnPaintButton}
  {$DEFINE EventName := OnPaintButton}
  EventMethodCode
end;

//property event
procedure ToolBar_SetOnEndDrag(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure ToolBar_SetOnMouseDown(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure ToolBar_SetOnMouseEnter(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure ToolBar_SetOnMouseLeave(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure ToolBar_SetOnMouseMove(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure ToolBar_SetOnMouseUp(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure ToolBar_SetOnMouseWheel(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure ToolBar_SetOnMouseWheelDown(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure ToolBar_SetOnMouseWheelUp(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure ToolBar_SetOnStartDrag(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  ToolBar_Create,
  ToolBar_ButtonCount,
  ToolBar_Buttons,
  ToolBar_ButtonList,
  ToolBar_RowCount,
  ToolBar_ButtonDropWidth,
  ToolBar_ButtonHeight,
  ToolBar_ButtonWidth,
  ToolBar_DisabledImages,
  ToolBar_DragCursor,
  ToolBar_DragKind,
  ToolBar_DragMode,
  ToolBar_DropDownWidth,
  ToolBar_Flat,
  ToolBar_HotImages,
  ToolBar_Images,
  ToolBar_ImagesWidth,
  ToolBar_Indent,
  ToolBar_List,
  ToolBar_ParentColor,
  ToolBar_ParentFont,
  ToolBar_ParentShowHint,
  ToolBar_ShowCaptions,
  ToolBar_Transparent,
  ToolBar_Wrapable,
  ToolBar_GetEnumeratorForToolBarEnumerator,
  ToolBar_Class,
  ToolBar_SetButtonSize,
  ToolBar_SetOnContextPopup,
  ToolBar_SetOnDblClick,
  ToolBar_SetOnDragDrop,
  ToolBar_SetOnDragOver,
  ToolBar_SetOnPaintButton,
  ToolBar_SetOnEndDrag,
  ToolBar_SetOnMouseDown,
  ToolBar_SetOnMouseEnter,
  ToolBar_SetOnMouseLeave,
  ToolBar_SetOnMouseMove,
  ToolBar_SetOnMouseUp,
  ToolBar_SetOnMouseWheel,
  ToolBar_SetOnMouseWheelDown,
  ToolBar_SetOnMouseWheelUp,
  ToolBar_SetOnStartDrag;