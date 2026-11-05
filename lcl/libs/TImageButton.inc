// constructor
function TImageButton_Create(AOwner: TComponent): TImageButton; extdecl;
begin
  {$define handleExceptionID := 17700}
  handleExceptionBegin
  Result := TImageButton.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TImageButton_Click(AObj: TImageButton); extdecl;
begin
  {$define handleExceptionID := 17701}
  handleExceptionBegin
  AObj.Click();
  handleExceptionEnd
end;

// property
procedure TImageButton_CaptionToStr(ASet: LongBool; AObj: TImageButton; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17702}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Caption := AValue
  end else
    StringBufferCreate(AObj.Caption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TImageButton_DragCursor(ASet: LongBool; AObj: TImageButton; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 17703}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TImageButton_DragKind(ASet: LongBool; AObj: TImageButton; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 17704}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TImageButton_DragMode(ASet: LongBool; AObj: TImageButton; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 17705}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TImageButton_ImageCount(ASet: LongBool; AObj: TImageButton; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 17706}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageCount := AValue
  end else
    Result := AObj.ImageCount;
  handleExceptionEnd
end;

// property
function TImageButton_Orientation(ASet: LongBool; AObj: TImageButton; AValue: TImageOrientation): TImageOrientation; extdecl;
begin
  {$define handleExceptionID := 17707}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Orientation := AValue
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

// property
function TImageButton_ModalResult(ASet: LongBool; AObj: TImageButton; AValue: TModalResult): TModalResult; extdecl;
begin
  {$define handleExceptionID := 17708}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ModalResult := AValue
  end else
    Result := AObj.ModalResult;
  handleExceptionEnd
end;

// property
function TImageButton_ParentShowHint(ASet: LongBool; AObj: TImageButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17709}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TImageButton_ParentFont(ASet: LongBool; AObj: TImageButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17710}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TImageButton_Picture(ASet: LongBool; AObj: TImageButton; AValue: TPicture): TPicture; extdecl;
begin
  {$define handleExceptionID := 17711}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Picture := AValue
  end else
    Result := AObj.Picture;
  handleExceptionEnd
end;

// property
function TImageButton_ShowCaption(ASet: LongBool; AObj: TImageButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17712}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowCaption := AValue
  end else
    Result := AObj.ShowCaption;
  handleExceptionEnd
end;

// property
function TImageButton_Wordwarp(ASet: LongBool; AObj: TImageButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17713}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Wordwarp := AValue
  end else
    Result := AObj.Wordwarp;
  handleExceptionEnd
end;

// event
procedure TImageButton_OnContextPopup(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TImageButton_OnDblClick(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TImageButton_OnDragDrop(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TImageButton_OnDragOver(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TImageButton_OnEndDock(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TImageButton_OnEndDrag(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TImageButton_OnMouseDown(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TImageButton_OnMouseEnter(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TImageButton_OnMouseLeave(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TImageButton_OnMouseMove(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TImageButton_OnMouseUp(AObj: TImageButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

function TImageButton_TClass(): TClass; extdecl;
begin
  Result := TImageButton;
end;

exports
  TImageButton_Create,
  TImageButton_Click,
  TImageButton_CaptionToStr,
  TImageButton_DragCursor,
  TImageButton_DragKind,
  TImageButton_DragMode,
  TImageButton_ImageCount,
  TImageButton_Orientation,
  TImageButton_ModalResult,
  TImageButton_ParentShowHint,
  TImageButton_ParentFont,
  TImageButton_Picture,
  TImageButton_ShowCaption,
  TImageButton_Wordwarp,
  TImageButton_OnContextPopup,
  TImageButton_OnDblClick,
  TImageButton_OnDragDrop,
  TImageButton_OnDragOver,
  TImageButton_OnEndDock,
  TImageButton_OnEndDrag,
  TImageButton_OnMouseDown,
  TImageButton_OnMouseEnter,
  TImageButton_OnMouseLeave,
  TImageButton_OnMouseMove,
  TImageButton_OnMouseUp,
  TImageButton_TClass;