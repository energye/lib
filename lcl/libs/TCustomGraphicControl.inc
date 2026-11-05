// constructor
function TCustomGraphicControl_Create(AOwner: TComponent): TCustomGraphicControl; extdecl;
begin
  {$define handleExceptionID := 32600}
  handleExceptionBegin
  Result := TCustomGraphicControl.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TCustomGraphicControl_InheritedWndProc(AObj: TCustomGraphicControl; var TheMessage: TLMessage); extdecl;
var
  OutTheMessage: TLMessage;
begin
  {$define handleExceptionID := 32601}
  handleExceptionBegin
  OutTheMessage := TheMessage;
  AObj.InheritedWndProc(OutTheMessage);
  TheMessage := OutTheMessage;
  handleExceptionEnd
end;

// property
function TCustomGraphicControl_ActionLink(ASet: LongBool; AObj: TCustomGraphicControl; AValue: TControlActionLink): TControlActionLink; extdecl;
begin
  {$define handleExceptionID := 32602}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ActionLink := AValue
  end else
    Result := AObj.ActionLink;
  handleExceptionEnd
end;

// property
function TCustomGraphicControl_DesktopFont(ASet: LongBool; AObj: TCustomGraphicControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 32603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DesktopFont := AValue
  end else
    Result := AObj.DesktopFont;
  handleExceptionEnd
end;

// property
function TCustomGraphicControl_DragCursor(ASet: LongBool; AObj: TCustomGraphicControl; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 32604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TCustomGraphicControl_DragKind(ASet: LongBool; AObj: TCustomGraphicControl; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 32605}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TCustomGraphicControl_DragMode(ASet: LongBool; AObj: TCustomGraphicControl; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 32606}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TCustomGraphicControl_MouseCapture(ASet: LongBool; AObj: TCustomGraphicControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 32607}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MouseCapture := AValue
  end else
    Result := AObj.MouseCapture;
  handleExceptionEnd
end;

// property
function TCustomGraphicControl_ParentBackground(ASet: LongBool; AObj: TCustomGraphicControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 32608}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentBackground := AValue
  end else
    Result := AObj.ParentBackground;
  handleExceptionEnd
end;

// property
function TCustomGraphicControl_ParentColor(ASet: LongBool; AObj: TCustomGraphicControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 32609}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TCustomGraphicControl_ParentFont(ASet: LongBool; AObj: TCustomGraphicControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 32610}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TCustomGraphicControl_ParentShowHint(ASet: LongBool; AObj: TCustomGraphicControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 32611}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
procedure TCustomGraphicControl_SessionProperties(ASet: LongBool; AObj: TCustomGraphicControl; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 32612}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SessionProperties := AValue
  end else
    StringBufferCreate(AObj.SessionProperties, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomGraphicControl_Text(ASet: LongBool; AObj: TCustomGraphicControl; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 32613}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Text := AValue
  end else
    StringBufferCreate(AObj.Text, AStrData, AStrSize);
  handleExceptionEnd
end;

// event
procedure TCustomGraphicControl_OnPaint(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnConstrainedResize(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTConstrainedResizeEvent}
  {$DEFINE EventName := OnConstrainedResize}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnContextPopup(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnDblClick(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnTripleClick(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnTripleClick}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnQuadClick(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnQuadClick}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnDragDrop(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnDragOver(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnEndDock(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnEndDrag(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnMouseDown(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnMouseMove(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnMouseUp(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnMouseEnter(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnMouseLeave(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnMouseWheel(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnMouseWheelDown(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnMouseWheelUp(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnMouseWheelHorz(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnMouseWheelLeft(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnMouseWheelRight(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnStartDock(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnStartDrag(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnEditingDone(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnTextChanged(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCustomGraphicNotify}
  {$DEFINE EventName := OnTextChanged}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnWndProc(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTWndMethod}
  {$DEFINE EventName := OnWndProc}
  LCLEventMethodCode
end;

// event
procedure TCustomGraphicControl_OnDestroy(AObj: TCustomGraphicControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCustomGraphicNotify}
  {$DEFINE EventName := OnDestroy}
  LCLEventMethodCode
end;

function TCustomGraphicControl_TClass(): TClass; extdecl;
begin
  Result := TCustomGraphicControl;
end;

exports
  TCustomGraphicControl_Create,
  TCustomGraphicControl_InheritedWndProc,
  TCustomGraphicControl_ActionLink,
  TCustomGraphicControl_DesktopFont,
  TCustomGraphicControl_DragCursor,
  TCustomGraphicControl_DragKind,
  TCustomGraphicControl_DragMode,
  TCustomGraphicControl_MouseCapture,
  TCustomGraphicControl_ParentBackground,
  TCustomGraphicControl_ParentColor,
  TCustomGraphicControl_ParentFont,
  TCustomGraphicControl_ParentShowHint,
  TCustomGraphicControl_SessionProperties,
  TCustomGraphicControl_Text,
  TCustomGraphicControl_OnPaint,
  TCustomGraphicControl_OnConstrainedResize,
  TCustomGraphicControl_OnContextPopup,
  TCustomGraphicControl_OnDblClick,
  TCustomGraphicControl_OnTripleClick,
  TCustomGraphicControl_OnQuadClick,
  TCustomGraphicControl_OnDragDrop,
  TCustomGraphicControl_OnDragOver,
  TCustomGraphicControl_OnEndDock,
  TCustomGraphicControl_OnEndDrag,
  TCustomGraphicControl_OnMouseDown,
  TCustomGraphicControl_OnMouseMove,
  TCustomGraphicControl_OnMouseUp,
  TCustomGraphicControl_OnMouseEnter,
  TCustomGraphicControl_OnMouseLeave,
  TCustomGraphicControl_OnMouseWheel,
  TCustomGraphicControl_OnMouseWheelDown,
  TCustomGraphicControl_OnMouseWheelUp,
  TCustomGraphicControl_OnMouseWheelHorz,
  TCustomGraphicControl_OnMouseWheelLeft,
  TCustomGraphicControl_OnMouseWheelRight,
  TCustomGraphicControl_OnStartDock,
  TCustomGraphicControl_OnStartDrag,
  TCustomGraphicControl_OnEditingDone,
  TCustomGraphicControl_OnTextChanged,
  TCustomGraphicControl_OnWndProc,
  TCustomGraphicControl_OnDestroy,
  TCustomGraphicControl_TClass;