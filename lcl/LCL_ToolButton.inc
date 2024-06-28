
//constructor
function ToolButton_Create(TheOwner: TComponent): TToolButton; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TToolButton.Create(TheOwner);
  handleExceptionEnd
end;

//property
function ToolButton_Index(AObj: TToolButton): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Index'}
  handleExceptionBegin
  Result := AObj.Index;
  handleExceptionEnd
end;

//property
function ToolButton_AllowAllUp(AIsSet: LongBool; AObj: TToolButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AllowAllUp'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowAllUp := AValue;
  end else
    Result := AObj.AllowAllUp;
  handleExceptionEnd
end;

//property
function ToolButton_Down(AIsSet: LongBool; AObj: TToolButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Down'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Down := AValue;
  end else
    Result := AObj.Down;
  handleExceptionEnd
end;

//property
function ToolButton_DragCursor(AIsSet: LongBool; AObj: TToolButton; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionFuncName :='DragCursor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragCursor := AValue;
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

//property
function ToolButton_DragKind(AIsSet: LongBool; AObj: TToolButton; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionFuncName :='DragKind'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragKind := AValue;
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

//property
function ToolButton_DragMode(AIsSet: LongBool; AObj: TToolButton; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionFuncName :='DragMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragMode := AValue;
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

//property
function ToolButton_DropdownMenu(AIsSet: LongBool; AObj: TToolButton; AValue: TPopupMenu): TPopupMenu; extdecl;
begin
  {$define handleExceptionFuncName :='DropdownMenu'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DropdownMenu := AValue;
  end else
    Result := AObj.DropdownMenu;
  handleExceptionEnd
end;

//property
function ToolButton_Grouped(AIsSet: LongBool; AObj: TToolButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Grouped'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Grouped := AValue;
  end else
    Result := AObj.Grouped;
  handleExceptionEnd
end;

//property
function ToolButton_ImageIndex(AIsSet: LongBool; AObj: TToolButton; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionFuncName :='ImageIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageIndex := AValue;
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

//property
function ToolButton_Indeterminate(AIsSet: LongBool; AObj: TToolButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Indeterminate'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Indeterminate := AValue;
  end else
    Result := AObj.Indeterminate;
  handleExceptionEnd
end;

//property
function ToolButton_Marked(AIsSet: LongBool; AObj: TToolButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Marked'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Marked := AValue;
  end else
    Result := AObj.Marked;
  handleExceptionEnd
end;

//property
function ToolButton_MenuItem(AIsSet: LongBool; AObj: TToolButton; AValue: TMenuItem): TMenuItem; extdecl;
begin
  {$define handleExceptionFuncName :='MenuItem'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MenuItem := AValue;
  end else
    Result := AObj.MenuItem;
  handleExceptionEnd
end;

//property
function ToolButton_ParentShowHint(AIsSet: LongBool; AObj: TToolButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentShowHint'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//property
function ToolButton_ShowCaption(AIsSet: LongBool; AObj: TToolButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ShowCaption'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowCaption := AValue;
  end else
    Result := AObj.ShowCaption;
  handleExceptionEnd
end;

//property
function ToolButton_Style(AIsSet: LongBool; AObj: TToolButton; AValue: TToolButtonStyle): TToolButtonStyle; extdecl;
begin
  {$define handleExceptionFuncName :='Style'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Style := AValue;
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

//property
function ToolButton_Wrap(AIsSet: LongBool; AObj: TToolButton; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Wrap'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Wrap := AValue;
  end else
    Result := AObj.Wrap;
  handleExceptionEnd
end;

//function
function ToolButton_CheckMenuDropdown(AObj: TToolButton): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CheckMenuDropdown'}
  handleExceptionBegin
  Result := AObj.CheckMenuDropdown();
  handleExceptionEnd
end;

//function
function ToolButton_PointInArrow(AObj: TToolButton; const X, Y: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='PointInArrow'}
  handleExceptionBegin
  Result := AObj.PointInArrow(X, Y);
  handleExceptionEnd
end;

//function
function ToolButton_Class(): TClass; extdecl;
begin
  Result := TToolButton;
end;

//procedure
procedure ToolButton_Click(AObj: TToolButton); extdecl;
begin
  {$define handleExceptionFuncName :='Click'}
  handleExceptionBegin
  AObj.Click();
  handleExceptionEnd
end;

//procedure
procedure ToolButton_ArrowClick(AObj: TToolButton); extdecl;
begin
  {$define handleExceptionFuncName :='ArrowClick'}
  handleExceptionBegin
  AObj.ArrowClick();
  handleExceptionEnd
end;

//procedure
procedure ToolButton_GetCurrentIcon(AObj: TToolButton; var ImageList: TCustomImageList; var TheIndex: integer; var TheEffect: TGraphicsDrawEffect); extdecl;
var
  RetImageList: TCustomImageList;
  RetTheIndex: integer;
  RetTheEffect: TGraphicsDrawEffect;
begin
  {$define handleExceptionFuncName :='GetCurrentIcon'}
  handleExceptionBegin
  RetImageList := ImageList;
  RetTheIndex := TheIndex;
  RetTheEffect := TheEffect;
  AObj.GetCurrentIcon(RetImageList, RetTheIndex, RetTheEffect);
  ImageList := RetImageList;
  TheIndex := RetTheIndex;
  TheEffect := RetTheEffect;
  handleExceptionEnd
end;

//property event
procedure ToolButton_SetOnArrowClick(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnArrowClick}
  EventMethodCode
end;

//property event
procedure ToolButton_SetOnContextPopup(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure ToolButton_SetOnDragDrop(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure ToolButton_SetOnDragOver(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure ToolButton_SetOnEndDock(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure ToolButton_SetOnEndDrag(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure ToolButton_SetOnMouseDown(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure ToolButton_SetOnMouseEnter(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure ToolButton_SetOnMouseLeave(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure ToolButton_SetOnMouseMove(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure ToolButton_SetOnMouseUp(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure ToolButton_SetOnMouseWheel(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure ToolButton_SetOnMouseWheelDown(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure ToolButton_SetOnMouseWheelUp(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure ToolButton_SetOnStartDock(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure ToolButton_SetOnStartDrag(AObj: TToolButton; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  ToolButton_Create,
  ToolButton_Index,
  ToolButton_AllowAllUp,
  ToolButton_Down,
  ToolButton_DragCursor,
  ToolButton_DragKind,
  ToolButton_DragMode,
  ToolButton_DropdownMenu,
  ToolButton_Grouped,
  ToolButton_ImageIndex,
  ToolButton_Indeterminate,
  ToolButton_Marked,
  ToolButton_MenuItem,
  ToolButton_ParentShowHint,
  ToolButton_ShowCaption,
  ToolButton_Style,
  ToolButton_Wrap,
  ToolButton_CheckMenuDropdown,
  ToolButton_PointInArrow,
  ToolButton_Class,
  ToolButton_Click,
  ToolButton_ArrowClick,
  ToolButton_GetCurrentIcon,
  ToolButton_SetOnArrowClick,
  ToolButton_SetOnContextPopup,
  ToolButton_SetOnDragDrop,
  ToolButton_SetOnDragOver,
  ToolButton_SetOnEndDock,
  ToolButton_SetOnEndDrag,
  ToolButton_SetOnMouseDown,
  ToolButton_SetOnMouseEnter,
  ToolButton_SetOnMouseLeave,
  ToolButton_SetOnMouseMove,
  ToolButton_SetOnMouseUp,
  ToolButton_SetOnMouseWheel,
  ToolButton_SetOnMouseWheelDown,
  ToolButton_SetOnMouseWheelUp,
  ToolButton_SetOnStartDock,
  ToolButton_SetOnStartDrag;