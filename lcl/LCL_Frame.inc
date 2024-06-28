
//constructor
function Frame_Create(TheOwner: TComponent): TFrame; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TFrame.Create(TheOwner);
  handleExceptionEnd
end;

//property
function Frame_AutoScroll(AIsSet: LongBool; AObj: TFrame; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AutoScroll'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoScroll := AValue;
  end else
    Result := AObj.AutoScroll;
  handleExceptionEnd
end;

//property
function Frame_DragCursor(AIsSet: LongBool; AObj: TFrame; AValue: TCursor): TCursor; extdecl;
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
function Frame_DragKind(AIsSet: LongBool; AObj: TFrame; AValue: TDragKind): TDragKind; extdecl;
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
function Frame_DragMode(AIsSet: LongBool; AObj: TFrame; AValue: TDragMode): TDragMode; extdecl;
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
function Frame_LCLVersion(AIsSet: LongBool; AObj: TFrame; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='LCLVersion'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LCLVersion := AValue;
  end else
    Result := ToPChar(AObj.LCLVersion);
  handleExceptionEnd
end;

//property
function Frame_ParentColor(AIsSet: LongBool; AObj: TFrame; AValue: LongBool): LongBool; extdecl;
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
function Frame_ParentFont(AIsSet: LongBool; AObj: TFrame; AValue: LongBool): LongBool; extdecl;
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
function Frame_ParentShowHint(AIsSet: LongBool; AObj: TFrame; AValue: LongBool): LongBool; extdecl;
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
function Frame_Class(): TClass; extdecl;
begin
  Result := TFrame;
end;

//property event
procedure Frame_SetOnConstrainedResize(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTConstrainedResizeEvent}
  {$DEFINE EventName := OnConstrainedResize}
  EventMethodCode
end;

//property event
procedure Frame_SetOnContextPopup(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure Frame_SetOnDblClick(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure Frame_SetOnDragDrop(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure Frame_SetOnDragOver(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure Frame_SetOnEndDock(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure Frame_SetOnEndDrag(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure Frame_SetOnGetSiteInfo(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  EventMethodCode
end;

//property event
procedure Frame_SetOnMouseDown(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure Frame_SetOnMouseEnter(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure Frame_SetOnMouseLeave(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure Frame_SetOnMouseMove(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure Frame_SetOnMouseUp(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure Frame_SetOnMouseWheel(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure Frame_SetOnMouseWheelDown(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure Frame_SetOnMouseWheelUp(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure Frame_SetOnMouseWheelHorz(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure Frame_SetOnMouseWheelLeft(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure Frame_SetOnMouseWheelRight(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure Frame_SetOnStartDock(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure Frame_SetOnStartDrag(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  Frame_Create,
  Frame_AutoScroll,
  Frame_DragCursor,
  Frame_DragKind,
  Frame_DragMode,
  Frame_LCLVersion,
  Frame_ParentColor,
  Frame_ParentFont,
  Frame_ParentShowHint,
  Frame_Class,
  Frame_SetOnConstrainedResize,
  Frame_SetOnContextPopup,
  Frame_SetOnDblClick,
  Frame_SetOnDragDrop,
  Frame_SetOnDragOver,
  Frame_SetOnEndDock,
  Frame_SetOnEndDrag,
  Frame_SetOnGetSiteInfo,
  Frame_SetOnMouseDown,
  Frame_SetOnMouseEnter,
  Frame_SetOnMouseLeave,
  Frame_SetOnMouseMove,
  Frame_SetOnMouseUp,
  Frame_SetOnMouseWheel,
  Frame_SetOnMouseWheelDown,
  Frame_SetOnMouseWheelUp,
  Frame_SetOnMouseWheelHorz,
  Frame_SetOnMouseWheelLeft,
  Frame_SetOnMouseWheelRight,
  Frame_SetOnStartDock,
  Frame_SetOnStartDrag;