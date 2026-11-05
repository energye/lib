// constructor
function TFrame_Create(TheOwner: TComponent): TFrame; extdecl;
begin
  {$define handleExceptionID := 21800}
  handleExceptionBegin
  Result := TFrame.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TFrame_AutoScroll(ASet: LongBool; AObj: TFrame; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 21801}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoScroll := AValue
  end else
    Result := AObj.AutoScroll;
  handleExceptionEnd
end;

// property
function TFrame_DragCursor(ASet: LongBool; AObj: TFrame; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 21802}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TFrame_DragKind(ASet: LongBool; AObj: TFrame; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 21803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TFrame_DragMode(ASet: LongBool; AObj: TFrame; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 21804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
procedure TFrame_LCLVersion(ASet: LongBool; AObj: TFrame; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 21805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LCLVersion := AValue
  end else
    StringBufferCreate(AObj.LCLVersion, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TFrame_ParentColor(ASet: LongBool; AObj: TFrame; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 21806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TFrame_ParentFont(ASet: LongBool; AObj: TFrame; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 21807}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TFrame_ParentShowHint(ASet: LongBool; AObj: TFrame; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 21808}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TFrame_OnConstrainedResize(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTConstrainedResizeEvent}
  {$DEFINE EventName := OnConstrainedResize}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnContextPopup(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnDblClick(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnDragDrop(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnDragOver(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnEndDock(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnEndDrag(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnGetSiteInfo(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnMouseDown(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnMouseEnter(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnMouseLeave(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnMouseMove(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnMouseUp(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnMouseWheel(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnMouseWheelDown(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnMouseWheelUp(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnMouseWheelHorz(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnMouseWheelLeft(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnMouseWheelRight(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnStartDock(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TFrame_OnStartDrag(AObj: TFrame; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TFrame_TClass(): TClass; extdecl;
begin
  Result := TFrame;
end;

exports
  TFrame_Create,
  TFrame_AutoScroll,
  TFrame_DragCursor,
  TFrame_DragKind,
  TFrame_DragMode,
  TFrame_LCLVersion,
  TFrame_ParentColor,
  TFrame_ParentFont,
  TFrame_ParentShowHint,
  TFrame_OnConstrainedResize,
  TFrame_OnContextPopup,
  TFrame_OnDblClick,
  TFrame_OnDragDrop,
  TFrame_OnDragOver,
  TFrame_OnEndDock,
  TFrame_OnEndDrag,
  TFrame_OnGetSiteInfo,
  TFrame_OnMouseDown,
  TFrame_OnMouseEnter,
  TFrame_OnMouseLeave,
  TFrame_OnMouseMove,
  TFrame_OnMouseUp,
  TFrame_OnMouseWheel,
  TFrame_OnMouseWheelDown,
  TFrame_OnMouseWheelUp,
  TFrame_OnMouseWheelHorz,
  TFrame_OnMouseWheelLeft,
  TFrame_OnMouseWheelRight,
  TFrame_OnStartDock,
  TFrame_OnStartDrag,
  TFrame_TClass;