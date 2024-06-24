
//constructor
function WinControl_Create(TheOwner: TComponent): TWinControl; extdecl;
begin
  handleExceptionBegin
  Result := TWinControl.Create(TheOwner);
  handleExceptionEnd
end;

//constructor
function WinControl_CreateParented(AParentWindow: HWND): TWinControl; extdecl;
begin
  handleExceptionBegin
  Result := TWinControl.CreateParented(AParentWindow);
  handleExceptionEnd
end;

//property
function WinControl_BorderWidth(AIsSet: LongBool; AObj: TWinControl; AValue: TBorderWidth): TBorderWidth; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BorderWidth := AValue;
  end else
    Result := AObj.BorderWidth;
  handleExceptionEnd
end;

//property
function WinControl_BoundsLockCount(AObj: TWinControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BoundsLockCount;
  handleExceptionEnd
end;

//property
function WinControl_Brush(AObj: TWinControl): TBrush; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Brush;
  handleExceptionEnd
end;

//property
function WinControl_CachedClientHeight(AObj: TWinControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CachedClientHeight;
  handleExceptionEnd
end;

//property
function WinControl_CachedClientWidth(AObj: TWinControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CachedClientWidth;
  handleExceptionEnd
end;

//property
function WinControl_ChildSizing(AIsSet: LongBool; AObj: TWinControl; AValue: TControlChildSizing): TControlChildSizing; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ChildSizing := AValue;
  end else
    Result := AObj.ChildSizing;
  handleExceptionEnd
end;

//property
function WinControl_ControlCount(AObj: TWinControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ControlCount;
  handleExceptionEnd
end;

//property
function WinControl_Controls(AObj: TWinControl; Index: Integer): TControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Controls[Index];
  handleExceptionEnd
end;

//property
function WinControl_DockClientCount(AObj: TWinControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DockClientCount;
  handleExceptionEnd
end;

//property
function WinControl_DockClients(AObj: TWinControl; Index: Integer): TControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.DockClients[Index];
  handleExceptionEnd
end;

//property
function WinControl_DockManager(AIsSet: LongBool; AObj: TWinControl; AValue: TDockManager): TDockManager; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DockManager := AValue;
  end else
    Result := AObj.DockManager;
  handleExceptionEnd
end;

//property
function WinControl_DockSite(AIsSet: LongBool; AObj: TWinControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DockSite := AValue;
  end else
    Result := AObj.DockSite;
  handleExceptionEnd
end;

//property
function WinControl_DoubleBuffered(AIsSet: LongBool; AObj: TWinControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DoubleBuffered := AValue;
  end else
    Result := AObj.DoubleBuffered;
  handleExceptionEnd
end;

//property
function WinControl_Handle(AIsSet: LongBool; AObj: TWinControl; AValue: HWND): HWND; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Handle := AValue;
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

//property
function WinControl_IsFlipped(AObj: TWinControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsFlipped;
  handleExceptionEnd
end;

//property
function WinControl_IsResizing(AObj: TWinControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsResizing;
  handleExceptionEnd
end;

//property
function WinControl_TabOrder(AIsSet: LongBool; AObj: TWinControl; AValue: TTabOrder): TTabOrder; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TabOrder := AValue;
  end else
    Result := AObj.TabOrder;
  handleExceptionEnd
end;

//property
function WinControl_TabStop(AIsSet: LongBool; AObj: TWinControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TabStop := AValue;
  end else
    Result := AObj.TabStop;
  handleExceptionEnd
end;

//property
function WinControl_ParentDoubleBuffered(AIsSet: LongBool; AObj: TWinControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentDoubleBuffered := AValue;
  end else
    Result := AObj.ParentDoubleBuffered;
  handleExceptionEnd
end;

//property
function WinControl_ParentWindow(AIsSet: LongBool; AObj: TWinControl; AValue: HWND): HWND; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentWindow := AValue;
  end else
    Result := AObj.ParentWindow;
  handleExceptionEnd
end;

//property
function WinControl_Showing(AObj: TWinControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Showing;
  handleExceptionEnd
end;

//property
function WinControl_UseDockManager(AIsSet: LongBool; AObj: TWinControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UseDockManager := AValue;
  end else
    Result := AObj.UseDockManager;
  handleExceptionEnd
end;

//property
procedure WinControl_DesignerDeleting(AObj: TWinControl; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DesignerDeleting := AValue;
  handleExceptionEnd
end;

//property
function WinControl_IsSpecialSubControl(AObj: TWinControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsSpecialSubControl;
  handleExceptionEnd
end;

//property
function WinControl_VisibleDockClientCount(AObj: TWinControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.VisibleDockClientCount;
  handleExceptionEnd
end;

//function
function WinControl_ControlAtPos(AObj: TWinControl; var Pos: TPoint; AllowDisabled: LongBool): TControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ControlAtPos(Pos, AllowDisabled);
  handleExceptionEnd
end;

//function
function WinControl_ControlAtPos1(AObj: TWinControl; var Pos: TPoint; AllowDisabled, AllowWinControls: LongBool): TControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
  handleExceptionEnd
end;

//function
function WinControl_ControlAtPos2(AObj: TWinControl; var Pos: TPoint; Flags: TControlAtPosFlags): TControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ControlAtPos(Pos, Flags);
  handleExceptionEnd
end;

//function
function WinControl_ContainsControl(AObj: TWinControl; Control: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ContainsControl(Control);
  handleExceptionEnd
end;

//function
function WinControl_ClientRectNeedsInterfaceUpdate(AObj: TWinControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClientRectNeedsInterfaceUpdate();
  handleExceptionEnd
end;

//function
function WinControl_CanFocus(AObj: TWinControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanFocus();
  handleExceptionEnd
end;

//function
function WinControl_CanSetFocus(AObj: TWinControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanSetFocus();
  handleExceptionEnd
end;

//function
function WinControl_GetControlIndex(AObj: TWinControl; AControl: TControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetControlIndex(AControl);
  handleExceptionEnd
end;

//function
function WinControl_Focused(AObj: TWinControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Focused();
  handleExceptionEnd
end;

//function
function WinControl_PerformTab(AObj: TWinControl; ForwardTab: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PerformTab(ForwardTab);
  handleExceptionEnd
end;

//function
function WinControl_FindChildControl(AObj: TWinControl; const ControlName: PChar): TControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindChildControl(ControlName);
  handleExceptionEnd
end;

//function
function WinControl_GetEnumeratorControls(AObj: TWinControl): TWinControlEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEnumeratorControls();
  handleExceptionEnd
end;

//function
function WinControl_GetEnumeratorControlsReverse(AObj: TWinControl): TWinControlEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEnumeratorControlsReverse();
  handleExceptionEnd
end;

//function
function WinControl_GetDockCaption(AObj: TWinControl; AControl: TControl): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetDockCaption(AControl));
  handleExceptionEnd
end;

//function
function WinControl_HandleAllocated(AObj: TWinControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HandleAllocated();
  handleExceptionEnd
end;

//function
function WinControl_BrushCreated(AObj: TWinControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BrushCreated();
  handleExceptionEnd
end;

//function
function WinControl_IntfUTF8KeyPress(AObj: TWinControl; var UTF8Key: TUTF8Char; RepeatCount: Integer; SystemKey: LongBool): LongBool; extdecl;
var
  RetUTF8Key: TUTF8Char;
begin
  handleExceptionBegin
  RetUTF8Key := UTF8Key;
  Result := AObj.IntfUTF8KeyPress(RetUTF8Key, RepeatCount, SystemKey);
  UTF8Key := RetUTF8Key;
  handleExceptionEnd
end;

//function
function WinControl_IntfGetDropFilesTarget(AObj: TWinControl): TWinControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IntfGetDropFilesTarget();
  handleExceptionEnd
end;

//function
function WinControl_Class(): TClass; extdecl;
begin
  Result := TWinControl;
end;

//procedure
procedure WinControl_BeginUpdateBounds(AObj: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdateBounds();
  handleExceptionEnd
end;

//procedure
procedure WinControl_EndUpdateBounds(AObj: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdateBounds();
  handleExceptionEnd
end;

//procedure
procedure WinControl_LockRealizeBounds(AObj: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.LockRealizeBounds();
  handleExceptionEnd
end;

//procedure
procedure WinControl_UnlockRealizeBounds(AObj: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.UnlockRealizeBounds();
  handleExceptionEnd
end;

//procedure
procedure WinControl_DoAdjustClientRectChange(AObj: TWinControl; const InvalidateRect: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DoAdjustClientRectChange(InvalidateRect);
  handleExceptionEnd
end;

//procedure
procedure WinControl_InvalidateClientRectCache(AObj: TWinControl; WithChildControls: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.InvalidateClientRectCache(WithChildControls);
  handleExceptionEnd
end;

//procedure
procedure WinControl_DisableAlign(AObj: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.DisableAlign();
  handleExceptionEnd
end;

//procedure
procedure WinControl_EnableAlign(AObj: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.EnableAlign();
  handleExceptionEnd
end;

//procedure
procedure WinControl_ReAlign(AObj: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.ReAlign();
  handleExceptionEnd
end;

//procedure
procedure WinControl_ScrollByWS(AObj: TWinControl; DeltaX, DeltaY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ScrollBy_WS(DeltaX, DeltaY);
  handleExceptionEnd
end;

//procedure
procedure WinControl_ScrollBy(AObj: TWinControl; DeltaX, DeltaY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ScrollBy(DeltaX, DeltaY);
  handleExceptionEnd
end;

//procedure
procedure WinControl_FixDesignFontsPPIWithChildren(AObj: TWinControl; const ADesignTimePPI: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.FixDesignFontsPPIWithChildren(ADesignTimePPI);
  handleExceptionEnd
end;

//procedure
procedure WinControl_DockDrop(AObj: TWinControl; DragDockObject: TDragDockObject; X, Y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.DockDrop(DragDockObject, X, Y);
  handleExceptionEnd
end;

//procedure
procedure WinControl_SetControlIndex(AObj: TWinControl; AControl: TControl; NewIndex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetControlIndex(AControl, NewIndex);
  handleExceptionEnd
end;

//procedure
procedure WinControl_SelectNext(AObj: TWinControl; CurControl: TWinControl; GoForward, CheckTabStop: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SelectNext(CurControl, GoForward, CheckTabStop);
  handleExceptionEnd
end;

//procedure
procedure WinControl_NotifyControls(AObj: TWinControl; Msg: Word); extdecl;
begin
  handleExceptionBegin
  AObj.NotifyControls(Msg);
  handleExceptionEnd
end;

//procedure
procedure WinControl_AddControl(AObj: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.AddControl();
  handleExceptionEnd
end;

//procedure
procedure WinControl_InsertControl(AObj: TWinControl; AControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.InsertControl(AControl);
  handleExceptionEnd
end;

//procedure
procedure WinControl_InsertControl1(AObj: TWinControl; AControl: TControl; Index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.InsertControl(AControl, Index);
  handleExceptionEnd
end;

//procedure
procedure WinControl_RemoveControl(AObj: TWinControl; AControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveControl(AControl);
  handleExceptionEnd
end;

//procedure
procedure WinControl_SetFocus(AObj: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.SetFocus();
  handleExceptionEnd
end;

//procedure
procedure WinControl_FlipChildren(AObj: TWinControl; AllLevels: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.FlipChildren(AllLevels);
  handleExceptionEnd
end;

//procedure
procedure WinControl_ScaleBy(AObj: TWinControl; Multiplier, Divider: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ScaleBy(Multiplier, Divider);
  handleExceptionEnd
end;

//procedure
procedure WinControl_UpdateDockCaption(AObj: TWinControl; Exclude: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateDockCaption(Exclude);
  handleExceptionEnd
end;

//procedure
procedure WinControl_HandleNeeded(AObj: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.HandleNeeded();
  handleExceptionEnd
end;

//procedure
procedure WinControl_EraseBackground(AObj: TWinControl; DC: HDC); extdecl;
begin
  handleExceptionBegin
  AObj.EraseBackground(DC);
  handleExceptionEnd
end;

//procedure
procedure WinControl_PaintTo(AObj: TWinControl; DC: HDC; X, Y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.PaintTo(DC, X, Y);
  handleExceptionEnd
end;

//procedure
procedure WinControl_PaintTo1(AObj: TWinControl; ACanvas: TCanvas; X, Y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.PaintTo(ACanvas, X, Y);
  handleExceptionEnd
end;

//procedure
procedure WinControl_SetShape(AObj: TWinControl; AShape: TBitmap); extdecl;
begin
  handleExceptionBegin
  AObj.SetShape(AShape);
  handleExceptionEnd
end;

//procedure
procedure WinControl_SetShape1(AObj: TWinControl; AShape: TRegion); extdecl;
begin
  handleExceptionBegin
  AObj.SetShape(AShape);
  handleExceptionEnd
end;

//property event
procedure WinControl_SetOnAlignInsertBefore(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTAlignInsertBeforeEvent}
  {$DEFINE EventName := OnAlignInsertBefore}
  EventMethodCode
end;

//property event
procedure WinControl_SetOnAlignPosition(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTAlignPositionEvent}
  {$DEFINE EventName := OnAlignPosition}
  EventMethodCode
end;

//property event
procedure WinControl_SetOnDockDrop(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDockDropEvent}
  {$DEFINE EventName := OnDockDrop}
  EventMethodCode
end;

//property event
procedure WinControl_SetOnDockOver(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDockOverEvent}
  {$DEFINE EventName := OnDockOver}
  EventMethodCode
end;

//property event
procedure WinControl_SetOnEnter(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEnter}
  EventMethodCode
end;

//property event
procedure WinControl_SetOnExit(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnExit}
  EventMethodCode
end;

//property event
procedure WinControl_SetOnKeyDown(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTKeyEvent}
  {$DEFINE EventName := OnKeyDown}
  EventMethodCode
end;

//property event
procedure WinControl_SetOnKeyPress(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTKeyPressEvent}
  {$DEFINE EventName := OnKeyPress}
  EventMethodCode
end;

//property event
procedure WinControl_SetOnKeyUp(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTKeyEvent}
  {$DEFINE EventName := OnKeyUp}
  EventMethodCode
end;

//property event
procedure WinControl_SetOnUnDock(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUnDockEvent}
  {$DEFINE EventName := OnUnDock}
  EventMethodCode
end;

//property event
procedure WinControl_SetOnUTF8KeyPress(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUTF8KeyPressEvent}
  {$DEFINE EventName := OnUTF8KeyPress}
  EventMethodCode
end;


exports
  WinControl_Create,
  WinControl_CreateParented,
  WinControl_BorderWidth,
  WinControl_BoundsLockCount,
  WinControl_Brush,
  WinControl_CachedClientHeight,
  WinControl_CachedClientWidth,
  WinControl_ChildSizing,
  WinControl_ControlCount,
  WinControl_Controls,
  WinControl_DockClientCount,
  WinControl_DockClients,
  WinControl_DockManager,
  WinControl_DockSite,
  WinControl_DoubleBuffered,
  WinControl_Handle,
  WinControl_IsFlipped,
  WinControl_IsResizing,
  WinControl_TabOrder,
  WinControl_TabStop,
  WinControl_ParentDoubleBuffered,
  WinControl_ParentWindow,
  WinControl_Showing,
  WinControl_UseDockManager,
  WinControl_DesignerDeleting,
  WinControl_IsSpecialSubControl,
  WinControl_VisibleDockClientCount,
  WinControl_ControlAtPos,
  WinControl_ControlAtPos1,
  WinControl_ControlAtPos2,
  WinControl_ContainsControl,
  WinControl_ClientRectNeedsInterfaceUpdate,
  WinControl_CanFocus,
  WinControl_CanSetFocus,
  WinControl_GetControlIndex,
  WinControl_Focused,
  WinControl_PerformTab,
  WinControl_FindChildControl,
  WinControl_GetEnumeratorControls,
  WinControl_GetEnumeratorControlsReverse,
  WinControl_GetDockCaption,
  WinControl_HandleAllocated,
  WinControl_BrushCreated,
  WinControl_IntfUTF8KeyPress,
  WinControl_IntfGetDropFilesTarget,
  WinControl_Class,
  WinControl_BeginUpdateBounds,
  WinControl_EndUpdateBounds,
  WinControl_LockRealizeBounds,
  WinControl_UnlockRealizeBounds,
  WinControl_DoAdjustClientRectChange,
  WinControl_InvalidateClientRectCache,
  WinControl_DisableAlign,
  WinControl_EnableAlign,
  WinControl_ReAlign,
  WinControl_ScrollByWS,
  WinControl_ScrollBy,
  WinControl_FixDesignFontsPPIWithChildren,
  WinControl_DockDrop,
  WinControl_SetControlIndex,
  WinControl_SelectNext,
  WinControl_NotifyControls,
  WinControl_AddControl,
  WinControl_InsertControl,
  WinControl_InsertControl1,
  WinControl_RemoveControl,
  WinControl_SetFocus,
  WinControl_FlipChildren,
  WinControl_ScaleBy,
  WinControl_UpdateDockCaption,
  WinControl_HandleNeeded,
  WinControl_EraseBackground,
  WinControl_PaintTo,
  WinControl_PaintTo1,
  WinControl_SetShape,
  WinControl_SetShape1,
  WinControl_SetOnAlignInsertBefore,
  WinControl_SetOnAlignPosition,
  WinControl_SetOnDockDrop,
  WinControl_SetOnDockOver,
  WinControl_SetOnEnter,
  WinControl_SetOnExit,
  WinControl_SetOnKeyDown,
  WinControl_SetOnKeyPress,
  WinControl_SetOnKeyUp,
  WinControl_SetOnUnDock,
  WinControl_SetOnUTF8KeyPress;