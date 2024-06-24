
//constructor
function ScrollBox_Create(AOwner: TComponent): TScrollBox; extdecl;
begin
  handleExceptionBegin
  Result := TScrollBox.Create(AOwner);
  handleExceptionEnd
end;

//property
function ScrollBox_AutoScroll(AIsSet: LongBool; AObj: TScrollBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoScroll := AValue;
  end else
    Result := AObj.AutoScroll;
  handleExceptionEnd
end;

//property
function ScrollBox_DragCursor(AIsSet: LongBool; AObj: TScrollBox; AValue: TCursor): TCursor; extdecl;
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
function ScrollBox_DragKind(AIsSet: LongBool; AObj: TScrollBox; AValue: TDragKind): TDragKind; extdecl;
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
function ScrollBox_DragMode(AIsSet: LongBool; AObj: TScrollBox; AValue: TDragMode): TDragMode; extdecl;
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
function ScrollBox_ParentBackground(AIsSet: LongBool; AObj: TScrollBox; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentBackground := AValue;
  end else
    Result := AObj.ParentBackground;
  handleExceptionEnd
end;

//property
function ScrollBox_ParentColor(AIsSet: LongBool; AObj: TScrollBox; AValue: LongBool): LongBool; extdecl;
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
function ScrollBox_ParentFont(AIsSet: LongBool; AObj: TScrollBox; AValue: LongBool): LongBool; extdecl;
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
function ScrollBox_ParentShowHint(AIsSet: LongBool; AObj: TScrollBox; AValue: LongBool): LongBool; extdecl;
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
function ScrollBox_Class(): TClass; extdecl;
begin
  Result := TScrollBox;
end;

//property event
procedure ScrollBox_SetOnConstrainedResize(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTConstrainedResizeEvent}
  {$DEFINE EventName := OnConstrainedResize}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnDblClick(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnDragDrop(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnDragOver(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnEndDock(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnEndDrag(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnGetSiteInfo(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnMouseDown(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnMouseEnter(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnMouseLeave(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnMouseMove(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnMouseUp(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnMouseWheel(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnMouseWheelDown(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnMouseWheelUp(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnMouseWheelHorz(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnMouseWheelLeft(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnMouseWheelRight(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnStartDock(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure ScrollBox_SetOnStartDrag(AObj: TScrollBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  ScrollBox_Create,
  ScrollBox_AutoScroll,
  ScrollBox_DragCursor,
  ScrollBox_DragKind,
  ScrollBox_DragMode,
  ScrollBox_ParentBackground,
  ScrollBox_ParentColor,
  ScrollBox_ParentFont,
  ScrollBox_ParentShowHint,
  ScrollBox_Class,
  ScrollBox_SetOnConstrainedResize,
  ScrollBox_SetOnDblClick,
  ScrollBox_SetOnDragDrop,
  ScrollBox_SetOnDragOver,
  ScrollBox_SetOnEndDock,
  ScrollBox_SetOnEndDrag,
  ScrollBox_SetOnGetSiteInfo,
  ScrollBox_SetOnMouseDown,
  ScrollBox_SetOnMouseEnter,
  ScrollBox_SetOnMouseLeave,
  ScrollBox_SetOnMouseMove,
  ScrollBox_SetOnMouseUp,
  ScrollBox_SetOnMouseWheel,
  ScrollBox_SetOnMouseWheelDown,
  ScrollBox_SetOnMouseWheelUp,
  ScrollBox_SetOnMouseWheelHorz,
  ScrollBox_SetOnMouseWheelLeft,
  ScrollBox_SetOnMouseWheelRight,
  ScrollBox_SetOnStartDock,
  ScrollBox_SetOnStartDrag;