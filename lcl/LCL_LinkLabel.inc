
//constructor
function LinkLabel_Create(AOwner: TComponent): TLinkLabel; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TLinkLabel.Create(AOwner);
  handleExceptionEnd
end;

//property
function LinkLabel_Alignment(AIsSet: LongBool; AObj: TLinkLabel; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionFuncName :='Alignment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function LinkLabel_DragCursor(AIsSet: LongBool; AObj: TLinkLabel; AValue: TCursor): TCursor; extdecl;
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
function LinkLabel_DragKind(AIsSet: LongBool; AObj: TLinkLabel; AValue: TDragKind): TDragKind; extdecl;
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
function LinkLabel_DragMode(AIsSet: LongBool; AObj: TLinkLabel; AValue: TDragMode): TDragMode; extdecl;
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
function LinkLabel_ParentColor(AIsSet: LongBool; AObj: TLinkLabel; AValue: LongBool): LongBool; extdecl;
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
function LinkLabel_ParentFont(AIsSet: LongBool; AObj: TLinkLabel; AValue: LongBool): LongBool; extdecl;
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
function LinkLabel_ParentShowHint(AIsSet: LongBool; AObj: TLinkLabel; AValue: LongBool): LongBool; extdecl;
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
function LinkLabel_Class(): TClass; extdecl;
begin
  Result := TLinkLabel;
end;

//property event
procedure LinkLabel_SetOnContextPopup(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure LinkLabel_SetOnDblClick(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure LinkLabel_SetOnDragDrop(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure LinkLabel_SetOnDragOver(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure LinkLabel_SetOnEndDock(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure LinkLabel_SetOnEndDrag(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure LinkLabel_SetOnMouseDown(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure LinkLabel_SetOnMouseEnter(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure LinkLabel_SetOnMouseLeave(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure LinkLabel_SetOnMouseMove(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure LinkLabel_SetOnMouseUp(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure LinkLabel_SetOnStartDock(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure LinkLabel_SetOnStartDrag(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;

//property event
procedure LinkLabel_SetOnLinkClick(AObj: TLinkLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSysLinkEvent}
  {$DEFINE EventName := OnLinkClick}
  EventMethodCode
end;


exports
  LinkLabel_Create,
  LinkLabel_Alignment,
  LinkLabel_DragCursor,
  LinkLabel_DragKind,
  LinkLabel_DragMode,
  LinkLabel_ParentColor,
  LinkLabel_ParentFont,
  LinkLabel_ParentShowHint,
  LinkLabel_Class,
  LinkLabel_SetOnContextPopup,
  LinkLabel_SetOnDblClick,
  LinkLabel_SetOnDragDrop,
  LinkLabel_SetOnDragOver,
  LinkLabel_SetOnEndDock,
  LinkLabel_SetOnEndDrag,
  LinkLabel_SetOnMouseDown,
  LinkLabel_SetOnMouseEnter,
  LinkLabel_SetOnMouseLeave,
  LinkLabel_SetOnMouseMove,
  LinkLabel_SetOnMouseUp,
  LinkLabel_SetOnStartDock,
  LinkLabel_SetOnStartDrag,
  LinkLabel_SetOnLinkClick;