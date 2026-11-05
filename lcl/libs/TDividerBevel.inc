// constructor
function TDividerBevel_Create(AOwner: TComponent): TDividerBevel; extdecl;
begin
  {$define handleExceptionID := 29200}
  handleExceptionBegin
  Result := TDividerBevel.Create(AOwner);
  handleExceptionEnd
end;

// property
function TDividerBevel_BevelStyle(ASet: LongBool; AObj: TDividerBevel; AValue: TBevelStyle): TBevelStyle; extdecl;
begin
  {$define handleExceptionID := 29201}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BevelStyle := AValue
  end else
    Result := AObj.BevelStyle;
  handleExceptionEnd
end;

// property
function TDividerBevel_BevelWidth(ASet: LongBool; AObj: TDividerBevel; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BevelWidth := AValue
  end else
    Result := AObj.BevelWidth;
  handleExceptionEnd
end;

// property
function TDividerBevel_CaptionSpacing(ASet: LongBool; AObj: TDividerBevel; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29203}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CaptionSpacing := AValue
  end else
    Result := AObj.CaptionSpacing;
  handleExceptionEnd
end;

// property
function TDividerBevel_DragCursor(ASet: LongBool; AObj: TDividerBevel; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 29204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TDividerBevel_DragKind(ASet: LongBool; AObj: TDividerBevel; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 29205}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TDividerBevel_DragMode(ASet: LongBool; AObj: TDividerBevel; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 29206}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TDividerBevel_LeftIndent(ASet: LongBool; AObj: TDividerBevel; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29207}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LeftIndent := AValue
  end else
    Result := AObj.LeftIndent;
  handleExceptionEnd
end;

// property
function TDividerBevel_Orientation(ASet: LongBool; AObj: TDividerBevel; AValue: TTrackBarOrientation): TTrackBarOrientation; extdecl;
begin
  {$define handleExceptionID := 29208}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Orientation := AValue
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

// property
function TDividerBevel_ParentColor(ASet: LongBool; AObj: TDividerBevel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 29209}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TDividerBevel_ParentFont(ASet: LongBool; AObj: TDividerBevel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 29210}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TDividerBevel_ParentShowHint(ASet: LongBool; AObj: TDividerBevel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 29211}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TDividerBevel_Style(ASet: LongBool; AObj: TDividerBevel; AValue: TGrabStyle): TGrabStyle; extdecl;
begin
  {$define handleExceptionID := 29212}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

// property
function TDividerBevel_Transparent(ASet: LongBool; AObj: TDividerBevel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 29213}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Transparent := AValue
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

// event
procedure TDividerBevel_OnContextPopup(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TDividerBevel_OnDblClick(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TDividerBevel_OnDragDrop(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TDividerBevel_OnDragOver(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TDividerBevel_OnEndDrag(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TDividerBevel_OnMouseDown(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TDividerBevel_OnMouseEnter(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TDividerBevel_OnMouseLeave(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TDividerBevel_OnMouseMove(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TDividerBevel_OnMouseUp(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TDividerBevel_OnStartDrag(AObj: TDividerBevel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TDividerBevel_TClass(): TClass; extdecl;
begin
  Result := TDividerBevel;
end;

exports
  TDividerBevel_Create,
  TDividerBevel_BevelStyle,
  TDividerBevel_BevelWidth,
  TDividerBevel_CaptionSpacing,
  TDividerBevel_DragCursor,
  TDividerBevel_DragKind,
  TDividerBevel_DragMode,
  TDividerBevel_LeftIndent,
  TDividerBevel_Orientation,
  TDividerBevel_ParentColor,
  TDividerBevel_ParentFont,
  TDividerBevel_ParentShowHint,
  TDividerBevel_Style,
  TDividerBevel_Transparent,
  TDividerBevel_OnContextPopup,
  TDividerBevel_OnDblClick,
  TDividerBevel_OnDragDrop,
  TDividerBevel_OnDragOver,
  TDividerBevel_OnEndDrag,
  TDividerBevel_OnMouseDown,
  TDividerBevel_OnMouseEnter,
  TDividerBevel_OnMouseLeave,
  TDividerBevel_OnMouseMove,
  TDividerBevel_OnMouseUp,
  TDividerBevel_OnStartDrag,
  TDividerBevel_TClass;