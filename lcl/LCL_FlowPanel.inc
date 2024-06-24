
//constructor
function FlowPanel_Create(AOwner: TComponent): TFlowPanel; extdecl;
begin
  handleExceptionBegin
  Result := TFlowPanel.Create(AOwner);
  handleExceptionEnd
end;

//property
function FlowPanel_DragCursor(AIsSet: LongBool; AObj: TFlowPanel; AValue: TCursor): TCursor; extdecl;
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
function FlowPanel_DragKind(AIsSet: LongBool; AObj: TFlowPanel; AValue: TDragKind): TDragKind; extdecl;
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
function FlowPanel_DragMode(AIsSet: LongBool; AObj: TFlowPanel; AValue: TDragMode): TDragMode; extdecl;
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
function FlowPanel_ParentFont(AIsSet: LongBool; AObj: TFlowPanel; AValue: LongBool): LongBool; extdecl;
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
function FlowPanel_ParentShowHint(AIsSet: LongBool; AObj: TFlowPanel; AValue: LongBool): LongBool; extdecl;
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
function FlowPanel_Class(): TClass; extdecl;
begin
  Result := TFlowPanel;
end;

//property event
procedure FlowPanel_SetOnConstrainedResize(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTConstrainedResizeEvent}
  {$DEFINE EventName := OnConstrainedResize}
  EventMethodCode
end;

//property event
procedure FlowPanel_SetOnContextPopup(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure FlowPanel_SetOnDblClick(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure FlowPanel_SetOnDragDrop(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure FlowPanel_SetOnDragOver(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure FlowPanel_SetOnEndDock(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure FlowPanel_SetOnEndDrag(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure FlowPanel_SetOnGetSiteInfo(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  EventMethodCode
end;

//property event
procedure FlowPanel_SetOnMouseDown(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure FlowPanel_SetOnMouseEnter(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure FlowPanel_SetOnMouseLeave(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure FlowPanel_SetOnMouseMove(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure FlowPanel_SetOnMouseUp(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure FlowPanel_SetOnStartDock(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure FlowPanel_SetOnStartDrag(AObj: TFlowPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  FlowPanel_Create,
  FlowPanel_DragCursor,
  FlowPanel_DragKind,
  FlowPanel_DragMode,
  FlowPanel_ParentFont,
  FlowPanel_ParentShowHint,
  FlowPanel_Class,
  FlowPanel_SetOnConstrainedResize,
  FlowPanel_SetOnContextPopup,
  FlowPanel_SetOnDblClick,
  FlowPanel_SetOnDragDrop,
  FlowPanel_SetOnDragOver,
  FlowPanel_SetOnEndDock,
  FlowPanel_SetOnEndDrag,
  FlowPanel_SetOnGetSiteInfo,
  FlowPanel_SetOnMouseDown,
  FlowPanel_SetOnMouseEnter,
  FlowPanel_SetOnMouseLeave,
  FlowPanel_SetOnMouseMove,
  FlowPanel_SetOnMouseUp,
  FlowPanel_SetOnStartDock,
  FlowPanel_SetOnStartDrag;