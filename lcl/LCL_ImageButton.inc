
//constructor
function ImageButton_Create(AOwner: TComponent): TImageButton; extdecl;
begin
  handleExceptionBegin
  Result := TImageButton.Create(AOwner);
  handleExceptionEnd
end;

//property
function ImageButton_Caption(AIsSet: LongBool; AObj: TImageButton; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Caption := AValue;
  end else
    Result := ToPChar(AObj.Caption);
  handleExceptionEnd
end;

//property
function ImageButton_DragCursor(AIsSet: LongBool; AObj: TImageButton; AValue: TCursor): TCursor; extdecl;
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
function ImageButton_DragKind(AIsSet: LongBool; AObj: TImageButton; AValue: TDragKind): TDragKind; extdecl;
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
function ImageButton_DragMode(AIsSet: LongBool; AObj: TImageButton; AValue: TDragMode): TDragMode; extdecl;
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
function ImageButton_ImageCount(AIsSet: LongBool; AObj: TImageButton; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageCount := AValue;
  end else
    Result := AObj.ImageCount;
  handleExceptionEnd
end;

//property
function ImageButton_Orientation(AIsSet: LongBool; AObj: TImageButton; AValue: TImageOrientation): TImageOrientation; extdecl;
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
function ImageButton_ModalResult(AIsSet: LongBool; AObj: TImageButton; AValue: TModalResult): TModalResult; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ModalResult := AValue;
  end else
    Result := AObj.ModalResult;
  handleExceptionEnd
end;

//property
function ImageButton_ParentShowHint(AIsSet: LongBool; AObj: TImageButton; AValue: LongBool): LongBool; extdecl;
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
function ImageButton_ParentFont(AIsSet: LongBool; AObj: TImageButton; AValue: LongBool): LongBool; extdecl;
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
function ImageButton_Picture(AIsSet: LongBool; AObj: TImageButton; AValue: TPicture): TPicture; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Picture := AValue;
  end else
    Result := AObj.Picture;
  handleExceptionEnd
end;

//property
function ImageButton_ShowCaption(AIsSet: LongBool; AObj: TImageButton; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowCaption := AValue;
  end else
    Result := AObj.ShowCaption;
  handleExceptionEnd
end;

//property
function ImageButton_Wordwarp(AIsSet: LongBool; AObj: TImageButton; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Wordwarp := AValue;
  end else
    Result := AObj.Wordwarp;
  handleExceptionEnd
end;

//function
function ImageButton_Class(): TClass; extdecl;
begin
  Result := TImageButton;
end;

//procedure
procedure ImageButton_Click(AObj: TImageButton); extdecl;
begin
  handleExceptionBegin
  AObj.Click();
  handleExceptionEnd
end;

//property event
procedure ImageButton_SetOnContextPopup(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure ImageButton_SetOnDblClick(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure ImageButton_SetOnDragDrop(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure ImageButton_SetOnDragOver(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure ImageButton_SetOnEndDock(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure ImageButton_SetOnEndDrag(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure ImageButton_SetOnMouseDown(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure ImageButton_SetOnMouseEnter(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure ImageButton_SetOnMouseLeave(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure ImageButton_SetOnMouseMove(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure ImageButton_SetOnMouseUp(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;


exports
  ImageButton_Create,
  ImageButton_Caption,
  ImageButton_DragCursor,
  ImageButton_DragKind,
  ImageButton_DragMode,
  ImageButton_ImageCount,
  ImageButton_Orientation,
  ImageButton_ModalResult,
  ImageButton_ParentShowHint,
  ImageButton_ParentFont,
  ImageButton_Picture,
  ImageButton_ShowCaption,
  ImageButton_Wordwarp,
  ImageButton_Class,
  ImageButton_Click,
  ImageButton_SetOnContextPopup,
  ImageButton_SetOnDblClick,
  ImageButton_SetOnDragDrop,
  ImageButton_SetOnDragOver,
  ImageButton_SetOnEndDock,
  ImageButton_SetOnEndDrag,
  ImageButton_SetOnMouseDown,
  ImageButton_SetOnMouseEnter,
  ImageButton_SetOnMouseLeave,
  ImageButton_SetOnMouseMove,
  ImageButton_SetOnMouseUp;