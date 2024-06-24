
//constructor
function TabSheet_Create(TheOwner: TComponent): TTabSheet; extdecl;
begin
  handleExceptionBegin
  Result := TTabSheet.Create(TheOwner);
  handleExceptionEnd
end;

//property
function TabSheet_PageControl(AIsSet: LongBool; AObj: TTabSheet; AValue: TPageControl): TPageControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PageControl := AValue;
  end else
    Result := AObj.PageControl;
  handleExceptionEnd
end;

//property
function TabSheet_TabIndex(AObj: TTabSheet): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TabIndex;
  handleExceptionEnd
end;

//property
function TabSheet_ParentFont(AIsSet: LongBool; AObj: TTabSheet; AValue: LongBool): LongBool; extdecl;
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
function TabSheet_ParentShowHint(AIsSet: LongBool; AObj: TTabSheet; AValue: LongBool): LongBool; extdecl;
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
function TabSheet_Class(): TClass; extdecl;
begin
  Result := TTabSheet;
end;

//property event
procedure TabSheet_SetOnContextPopup(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure TabSheet_SetOnDragDrop(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure TabSheet_SetOnDragOver(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure TabSheet_SetOnEndDrag(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure TabSheet_SetOnMouseDown(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure TabSheet_SetOnMouseEnter(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure TabSheet_SetOnMouseLeave(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure TabSheet_SetOnMouseMove(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure TabSheet_SetOnMouseUp(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure TabSheet_SetOnMouseWheel(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure TabSheet_SetOnMouseWheelDown(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure TabSheet_SetOnMouseWheelUp(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure TabSheet_SetOnStartDrag(AObj: TTabSheet; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  TabSheet_Create,
  TabSheet_PageControl,
  TabSheet_TabIndex,
  TabSheet_ParentFont,
  TabSheet_ParentShowHint,
  TabSheet_Class,
  TabSheet_SetOnContextPopup,
  TabSheet_SetOnDragDrop,
  TabSheet_SetOnDragOver,
  TabSheet_SetOnEndDrag,
  TabSheet_SetOnMouseDown,
  TabSheet_SetOnMouseEnter,
  TabSheet_SetOnMouseLeave,
  TabSheet_SetOnMouseMove,
  TabSheet_SetOnMouseUp,
  TabSheet_SetOnMouseWheel,
  TabSheet_SetOnMouseWheelDown,
  TabSheet_SetOnMouseWheelUp,
  TabSheet_SetOnStartDrag;