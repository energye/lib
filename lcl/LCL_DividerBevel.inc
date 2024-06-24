
//constructor
function DividerBevel_Create(AOwner: TComponent): TDividerBevel; extdecl;
begin
  handleExceptionBegin
  Result := TDividerBevel.Create(AOwner);
  handleExceptionEnd
end;

//property
function DividerBevel_BevelStyle(AIsSet: LongBool; AObj: TDividerBevel; AValue: TBevelStyle): TBevelStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BevelStyle := AValue;
  end else
    Result := AObj.BevelStyle;
  handleExceptionEnd
end;

//property
function DividerBevel_BevelWidth(AIsSet: LongBool; AObj: TDividerBevel; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BevelWidth := AValue;
  end else
    Result := AObj.BevelWidth;
  handleExceptionEnd
end;

//property
function DividerBevel_CaptionSpacing(AIsSet: LongBool; AObj: TDividerBevel; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CaptionSpacing := AValue;
  end else
    Result := AObj.CaptionSpacing;
  handleExceptionEnd
end;

//property
function DividerBevel_DragCursor(AIsSet: LongBool; AObj: TDividerBevel; AValue: TCursor): TCursor; extdecl;
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
function DividerBevel_DragKind(AIsSet: LongBool; AObj: TDividerBevel; AValue: TDragKind): TDragKind; extdecl;
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
function DividerBevel_DragMode(AIsSet: LongBool; AObj: TDividerBevel; AValue: TDragMode): TDragMode; extdecl;
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
function DividerBevel_LeftIndent(AIsSet: LongBool; AObj: TDividerBevel; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LeftIndent := AValue;
  end else
    Result := AObj.LeftIndent;
  handleExceptionEnd
end;

//property
function DividerBevel_Orientation(AIsSet: LongBool; AObj: TDividerBevel; AValue: TTrackBarOrientation): TTrackBarOrientation; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Orientation := AValue;
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

//property
function DividerBevel_ParentColor(AIsSet: LongBool; AObj: TDividerBevel; AValue: LongBool): LongBool; extdecl;
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
function DividerBevel_ParentFont(AIsSet: LongBool; AObj: TDividerBevel; AValue: LongBool): LongBool; extdecl;
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
function DividerBevel_ParentShowHint(AIsSet: LongBool; AObj: TDividerBevel; AValue: LongBool): LongBool; extdecl;
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
function DividerBevel_Style(AIsSet: LongBool; AObj: TDividerBevel; AValue: TGrabStyle): TGrabStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Style := AValue;
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

//property
function DividerBevel_Transparent(AIsSet: LongBool; AObj: TDividerBevel; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Transparent := AValue;
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

//function
function DividerBevel_Class(): TClass; extdecl;
begin
  Result := TDividerBevel;
end;

//property event
procedure DividerBevel_SetOnContextPopup(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure DividerBevel_SetOnDblClick(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure DividerBevel_SetOnDragDrop(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure DividerBevel_SetOnDragOver(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure DividerBevel_SetOnEndDrag(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure DividerBevel_SetOnMouseDown(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure DividerBevel_SetOnMouseEnter(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure DividerBevel_SetOnMouseLeave(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure DividerBevel_SetOnMouseMove(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure DividerBevel_SetOnMouseUp(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure DividerBevel_SetOnStartDrag(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  DividerBevel_Create,
  DividerBevel_BevelStyle,
  DividerBevel_BevelWidth,
  DividerBevel_CaptionSpacing,
  DividerBevel_DragCursor,
  DividerBevel_DragKind,
  DividerBevel_DragMode,
  DividerBevel_LeftIndent,
  DividerBevel_Orientation,
  DividerBevel_ParentColor,
  DividerBevel_ParentFont,
  DividerBevel_ParentShowHint,
  DividerBevel_Style,
  DividerBevel_Transparent,
  DividerBevel_Class,
  DividerBevel_SetOnContextPopup,
  DividerBevel_SetOnDblClick,
  DividerBevel_SetOnDragDrop,
  DividerBevel_SetOnDragOver,
  DividerBevel_SetOnEndDrag,
  DividerBevel_SetOnMouseDown,
  DividerBevel_SetOnMouseEnter,
  DividerBevel_SetOnMouseLeave,
  DividerBevel_SetOnMouseMove,
  DividerBevel_SetOnMouseUp,
  DividerBevel_SetOnStartDrag;