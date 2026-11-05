// constructor
function TLabel_Create(TheOwner: TComponent): TLabel; extdecl;
begin
  {$define handleExceptionID := 3900}
  handleExceptionBegin
  Result := TLabel.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TLabel_Alignment(ASet: LongBool; AObj: TLabel; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 3901}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TLabel_DragCursor(ASet: LongBool; AObj: TLabel; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 3902}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TLabel_DragKind(ASet: LongBool; AObj: TLabel; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 3903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TLabel_DragMode(ASet: LongBool; AObj: TLabel; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 3904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TLabel_FocusControl(ASet: LongBool; AObj: TLabel; AValue: TWinControl): TWinControl; extdecl;
begin
  {$define handleExceptionID := 3905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FocusControl := AValue
  end else
    Result := AObj.FocusControl;
  handleExceptionEnd
end;

// property
function TLabel_Layout(ASet: LongBool; AObj: TLabel; AValue: TTextLayout): TTextLayout; extdecl;
begin
  {$define handleExceptionID := 3906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Layout := AValue
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

// property
function TLabel_OptimalFill(ASet: LongBool; AObj: TLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3907}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OptimalFill := AValue
  end else
    Result := AObj.OptimalFill;
  handleExceptionEnd
end;

// property
function TLabel_ParentColor(ASet: LongBool; AObj: TLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TLabel_ParentFont(ASet: LongBool; AObj: TLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TLabel_ParentShowHint(ASet: LongBool; AObj: TLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3910}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TLabel_ShowAccelChar(ASet: LongBool; AObj: TLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3911}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowAccelChar := AValue
  end else
    Result := AObj.ShowAccelChar;
  handleExceptionEnd
end;

// property
function TLabel_Transparent(ASet: LongBool; AObj: TLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3912}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Transparent := AValue
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

// property
function TLabel_WordWrap(ASet: LongBool; AObj: TLabel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3913}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WordWrap := AValue
  end else
    Result := AObj.WordWrap;
  handleExceptionEnd
end;

// event
procedure TLabel_OnContextPopup(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TLabel_OnDblClick(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TLabel_OnDragDrop(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TLabel_OnDragOver(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TLabel_OnEndDrag(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TLabel_OnMouseDown(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TLabel_OnMouseEnter(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TLabel_OnMouseLeave(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TLabel_OnMouseMove(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TLabel_OnMouseUp(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TLabel_OnMouseWheel(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TLabel_OnMouseWheelDown(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TLabel_OnMouseWheelUp(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TLabel_OnMouseWheelHorz(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheelHorz}
  LCLEventMethodCode
end;

// event
procedure TLabel_OnMouseWheelLeft(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelLeft}
  LCLEventMethodCode
end;

// event
procedure TLabel_OnMouseWheelRight(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelRight}
  LCLEventMethodCode
end;

// event
procedure TLabel_OnStartDrag(AObj: TLabel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TLabel_TClass(): TClass; extdecl;
begin
  Result := TLabel;
end;

exports
  TLabel_Create,
  TLabel_Alignment,
  TLabel_DragCursor,
  TLabel_DragKind,
  TLabel_DragMode,
  TLabel_FocusControl,
  TLabel_Layout,
  TLabel_OptimalFill,
  TLabel_ParentColor,
  TLabel_ParentFont,
  TLabel_ParentShowHint,
  TLabel_ShowAccelChar,
  TLabel_Transparent,
  TLabel_WordWrap,
  TLabel_OnContextPopup,
  TLabel_OnDblClick,
  TLabel_OnDragDrop,
  TLabel_OnDragOver,
  TLabel_OnEndDrag,
  TLabel_OnMouseDown,
  TLabel_OnMouseEnter,
  TLabel_OnMouseLeave,
  TLabel_OnMouseMove,
  TLabel_OnMouseUp,
  TLabel_OnMouseWheel,
  TLabel_OnMouseWheelDown,
  TLabel_OnMouseWheelUp,
  TLabel_OnMouseWheelHorz,
  TLabel_OnMouseWheelLeft,
  TLabel_OnMouseWheelRight,
  TLabel_OnStartDrag,
  TLabel_TClass;