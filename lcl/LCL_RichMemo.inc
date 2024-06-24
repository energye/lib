
//constructor
function RichMemo_Create(AOwner: TComponent): TRichMemo; extdecl;
begin
  handleExceptionBegin
  Result := TRichMemo.Create(AOwner);
  handleExceptionEnd
end;

//property
function RichMemo_DragCursor(AIsSet: LongBool; AObj: TRichMemo; AValue: TCursor): TCursor; extdecl;
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
function RichMemo_DragKind(AIsSet: LongBool; AObj: TRichMemo; AValue: TDragKind): TDragKind; extdecl;
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
function RichMemo_DragMode(AIsSet: LongBool; AObj: TRichMemo; AValue: TDragMode): TDragMode; extdecl;
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
function RichMemo_ParentColor(AIsSet: LongBool; AObj: TRichMemo; AValue: LongBool): LongBool; extdecl;
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
function RichMemo_ParentFont(AIsSet: LongBool; AObj: TRichMemo; AValue: LongBool): LongBool; extdecl;
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
function RichMemo_ParentShowHint(AIsSet: LongBool; AObj: TRichMemo; AValue: LongBool): LongBool; extdecl;
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
function RichMemo_Rtf(AIsSet: LongBool; AObj: TRichMemo; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Rtf := AValue;
  end else
    Result := ToPChar(AObj.Rtf);
  handleExceptionEnd
end;

//function
function RichMemo_Class(): TClass; extdecl;
begin
  Result := TRichMemo;
end;

//property event
procedure RichMemo_SetOnContextPopup(AObj: TRichMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure RichMemo_SetOnDblClick(AObj: TRichMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure RichMemo_SetOnDragDrop(AObj: TRichMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure RichMemo_SetOnDragOver(AObj: TRichMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure RichMemo_SetOnEditingDone(AObj: TRichMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEditingDone}
  EventMethodCode
end;

//property event
procedure RichMemo_SetOnEndDrag(AObj: TRichMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure RichMemo_SetOnMouseDown(AObj: TRichMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure RichMemo_SetOnMouseEnter(AObj: TRichMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure RichMemo_SetOnMouseLeave(AObj: TRichMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure RichMemo_SetOnMouseMove(AObj: TRichMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure RichMemo_SetOnMouseUp(AObj: TRichMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure RichMemo_SetOnMouseWheel(AObj: TRichMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure RichMemo_SetOnMouseWheelDown(AObj: TRichMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure RichMemo_SetOnMouseWheelUp(AObj: TRichMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure RichMemo_SetOnStartDrag(AObj: TRichMemo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  RichMemo_Create,
  RichMemo_DragCursor,
  RichMemo_DragKind,
  RichMemo_DragMode,
  RichMemo_ParentColor,
  RichMemo_ParentFont,
  RichMemo_ParentShowHint,
  RichMemo_Rtf,
  RichMemo_Class,
  RichMemo_SetOnContextPopup,
  RichMemo_SetOnDblClick,
  RichMemo_SetOnDragDrop,
  RichMemo_SetOnDragOver,
  RichMemo_SetOnEditingDone,
  RichMemo_SetOnEndDrag,
  RichMemo_SetOnMouseDown,
  RichMemo_SetOnMouseEnter,
  RichMemo_SetOnMouseLeave,
  RichMemo_SetOnMouseMove,
  RichMemo_SetOnMouseUp,
  RichMemo_SetOnMouseWheel,
  RichMemo_SetOnMouseWheelDown,
  RichMemo_SetOnMouseWheelUp,
  RichMemo_SetOnStartDrag;