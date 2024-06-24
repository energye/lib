
//constructor
function Image_Create(AOwner: TComponent): TImage; extdecl;
begin
  handleExceptionBegin
  Result := TImage.Create(AOwner);
  handleExceptionEnd
end;

//property
function Image_DragCursor(AIsSet: LongBool; AObj: TImage; AValue: TCursor): TCursor; extdecl;
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
function Image_DragMode(AIsSet: LongBool; AObj: TImage; AValue: TDragMode): TDragMode; extdecl;
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
function Image_ParentShowHint(AIsSet: LongBool; AObj: TImage; AValue: LongBool): LongBool; extdecl;
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
function Image_Class(): TClass; extdecl;
begin
  Result := TImage;
end;

//property event
procedure Image_SetOnContextPopup(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure Image_SetOnDblClick(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure Image_SetOnDragDrop(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure Image_SetOnDragOver(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure Image_SetOnEndDrag(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure Image_SetOnMouseWheelHorz(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  EventMethodCode
end;

//property event
procedure Image_SetOnMouseWheelLeft(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  EventMethodCode
end;

//property event
procedure Image_SetOnMouseWheelRight(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  EventMethodCode
end;

//property event
procedure Image_SetOnPaint(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  EventMethodCode
end;

//property event
procedure Image_SetOnStartDrag(AObj: TImage; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  Image_Create,
  Image_DragCursor,
  Image_DragMode,
  Image_ParentShowHint,
  Image_Class,
  Image_SetOnContextPopup,
  Image_SetOnDblClick,
  Image_SetOnDragDrop,
  Image_SetOnDragOver,
  Image_SetOnEndDrag,
  Image_SetOnMouseWheelHorz,
  Image_SetOnMouseWheelLeft,
  Image_SetOnMouseWheelRight,
  Image_SetOnPaint,
  Image_SetOnStartDrag;