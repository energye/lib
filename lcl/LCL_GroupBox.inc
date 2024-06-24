
//constructor
function GroupBox_Create(AOwner: TComponent): TGroupBox; extdecl;
begin
  handleExceptionBegin
  Result := TGroupBox.Create(AOwner);
  handleExceptionEnd
end;

//property
function GroupBox_DragCursor(AIsSet: LongBool; AObj: TGroupBox; AValue: TCursor): TCursor; extdecl;
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
function GroupBox_DragKind(AIsSet: LongBool; AObj: TGroupBox; AValue: TDragKind): TDragKind; extdecl;
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
function GroupBox_DragMode(AIsSet: LongBool; AObj: TGroupBox; AValue: TDragMode): TDragMode; extdecl;
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
function GroupBox_ParentColor(AIsSet: LongBool; AObj: TGroupBox; AValue: LongBool): LongBool; extdecl;
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
function GroupBox_ParentFont(AIsSet: LongBool; AObj: TGroupBox; AValue: LongBool): LongBool; extdecl;
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
function GroupBox_ParentShowHint(AIsSet: LongBool; AObj: TGroupBox; AValue: LongBool): LongBool; extdecl;
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
function GroupBox_Class(): TClass; extdecl;
begin
  Result := TGroupBox;
end;

//property event
procedure GroupBox_SetOnContextPopup(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure GroupBox_SetOnDblClick(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure GroupBox_SetOnDragDrop(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure GroupBox_SetOnDragOver(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure GroupBox_SetOnEndDock(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure GroupBox_SetOnEndDrag(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure GroupBox_SetOnGetSiteInfo(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  EventMethodCode
end;

//property event
procedure GroupBox_SetOnMouseDown(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure GroupBox_SetOnMouseEnter(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure GroupBox_SetOnMouseLeave(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure GroupBox_SetOnMouseMove(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure GroupBox_SetOnMouseUp(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure GroupBox_SetOnMouseWheel(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure GroupBox_SetOnMouseWheelDown(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure GroupBox_SetOnMouseWheelUp(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure GroupBox_SetOnStartDock(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure GroupBox_SetOnStartDrag(AObj: TGroupBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  GroupBox_Create,
  GroupBox_DragCursor,
  GroupBox_DragKind,
  GroupBox_DragMode,
  GroupBox_ParentColor,
  GroupBox_ParentFont,
  GroupBox_ParentShowHint,
  GroupBox_Class,
  GroupBox_SetOnContextPopup,
  GroupBox_SetOnDblClick,
  GroupBox_SetOnDragDrop,
  GroupBox_SetOnDragOver,
  GroupBox_SetOnEndDock,
  GroupBox_SetOnEndDrag,
  GroupBox_SetOnGetSiteInfo,
  GroupBox_SetOnMouseDown,
  GroupBox_SetOnMouseEnter,
  GroupBox_SetOnMouseLeave,
  GroupBox_SetOnMouseMove,
  GroupBox_SetOnMouseUp,
  GroupBox_SetOnMouseWheel,
  GroupBox_SetOnMouseWheelDown,
  GroupBox_SetOnMouseWheelUp,
  GroupBox_SetOnStartDock,
  GroupBox_SetOnStartDrag;