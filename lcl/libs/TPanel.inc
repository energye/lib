// constructor
function TPanel_Create(TheOwner: TComponent): TPanel; extdecl;
begin
  {$define handleExceptionID := 4500}
  handleExceptionBegin
  Result := TPanel.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TPanel_DragCursor(ASet: LongBool; AObj: TPanel; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 4501}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TPanel_DragKind(ASet: LongBool; AObj: TPanel; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 4502}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TPanel_DragMode(ASet: LongBool; AObj: TPanel; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 4503}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TPanel_ParentFont(ASet: LongBool; AObj: TPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4504}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TPanel_ParentShowHint(ASet: LongBool; AObj: TPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4505}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TPanel_ShowAccelChar(ASet: LongBool; AObj: TPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4506}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowAccelChar := AValue
  end else
    Result := AObj.ShowAccelChar;
  handleExceptionEnd
end;

// property
function TPanel_VerticalAlignment(ASet: LongBool; AObj: TPanel; AValue: TVerticalAlignment): TVerticalAlignment; extdecl;
begin
  {$define handleExceptionID := 4507}
  handleExceptionBegin
  if ASet then
  begin
    AObj.VerticalAlignment := AValue
  end else
    Result := AObj.VerticalAlignment;
  handleExceptionEnd
end;

// property
function TPanel_Wordwrap(ASet: LongBool; AObj: TPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4508}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Wordwrap := AValue
  end else
    Result := AObj.Wordwrap;
  handleExceptionEnd
end;

// event
procedure TPanel_OnContextPopup(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnDblClick(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnDragDrop(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnDragOver(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnEndDock(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnEndDrag(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnGetSiteInfo(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnGetDockCaption(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetDockCaptionEvent}
  {$DEFINE EventName := OnGetDockCaption}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnMouseDown(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnMouseEnter(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnMouseLeave(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnMouseMove(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnMouseUp(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnMouseWheel(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnMouseWheelDown(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnMouseWheelUp(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnMouseWheelHorz(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnMouseWheelLeft(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnMouseWheelRight(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnStartDock(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TPanel_OnStartDrag(AObj: TPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TPanel_TClass(): TClass; extdecl;
begin
  Result := TPanel;
end;

exports
  TPanel_Create,
  TPanel_DragCursor,
  TPanel_DragKind,
  TPanel_DragMode,
  TPanel_ParentFont,
  TPanel_ParentShowHint,
  TPanel_ShowAccelChar,
  TPanel_VerticalAlignment,
  TPanel_Wordwrap,
  TPanel_OnContextPopup,
  TPanel_OnDblClick,
  TPanel_OnDragDrop,
  TPanel_OnDragOver,
  TPanel_OnEndDock,
  TPanel_OnEndDrag,
  TPanel_OnGetSiteInfo,
  TPanel_OnGetDockCaption,
  TPanel_OnMouseDown,
  TPanel_OnMouseEnter,
  TPanel_OnMouseLeave,
  TPanel_OnMouseMove,
  TPanel_OnMouseUp,
  TPanel_OnMouseWheel,
  TPanel_OnMouseWheelDown,
  TPanel_OnMouseWheelUp,
  TPanel_OnMouseWheelHorz,
  TPanel_OnMouseWheelLeft,
  TPanel_OnMouseWheelRight,
  TPanel_OnStartDock,
  TPanel_OnStartDrag,
  TPanel_TClass;