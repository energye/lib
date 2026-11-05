// constructor
function TSynEdit_Create(AOwner: TComponent): TSynEdit; extdecl;
begin
  {$define handleExceptionID := 35500}
  handleExceptionBegin
  Result := TSynEdit.Create(AOwner);
  handleExceptionEnd
end;

// property
function TSynEdit_ParentColor(ASet: LongBool; AObj: TSynEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 35501}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TSynEdit_ParentFont(ASet: LongBool; AObj: TSynEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 35502}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TSynEdit_ParentShowHint(ASet: LongBool; AObj: TSynEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 35503}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// event
procedure TSynEdit_OnContextPopup(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnDblClick(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnTripleClick(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnTripleClick}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnQuadClick(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnQuadClick}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnDragDrop(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnDragOver(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnEndDock(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnEndDrag(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnMouseDown(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnMouseMove(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnMouseUp(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnClickLink(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnClickLink}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnMouseLink(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynMouseLinkEvent}
  {$DEFINE EventName := OnMouseLink}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnMouseEnter(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnMouseLeave(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnMouseWheel(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnMouseWheelDown(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnMouseWheelUp(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnStartDock(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TSynEdit_OnStartDrag(AObj: TSynEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TSynEdit_TClass(): TClass; extdecl;
begin
  Result := TSynEdit;
end;

exports
  TSynEdit_Create,
  TSynEdit_ParentColor,
  TSynEdit_ParentFont,
  TSynEdit_ParentShowHint,
  TSynEdit_OnContextPopup,
  TSynEdit_OnDblClick,
  TSynEdit_OnTripleClick,
  TSynEdit_OnQuadClick,
  TSynEdit_OnDragDrop,
  TSynEdit_OnDragOver,
  TSynEdit_OnEndDock,
  TSynEdit_OnEndDrag,
  TSynEdit_OnMouseDown,
  TSynEdit_OnMouseMove,
  TSynEdit_OnMouseUp,
  TSynEdit_OnClickLink,
  TSynEdit_OnMouseLink,
  TSynEdit_OnMouseEnter,
  TSynEdit_OnMouseLeave,
  TSynEdit_OnMouseWheel,
  TSynEdit_OnMouseWheelDown,
  TSynEdit_OnMouseWheelUp,
  TSynEdit_OnStartDock,
  TSynEdit_OnStartDrag,
  TSynEdit_TClass;