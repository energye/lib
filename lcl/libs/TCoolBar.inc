// constructor
function TCoolBar_Create(AOwner: TComponent): TCoolBar; extdecl;
begin
  {$define handleExceptionID := 20100}
  handleExceptionBegin
  Result := TCoolBar.Create(AOwner);
  handleExceptionEnd
end;

// property
function TCoolBar_DragCursor(ASet: LongBool; AObj: TCoolBar; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 20101}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TCoolBar_DragKind(ASet: LongBool; AObj: TCoolBar; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 20102}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TCoolBar_DragMode(ASet: LongBool; AObj: TCoolBar; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 20103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TCoolBar_ParentColor(ASet: LongBool; AObj: TCoolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TCoolBar_ParentFont(ASet: LongBool; AObj: TCoolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TCoolBar_ParentShowHint(ASet: LongBool; AObj: TCoolBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 20106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TCoolBar_OnContextPopup(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TCoolBar_OnDblClick(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TCoolBar_OnDragDrop(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TCoolBar_OnDragOver(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TCoolBar_OnEndDock(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TCoolBar_OnEndDrag(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TCoolBar_OnGetSiteInfo(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  LCLEventMethodCode
end;

// event
procedure TCoolBar_OnMouseDown(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TCoolBar_OnMouseEnter(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TCoolBar_OnMouseLeave(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TCoolBar_OnMouseMove(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TCoolBar_OnMouseUp(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TCoolBar_OnMouseWheel(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TCoolBar_OnMouseWheelDown(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TCoolBar_OnMouseWheelUp(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TCoolBar_OnStartDock(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TCoolBar_OnStartDrag(AObj: TCoolBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TCoolBar_TClass(): TClass; extdecl;
begin
  Result := TCoolBar;
end;

exports
  TCoolBar_Create,
  TCoolBar_DragCursor,
  TCoolBar_DragKind,
  TCoolBar_DragMode,
  TCoolBar_ParentColor,
  TCoolBar_ParentFont,
  TCoolBar_ParentShowHint,
  TCoolBar_OnContextPopup,
  TCoolBar_OnDblClick,
  TCoolBar_OnDragDrop,
  TCoolBar_OnDragOver,
  TCoolBar_OnEndDock,
  TCoolBar_OnEndDrag,
  TCoolBar_OnGetSiteInfo,
  TCoolBar_OnMouseDown,
  TCoolBar_OnMouseEnter,
  TCoolBar_OnMouseLeave,
  TCoolBar_OnMouseMove,
  TCoolBar_OnMouseUp,
  TCoolBar_OnMouseWheel,
  TCoolBar_OnMouseWheelDown,
  TCoolBar_OnMouseWheelUp,
  TCoolBar_OnStartDock,
  TCoolBar_OnStartDrag,
  TCoolBar_TClass;