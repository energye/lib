// constructor
function TComboBoxEx_Create(TheOwner: TComponent): TComboBoxEx; extdecl;
begin
  {$define handleExceptionID := 21200}
  handleExceptionBegin
  Result := TComboBoxEx.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TComboBoxEx_BorderStyle(ASet: LongBool; AObj: TComboBoxEx; AValue: TBorderStyle): TBorderStyle; extdecl;
begin
  {$define handleExceptionID := 21201}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderStyle := AValue
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

// property
function TComboBoxEx_DragCursor(ASet: LongBool; AObj: TComboBoxEx; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 21202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TComboBoxEx_DragKind(ASet: LongBool; AObj: TComboBoxEx; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 21203}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TComboBoxEx_DragMode(ASet: LongBool; AObj: TComboBoxEx; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 21204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TComboBoxEx_ItemHeight(ASet: LongBool; AObj: TComboBoxEx; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 21205}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemHeight := AValue
  end else
    Result := AObj.ItemHeight;
  handleExceptionEnd
end;

// property
function TComboBoxEx_ItemWidth(ASet: LongBool; AObj: TComboBoxEx; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 21206}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemWidth := AValue
  end else
    Result := AObj.ItemWidth;
  handleExceptionEnd
end;

// property
function TComboBoxEx_MaxLength(ASet: LongBool; AObj: TComboBoxEx; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 21207}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxLength := AValue
  end else
    Result := AObj.MaxLength;
  handleExceptionEnd
end;

// property
function TComboBoxEx_ParentColor(ASet: LongBool; AObj: TComboBoxEx; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 21208}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TComboBoxEx_ParentFont(ASet: LongBool; AObj: TComboBoxEx; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 21209}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TComboBoxEx_ParentShowHint(ASet: LongBool; AObj: TComboBoxEx; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 21210}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TComboBoxEx_OnChange(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnCloseUp(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCloseUp}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnContextPopup(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnDblClick(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnDragDrop(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnDragOver(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnDropDown(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDropDown}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnEditingDone(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnEndDock(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnEndDrag(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnGetItems(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnGetItems}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnMouseDown(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnMouseEnter(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnMouseLeave(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnMouseMove(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnMouseUp(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnMouseWheel(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnMouseWheelDown(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnMouseWheelUp(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnSelect(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSelect}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnStartDock(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TComboBoxEx_OnStartDrag(AObj: TComboBoxEx; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TComboBoxEx_TClass(): TClass; extdecl;
begin
  Result := TComboBoxEx;
end;

exports
  TComboBoxEx_Create,
  TComboBoxEx_BorderStyle,
  TComboBoxEx_DragCursor,
  TComboBoxEx_DragKind,
  TComboBoxEx_DragMode,
  TComboBoxEx_ItemHeight,
  TComboBoxEx_ItemWidth,
  TComboBoxEx_MaxLength,
  TComboBoxEx_ParentColor,
  TComboBoxEx_ParentFont,
  TComboBoxEx_ParentShowHint,
  TComboBoxEx_OnChange,
  TComboBoxEx_OnCloseUp,
  TComboBoxEx_OnContextPopup,
  TComboBoxEx_OnDblClick,
  TComboBoxEx_OnDragDrop,
  TComboBoxEx_OnDragOver,
  TComboBoxEx_OnDropDown,
  TComboBoxEx_OnEditingDone,
  TComboBoxEx_OnEndDock,
  TComboBoxEx_OnEndDrag,
  TComboBoxEx_OnGetItems,
  TComboBoxEx_OnMouseDown,
  TComboBoxEx_OnMouseEnter,
  TComboBoxEx_OnMouseLeave,
  TComboBoxEx_OnMouseMove,
  TComboBoxEx_OnMouseUp,
  TComboBoxEx_OnMouseWheel,
  TComboBoxEx_OnMouseWheelDown,
  TComboBoxEx_OnMouseWheelUp,
  TComboBoxEx_OnSelect,
  TComboBoxEx_OnStartDock,
  TComboBoxEx_OnStartDrag,
  TComboBoxEx_TClass;