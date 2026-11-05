// constructor
function TStatusBar_Create(TheOwner: TComponent): TStatusBar; extdecl;
begin
  {$define handleExceptionID := 9900}
  handleExceptionBegin
  Result := TStatusBar.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TStatusBar_GetPanelIndexAt(AObj: TStatusBar; X: Integer; Y: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 9901}
  handleExceptionBegin
  Result := AObj.GetPanelIndexAt(X, Y);
  handleExceptionEnd
end;

// function
function TStatusBar_SizeGripEnabled(AObj: TStatusBar): LongBool; extdecl;
begin
  {$define handleExceptionID := 9902}
  handleExceptionBegin
  Result := AObj.SizeGripEnabled();
  handleExceptionEnd
end;

// function
function TStatusBar_UpdatingStatusBar(AObj: TStatusBar): LongBool; extdecl;
begin
  {$define handleExceptionID := 9903}
  handleExceptionBegin
  Result := AObj.UpdatingStatusBar();
  handleExceptionEnd
end;

// procedure
procedure TStatusBar_InvalidatePanel(AObj: TStatusBar; PanelIndex: integer; PanelParts: TPanelParts); extdecl;
begin
  {$define handleExceptionID := 9904}
  handleExceptionBegin
  AObj.InvalidatePanel(PanelIndex, PanelParts);
  handleExceptionEnd
end;

// procedure
procedure TStatusBar_BeginUpdate(AObj: TStatusBar); extdecl;
begin
  {$define handleExceptionID := 9905}
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

// procedure
procedure TStatusBar_EndUpdate(AObj: TStatusBar); extdecl;
begin
  {$define handleExceptionID := 9906}
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

// property
function TStatusBar_Canvas(AObj: TStatusBar): TCanvas; extdecl;
begin
  {$define handleExceptionID := 9907}
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

// property
function TStatusBar_AutoHint(ASet: LongBool; AObj: TStatusBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoHint := AValue
  end else
    Result := AObj.AutoHint;
  handleExceptionEnd
end;

// property
function TStatusBar_DragCursor(ASet: LongBool; AObj: TStatusBar; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 9909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TStatusBar_DragKind(ASet: LongBool; AObj: TStatusBar; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 9910}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TStatusBar_DragMode(ASet: LongBool; AObj: TStatusBar; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 9911}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TStatusBar_Panels(ASet: LongBool; AObj: TStatusBar; AValue: TStatusPanels): TStatusPanels; extdecl;
begin
  {$define handleExceptionID := 9912}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Panels := AValue
  end else
    Result := AObj.Panels;
  handleExceptionEnd
end;

// property
function TStatusBar_ParentColor(ASet: LongBool; AObj: TStatusBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9913}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TStatusBar_ParentFont(ASet: LongBool; AObj: TStatusBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9914}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TStatusBar_ParentShowHint(ASet: LongBool; AObj: TStatusBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9915}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
procedure TStatusBar_SimpleText(ASet: LongBool; AObj: TStatusBar; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 9916}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SimpleText := AValue
  end else
    StringBufferCreate(AObj.SimpleText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TStatusBar_SimplePanel(ASet: LongBool; AObj: TStatusBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9917}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SimplePanel := AValue
  end else
    Result := AObj.SimplePanel;
  handleExceptionEnd
end;

// property
function TStatusBar_SizeGrip(ASet: LongBool; AObj: TStatusBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9918}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SizeGrip := AValue
  end else
    Result := AObj.SizeGrip;
  handleExceptionEnd
end;

// property
function TStatusBar_UseSystemFont(ASet: LongBool; AObj: TStatusBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 9919}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UseSystemFont := AValue
  end else
    Result := AObj.UseSystemFont;
  handleExceptionEnd
end;

// event
procedure TStatusBar_OnContextPopup(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnCreatePanelClass(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSBCreatePanelClassEvent}
  {$DEFINE EventName := OnCreatePanelClass}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnDblClick(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnDragDrop(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnDragOver(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnDrawPanel(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDrawPanelEvent}
  {$DEFINE EventName := OnDrawPanel}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnEndDock(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnEndDrag(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnHint(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnHint}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnMouseDown(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnMouseEnter(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnMouseLeave(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnMouseMove(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnMouseUp(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnMouseWheel(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnMouseWheelDown(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnMouseWheelUp(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnStartDock(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TStatusBar_OnStartDrag(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TStatusBar_TClass(): TClass; extdecl;
begin
  Result := TStatusBar;
end;

exports
  TStatusBar_Create,
  TStatusBar_GetPanelIndexAt,
  TStatusBar_SizeGripEnabled,
  TStatusBar_UpdatingStatusBar,
  TStatusBar_InvalidatePanel,
  TStatusBar_BeginUpdate,
  TStatusBar_EndUpdate,
  TStatusBar_Canvas,
  TStatusBar_AutoHint,
  TStatusBar_DragCursor,
  TStatusBar_DragKind,
  TStatusBar_DragMode,
  TStatusBar_Panels,
  TStatusBar_ParentColor,
  TStatusBar_ParentFont,
  TStatusBar_ParentShowHint,
  TStatusBar_SimpleText,
  TStatusBar_SimplePanel,
  TStatusBar_SizeGrip,
  TStatusBar_UseSystemFont,
  TStatusBar_OnContextPopup,
  TStatusBar_OnCreatePanelClass,
  TStatusBar_OnDblClick,
  TStatusBar_OnDragDrop,
  TStatusBar_OnDragOver,
  TStatusBar_OnDrawPanel,
  TStatusBar_OnEndDock,
  TStatusBar_OnEndDrag,
  TStatusBar_OnHint,
  TStatusBar_OnMouseDown,
  TStatusBar_OnMouseEnter,
  TStatusBar_OnMouseLeave,
  TStatusBar_OnMouseMove,
  TStatusBar_OnMouseUp,
  TStatusBar_OnMouseWheel,
  TStatusBar_OnMouseWheelDown,
  TStatusBar_OnMouseWheelUp,
  TStatusBar_OnStartDock,
  TStatusBar_OnStartDrag,
  TStatusBar_TClass;