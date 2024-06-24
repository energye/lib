
//constructor
function Label_Create(TheOwner: TComponent): TLabel; extdecl;
begin
  handleExceptionBegin
  Result := TLabel.Create(TheOwner);
  handleExceptionEnd
end;

//property
function Label_Alignment(AIsSet: LongBool; AObj: TLabel; AValue: TAlignment): TAlignment; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function Label_DragCursor(AIsSet: LongBool; AObj: TLabel; AValue: TCursor): TCursor; extdecl;
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
function Label_DragKind(AIsSet: LongBool; AObj: TLabel; AValue: TDragKind): TDragKind; extdecl;
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
function Label_DragMode(AIsSet: LongBool; AObj: TLabel; AValue: TDragMode): TDragMode; extdecl;
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
function Label_FocusControl(AIsSet: LongBool; AObj: TLabel; AValue: TWinControl): TWinControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FocusControl := AValue;
  end else
    Result := AObj.FocusControl;
  handleExceptionEnd
end;

//property
function Label_Layout(AIsSet: LongBool; AObj: TLabel; AValue: TTextLayout): TTextLayout; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Layout := AValue;
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

//property
function Label_OptimalFill(AIsSet: LongBool; AObj: TLabel; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.OptimalFill := AValue;
  end else
    Result := AObj.OptimalFill;
  handleExceptionEnd
end;

//property
function Label_ParentColor(AIsSet: LongBool; AObj: TLabel; AValue: LongBool): LongBool; extdecl;
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
function Label_ParentFont(AIsSet: LongBool; AObj: TLabel; AValue: LongBool): LongBool; extdecl;
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
function Label_ParentShowHint(AIsSet: LongBool; AObj: TLabel; AValue: LongBool): LongBool; extdecl;
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
function Label_ShowAccelChar(AIsSet: LongBool; AObj: TLabel; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowAccelChar := AValue;
  end else
    Result := AObj.ShowAccelChar;
  handleExceptionEnd
end;

//property
function Label_Transparent(AIsSet: LongBool; AObj: TLabel; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Transparent := AValue;
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

//property
function Label_WordWrap(AIsSet: LongBool; AObj: TLabel; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WordWrap := AValue;
  end else
    Result := AObj.WordWrap;
  handleExceptionEnd
end;

//function
function Label_Class(): TClass; extdecl;
begin
  Result := TLabel;
end;

//property event
procedure Label_SetOnContextPopup(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure Label_SetOnDblClick(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure Label_SetOnDragDrop(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure Label_SetOnDragOver(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure Label_SetOnEndDrag(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure Label_SetOnMouseDown(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure Label_SetOnMouseEnter(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure Label_SetOnMouseLeave(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure Label_SetOnMouseMove(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure Label_SetOnMouseUp(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure Label_SetOnMouseWheel(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure Label_SetOnMouseWheelDown(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure Label_SetOnMouseWheelUp(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure Label_SetOnMouseWheelHorz(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure Label_SetOnMouseWheelLeft(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure Label_SetOnMouseWheelRight(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure Label_SetOnStartDrag(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  Label_Create,
  Label_Alignment,
  Label_DragCursor,
  Label_DragKind,
  Label_DragMode,
  Label_FocusControl,
  Label_Layout,
  Label_OptimalFill,
  Label_ParentColor,
  Label_ParentFont,
  Label_ParentShowHint,
  Label_ShowAccelChar,
  Label_Transparent,
  Label_WordWrap,
  Label_Class,
  Label_SetOnContextPopup,
  Label_SetOnDblClick,
  Label_SetOnDragDrop,
  Label_SetOnDragOver,
  Label_SetOnEndDrag,
  Label_SetOnMouseDown,
  Label_SetOnMouseEnter,
  Label_SetOnMouseLeave,
  Label_SetOnMouseMove,
  Label_SetOnMouseUp,
  Label_SetOnMouseWheel,
  Label_SetOnMouseWheelDown,
  Label_SetOnMouseWheelUp,
  Label_SetOnMouseWheelHorz,
  Label_SetOnMouseWheelLeft,
  Label_SetOnMouseWheelRight,
  Label_SetOnStartDrag;