// constructor
function TToolButton_Create(TheOwner: TComponent): TToolButton; extdecl;
begin
  {$define handleExceptionID := 15700}
  handleExceptionBegin
  Result := TToolButton.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TToolButton_CheckMenuDropdown(AObj: TToolButton): LongBool; extdecl;
begin
  {$define handleExceptionID := 15701}
  handleExceptionBegin
  Result := AObj.CheckMenuDropdown();
  handleExceptionEnd
end;

// function
function TToolButton_PointInArrow(AObj: TToolButton; const X: Integer; const Y: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 15702}
  handleExceptionBegin
  Result := AObj.PointInArrow(X, Y);
  handleExceptionEnd
end;

// procedure
procedure TToolButton_Click(AObj: TToolButton); extdecl;
begin
  {$define handleExceptionID := 15703}
  handleExceptionBegin
  AObj.Click();
  handleExceptionEnd
end;

// procedure
procedure TToolButton_ArrowClick(AObj: TToolButton); extdecl;
begin
  {$define handleExceptionID := 15704}
  handleExceptionBegin
  AObj.ArrowClick();
  handleExceptionEnd
end;

// procedure
procedure TToolButton_GetCurrentIcon(AObj: TToolButton; var ImageList: TCustomImageList; var TheIndex: integer; var TheEffect: TGraphicsDrawEffect); extdecl;
var
  OutImageList: TCustomImageList;
  OutTheIndex: integer;
  OutTheEffect: TGraphicsDrawEffect;
begin
  {$define handleExceptionID := 15705}
  handleExceptionBegin
  OutImageList := ImageList;
  OutTheIndex := TheIndex;
  OutTheEffect := TheEffect;
  AObj.GetCurrentIcon(OutImageList, OutTheIndex, OutTheEffect);
  ImageList := OutImageList;
  TheIndex := OutTheIndex;
  TheEffect := OutTheEffect;
  handleExceptionEnd
end;

// property
function TToolButton_Index(AObj: TToolButton): Integer; extdecl;
begin
  {$define handleExceptionID := 15706}
  handleExceptionBegin
  Result := AObj.Index;
  handleExceptionEnd
end;

// property
function TToolButton_AllowAllUp(ASet: LongBool; AObj: TToolButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15707}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowAllUp := AValue
  end else
    Result := AObj.AllowAllUp;
  handleExceptionEnd
end;

// property
function TToolButton_Down(ASet: LongBool; AObj: TToolButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15708}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Down := AValue
  end else
    Result := AObj.Down;
  handleExceptionEnd
end;

// property
function TToolButton_DragCursor(ASet: LongBool; AObj: TToolButton; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 15709}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TToolButton_DragKind(ASet: LongBool; AObj: TToolButton; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 15710}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TToolButton_DragMode(ASet: LongBool; AObj: TToolButton; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 15711}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TToolButton_DropdownMenu(ASet: LongBool; AObj: TToolButton; AValue: TPopupMenu): TPopupMenu; extdecl;
begin
  {$define handleExceptionID := 15712}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DropdownMenu := AValue
  end else
    Result := AObj.DropdownMenu;
  handleExceptionEnd
end;

// property
function TToolButton_Grouped(ASet: LongBool; AObj: TToolButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15713}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Grouped := AValue
  end else
    Result := AObj.Grouped;
  handleExceptionEnd
end;

// property
function TToolButton_ImageIndex(ASet: LongBool; AObj: TToolButton; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 15714}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TToolButton_Indeterminate(ASet: LongBool; AObj: TToolButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15715}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Indeterminate := AValue
  end else
    Result := AObj.Indeterminate;
  handleExceptionEnd
end;

// property
function TToolButton_Marked(ASet: LongBool; AObj: TToolButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15716}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Marked := AValue
  end else
    Result := AObj.Marked;
  handleExceptionEnd
end;

// property
function TToolButton_MenuItem(ASet: LongBool; AObj: TToolButton; AValue: TMenuItem): TMenuItem; extdecl;
begin
  {$define handleExceptionID := 15717}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MenuItem := AValue
  end else
    Result := AObj.MenuItem;
  handleExceptionEnd
end;

// property
function TToolButton_ParentShowHint(ASet: LongBool; AObj: TToolButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15718}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TToolButton_ShowCaption(ASet: LongBool; AObj: TToolButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15719}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowCaption := AValue
  end else
    Result := AObj.ShowCaption;
  handleExceptionEnd
end;

// property
function TToolButton_Style(ASet: LongBool; AObj: TToolButton; AValue: TToolButtonStyle): TToolButtonStyle; extdecl;
begin
  {$define handleExceptionID := 15720}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

// property
function TToolButton_Wrap(ASet: LongBool; AObj: TToolButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 15721}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Wrap := AValue
  end else
    Result := AObj.Wrap;
  handleExceptionEnd
end;

// event
procedure TToolButton_OnArrowClick(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnArrowClick}
  LCLEventMethodCode
end;

// event
procedure TToolButton_OnContextPopup(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TToolButton_OnDragDrop(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TToolButton_OnDragOver(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TToolButton_OnEndDock(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TToolButton_OnEndDrag(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TToolButton_OnMouseDown(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TToolButton_OnMouseEnter(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TToolButton_OnMouseLeave(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TToolButton_OnMouseMove(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TToolButton_OnMouseUp(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TToolButton_OnMouseWheel(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TToolButton_OnMouseWheelDown(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TToolButton_OnMouseWheelUp(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TToolButton_OnStartDock(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TToolButton_OnStartDrag(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TToolButton_TClass(): TClass; extdecl;
begin
  Result := TToolButton;
end;

exports
  TToolButton_Create,
  TToolButton_CheckMenuDropdown,
  TToolButton_PointInArrow,
  TToolButton_Click,
  TToolButton_ArrowClick,
  TToolButton_GetCurrentIcon,
  TToolButton_Index,
  TToolButton_AllowAllUp,
  TToolButton_Down,
  TToolButton_DragCursor,
  TToolButton_DragKind,
  TToolButton_DragMode,
  TToolButton_DropdownMenu,
  TToolButton_Grouped,
  TToolButton_ImageIndex,
  TToolButton_Indeterminate,
  TToolButton_Marked,
  TToolButton_MenuItem,
  TToolButton_ParentShowHint,
  TToolButton_ShowCaption,
  TToolButton_Style,
  TToolButton_Wrap,
  TToolButton_OnArrowClick,
  TToolButton_OnContextPopup,
  TToolButton_OnDragDrop,
  TToolButton_OnDragOver,
  TToolButton_OnEndDock,
  TToolButton_OnEndDrag,
  TToolButton_OnMouseDown,
  TToolButton_OnMouseEnter,
  TToolButton_OnMouseLeave,
  TToolButton_OnMouseMove,
  TToolButton_OnMouseUp,
  TToolButton_OnMouseWheel,
  TToolButton_OnMouseWheelDown,
  TToolButton_OnMouseWheelUp,
  TToolButton_OnStartDock,
  TToolButton_OnStartDrag,
  TToolButton_TClass;