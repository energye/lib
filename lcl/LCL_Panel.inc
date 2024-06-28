
//constructor
function Panel_Create(TheOwner: TComponent): TPanel; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TPanel.Create(TheOwner);
  handleExceptionEnd
end;

//property
function Panel_DragCursor(AIsSet: LongBool; AObj: TPanel; AValue: TCursor): TCursor; extdecl;
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
function Panel_DragKind(AIsSet: LongBool; AObj: TPanel; AValue: TDragKind): TDragKind; extdecl;
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
function Panel_DragMode(AIsSet: LongBool; AObj: TPanel; AValue: TDragMode): TDragMode; extdecl;
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
function Panel_ParentFont(AIsSet: LongBool; AObj: TPanel; AValue: LongBool): LongBool; extdecl;
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
function Panel_ParentShowHint(AIsSet: LongBool; AObj: TPanel; AValue: LongBool): LongBool; extdecl;
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
function Panel_ShowAccelChar(AIsSet: LongBool; AObj: TPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShowAccelChar'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowAccelChar := AValue;
  end else
    Result := AObj.ShowAccelChar;
  handleExceptionEnd
end;

//property
function Panel_VerticalAlignment(AIsSet: LongBool; AObj: TPanel; AValue: TVerticalAlignment): TVerticalAlignment; extdecl;
begin
  {$define handleExceptionFuncName :='VerticalAlignment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.VerticalAlignment := AValue;
  end else
    Result := AObj.VerticalAlignment;
  handleExceptionEnd
end;

//property
function Panel_Wordwrap(AIsSet: LongBool; AObj: TPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Wordwrap'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Wordwrap := AValue;
  end else
    Result := AObj.Wordwrap;
  handleExceptionEnd
end;

//function
function Panel_Class(): TClass; extdecl;
begin
  Result := TPanel;
end;

//property event
procedure Panel_SetOnContextPopup(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure Panel_SetOnDblClick(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure Panel_SetOnDragDrop(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure Panel_SetOnDragOver(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure Panel_SetOnEndDock(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure Panel_SetOnEndDrag(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure Panel_SetOnGetSiteInfo(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  EventMethodCode
end;

//property event
procedure Panel_SetOnGetDockCaption(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetDockCaptionEvent}
  {$DEFINE EventName := OnGetDockCaption}
  EventMethodCode
end;

//property event
procedure Panel_SetOnMouseDown(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure Panel_SetOnMouseEnter(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure Panel_SetOnMouseLeave(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure Panel_SetOnMouseMove(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure Panel_SetOnMouseUp(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure Panel_SetOnMouseWheel(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure Panel_SetOnMouseWheelDown(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure Panel_SetOnMouseWheelUp(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure Panel_SetOnMouseWheelHorz(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure Panel_SetOnMouseWheelLeft(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure Panel_SetOnMouseWheelRight(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure Panel_SetOnStartDock(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure Panel_SetOnStartDrag(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  Panel_Create,
  Panel_DragCursor,
  Panel_DragKind,
  Panel_DragMode,
  Panel_ParentFont,
  Panel_ParentShowHint,
  Panel_ShowAccelChar,
  Panel_VerticalAlignment,
  Panel_Wordwrap,
  Panel_Class,
  Panel_SetOnContextPopup,
  Panel_SetOnDblClick,
  Panel_SetOnDragDrop,
  Panel_SetOnDragOver,
  Panel_SetOnEndDock,
  Panel_SetOnEndDrag,
  Panel_SetOnGetSiteInfo,
  Panel_SetOnGetDockCaption,
  Panel_SetOnMouseDown,
  Panel_SetOnMouseEnter,
  Panel_SetOnMouseLeave,
  Panel_SetOnMouseMove,
  Panel_SetOnMouseUp,
  Panel_SetOnMouseWheel,
  Panel_SetOnMouseWheelDown,
  Panel_SetOnMouseWheelUp,
  Panel_SetOnMouseWheelHorz,
  Panel_SetOnMouseWheelLeft,
  Panel_SetOnMouseWheelRight,
  Panel_SetOnStartDock,
  Panel_SetOnStartDrag;