// constructor
function TToolBar_Create(TheOwner: TComponent): TToolBar; extdecl;
begin
  {$define handleExceptionID := 10100}
  handleExceptionBegin
  Result := TToolBar.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TToolBar_GetEnumeratorToToolBarEnumerator(AObj: TToolBar): TToolBarEnumerator; extdecl;
begin
  {$define handleExceptionID := 10101}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

// procedure
procedure TToolBar_SetButtonSize(AObj: TToolBar; NewButtonWidth: integer; NewButtonHeight: integer); extdecl;
begin
  {$define handleExceptionID := 10102}
  handleExceptionBegin
  AObj.SetButtonSize(NewButtonWidth, NewButtonHeight);
  handleExceptionEnd
end;

// property
function TToolBar_ButtonCount(AObj: TToolBar): Integer; extdecl;
begin
  {$define handleExceptionID := 10103}
  handleExceptionBegin
  Result := AObj.ButtonCount;
  handleExceptionEnd
end;

// property
function TToolBar_Buttons(AObj: TToolBar; Index: Integer): TToolButton; extdecl;
begin
  {$define handleExceptionID := 10104}
  handleExceptionBegin
  Result := AObj.Buttons[Index];
  handleExceptionEnd
end;

// property
function TToolBar_ButtonList(AObj: TToolBar): TList; extdecl;
begin
  {$define handleExceptionID := 10105}
  handleExceptionBegin
  Result := AObj.ButtonList;
  handleExceptionEnd
end;

// property
function TToolBar_RowCount(AObj: TToolBar): Integer; extdecl;
begin
  {$define handleExceptionID := 10106}
  handleExceptionBegin
  Result := AObj.RowCount;
  handleExceptionEnd
end;

// property
function TToolBar_ButtonDropWidth(AObj: TToolBar): Integer; extdecl;
begin
  {$define handleExceptionID := 10107}
  handleExceptionBegin
  Result := AObj.ButtonDropWidth;
  handleExceptionEnd
end;

// property
function TToolBar_ButtonHeight(ASet: LongBool; AObj: TToolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 10108}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonHeight := AValue
  end else
    Result := AObj.ButtonHeight;
  handleExceptionEnd
end;

// property
function TToolBar_ButtonWidth(ASet: LongBool; AObj: TToolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 10109}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonWidth := AValue
  end else
    Result := AObj.ButtonWidth;
  handleExceptionEnd
end;

// property
function TToolBar_DisabledImages(ASet: LongBool; AObj: TToolBar; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 10110}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DisabledImages := AValue
  end else
    Result := AObj.DisabledImages;
  handleExceptionEnd
end;

// property
function TToolBar_DragCursor(ASet: LongBool; AObj: TToolBar; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 10111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TToolBar_DragKind(ASet: LongBool; AObj: TToolBar; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 10112}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TToolBar_DragMode(ASet: LongBool; AObj: TToolBar; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 10113}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TToolBar_DropDownWidth(ASet: LongBool; AObj: TToolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 10114}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DropDownWidth := AValue
  end else
    Result := AObj.DropDownWidth;
  handleExceptionEnd
end;

// property
function TToolBar_Flat(ASet: LongBool; AObj: TToolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10115}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Flat := AValue
  end else
    Result := AObj.Flat;
  handleExceptionEnd
end;

// property
function TToolBar_HotImages(ASet: LongBool; AObj: TToolBar; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 10116}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HotImages := AValue
  end else
    Result := AObj.HotImages;
  handleExceptionEnd
end;

// property
function TToolBar_Images(ASet: LongBool; AObj: TToolBar; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 10117}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TToolBar_ImagesWidth(ASet: LongBool; AObj: TToolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 10118}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImagesWidth := AValue
  end else
    Result := AObj.ImagesWidth;
  handleExceptionEnd
end;

// property
function TToolBar_Indent(ASet: LongBool; AObj: TToolBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 10119}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Indent := AValue
  end else
    Result := AObj.Indent;
  handleExceptionEnd
end;

// property
function TToolBar_List(ASet: LongBool; AObj: TToolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10120}
  handleExceptionBegin
  if ASet then
  begin
    AObj.List := AValue
  end else
    Result := AObj.List;
  handleExceptionEnd
end;

// property
function TToolBar_ParentColor(ASet: LongBool; AObj: TToolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10121}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TToolBar_ParentFont(ASet: LongBool; AObj: TToolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10122}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TToolBar_ParentShowHint(ASet: LongBool; AObj: TToolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10123}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TToolBar_ShowCaptions(ASet: LongBool; AObj: TToolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10124}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowCaptions := AValue
  end else
    Result := AObj.ShowCaptions;
  handleExceptionEnd
end;

// property
function TToolBar_Transparent(ASet: LongBool; AObj: TToolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10125}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Transparent := AValue
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

// property
function TToolBar_Wrapable(ASet: LongBool; AObj: TToolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 10126}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Wrapable := AValue
  end else
    Result := AObj.Wrapable;
  handleExceptionEnd
end;

// event
procedure TToolBar_OnContextPopup(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TToolBar_OnDblClick(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TToolBar_OnDragDrop(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TToolBar_OnDragOver(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TToolBar_OnPaintButton(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTToolBarOnPaintButton}
  {$DEFINE EventName := OnPaintButton}
  LCLEventMethodCode
end;

// event
procedure TToolBar_OnEndDrag(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TToolBar_OnMouseDown(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TToolBar_OnMouseEnter(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TToolBar_OnMouseLeave(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TToolBar_OnMouseMove(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TToolBar_OnMouseUp(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TToolBar_OnMouseWheel(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TToolBar_OnMouseWheelDown(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TToolBar_OnMouseWheelUp(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TToolBar_OnStartDrag(AObj: TToolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TToolBar_TClass(): TClass; extdecl;
begin
  Result := TToolBar;
end;

exports
  TToolBar_Create,
  TToolBar_GetEnumeratorToToolBarEnumerator,
  TToolBar_SetButtonSize,
  TToolBar_ButtonCount,
  TToolBar_Buttons,
  TToolBar_ButtonList,
  TToolBar_RowCount,
  TToolBar_ButtonDropWidth,
  TToolBar_ButtonHeight,
  TToolBar_ButtonWidth,
  TToolBar_DisabledImages,
  TToolBar_DragCursor,
  TToolBar_DragKind,
  TToolBar_DragMode,
  TToolBar_DropDownWidth,
  TToolBar_Flat,
  TToolBar_HotImages,
  TToolBar_Images,
  TToolBar_ImagesWidth,
  TToolBar_Indent,
  TToolBar_List,
  TToolBar_ParentColor,
  TToolBar_ParentFont,
  TToolBar_ParentShowHint,
  TToolBar_ShowCaptions,
  TToolBar_Transparent,
  TToolBar_Wrapable,
  TToolBar_OnContextPopup,
  TToolBar_OnDblClick,
  TToolBar_OnDragDrop,
  TToolBar_OnDragOver,
  TToolBar_OnPaintButton,
  TToolBar_OnEndDrag,
  TToolBar_OnMouseDown,
  TToolBar_OnMouseEnter,
  TToolBar_OnMouseLeave,
  TToolBar_OnMouseMove,
  TToolBar_OnMouseUp,
  TToolBar_OnMouseWheel,
  TToolBar_OnMouseWheelDown,
  TToolBar_OnMouseWheelUp,
  TToolBar_OnStartDrag,
  TToolBar_TClass;