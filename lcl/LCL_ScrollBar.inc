
//constructor
function ScrollBar_Create(AOwner: TComponent): TScrollBar; extdecl;
begin
  handleExceptionBegin
  Result := TScrollBar.Create(AOwner);
  handleExceptionEnd
end;

//property
function ScrollBar_DragCursor(AIsSet: LongBool; AObj: TScrollBar; AValue: TCursor): TCursor; extdecl;
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
function ScrollBar_DragKind(AIsSet: LongBool; AObj: TScrollBar; AValue: TDragKind): TDragKind; extdecl;
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
function ScrollBar_DragMode(AIsSet: LongBool; AObj: TScrollBar; AValue: TDragMode): TDragMode; extdecl;
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
function ScrollBar_ParentShowHint(AIsSet: LongBool; AObj: TScrollBar; AValue: LongBool): LongBool; extdecl;
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
function ScrollBar_Class(): TClass; extdecl;
begin
  Result := TScrollBar;
end;

//property event
procedure ScrollBar_SetOnContextPopup(AObj: TScrollBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure ScrollBar_SetOnDragDrop(AObj: TScrollBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure ScrollBar_SetOnDragOver(AObj: TScrollBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure ScrollBar_SetOnEndDrag(AObj: TScrollBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure ScrollBar_SetOnStartDrag(AObj: TScrollBar; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  ScrollBar_Create,
  ScrollBar_DragCursor,
  ScrollBar_DragKind,
  ScrollBar_DragMode,
  ScrollBar_ParentShowHint,
  ScrollBar_Class,
  ScrollBar_SetOnContextPopup,
  ScrollBar_SetOnDragDrop,
  ScrollBar_SetOnDragOver,
  ScrollBar_SetOnEndDrag,
  ScrollBar_SetOnStartDrag;