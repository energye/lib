// constructor
function TForm_Create(TheOwner: TComponent): TForm; extdecl;
begin
  {$define handleExceptionID := 1300}
  handleExceptionBegin
  Result := TForm.Create(TheOwner);
  handleExceptionEnd
end;

// procedure
procedure TForm_Cascade(AObj: TForm); extdecl;
begin
  {$define handleExceptionID := 1301}
  handleExceptionBegin
  AObj.Cascade();
  handleExceptionEnd
end;

// procedure
procedure TForm_Next(AObj: TForm); extdecl;
begin
  {$define handleExceptionID := 1302}
  handleExceptionBegin
  AObj.Next();
  handleExceptionEnd
end;

// procedure
procedure TForm_Previous(AObj: TForm); extdecl;
begin
  {$define handleExceptionID := 1303}
  handleExceptionBegin
  AObj.Previous();
  handleExceptionEnd
end;

// procedure
procedure TForm_Tile(AObj: TForm); extdecl;
begin
  {$define handleExceptionID := 1304}
  handleExceptionBegin
  AObj.Tile();
  handleExceptionEnd
end;

// procedure
procedure TForm_ArrangeIcons(AObj: TForm); extdecl;
begin
  {$define handleExceptionID := 1305}
  handleExceptionBegin
  AObj.ArrangeIcons();
  handleExceptionEnd
end;

// property
function TForm_ClientHandle(AObj: TForm): HWND; extdecl;
begin
  {$define handleExceptionID := 1306}
  handleExceptionBegin
  Result := AObj.ClientHandle;
  handleExceptionEnd
end;

// property
function TForm_DragKind(ASet: LongBool; AObj: TForm; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 1307}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TForm_DragMode(ASet: LongBool; AObj: TForm; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 1308}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
procedure TForm_SessionProperties(ASet: LongBool; AObj: TForm; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1309}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SessionProperties := AValue
  end else
    StringBufferCreate(AObj.SessionProperties, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TForm_LCLVersion(ASet: LongBool; AObj: TForm; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1310}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LCLVersion := AValue
  end else
    StringBufferCreate(AObj.LCLVersion, AStrData, AStrSize);
  handleExceptionEnd
end;

// event
procedure TForm_OnConstrainedResize(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTConstrainedResizeEvent}
  {$DEFINE EventName := OnConstrainedResize}
  LCLEventMethodCode
end;

// event
procedure TForm_OnContextPopup(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TForm_OnDblClick(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TForm_OnDragDrop(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TForm_OnDragOver(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TForm_OnEndDock(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TForm_OnGetSiteInfo(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  LCLEventMethodCode
end;

// event
procedure TForm_OnMouseDown(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TForm_OnMouseEnter(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TForm_OnMouseLeave(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TForm_OnMouseMove(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TForm_OnMouseUp(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TForm_OnMouseWheel(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TForm_OnMouseWheelDown(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TForm_OnMouseWheelUp(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TForm_OnMouseWheelHorz(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TForm_OnMouseWheelLeft(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TForm_OnMouseWheelRight(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TForm_OnStartDock(AObj: TForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

function TForm_TClass(): TClass; extdecl;
begin
  Result := TForm;
end;

exports
  TForm_Create,
  TForm_Cascade,
  TForm_Next,
  TForm_Previous,
  TForm_Tile,
  TForm_ArrangeIcons,
  TForm_ClientHandle,
  TForm_DragKind,
  TForm_DragMode,
  TForm_SessionProperties,
  TForm_LCLVersion,
  TForm_OnConstrainedResize,
  TForm_OnContextPopup,
  TForm_OnDblClick,
  TForm_OnDragDrop,
  TForm_OnDragOver,
  TForm_OnEndDock,
  TForm_OnGetSiteInfo,
  TForm_OnMouseDown,
  TForm_OnMouseEnter,
  TForm_OnMouseLeave,
  TForm_OnMouseMove,
  TForm_OnMouseUp,
  TForm_OnMouseWheel,
  TForm_OnMouseWheelDown,
  TForm_OnMouseWheelUp,
  TForm_OnMouseWheelHorz,
  TForm_OnMouseWheelLeft,
  TForm_OnMouseWheelRight,
  TForm_OnStartDock,
  TForm_TClass;