
//constructor
function Form_Create(TheOwner: TComponent): TForm; extdecl;
begin
  handleExceptionBegin
  Result := TGoForm.Create(TheOwner);
  handleExceptionEnd
end;

//property
function Form_ClientHandle(AObj: TForm): HWND; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClientHandle;
  handleExceptionEnd
end;

//property
function Form_DragKind(AIsSet: LongBool; AObj: TForm; AValue: TDragKind): TDragKind; extdecl;
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
function Form_DragMode(AIsSet: LongBool; AObj: TForm; AValue: TDragMode): TDragMode; extdecl;
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
function Form_SessionProperties(AIsSet: LongBool; AObj: TForm; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SessionProperties := AValue;
  end else
    Result := ToPChar(AObj.SessionProperties);
  handleExceptionEnd
end;

//property
function Form_LCLVersion(AIsSet: LongBool; AObj: TForm; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LCLVersion := AValue;
  end else
    Result := ToPChar(AObj.LCLVersion);
  handleExceptionEnd
end;

//function
function Form_Class(): TClass; extdecl;
begin
  Result := TForm;
end;

//procedure
procedure Form_Cascade(AObj: TForm); extdecl;
begin
  handleExceptionBegin
  AObj.Cascade();
  handleExceptionEnd
end;

//procedure
procedure Form_Next(AObj: TForm); extdecl;
begin
  handleExceptionBegin
  AObj.Next();
  handleExceptionEnd
end;

//procedure
procedure Form_Previous(AObj: TForm); extdecl;
begin
  handleExceptionBegin
  AObj.Previous();
  handleExceptionEnd
end;

//procedure
procedure Form_Tile(AObj: TForm); extdecl;
begin
  handleExceptionBegin
  AObj.Tile();
  handleExceptionEnd
end;

//procedure
procedure Form_ArrangeIcons(AObj: TForm); extdecl;
begin
  handleExceptionBegin
  AObj.ArrangeIcons();
  handleExceptionEnd
end;

//property event
procedure Form_SetOnConstrainedResize(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTConstrainedResizeEvent}
  {$DEFINE EventName := OnConstrainedResize}
  EventMethodCode
end;

//property event
procedure Form_SetOnContextPopup(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure Form_SetOnDblClick(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure Form_SetOnDragDrop(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure Form_SetOnDragOver(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure Form_SetOnEndDock(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure Form_SetOnGetSiteInfo(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  EventMethodCode
end;

//property event
procedure Form_SetOnMouseDown(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure Form_SetOnMouseEnter(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure Form_SetOnMouseLeave(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure Form_SetOnMouseMove(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure Form_SetOnMouseUp(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure Form_SetOnMouseWheel(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure Form_SetOnMouseWheelDown(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure Form_SetOnMouseWheelUp(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure Form_SetOnMouseWheelHorz(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure Form_SetOnMouseWheelLeft(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure Form_SetOnMouseWheelRight(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure Form_SetOnStartDock(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;


exports
  Form_Create,
  Form_ClientHandle,
  Form_DragKind,
  Form_DragMode,
  Form_SessionProperties,
  Form_LCLVersion,
  Form_Class,
  Form_Cascade,
  Form_Next,
  Form_Previous,
  Form_Tile,
  Form_ArrangeIcons,
  Form_SetOnConstrainedResize,
  Form_SetOnContextPopup,
  Form_SetOnDblClick,
  Form_SetOnDragDrop,
  Form_SetOnDragOver,
  Form_SetOnEndDock,
  Form_SetOnGetSiteInfo,
  Form_SetOnMouseDown,
  Form_SetOnMouseEnter,
  Form_SetOnMouseLeave,
  Form_SetOnMouseMove,
  Form_SetOnMouseUp,
  Form_SetOnMouseWheel,
  Form_SetOnMouseWheelDown,
  Form_SetOnMouseWheelUp,
  Form_SetOnMouseWheelHorz,
  Form_SetOnMouseWheelLeft,
  Form_SetOnMouseWheelRight,
  Form_SetOnStartDock;