
//constructor
function TrackBar_Create(AOwner: TComponent): TTrackBar; extdecl;
begin
  handleExceptionBegin
  Result := TTrackBar.Create(AOwner);
  handleExceptionEnd
end;

//property
function TrackBar_DragCursor(AIsSet: LongBool; AObj: TTrackBar; AValue: TCursor): TCursor; extdecl;
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
function TrackBar_DragMode(AIsSet: LongBool; AObj: TTrackBar; AValue: TDragMode): TDragMode; extdecl;
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
function TrackBar_ParentColor(AIsSet: LongBool; AObj: TTrackBar; AValue: LongBool): LongBool; extdecl;
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
function TrackBar_ParentFont(AIsSet: LongBool; AObj: TTrackBar; AValue: LongBool): LongBool; extdecl;
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
function TrackBar_ParentShowHint(AIsSet: LongBool; AObj: TTrackBar; AValue: LongBool): LongBool; extdecl;
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
function TrackBar_Class(): TClass; extdecl;
begin
  Result := TTrackBar;
end;

//property event
procedure TrackBar_SetOnContextPopup(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure TrackBar_SetOnDragDrop(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure TrackBar_SetOnDragOver(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure TrackBar_SetOnEndDrag(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure TrackBar_SetOnMouseDown(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure TrackBar_SetOnMouseEnter(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure TrackBar_SetOnMouseLeave(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure TrackBar_SetOnMouseMove(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure TrackBar_SetOnMouseUp(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure TrackBar_SetOnMouseWheel(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure TrackBar_SetOnMouseWheelDown(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure TrackBar_SetOnMouseWheelUp(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure TrackBar_SetOnMouseWheelHorz(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure TrackBar_SetOnMouseWheelLeft(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure TrackBar_SetOnMouseWheelRight(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure TrackBar_SetOnStartDrag(AObj: TTrackBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  TrackBar_Create,
  TrackBar_DragCursor,
  TrackBar_DragMode,
  TrackBar_ParentColor,
  TrackBar_ParentFont,
  TrackBar_ParentShowHint,
  TrackBar_Class,
  TrackBar_SetOnContextPopup,
  TrackBar_SetOnDragDrop,
  TrackBar_SetOnDragOver,
  TrackBar_SetOnEndDrag,
  TrackBar_SetOnMouseDown,
  TrackBar_SetOnMouseEnter,
  TrackBar_SetOnMouseLeave,
  TrackBar_SetOnMouseMove,
  TrackBar_SetOnMouseUp,
  TrackBar_SetOnMouseWheel,
  TrackBar_SetOnMouseWheelDown,
  TrackBar_SetOnMouseWheelUp,
  TrackBar_SetOnMouseWheelHorz,
  TrackBar_SetOnMouseWheelLeft,
  TrackBar_SetOnMouseWheelRight,
  TrackBar_SetOnStartDrag;