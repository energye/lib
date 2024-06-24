
//constructor
function StatusBar_Create(TheOwner: TComponent): TStatusBar; extdecl;
begin
  handleExceptionBegin
  Result := TStatusBar.Create(TheOwner);
  handleExceptionEnd
end;

//property
function StatusBar_Canvas(AObj: TStatusBar): TCanvas; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

//property
function StatusBar_AutoHint(AIsSet: LongBool; AObj: TStatusBar; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoHint := AValue;
  end else
    Result := AObj.AutoHint;
  handleExceptionEnd
end;

//property
function StatusBar_DragCursor(AIsSet: LongBool; AObj: TStatusBar; AValue: TCursor): TCursor; extdecl;
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
function StatusBar_DragKind(AIsSet: LongBool; AObj: TStatusBar; AValue: TDragKind): TDragKind; extdecl;
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
function StatusBar_DragMode(AIsSet: LongBool; AObj: TStatusBar; AValue: TDragMode): TDragMode; extdecl;
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
function StatusBar_Panels(AIsSet: LongBool; AObj: TStatusBar; AValue: TStatusPanels): TStatusPanels; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Panels := AValue;
  end else
    Result := AObj.Panels;
  handleExceptionEnd
end;

//property
function StatusBar_ParentColor(AIsSet: LongBool; AObj: TStatusBar; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//property
function StatusBar_ParentFont(AIsSet: LongBool; AObj: TStatusBar; AValue: LongBool): LongBool; extdecl;
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
function StatusBar_ParentShowHint(AIsSet: LongBool; AObj: TStatusBar; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//property
function StatusBar_SimpleText(AIsSet: LongBool; AObj: TStatusBar; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SimpleText := AValue;
  end else
    Result := ToPChar(AObj.SimpleText);
  handleExceptionEnd
end;

//property
function StatusBar_SimplePanel(AIsSet: LongBool; AObj: TStatusBar; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SimplePanel := AValue;
  end else
    Result := AObj.SimplePanel;
  handleExceptionEnd
end;

//property
function StatusBar_SizeGrip(AIsSet: LongBool; AObj: TStatusBar; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SizeGrip := AValue;
  end else
    Result := AObj.SizeGrip;
  handleExceptionEnd
end;

//property
function StatusBar_UseSystemFont(AIsSet: LongBool; AObj: TStatusBar; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UseSystemFont := AValue;
  end else
    Result := AObj.UseSystemFont;
  handleExceptionEnd
end;

//function
function StatusBar_GetPanelIndexAt(AObj: TStatusBar; X, Y: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetPanelIndexAt(X, Y);
  handleExceptionEnd
end;

//function
function StatusBar_SizeGripEnabled(AObj: TStatusBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SizeGripEnabled();
  handleExceptionEnd
end;

//function
function StatusBar_UpdatingStatusBar(AObj: TStatusBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UpdatingStatusBar();
  handleExceptionEnd
end;

//function
function StatusBar_Class(): TClass; extdecl;
begin
  Result := TStatusBar;
end;

//procedure
procedure StatusBar_InvalidatePanel(AObj: TStatusBar; PanelIndex: integer; PanelParts: TPanelParts); extdecl;
begin
  handleExceptionBegin
  AObj.InvalidatePanel(PanelIndex, PanelParts);
  handleExceptionEnd
end;

//procedure
procedure StatusBar_BeginUpdate(AObj: TStatusBar); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdate();
  handleExceptionEnd
end;

//procedure
procedure StatusBar_EndUpdate(AObj: TStatusBar); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate();
  handleExceptionEnd
end;

//property event
procedure StatusBar_SetOnContextPopup(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnCreatePanelClass(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSBCreatePanelClassEvent}
  {$DEFINE EventName := OnCreatePanelClass}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnDblClick(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnDragDrop(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnDragOver(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnDrawPanel(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDrawPanelEvent}
  {$DEFINE EventName := OnDrawPanel}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnEndDock(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnEndDrag(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnHint(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnHint}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnMouseDown(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnMouseEnter(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnMouseLeave(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnMouseMove(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnMouseUp(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnMouseWheel(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnMouseWheelDown(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnMouseWheelUp(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnStartDock(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure StatusBar_SetOnStartDrag(AObj: TStatusBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  StatusBar_Create,
  StatusBar_Canvas,
  StatusBar_AutoHint,
  StatusBar_DragCursor,
  StatusBar_DragKind,
  StatusBar_DragMode,
  StatusBar_Panels,
  StatusBar_ParentColor,
  StatusBar_ParentFont,
  StatusBar_ParentShowHint,
  StatusBar_SimpleText,
  StatusBar_SimplePanel,
  StatusBar_SizeGrip,
  StatusBar_UseSystemFont,
  StatusBar_GetPanelIndexAt,
  StatusBar_SizeGripEnabled,
  StatusBar_UpdatingStatusBar,
  StatusBar_Class,
  StatusBar_InvalidatePanel,
  StatusBar_BeginUpdate,
  StatusBar_EndUpdate,
  StatusBar_SetOnContextPopup,
  StatusBar_SetOnCreatePanelClass,
  StatusBar_SetOnDblClick,
  StatusBar_SetOnDragDrop,
  StatusBar_SetOnDragOver,
  StatusBar_SetOnDrawPanel,
  StatusBar_SetOnEndDock,
  StatusBar_SetOnEndDrag,
  StatusBar_SetOnHint,
  StatusBar_SetOnMouseDown,
  StatusBar_SetOnMouseEnter,
  StatusBar_SetOnMouseLeave,
  StatusBar_SetOnMouseMove,
  StatusBar_SetOnMouseUp,
  StatusBar_SetOnMouseWheel,
  StatusBar_SetOnMouseWheelDown,
  StatusBar_SetOnMouseWheelUp,
  StatusBar_SetOnStartDock,
  StatusBar_SetOnStartDrag;