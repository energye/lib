// constructor
function TWinControl_Create(TheOwner: TComponent): TWinControl; extdecl;
begin
  {$define handleExceptionID := 800}
  handleExceptionBegin
  Result := TWinControl.Create(TheOwner);
  handleExceptionEnd
end;

// constructor
function TWinControl_CreateParented(AParentWindow: HWND): TWinControl; extdecl;
begin
  {$define handleExceptionID := 801}
  handleExceptionBegin
  Result := TWinControl.CreateParented(AParentWindow);
  handleExceptionEnd
end;

// function
function TWinControl_ControlAtPosWithPointBool(AObj: TWinControl; var Pos: TPoint; AllowDisabled: LongBool): TControl; extdecl;
begin
  {$define handleExceptionID := 802}
  handleExceptionBegin
  Result := AObj.ControlAtPos(Pos, AllowDisabled);
  handleExceptionEnd
end;

// function
function TWinControl_ControlAtPosWithPointBoolX2(AObj: TWinControl; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  {$define handleExceptionID := 803}
  handleExceptionBegin
  Result := AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
  handleExceptionEnd
end;

// function
function TWinControl_ControlAtPosWithPointControlAtPosFlags(AObj: TWinControl; var Pos: TPoint; Flags: TControlAtPosFlags): TControl; extdecl;
begin
  {$define handleExceptionID := 804}
  handleExceptionBegin
  Result := AObj.ControlAtPos(Pos, Flags);
  handleExceptionEnd
end;

// function
function TWinControl_ContainsControl(AObj: TWinControl; Control: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 805}
  handleExceptionBegin
  Result := AObj.ContainsControl(Control);
  handleExceptionEnd
end;

// function
function TWinControl_ClientRectNeedsInterfaceUpdate(AObj: TWinControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 806}
  handleExceptionBegin
  Result := AObj.ClientRectNeedsInterfaceUpdate();
  handleExceptionEnd
end;

// function static
function TWinControl_CreateParentedControl(AParentWindow: HWND): TWinControl; extdecl;
begin
  Result := TWinControl.CreateParentedControl(AParentWindow);
end;

// function
function TWinControl_CanFocus(AObj: TWinControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 807}
  handleExceptionBegin
  Result := AObj.CanFocus();
  handleExceptionEnd
end;

// function
function TWinControl_CanSetFocus(AObj: TWinControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 808}
  handleExceptionBegin
  Result := AObj.CanSetFocus();
  handleExceptionEnd
end;

// function
function TWinControl_GetControlIndex(AObj: TWinControl; AControl: TControl): Integer; extdecl;
begin
  {$define handleExceptionID := 809}
  handleExceptionBegin
  Result := AObj.GetControlIndex(AControl);
  handleExceptionEnd
end;

// function
function TWinControl_Focused(AObj: TWinControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 810}
  handleExceptionBegin
  Result := AObj.Focused();
  handleExceptionEnd
end;

// function
function TWinControl_PerformTab(AObj: TWinControl; ForwardTab: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 811}
  handleExceptionBegin
  Result := AObj.PerformTab(ForwardTab);
  handleExceptionEnd
end;

// function
function TWinControl_FindChildControl(AObj: TWinControl; const ControlName: PChar): TControl; extdecl;
begin
  {$define handleExceptionID := 812}
  handleExceptionBegin
  Result := AObj.FindChildControl(ControlName);
  handleExceptionEnd
end;

// function
function TWinControl_GetEnumeratorControls(AObj: TWinControl): TWinControlEnumerator; extdecl;
begin
  {$define handleExceptionID := 813}
  handleExceptionBegin
  Result := AObj.GetEnumeratorControls();
  handleExceptionEnd
end;

// function
function TWinControl_GetEnumeratorControlsReverse(AObj: TWinControl): TWinControlEnumerator; extdecl;
begin
  {$define handleExceptionID := 814}
  handleExceptionBegin
  Result := AObj.GetEnumeratorControlsReverse();
  handleExceptionEnd
end;

// function
procedure TWinControl_GetDockCaption(AObj: TWinControl; AControl: TControl;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 815}
  handleExceptionBegin
  StringBufferCreate(AObj.GetDockCaption(AControl), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TWinControl_HandleAllocated(AObj: TWinControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 816}
  handleExceptionBegin
  Result := AObj.HandleAllocated();
  handleExceptionEnd
end;

// function
function TWinControl_BrushCreated(AObj: TWinControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 817}
  handleExceptionBegin
  Result := AObj.BrushCreated();
  handleExceptionEnd
end;

// function
function TWinControl_IntfUTF8KeyPress(AObj: TWinControl; var UTF8Key: PChar; RepeatCount: Integer; SystemKey: LongBool): LongBool; extdecl;
var
  OutUTF8Key: TUTF8Char;
begin
  {$define handleExceptionID := 818}
  handleExceptionBegin
  OutUTF8Key := UTF8Key;
  Result := AObj.IntfUTF8KeyPress(OutUTF8Key, RepeatCount, SystemKey);
  UTF8Key := ToPChar(OutUTF8Key);
  handleExceptionEnd
end;

// function
function TWinControl_IntfGetDropFilesTarget(AObj: TWinControl): TWinControl; extdecl;
begin
  {$define handleExceptionID := 819}
  handleExceptionBegin
  Result := AObj.IntfGetDropFilesTarget();
  handleExceptionEnd
end;

// procedure
procedure TWinControl_BeginUpdateBounds(AObj: TWinControl); extdecl;
begin
  {$define handleExceptionID := 820}
  handleExceptionBegin
  AObj.BeginUpdateBounds();
  handleExceptionEnd
end;

// procedure
procedure TWinControl_EndUpdateBounds(AObj: TWinControl); extdecl;
begin
  {$define handleExceptionID := 821}
  handleExceptionBegin
  AObj.EndUpdateBounds();
  handleExceptionEnd
end;

// procedure
procedure TWinControl_LockRealizeBounds(AObj: TWinControl); extdecl;
begin
  {$define handleExceptionID := 822}
  handleExceptionBegin
  AObj.LockRealizeBounds();
  handleExceptionEnd
end;

// procedure
procedure TWinControl_UnlockRealizeBounds(AObj: TWinControl); extdecl;
begin
  {$define handleExceptionID := 823}
  handleExceptionBegin
  AObj.UnlockRealizeBounds();
  handleExceptionEnd
end;

// procedure
procedure TWinControl_DoAdjustClientRectChange(AObj: TWinControl; const InvalidateRect: LongBool); extdecl;
begin
  {$define handleExceptionID := 824}
  handleExceptionBegin
  AObj.DoAdjustClientRectChange(InvalidateRect);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_InvalidateClientRectCache(AObj: TWinControl; WithChildControls: LongBool); extdecl;
begin
  {$define handleExceptionID := 825}
  handleExceptionBegin
  AObj.InvalidateClientRectCache(WithChildControls);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_DisableAlign(AObj: TWinControl); extdecl;
begin
  {$define handleExceptionID := 826}
  handleExceptionBegin
  AObj.DisableAlign();
  handleExceptionEnd
end;

// procedure
procedure TWinControl_EnableAlign(AObj: TWinControl); extdecl;
begin
  {$define handleExceptionID := 827}
  handleExceptionBegin
  AObj.EnableAlign();
  handleExceptionEnd
end;

// procedure
procedure TWinControl_ReAlign(AObj: TWinControl); extdecl;
begin
  {$define handleExceptionID := 828}
  handleExceptionBegin
  AObj.ReAlign();
  handleExceptionEnd
end;

// procedure
procedure TWinControl_ScrollBy_WS(AObj: TWinControl; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  {$define handleExceptionID := 829}
  handleExceptionBegin
  AObj.ScrollBy_WS(DeltaX, DeltaY);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_ScrollBy(AObj: TWinControl; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  {$define handleExceptionID := 830}
  handleExceptionBegin
  AObj.ScrollBy(DeltaX, DeltaY);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_FixDesignFontsPPIWithChildren(AObj: TWinControl; const ADesignTimePPI: Integer); extdecl;
begin
  {$define handleExceptionID := 831}
  handleExceptionBegin
  AObj.FixDesignFontsPPIWithChildren(ADesignTimePPI);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_DockDrop(AObj: TWinControl; DragDockObject: TDragDockObject; X: Integer; Y: Integer); extdecl;
begin
  {$define handleExceptionID := 832}
  handleExceptionBegin
  AObj.DockDrop(DragDockObject, X, Y);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_SetControlIndex(AObj: TWinControl; AControl: TControl; NewIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 833}
  handleExceptionBegin
  AObj.SetControlIndex(AControl, NewIndex);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_SelectNext(AObj: TWinControl; CurControl: TWinControl; GoForward: LongBool; CheckTabStop: LongBool); extdecl;
begin
  {$define handleExceptionID := 834}
  handleExceptionBegin
  AObj.SelectNext(CurControl, GoForward, CheckTabStop);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_BroadCast(AObj: TWinControl; var ToAllMessage: Pointer); extdecl;
var
  OutToAllMessage: PPointer;
begin
  {$define handleExceptionID := 835}
  handleExceptionBegin
  OutToAllMessage := ToAllMessage;
  AObj.BroadCast(OutToAllMessage^);
  ToAllMessage := OutToAllMessage;
  handleExceptionEnd
end;

// procedure
procedure TWinControl_NotifyControls(AObj: TWinControl; Msg: Word); extdecl;
begin
  {$define handleExceptionID := 836}
  handleExceptionBegin
  AObj.NotifyControls(Msg);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_AddControl(AObj: TWinControl); extdecl;
begin
  {$define handleExceptionID := 837}
  handleExceptionBegin
  AObj.AddControl();
  handleExceptionEnd
end;

// procedure
procedure TWinControl_InsertControlWithControl(AObj: TWinControl; AControl: TControl); extdecl;
begin
  {$define handleExceptionID := 838}
  handleExceptionBegin
  AObj.InsertControl(AControl);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_InsertControlWithControlInt(AObj: TWinControl; AControl: TControl; Index: Integer); extdecl;
begin
  {$define handleExceptionID := 839}
  handleExceptionBegin
  AObj.InsertControl(AControl, Index);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_RemoveControl(AObj: TWinControl; AControl: TControl); extdecl;
begin
  {$define handleExceptionID := 840}
  handleExceptionBegin
  AObj.RemoveControl(AControl);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_SetFocus(AObj: TWinControl); extdecl;
begin
  {$define handleExceptionID := 841}
  handleExceptionBegin
  AObj.SetFocus();
  handleExceptionEnd
end;

// procedure
procedure TWinControl_FlipChildren(AObj: TWinControl; AllLevels: LongBool); extdecl;
begin
  {$define handleExceptionID := 842}
  handleExceptionBegin
  AObj.FlipChildren(AllLevels);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_ScaleBy(AObj: TWinControl; Multiplier: Integer; Divider: Integer); extdecl;
begin
  {$define handleExceptionID := 843}
  handleExceptionBegin
  AObj.ScaleBy(Multiplier, Divider);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_UpdateDockCaption(AObj: TWinControl; Exclude: TControl); extdecl;
begin
  {$define handleExceptionID := 844}
  handleExceptionBegin
  AObj.UpdateDockCaption(Exclude);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_GetTabOrderList(AObj: TWinControl; List: TFPList); extdecl;
begin
  {$define handleExceptionID := 845}
  handleExceptionBegin
  AObj.GetTabOrderList(List);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_HandleNeeded(AObj: TWinControl); extdecl;
begin
  {$define handleExceptionID := 846}
  handleExceptionBegin
  AObj.HandleNeeded();
  handleExceptionEnd
end;

// procedure
procedure TWinControl_EraseBackground(AObj: TWinControl; DC: HDC); extdecl;
begin
  {$define handleExceptionID := 847}
  handleExceptionBegin
  AObj.EraseBackground(DC);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_PaintToWithHDCIntX2(AObj: TWinControl; DC: HDC; X: Integer; Y: Integer); extdecl;
begin
  {$define handleExceptionID := 848}
  handleExceptionBegin
  AObj.PaintTo(DC, X, Y);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_PaintToWithCanvasIntX2(AObj: TWinControl; ACanvas: TCanvas; X: Integer; Y: Integer); extdecl;
begin
  {$define handleExceptionID := 849}
  handleExceptionBegin
  AObj.PaintTo(ACanvas, X, Y);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_SetShapeWithBitmap(AObj: TWinControl; AShape: TBitmap); extdecl;
begin
  {$define handleExceptionID := 850}
  handleExceptionBegin
  AObj.SetShape(AShape);
  handleExceptionEnd
end;

// procedure
procedure TWinControl_SetShapeWithRegion(AObj: TWinControl; AShape: TRegion); extdecl;
begin
  {$define handleExceptionID := 851}
  handleExceptionBegin
  AObj.SetShape(AShape);
  handleExceptionEnd
end;

// property
function TWinControl_BorderWidth(ASet: LongBool; AObj: TWinControl; AValue: TBorderWidth): TBorderWidth; extdecl;
begin
  {$define handleExceptionID := 852}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderWidth := AValue
  end else
    Result := AObj.BorderWidth;
  handleExceptionEnd
end;

// property
function TWinControl_BoundsLockCount(AObj: TWinControl): Integer; extdecl;
begin
  {$define handleExceptionID := 853}
  handleExceptionBegin
  Result := AObj.BoundsLockCount;
  handleExceptionEnd
end;

// property
function TWinControl_Brush(AObj: TWinControl): TBrush; extdecl;
begin
  {$define handleExceptionID := 854}
  handleExceptionBegin
  Result := AObj.Brush;
  handleExceptionEnd
end;

// property
function TWinControl_CachedClientHeight(AObj: TWinControl): Integer; extdecl;
begin
  {$define handleExceptionID := 855}
  handleExceptionBegin
  Result := AObj.CachedClientHeight;
  handleExceptionEnd
end;

// property
function TWinControl_CachedClientWidth(AObj: TWinControl): Integer; extdecl;
begin
  {$define handleExceptionID := 856}
  handleExceptionBegin
  Result := AObj.CachedClientWidth;
  handleExceptionEnd
end;

// property
function TWinControl_ChildSizing(ASet: LongBool; AObj: TWinControl; AValue: TControlChildSizing): TControlChildSizing; extdecl;
begin
  {$define handleExceptionID := 857}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ChildSizing := AValue
  end else
    Result := AObj.ChildSizing;
  handleExceptionEnd
end;

// property
function TWinControl_ControlCount(AObj: TWinControl): Integer; extdecl;
begin
  {$define handleExceptionID := 858}
  handleExceptionBegin
  Result := AObj.ControlCount;
  handleExceptionEnd
end;

// property
function TWinControl_Controls(AObj: TWinControl; Index: Integer): TControl; extdecl;
begin
  {$define handleExceptionID := 859}
  handleExceptionBegin
  Result := AObj.Controls[Index];
  handleExceptionEnd
end;

// property
function TWinControl_DefWndProc(ASet: LongBool; AObj: TWinControl; AValue: Pointer): Pointer; extdecl;
begin
  {$define handleExceptionID := 860}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefWndProc := AValue
  end else
    Result := AObj.DefWndProc;
  handleExceptionEnd
end;

// property
function TWinControl_DockClientCount(AObj: TWinControl): Integer; extdecl;
begin
  {$define handleExceptionID := 861}
  handleExceptionBegin
  Result := AObj.DockClientCount;
  handleExceptionEnd
end;

// property
function TWinControl_DockClients(AObj: TWinControl; Index: Integer): TControl; extdecl;
begin
  {$define handleExceptionID := 862}
  handleExceptionBegin
  Result := AObj.DockClients[Index];
  handleExceptionEnd
end;

// property
function TWinControl_DockManager(ASet: LongBool; AObj: TWinControl; AValue: TDockManager): TDockManager; extdecl;
begin
  {$define handleExceptionID := 863}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DockManager := AValue
  end else
    Result := AObj.DockManager;
  handleExceptionEnd
end;

// property
function TWinControl_DockSite(ASet: LongBool; AObj: TWinControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 864}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DockSite := AValue
  end else
    Result := AObj.DockSite;
  handleExceptionEnd
end;

// property
function TWinControl_DoubleBuffered(ASet: LongBool; AObj: TWinControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 865}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DoubleBuffered := AValue
  end else
    Result := AObj.DoubleBuffered;
  handleExceptionEnd
end;

// property
function TWinControl_Handle(ASet: LongBool; AObj: TWinControl; AValue: HWND): HWND; extdecl;
begin
  {$define handleExceptionID := 866}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handle := AValue
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

// property
function TWinControl_IsFlipped(AObj: TWinControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 867}
  handleExceptionBegin
  Result := AObj.IsFlipped;
  handleExceptionEnd
end;

// property
function TWinControl_IsResizing(AObj: TWinControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 868}
  handleExceptionBegin
  Result := AObj.IsResizing;
  handleExceptionEnd
end;

// property
function TWinControl_TabOrder(ASet: LongBool; AObj: TWinControl; AValue: TTabOrder): TTabOrder; extdecl;
begin
  {$define handleExceptionID := 869}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TabOrder := AValue
  end else
    Result := AObj.TabOrder;
  handleExceptionEnd
end;

// property
function TWinControl_TabStop(ASet: LongBool; AObj: TWinControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 870}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TabStop := AValue
  end else
    Result := AObj.TabStop;
  handleExceptionEnd
end;

// property
function TWinControl_ParentDoubleBuffered(ASet: LongBool; AObj: TWinControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 871}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentDoubleBuffered := AValue
  end else
    Result := AObj.ParentDoubleBuffered;
  handleExceptionEnd
end;

// property
function TWinControl_ParentWindow(ASet: LongBool; AObj: TWinControl; AValue: HWND): HWND; extdecl;
begin
  {$define handleExceptionID := 872}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentWindow := AValue
  end else
    Result := AObj.ParentWindow;
  handleExceptionEnd
end;

// property
function TWinControl_Showing(AObj: TWinControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 873}
  handleExceptionBegin
  Result := AObj.Showing;
  handleExceptionEnd
end;

// property
function TWinControl_UseDockManager(ASet: LongBool; AObj: TWinControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 874}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UseDockManager := AValue
  end else
    Result := AObj.UseDockManager;
  handleExceptionEnd
end;

// property
procedure TWinControl_DesignerDeleting(AObj: TWinControl; AValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 875}
  handleExceptionBegin
  AObj.DesignerDeleting := AValue;
  handleExceptionEnd
end;

// property
function TWinControl_IsSpecialSubControl(AObj: TWinControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 876}
  handleExceptionBegin
  Result := AObj.IsSpecialSubControl;
  handleExceptionEnd
end;

// property
function TWinControl_VisibleDockClientCount(AObj: TWinControl): Integer; extdecl;
begin
  {$define handleExceptionID := 877}
  handleExceptionBegin
  Result := AObj.VisibleDockClientCount;
  handleExceptionEnd
end;

// event
procedure TWinControl_OnAlignInsertBefore(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTAlignInsertBeforeEvent}
  {$DEFINE EventName := OnAlignInsertBefore}
  LCLEventMethodCode
end;

// event
procedure TWinControl_OnAlignPosition(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTAlignPositionEvent}
  {$DEFINE EventName := OnAlignPosition}
  LCLEventMethodCode
end;

// event
procedure TWinControl_OnDockDrop(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDockDropEvent}
  {$DEFINE EventName := OnDockDrop}
  LCLEventMethodCode
end;

// event
procedure TWinControl_OnDockOver(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDockOverEvent}
  {$DEFINE EventName := OnDockOver}
  LCLEventMethodCode
end;

// event
procedure TWinControl_OnEnter(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnEnter}
  LCLEventMethodCode
end;

// event
procedure TWinControl_OnExit(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnExit}
  LCLEventMethodCode
end;

// event
procedure TWinControl_OnKeyDown(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTKeyEvent}
  {$DEFINE EventName := OnKeyDown}
  LCLEventMethodCode
end;

// event
procedure TWinControl_OnKeyPress(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTKeyPressEvent}
  {$DEFINE EventName := OnKeyPress}
  LCLEventMethodCode
end;

// event
procedure TWinControl_OnKeyUp(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTKeyEvent}
  {$DEFINE EventName := OnKeyUp}
  LCLEventMethodCode
end;

// event
procedure TWinControl_OnUnDock(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUnDockEvent}
  {$DEFINE EventName := OnUnDock}
  LCLEventMethodCode
end;

// event
procedure TWinControl_OnUTF8KeyPress(AObj: TWinControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTUTF8KeyPressEvent}
  {$DEFINE EventName := OnUTF8KeyPress}
  LCLEventMethodCode
end;

function TWinControl_TClass(): TClass; extdecl;
begin
  Result := TWinControl;
end;

exports
  TWinControl_Create,
  TWinControl_CreateParented,
  TWinControl_ControlAtPosWithPointBool,
  TWinControl_ControlAtPosWithPointBoolX2,
  TWinControl_ControlAtPosWithPointControlAtPosFlags,
  TWinControl_ContainsControl,
  TWinControl_ClientRectNeedsInterfaceUpdate,
  TWinControl_CreateParentedControl,
  TWinControl_CanFocus,
  TWinControl_CanSetFocus,
  TWinControl_GetControlIndex,
  TWinControl_Focused,
  TWinControl_PerformTab,
  TWinControl_FindChildControl,
  TWinControl_GetEnumeratorControls,
  TWinControl_GetEnumeratorControlsReverse,
  TWinControl_GetDockCaption,
  TWinControl_HandleAllocated,
  TWinControl_BrushCreated,
  TWinControl_IntfUTF8KeyPress,
  TWinControl_IntfGetDropFilesTarget,
  TWinControl_BeginUpdateBounds,
  TWinControl_EndUpdateBounds,
  TWinControl_LockRealizeBounds,
  TWinControl_UnlockRealizeBounds,
  TWinControl_DoAdjustClientRectChange,
  TWinControl_InvalidateClientRectCache,
  TWinControl_DisableAlign,
  TWinControl_EnableAlign,
  TWinControl_ReAlign,
  TWinControl_ScrollBy_WS,
  TWinControl_ScrollBy,
  TWinControl_FixDesignFontsPPIWithChildren,
  TWinControl_DockDrop,
  TWinControl_SetControlIndex,
  TWinControl_SelectNext,
  TWinControl_BroadCast,
  TWinControl_NotifyControls,
  TWinControl_AddControl,
  TWinControl_InsertControlWithControl,
  TWinControl_InsertControlWithControlInt,
  TWinControl_RemoveControl,
  TWinControl_SetFocus,
  TWinControl_FlipChildren,
  TWinControl_ScaleBy,
  TWinControl_UpdateDockCaption,
  TWinControl_GetTabOrderList,
  TWinControl_HandleNeeded,
  TWinControl_EraseBackground,
  TWinControl_PaintToWithHDCIntX2,
  TWinControl_PaintToWithCanvasIntX2,
  TWinControl_SetShapeWithBitmap,
  TWinControl_SetShapeWithRegion,
  TWinControl_BorderWidth,
  TWinControl_BoundsLockCount,
  TWinControl_Brush,
  TWinControl_CachedClientHeight,
  TWinControl_CachedClientWidth,
  TWinControl_ChildSizing,
  TWinControl_ControlCount,
  TWinControl_Controls,
  TWinControl_DefWndProc,
  TWinControl_DockClientCount,
  TWinControl_DockClients,
  TWinControl_DockManager,
  TWinControl_DockSite,
  TWinControl_DoubleBuffered,
  TWinControl_Handle,
  TWinControl_IsFlipped,
  TWinControl_IsResizing,
  TWinControl_TabOrder,
  TWinControl_TabStop,
  TWinControl_ParentDoubleBuffered,
  TWinControl_ParentWindow,
  TWinControl_Showing,
  TWinControl_UseDockManager,
  TWinControl_DesignerDeleting,
  TWinControl_IsSpecialSubControl,
  TWinControl_VisibleDockClientCount,
  TWinControl_OnAlignInsertBefore,
  TWinControl_OnAlignPosition,
  TWinControl_OnDockDrop,
  TWinControl_OnDockOver,
  TWinControl_OnEnter,
  TWinControl_OnExit,
  TWinControl_OnKeyDown,
  TWinControl_OnKeyPress,
  TWinControl_OnKeyUp,
  TWinControl_OnUnDock,
  TWinControl_OnUTF8KeyPress,
  TWinControl_TClass;