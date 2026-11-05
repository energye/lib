// constructor
function TControl_Create(TheOwner: TComponent): TControl; extdecl;
begin
  {$define handleExceptionID := 700}
  handleExceptionBegin
  Result := TControl.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TControl_ManualDock(AObj: TControl; NewDockSite: TWinControl; DropControl: TControl; ControlSide: TAlign; KeepDockSiteSize: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 701}
  handleExceptionBegin
  Result := AObj.ManualDock(NewDockSite, DropControl, ControlSide, KeepDockSiteSize);
  handleExceptionEnd
end;

// function
function TControl_ManualFloat(AObj: TControl; var TheScreenRect: TRect; KeepDockSiteSize: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 702}
  handleExceptionBegin
  Result := AObj.ManualFloat(TheScreenRect, KeepDockSiteSize);
  handleExceptionEnd
end;

// function
function TControl_ReplaceDockedControl(AObj: TControl; Control: TControl; NewDockSite: TWinControl; DropControl: TControl; ControlSide: TAlign): LongBool; extdecl;
begin
  {$define handleExceptionID := 703}
  handleExceptionBegin
  Result := AObj.ReplaceDockedControl(Control, NewDockSite, DropControl, ControlSide);
  handleExceptionEnd
end;

// function
function TControl_Docked(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 704}
  handleExceptionBegin
  Result := AObj.Docked();
  handleExceptionEnd
end;

// function
function TControl_Dragging(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 705}
  handleExceptionBegin
  Result := AObj.Dragging();
  handleExceptionEnd
end;

// function
function TControl_GetAccessibleObject(AObj: TControl): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionID := 706}
  handleExceptionBegin
  Result := AObj.GetAccessibleObject();
  handleExceptionEnd
end;

// function
function TControl_CreateAccessibleObject(AObj: TControl): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionID := 707}
  handleExceptionBegin
  Result := AObj.CreateAccessibleObject();
  handleExceptionEnd
end;

// function
function TControl_GetSelectedChildAccessibleObject(AObj: TControl): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionID := 708}
  handleExceptionBegin
  Result := AObj.GetSelectedChildAccessibleObject();
  handleExceptionEnd
end;

// function
function TControl_GetChildAccessibleObjectAtPos(AObj: TControl; var APos: TPoint): TLazAccessibleObject; extdecl;
begin
  {$define handleExceptionID := 709}
  handleExceptionBegin
  Result := AObj.GetChildAccessibleObjectAtPos(APos);
  handleExceptionEnd
end;

// function
function TControl_ScaleDesignToForm(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 710}
  handleExceptionBegin
  Result := AObj.ScaleDesignToForm(ASize);
  handleExceptionEnd
end;

// function
function TControl_ScaleFormToDesign(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 711}
  handleExceptionBegin
  Result := AObj.ScaleFormToDesign(ASize);
  handleExceptionEnd
end;

// function
function TControl_Scale96ToForm(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 712}
  handleExceptionBegin
  Result := AObj.Scale96ToForm(ASize);
  handleExceptionEnd
end;

// function
function TControl_ScaleFormTo96(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 713}
  handleExceptionBegin
  Result := AObj.ScaleFormTo96(ASize);
  handleExceptionEnd
end;

// function
function TControl_Scale96ToFont(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 714}
  handleExceptionBegin
  Result := AObj.Scale96ToFont(ASize);
  handleExceptionEnd
end;

// function
function TControl_ScaleFontTo96(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 715}
  handleExceptionBegin
  Result := AObj.ScaleFontTo96(ASize);
  handleExceptionEnd
end;

// function
function TControl_ScaleScreenToFont(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 716}
  handleExceptionBegin
  Result := AObj.ScaleScreenToFont(ASize);
  handleExceptionEnd
end;

// function
function TControl_ScaleFontToScreen(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 717}
  handleExceptionBegin
  Result := AObj.ScaleFontToScreen(ASize);
  handleExceptionEnd
end;

// function
function TControl_Scale96ToScreen(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 718}
  handleExceptionBegin
  Result := AObj.Scale96ToScreen(ASize);
  handleExceptionEnd
end;

// function
function TControl_ScaleScreenTo96(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 719}
  handleExceptionBegin
  Result := AObj.ScaleScreenTo96(ASize);
  handleExceptionEnd
end;

// function
function TControl_AutoSizePhases(AObj: TControl): TControlAutoSizePhases; extdecl;
begin
  {$define handleExceptionID := 720}
  handleExceptionBegin
  Result := AObj.AutoSizePhases();
  handleExceptionEnd
end;

// function
function TControl_AutoSizeDelayed(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 721}
  handleExceptionBegin
  Result := AObj.AutoSizeDelayed();
  handleExceptionEnd
end;

// function
procedure TControl_AutoSizeDelayedReport(AObj: TControl;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 722}
  handleExceptionBegin
  StringBufferCreate(AObj.AutoSizeDelayedReport(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TControl_AutoSizeDelayedHandle(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 723}
  handleExceptionBegin
  Result := AObj.AutoSizeDelayedHandle();
  handleExceptionEnd
end;

// function
function TControl_AnchoredControlCount(AObj: TControl): Integer; extdecl;
begin
  {$define handleExceptionID := 724}
  handleExceptionBegin
  Result := AObj.AnchoredControlCount();
  handleExceptionEnd
end;

// function
procedure TControl_GetCanvasScaleFactor(AObj: TControl; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 725}
  handleExceptionBegin
  Result := AObj.GetCanvasScaleFactor();
  handleExceptionEnd
end;

// function
function TControl_GetDefaultWidth(AObj: TControl): Integer; extdecl;
begin
  {$define handleExceptionID := 726}
  handleExceptionBegin
  Result := AObj.GetDefaultWidth();
  handleExceptionEnd
end;

// function
function TControl_GetDefaultHeight(AObj: TControl): Integer; extdecl;
begin
  {$define handleExceptionID := 727}
  handleExceptionBegin
  Result := AObj.GetDefaultHeight();
  handleExceptionEnd
end;

// function
function TControl_GetDefaultColor(AObj: TControl; const DefaultColorType: TDefaultColorType): TColor; extdecl;
begin
  {$define handleExceptionID := 728}
  handleExceptionBegin
  Result := AObj.GetDefaultColor(DefaultColorType);
  handleExceptionEnd
end;

// function
function TControl_GetColorResolvingParent(AObj: TControl): TColor; extdecl;
begin
  {$define handleExceptionID := 729}
  handleExceptionBegin
  Result := AObj.GetColorResolvingParent();
  handleExceptionEnd
end;

// function
function TControl_GetRGBColorResolvingParent(AObj: TControl): TColor; extdecl;
begin
  {$define handleExceptionID := 730}
  handleExceptionBegin
  Result := AObj.GetRGBColorResolvingParent();
  handleExceptionEnd
end;

// function
function TControl_GetSidePosition(AObj: TControl; Side: TAnchorKind): Integer; extdecl;
begin
  {$define handleExceptionID := 731}
  handleExceptionBegin
  Result := AObj.GetSidePosition(Side);
  handleExceptionEnd
end;

// function
function TControl_GetAnchorsDependingOnParent(AObj: TControl; WithNormalAnchors: LongBool): TAnchors; extdecl;
begin
  {$define handleExceptionID := 732}
  handleExceptionBegin
  Result := AObj.GetAnchorsDependingOnParent(WithNormalAnchors);
  handleExceptionEnd
end;

// function
function TControl_IsParentOf(AObj: TControl; AControl: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 733}
  handleExceptionBegin
  Result := AObj.IsParentOf(AControl);
  handleExceptionEnd
end;

// function
function TControl_GetTopParent(AObj: TControl): TControl; extdecl;
begin
  {$define handleExceptionID := 734}
  handleExceptionBegin
  Result := AObj.GetTopParent();
  handleExceptionEnd
end;

// function
function TControl_FindSubComponent(AObj: TControl; AName: PChar): TComponent; extdecl;
begin
  {$define handleExceptionID := 735}
  handleExceptionBegin
  Result := AObj.FindSubComponent(AName);
  handleExceptionEnd
end;

// function
function TControl_IsVisible(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 736}
  handleExceptionBegin
  Result := AObj.IsVisible();
  handleExceptionEnd
end;

// function
function TControl_IsControlVisible(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 737}
  handleExceptionBegin
  Result := AObj.IsControlVisible();
  handleExceptionEnd
end;

// function
function TControl_IsEnabled(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 738}
  handleExceptionBegin
  Result := AObj.IsEnabled();
  handleExceptionEnd
end;

// function
function TControl_IsParentColor(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 739}
  handleExceptionBegin
  Result := AObj.IsParentColor();
  handleExceptionEnd
end;

// function
function TControl_IsParentFont(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 740}
  handleExceptionBegin
  Result := AObj.IsParentFont();
  handleExceptionEnd
end;

// function
function TControl_FormIsUpdating(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 741}
  handleExceptionBegin
  Result := AObj.FormIsUpdating();
  handleExceptionEnd
end;

// function
function TControl_IsProcessingPaintMsg(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 742}
  handleExceptionBegin
  Result := AObj.IsProcessingPaintMsg();
  handleExceptionEnd
end;

// function
function TControl_CheckChildClassAllowed(AObj: TControl; ChildClass: TClass; ExceptionOnInvalid: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 743}
  handleExceptionBegin
  Result := AObj.CheckChildClassAllowed(ChildClass, ExceptionOnInvalid);
  handleExceptionEnd
end;

// function
function TControl_GetTextBuf(AObj: TControl; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 744}
  handleExceptionBegin
  Result := AObj.GetTextBuf(Buffer, BufSize);
  handleExceptionEnd
end;

// function
function TControl_GetTextLen(AObj: TControl): Integer; extdecl;
begin
  {$define handleExceptionID := 745}
  handleExceptionBegin
  Result := AObj.GetTextLen();
  handleExceptionEnd
end;

// function
function TControl_Perform(AObj: TControl; Msg: Cardinal; WParam: WParam; LParam: LParam): LRESULT; extdecl;
begin
  {$define handleExceptionID := 746}
  handleExceptionBegin
  Result := AObj.Perform(Msg, WParam, LParam);
  handleExceptionEnd
end;

// function
procedure TControl_ScreenToClient(AObj: TControl; var APoint: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 747}
  handleExceptionBegin
  Result := AObj.ScreenToClient(APoint);
  handleExceptionEnd
end;

// function
procedure TControl_ClientToScreenWithPoint(AObj: TControl; var APoint: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 748}
  handleExceptionBegin
  Result := AObj.ClientToScreen(APoint);
  handleExceptionEnd
end;

// function
procedure TControl_ClientToScreenWithRect(AObj: TControl; var ARect: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 749}
  handleExceptionBegin
  Result := AObj.ClientToScreen(ARect);
  handleExceptionEnd
end;

// function
procedure TControl_ScreenToControl(AObj: TControl; var APoint: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 750}
  handleExceptionBegin
  Result := AObj.ScreenToControl(APoint);
  handleExceptionEnd
end;

// function
procedure TControl_ControlToScreen(AObj: TControl; var APoint: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 751}
  handleExceptionBegin
  Result := AObj.ControlToScreen(APoint);
  handleExceptionEnd
end;

// function
procedure TControl_ClientToParent(AObj: TControl; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 752}
  handleExceptionBegin
  Result := AObj.ClientToParent(Point, AParent);
  handleExceptionEnd
end;

// function
procedure TControl_ParentToClient(AObj: TControl; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 753}
  handleExceptionBegin
  Result := AObj.ParentToClient(Point, AParent);
  handleExceptionEnd
end;

// function
procedure TControl_GetChildrenRect(AObj: TControl; Scrolled: LongBool; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 754}
  handleExceptionBegin
  Result := AObj.GetChildrenRect(Scrolled);
  handleExceptionEnd
end;

// function
function TControl_HandleObjectShouldBeVisible(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 755}
  handleExceptionBegin
  Result := AObj.HandleObjectShouldBeVisible();
  handleExceptionEnd
end;

// function
function TControl_ParentDestroyingHandle(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 756}
  handleExceptionBegin
  Result := AObj.ParentDestroyingHandle();
  handleExceptionEnd
end;

// function
function TControl_ParentHandlesAllocated(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 757}
  handleExceptionBegin
  Result := AObj.ParentHandlesAllocated();
  handleExceptionEnd
end;

// function
function TControl_HasHelp(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 758}
  handleExceptionBegin
  Result := AObj.HasHelp();
  handleExceptionEnd
end;

// function
function TControl_UseRightToLeftAlignment(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 759}
  handleExceptionBegin
  Result := AObj.UseRightToLeftAlignment();
  handleExceptionEnd
end;

// function
function TControl_UseRightToLeftReading(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 760}
  handleExceptionBegin
  Result := AObj.UseRightToLeftReading();
  handleExceptionEnd
end;

// function
function TControl_UseRightToLeftScrollBar(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 761}
  handleExceptionBegin
  Result := AObj.UseRightToLeftScrollBar();
  handleExceptionEnd
end;

// function
function TControl_IsRightToLeft(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 762}
  handleExceptionBegin
  Result := AObj.IsRightToLeft();
  handleExceptionEnd
end;

// procedure
procedure TControl_DragDrop(AObj: TControl; Source: TObject; X: Integer; Y: Integer); extdecl;
begin
  {$define handleExceptionID := 763}
  handleExceptionBegin
  AObj.DragDrop(Source, X, Y);
  handleExceptionEnd
end;

// procedure
procedure TControl_Dock(AObj: TControl; NewDockSite: TWinControl; var ARect: TRect); extdecl;
begin
  {$define handleExceptionID := 764}
  handleExceptionBegin
  AObj.Dock(NewDockSite, ARect);
  handleExceptionEnd
end;

// procedure
procedure TControl_AdjustSize(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 765}
  handleExceptionBegin
  AObj.AdjustSize();
  handleExceptionEnd
end;

// procedure
procedure TControl_AnchorToNeighbour(AObj: TControl; Side: TAnchorKind; Space: TSpacingSize; Sibling: TControl); extdecl;
begin
  {$define handleExceptionID := 766}
  handleExceptionBegin
  AObj.AnchorToNeighbour(Side, Space, Sibling);
  handleExceptionEnd
end;

// procedure
procedure TControl_AnchorParallel(AObj: TControl; Side: TAnchorKind; Space: TSpacingSize; Sibling: TControl); extdecl;
begin
  {$define handleExceptionID := 767}
  handleExceptionBegin
  AObj.AnchorParallel(Side, Space, Sibling);
  handleExceptionEnd
end;

// procedure
procedure TControl_AnchorHorizontalCenterTo(AObj: TControl; Sibling: TControl); extdecl;
begin
  {$define handleExceptionID := 768}
  handleExceptionBegin
  AObj.AnchorHorizontalCenterTo(Sibling);
  handleExceptionEnd
end;

// procedure
procedure TControl_AnchorVerticalCenterTo(AObj: TControl; Sibling: TControl); extdecl;
begin
  {$define handleExceptionID := 769}
  handleExceptionBegin
  AObj.AnchorVerticalCenterTo(Sibling);
  handleExceptionEnd
end;

// procedure
procedure TControl_AnchorToCompanion(AObj: TControl; Side: TAnchorKind; Space: TSpacingSize; Sibling: TControl; FreeCompositeSide: LongBool); extdecl;
begin
  {$define handleExceptionID := 770}
  handleExceptionBegin
  AObj.AnchorToCompanion(Side, Space, Sibling, FreeCompositeSide);
  handleExceptionEnd
end;

// procedure
procedure TControl_AnchorSame(AObj: TControl; Side: TAnchorKind; Sibling: TControl); extdecl;
begin
  {$define handleExceptionID := 771}
  handleExceptionBegin
  AObj.AnchorSame(Side, Sibling);
  handleExceptionEnd
end;

// procedure
procedure TControl_AnchorAsAlign(AObj: TControl; TheAlign: TAlign; Space: TSpacingSize); extdecl;
begin
  {$define handleExceptionID := 772}
  handleExceptionBegin
  AObj.AnchorAsAlign(TheAlign, Space);
  handleExceptionEnd
end;

// procedure
procedure TControl_AnchorClient(AObj: TControl; Space: TSpacingSize); extdecl;
begin
  {$define handleExceptionID := 773}
  handleExceptionBegin
  AObj.AnchorClient(Space);
  handleExceptionEnd
end;

// procedure
procedure TControl_SetBounds(AObj: TControl; aLeft: Integer; aTop: Integer; aWidth: Integer; aHeight: Integer); extdecl;
begin
  {$define handleExceptionID := 774}
  handleExceptionBegin
  AObj.SetBounds(aLeft, aTop, aWidth, aHeight);
  handleExceptionEnd
end;

// procedure
procedure TControl_SetInitialBounds(AObj: TControl; aLeft: Integer; aTop: Integer; aWidth: Integer; aHeight: Integer); extdecl;
begin
  {$define handleExceptionID := 775}
  handleExceptionBegin
  AObj.SetInitialBounds(aLeft, aTop, aWidth, aHeight);
  handleExceptionEnd
end;

// procedure
procedure TControl_SetBoundsKeepBase(AObj: TControl; aLeft: Integer; aTop: Integer; aWidth: Integer; aHeight: Integer); extdecl;
begin
  {$define handleExceptionID := 776}
  handleExceptionBegin
  AObj.SetBoundsKeepBase(aLeft, aTop, aWidth, aHeight);
  handleExceptionEnd
end;

// procedure
procedure TControl_GetPreferredSize(AObj: TControl; var PreferredWidth: Integer; var PreferredHeight: Integer; Raw: LongBool; WithThemeSpace: LongBool); extdecl;
var
  OutPreferredWidth: Integer;
  OutPreferredHeight: Integer;
begin
  {$define handleExceptionID := 777}
  handleExceptionBegin
  OutPreferredWidth := PreferredWidth;
  OutPreferredHeight := PreferredHeight;
  AObj.GetPreferredSize(OutPreferredWidth, OutPreferredHeight, Raw, WithThemeSpace);
  PreferredWidth := OutPreferredWidth;
  PreferredHeight := OutPreferredHeight;
  handleExceptionEnd
end;

// procedure
procedure TControl_CNPreferredSizeChanged(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 778}
  handleExceptionBegin
  AObj.CNPreferredSizeChanged();
  handleExceptionEnd
end;

// procedure
procedure TControl_InvalidatePreferredSize(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 779}
  handleExceptionBegin
  AObj.InvalidatePreferredSize();
  handleExceptionEnd
end;

// procedure
procedure TControl_DisableAutoSizing(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 780}
  handleExceptionBegin
  AObj.DisableAutoSizing();
  handleExceptionEnd
end;

// procedure
procedure TControl_EnableAutoSizing(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 781}
  handleExceptionBegin
  AObj.EnableAutoSizing();
  handleExceptionEnd
end;

// procedure
procedure TControl_UpdateBaseBounds(AObj: TControl; StoreBounds: LongBool; StoreParentClientSize: LongBool; UseLoadedValues: LongBool); extdecl;
begin
  {$define handleExceptionID := 782}
  handleExceptionBegin
  AObj.UpdateBaseBounds(StoreBounds, StoreParentClientSize, UseLoadedValues);
  handleExceptionEnd
end;

// procedure
procedure TControl_WriteLayoutDebugReport(AObj: TControl; const Prefix: PChar); extdecl;
begin
  {$define handleExceptionID := 783}
  handleExceptionBegin
  AObj.WriteLayoutDebugReport(Prefix);
  handleExceptionEnd
end;

// procedure
procedure TControl_AutoAdjustLayout(AObj: TControl; AMode: TLayoutAdjustmentPolicy; const AFromPPI: Integer; const AToPPI: Integer; const AOldFormWidth: Integer; const ANewFormWidth: Integer); extdecl;
begin
  {$define handleExceptionID := 784}
  handleExceptionBegin
  AObj.AutoAdjustLayout(AMode, AFromPPI, AToPPI, AOldFormWidth, ANewFormWidth);
  handleExceptionEnd
end;

// procedure
procedure TControl_ShouldAutoAdjust(AObj: TControl; var AWidth: LongBool; var AHeight: LongBool); extdecl;
var
  OutAWidth: Boolean;
  OutAHeight: Boolean;
begin
  {$define handleExceptionID := 785}
  handleExceptionBegin
  OutAWidth := AWidth;
  OutAHeight := AHeight;
  AObj.ShouldAutoAdjust(OutAWidth, OutAHeight);
  AWidth := OutAWidth;
  AHeight := OutAHeight;
  handleExceptionEnd
end;

// procedure
procedure TControl_FixDesignFontsPPI(AObj: TControl; const ADesignTimePPI: Integer); extdecl;
begin
  {$define handleExceptionID := 786}
  handleExceptionBegin
  AObj.FixDesignFontsPPI(ADesignTimePPI);
  handleExceptionEnd
end;

// procedure
procedure TControl_ScaleFontsPPI(AObj: TControl; const AToPPI: Integer; var AProportion: Double); extdecl;
begin
  {$define handleExceptionID := 787}
  handleExceptionBegin
  AObj.ScaleFontsPPI(AToPPI, AProportion);
  handleExceptionEnd
end;

// procedure
procedure TControl_EditingDone(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 788}
  handleExceptionBegin
  AObj.EditingDone();
  handleExceptionEnd
end;

// procedure
procedure TControl_ExecuteDefaultAction(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 789}
  handleExceptionBegin
  AObj.ExecuteDefaultAction();
  handleExceptionEnd
end;

// procedure
procedure TControl_ExecuteCancelAction(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 790}
  handleExceptionBegin
  AObj.ExecuteCancelAction();
  handleExceptionEnd
end;

// procedure
procedure TControl_BeginDrag(AObj: TControl; Immediate: LongBool; Threshold: Integer); extdecl;
begin
  {$define handleExceptionID := 791}
  handleExceptionBegin
  AObj.BeginDrag(Immediate, Threshold);
  handleExceptionEnd
end;

// procedure
procedure TControl_EndDrag(AObj: TControl; Drop: LongBool); extdecl;
begin
  {$define handleExceptionID := 792}
  handleExceptionBegin
  AObj.EndDrag(Drop);
  handleExceptionEnd
end;

// procedure
procedure TControl_BringToFront(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 793}
  handleExceptionBegin
  AObj.BringToFront();
  handleExceptionEnd
end;

// procedure
procedure TControl_Hide(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 794}
  handleExceptionBegin
  AObj.Hide();
  handleExceptionEnd
end;

// procedure
procedure TControl_Refresh(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 795}
  handleExceptionBegin
  AObj.Refresh();
  handleExceptionEnd
end;

// procedure
procedure TControl_Repaint(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 796}
  handleExceptionBegin
  AObj.Repaint();
  handleExceptionEnd
end;

// procedure
procedure TControl_Invalidate(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 797}
  handleExceptionBegin
  AObj.Invalidate();
  handleExceptionEnd
end;

// procedure
procedure TControl_CheckNewParent(AObj: TControl; AParent: TWinControl); extdecl;
begin
  {$define handleExceptionID := 798}
  handleExceptionBegin
  AObj.CheckNewParent(AParent);
  handleExceptionEnd
end;

// procedure
procedure TControl_SendToBack(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 799}
  handleExceptionBegin
  AObj.SendToBack();
  handleExceptionEnd
end;

// procedure
procedure TControl_SetTempCursor(AObj: TControl; Value: TCursor); extdecl;
begin
  {$define handleExceptionID := 800}
  handleExceptionBegin
  AObj.SetTempCursor(Value);
  handleExceptionEnd
end;

// procedure
procedure TControl_UpdateRolesForForm(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 801}
  handleExceptionBegin
  AObj.UpdateRolesForForm();
  handleExceptionEnd
end;

// procedure
procedure TControl_ActiveDefaultControlChanged(AObj: TControl; NewControl: TControl); extdecl;
begin
  {$define handleExceptionID := 802}
  handleExceptionBegin
  AObj.ActiveDefaultControlChanged(NewControl);
  handleExceptionEnd
end;

// procedure
procedure TControl_SetTextBuf(AObj: TControl; Buffer: PChar); extdecl;
begin
  {$define handleExceptionID := 803}
  handleExceptionBegin
  AObj.SetTextBuf(Buffer);
  handleExceptionEnd
end;

// procedure
procedure TControl_Show(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 804}
  handleExceptionBegin
  AObj.Show();
  handleExceptionEnd
end;

// procedure
procedure TControl_Update(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 805}
  handleExceptionBegin
  AObj.Update();
  handleExceptionEnd
end;

// procedure
procedure TControl_InitiateAction(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 806}
  handleExceptionBegin
  AObj.InitiateAction();
  handleExceptionEnd
end;

// procedure
procedure TControl_ShowHelp(AObj: TControl); extdecl;
begin
  {$define handleExceptionID := 807}
  handleExceptionBegin
  AObj.ShowHelp();
  handleExceptionEnd
end;

// property
function TControl_AnchoredControls(AObj: TControl; Index: Integer): TControl; extdecl;
begin
  {$define handleExceptionID := 808}
  handleExceptionBegin
  Result := AObj.AnchoredControls[Index];
  handleExceptionEnd
end;

// property
procedure TControl_BaseBounds(AObj: TControl; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 809}
  handleExceptionBegin
  Result := AObj.BaseBounds;
  handleExceptionEnd
end;

// property
procedure TControl_ReadBounds(AObj: TControl; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 810}
  handleExceptionBegin
  Result := AObj.ReadBounds;
  handleExceptionEnd
end;

// property
procedure TControl_BaseParentClientSize(AObj: TControl; var Result: TSize); extdecl;
begin
  {$define handleExceptionID := 811}
  handleExceptionBegin
  Result := AObj.BaseParentClientSize;
  handleExceptionEnd
end;

// property
procedure TControl_AccessibleName(ASet: LongBool; AObj: TControl; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 812}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AccessibleName := AValue
  end else
    StringBufferCreate(AObj.AccessibleName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TControl_AccessibleDescription(ASet: LongBool; AObj: TControl; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 813}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AccessibleDescription := AValue
  end else
    StringBufferCreate(AObj.AccessibleDescription, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TControl_AccessibleValue(ASet: LongBool; AObj: TControl; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 814}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AccessibleValue := AValue
  end else
    StringBufferCreate(AObj.AccessibleValue, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TControl_AccessibleRole(ASet: LongBool; AObj: TControl; AValue: TLazAccessibilityRole): TLazAccessibilityRole; extdecl;
begin
  {$define handleExceptionID := 815}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AccessibleRole := AValue
  end else
    Result := AObj.AccessibleRole;
  handleExceptionEnd
end;

// property
function TControl_Action(ASet: LongBool; AObj: TControl; AValue: TBasicAction): TBasicAction; extdecl;
begin
  {$define handleExceptionID := 816}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Action := AValue
  end else
    Result := AObj.Action;
  handleExceptionEnd
end;

// property
function TControl_Align(ASet: LongBool; AObj: TControl; AValue: TAlign): TAlign; extdecl;
begin
  {$define handleExceptionID := 817}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Align := AValue
  end else
    Result := AObj.Align;
  handleExceptionEnd
end;

// property
function TControl_Anchors(ASet: LongBool; AObj: TControl; AValue: TAnchors): TAnchors; extdecl;
begin
  {$define handleExceptionID := 818}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Anchors := AValue
  end else
    Result := AObj.Anchors;
  handleExceptionEnd
end;

// property
function TControl_AnchorSide(AObj: TControl; Kind: TAnchorKind): TAnchorSide; extdecl;
begin
  {$define handleExceptionID := 819}
  handleExceptionBegin
  Result := AObj.AnchorSide[Kind];
  handleExceptionEnd
end;

// property
function TControl_AutoSize(ASet: LongBool; AObj: TControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 820}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSize := AValue
  end else
    Result := AObj.AutoSize;
  handleExceptionEnd
end;

// property
function TControl_BorderSpacing(ASet: LongBool; AObj: TControl; AValue: TControlBorderSpacing): TControlBorderSpacing; extdecl;
begin
  {$define handleExceptionID := 821}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderSpacing := AValue
  end else
    Result := AObj.BorderSpacing;
  handleExceptionEnd
end;

// property
procedure TControl_BoundsRect(ASet: LongBool; AObj: TControl; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 822}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BoundsRect := AValue
  end else
    Result := AObj.BoundsRect;
  handleExceptionEnd
end;

// property
procedure TControl_BoundsRectForNewParent(ASet: LongBool; AObj: TControl; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 823}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BoundsRectForNewParent := AValue
  end else
    Result := AObj.BoundsRectForNewParent;
  handleExceptionEnd
end;

// property
procedure TControl_Caption(ASet: LongBool; AObj: TControl; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 824}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Caption := AValue
  end else
    StringBufferCreate(AObj.Caption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TControl_CaptureMouseButtons(ASet: LongBool; AObj: TControl; AValue: TCaptureMouseButtons): TCaptureMouseButtons; extdecl;
begin
  {$define handleExceptionID := 825}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CaptureMouseButtons := AValue
  end else
    Result := AObj.CaptureMouseButtons;
  handleExceptionEnd
end;

// property
function TControl_ClientHeight(ASet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 826}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ClientHeight := AValue
  end else
    Result := AObj.ClientHeight;
  handleExceptionEnd
end;

// property
procedure TControl_ClientOrigin(AObj: TControl; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 827}
  handleExceptionBegin
  Result := AObj.ClientOrigin;
  handleExceptionEnd
end;

// property
procedure TControl_ClientRect(AObj: TControl; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 828}
  handleExceptionBegin
  Result := AObj.ClientRect;
  handleExceptionEnd
end;

// property
function TControl_ClientWidth(ASet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 829}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ClientWidth := AValue
  end else
    Result := AObj.ClientWidth;
  handleExceptionEnd
end;

// property
function TControl_Color(ASet: LongBool; AObj: TControl; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 830}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Color := AValue
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

// property
function TControl_Constraints(ASet: LongBool; AObj: TControl; AValue: TSizeConstraints): TSizeConstraints; extdecl;
begin
  {$define handleExceptionID := 831}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Constraints := AValue
  end else
    Result := AObj.Constraints;
  handleExceptionEnd
end;

// property
procedure TControl_ControlOrigin(AObj: TControl; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 832}
  handleExceptionBegin
  Result := AObj.ControlOrigin;
  handleExceptionEnd
end;

// property
function TControl_ControlState(ASet: LongBool; AObj: TControl; AValue: TControlState): TControlState; extdecl;
begin
  {$define handleExceptionID := 833}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ControlState := AValue
  end else
    Result := AObj.ControlState;
  handleExceptionEnd
end;

// property
function TControl_ControlStyle(ASet: LongBool; AObj: TControl; AValue: TControlStyle): TControlStyle; extdecl;
begin
  {$define handleExceptionID := 834}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ControlStyle := AValue
  end else
    Result := AObj.ControlStyle;
  handleExceptionEnd
end;

// property
function TControl_Enabled(ASet: LongBool; AObj: TControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 835}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Enabled := AValue
  end else
    Result := AObj.Enabled;
  handleExceptionEnd
end;

// property
function TControl_Font(ASet: LongBool; AObj: TControl; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionID := 836}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Font := AValue
  end else
    Result := AObj.Font;
  handleExceptionEnd
end;

// property
function TControl_IsControl(ASet: LongBool; AObj: TControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 837}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsControl := AValue
  end else
    Result := AObj.IsControl;
  handleExceptionEnd
end;

// property
function TControl_MouseInClient(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 838}
  handleExceptionBegin
  Result := AObj.MouseInClient;
  handleExceptionEnd
end;

// property
function TControl_Parent(ASet: LongBool; AObj: TControl; AValue: TWinControl): TWinControl; extdecl;
begin
  {$define handleExceptionID := 839}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Parent := AValue
  end else
    Result := AObj.Parent;
  handleExceptionEnd
end;

// property
function TControl_PopupMenu(ASet: LongBool; AObj: TControl; AValue: TPopupmenu): TPopupmenu; extdecl;
begin
  {$define handleExceptionID := 840}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PopupMenu := AValue
  end else
    Result := AObj.PopupMenu;
  handleExceptionEnd
end;

// property
function TControl_ShowHint(ASet: LongBool; AObj: TControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 841}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowHint := AValue
  end else
    Result := AObj.ShowHint;
  handleExceptionEnd
end;

// property
function TControl_Visible(ASet: LongBool; AObj: TControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 842}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Visible := AValue
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

// property
function TControl_DockOrientation(ASet: LongBool; AObj: TControl; AValue: TDockOrientation): TDockOrientation; extdecl;
begin
  {$define handleExceptionID := 843}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DockOrientation := AValue
  end else
    Result := AObj.DockOrientation;
  handleExceptionEnd
end;

// property
function TControl_Floating(AObj: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 844}
  handleExceptionBegin
  Result := AObj.Floating;
  handleExceptionEnd
end;

// property
function TControl_FloatingDockSiteClass(ASet: LongBool; AObj: TControl; AValue: TWinControlClass): TWinControlClass; extdecl;
begin
  {$define handleExceptionID := 845}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FloatingDockSiteClass := AValue
  end else
    Result := AObj.FloatingDockSiteClass;
  handleExceptionEnd
end;

// property
function TControl_HostDockSite(ASet: LongBool; AObj: TControl; AValue: TWinControl): TWinControl; extdecl;
begin
  {$define handleExceptionID := 846}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HostDockSite := AValue
  end else
    Result := AObj.HostDockSite;
  handleExceptionEnd
end;

// property
function TControl_LRDockWidth(ASet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 847}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LRDockWidth := AValue
  end else
    Result := AObj.LRDockWidth;
  handleExceptionEnd
end;

// property
function TControl_TBDockHeight(ASet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 848}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TBDockHeight := AValue
  end else
    Result := AObj.TBDockHeight;
  handleExceptionEnd
end;

// property
function TControl_UndockHeight(ASet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 849}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UndockHeight := AValue
  end else
    Result := AObj.UndockHeight;
  handleExceptionEnd
end;

// property
function TControl_UndockWidth(ASet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 850}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UndockWidth := AValue
  end else
    Result := AObj.UndockWidth;
  handleExceptionEnd
end;

// property
function TControl_BiDiMode(ASet: LongBool; AObj: TControl; AValue: TBiDiMode): TBiDiMode; extdecl;
begin
  {$define handleExceptionID := 851}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BiDiMode := AValue
  end else
    Result := AObj.BiDiMode;
  handleExceptionEnd
end;

// property
function TControl_ParentBiDiMode(ASet: LongBool; AObj: TControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 852}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentBiDiMode := AValue
  end else
    Result := AObj.ParentBiDiMode;
  handleExceptionEnd
end;

// property
function TControl_AnchorSideLeft(ASet: LongBool; AObj: TControl; AValue: TAnchorSide): TAnchorSide; extdecl;
begin
  {$define handleExceptionID := 853}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AnchorSideLeft := AValue
  end else
    Result := AObj.AnchorSideLeft;
  handleExceptionEnd
end;

// property
function TControl_AnchorSideTop(ASet: LongBool; AObj: TControl; AValue: TAnchorSide): TAnchorSide; extdecl;
begin
  {$define handleExceptionID := 854}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AnchorSideTop := AValue
  end else
    Result := AObj.AnchorSideTop;
  handleExceptionEnd
end;

// property
function TControl_AnchorSideRight(ASet: LongBool; AObj: TControl; AValue: TAnchorSide): TAnchorSide; extdecl;
begin
  {$define handleExceptionID := 855}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AnchorSideRight := AValue
  end else
    Result := AObj.AnchorSideRight;
  handleExceptionEnd
end;

// property
function TControl_AnchorSideBottom(ASet: LongBool; AObj: TControl; AValue: TAnchorSide): TAnchorSide; extdecl;
begin
  {$define handleExceptionID := 856}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AnchorSideBottom := AValue
  end else
    Result := AObj.AnchorSideBottom;
  handleExceptionEnd
end;

// property
function TControl_Cursor(ASet: LongBool; AObj: TControl; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 857}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cursor := AValue
  end else
    Result := AObj.Cursor;
  handleExceptionEnd
end;

// property
function TControl_Left(ASet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 858}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Left := AValue
  end else
    Result := AObj.Left;
  handleExceptionEnd
end;

// property
function TControl_Height(ASet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 859}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Height := AValue
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

// property
procedure TControl_Hint(ASet: LongBool; AObj: TControl; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 860}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Hint := AValue
  end else
    StringBufferCreate(AObj.Hint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TControl_Top(ASet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 861}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Top := AValue
  end else
    Result := AObj.Top;
  handleExceptionEnd
end;

// property
function TControl_Width(ASet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 862}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

// property
function TControl_HelpType(ASet: LongBool; AObj: TControl; AValue: THelpType): THelpType; extdecl;
begin
  {$define handleExceptionID := 863}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HelpType := AValue
  end else
    Result := AObj.HelpType;
  handleExceptionEnd
end;

// property
procedure TControl_HelpKeyword(ASet: LongBool; AObj: TControl; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 864}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HelpKeyword := AValue
  end else
    StringBufferCreate(AObj.HelpKeyword, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TControl_HelpContext(ASet: LongBool; AObj: TControl; AValue: THelpContext): THelpContext; extdecl;
begin
  {$define handleExceptionID := 865}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HelpContext := AValue
  end else
    Result := AObj.HelpContext;
  handleExceptionEnd
end;

// event
procedure TControl_OnChangeBounds(AObj: TControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChangeBounds}
  LCLEventMethodCode
end;

// event
procedure TControl_OnClick(AObj: TControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClick}
  LCLEventMethodCode
end;

// event
procedure TControl_OnResize(AObj: TControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnResize}
  LCLEventMethodCode
end;

// event
procedure TControl_OnShowHint(AObj: TControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTControlShowHintEvent}
  {$DEFINE EventName := OnShowHint}
  LCLEventMethodCode
end;

// event
procedure TControl_WindowProc(AObj: TControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTWndMethod}
  {$DEFINE EventName := WindowProc}
  LCLEventMethodCode
end;

function TControl_TClass(): TClass; extdecl;
begin
  Result := TControl;
end;

exports
  TControl_Create,
  TControl_ManualDock,
  TControl_ManualFloat,
  TControl_ReplaceDockedControl,
  TControl_Docked,
  TControl_Dragging,
  TControl_GetAccessibleObject,
  TControl_CreateAccessibleObject,
  TControl_GetSelectedChildAccessibleObject,
  TControl_GetChildAccessibleObjectAtPos,
  TControl_ScaleDesignToForm,
  TControl_ScaleFormToDesign,
  TControl_Scale96ToForm,
  TControl_ScaleFormTo96,
  TControl_Scale96ToFont,
  TControl_ScaleFontTo96,
  TControl_ScaleScreenToFont,
  TControl_ScaleFontToScreen,
  TControl_Scale96ToScreen,
  TControl_ScaleScreenTo96,
  TControl_AutoSizePhases,
  TControl_AutoSizeDelayed,
  TControl_AutoSizeDelayedReport,
  TControl_AutoSizeDelayedHandle,
  TControl_AnchoredControlCount,
  TControl_GetCanvasScaleFactor,
  TControl_GetDefaultWidth,
  TControl_GetDefaultHeight,
  TControl_GetDefaultColor,
  TControl_GetColorResolvingParent,
  TControl_GetRGBColorResolvingParent,
  TControl_GetSidePosition,
  TControl_GetAnchorsDependingOnParent,
  TControl_IsParentOf,
  TControl_GetTopParent,
  TControl_FindSubComponent,
  TControl_IsVisible,
  TControl_IsControlVisible,
  TControl_IsEnabled,
  TControl_IsParentColor,
  TControl_IsParentFont,
  TControl_FormIsUpdating,
  TControl_IsProcessingPaintMsg,
  TControl_CheckChildClassAllowed,
  TControl_GetTextBuf,
  TControl_GetTextLen,
  TControl_Perform,
  TControl_ScreenToClient,
  TControl_ClientToScreenWithPoint,
  TControl_ClientToScreenWithRect,
  TControl_ScreenToControl,
  TControl_ControlToScreen,
  TControl_ClientToParent,
  TControl_ParentToClient,
  TControl_GetChildrenRect,
  TControl_HandleObjectShouldBeVisible,
  TControl_ParentDestroyingHandle,
  TControl_ParentHandlesAllocated,
  TControl_HasHelp,
  TControl_UseRightToLeftAlignment,
  TControl_UseRightToLeftReading,
  TControl_UseRightToLeftScrollBar,
  TControl_IsRightToLeft,
  TControl_DragDrop,
  TControl_Dock,
  TControl_AdjustSize,
  TControl_AnchorToNeighbour,
  TControl_AnchorParallel,
  TControl_AnchorHorizontalCenterTo,
  TControl_AnchorVerticalCenterTo,
  TControl_AnchorToCompanion,
  TControl_AnchorSame,
  TControl_AnchorAsAlign,
  TControl_AnchorClient,
  TControl_SetBounds,
  TControl_SetInitialBounds,
  TControl_SetBoundsKeepBase,
  TControl_GetPreferredSize,
  TControl_CNPreferredSizeChanged,
  TControl_InvalidatePreferredSize,
  TControl_DisableAutoSizing,
  TControl_EnableAutoSizing,
  TControl_UpdateBaseBounds,
  TControl_WriteLayoutDebugReport,
  TControl_AutoAdjustLayout,
  TControl_ShouldAutoAdjust,
  TControl_FixDesignFontsPPI,
  TControl_ScaleFontsPPI,
  TControl_EditingDone,
  TControl_ExecuteDefaultAction,
  TControl_ExecuteCancelAction,
  TControl_BeginDrag,
  TControl_EndDrag,
  TControl_BringToFront,
  TControl_Hide,
  TControl_Refresh,
  TControl_Repaint,
  TControl_Invalidate,
  TControl_CheckNewParent,
  TControl_SendToBack,
  TControl_SetTempCursor,
  TControl_UpdateRolesForForm,
  TControl_ActiveDefaultControlChanged,
  TControl_SetTextBuf,
  TControl_Show,
  TControl_Update,
  TControl_InitiateAction,
  TControl_ShowHelp,
  TControl_AnchoredControls,
  TControl_BaseBounds,
  TControl_ReadBounds,
  TControl_BaseParentClientSize,
  TControl_AccessibleName,
  TControl_AccessibleDescription,
  TControl_AccessibleValue,
  TControl_AccessibleRole,
  TControl_Action,
  TControl_Align,
  TControl_Anchors,
  TControl_AnchorSide,
  TControl_AutoSize,
  TControl_BorderSpacing,
  TControl_BoundsRect,
  TControl_BoundsRectForNewParent,
  TControl_Caption,
  TControl_CaptureMouseButtons,
  TControl_ClientHeight,
  TControl_ClientOrigin,
  TControl_ClientRect,
  TControl_ClientWidth,
  TControl_Color,
  TControl_Constraints,
  TControl_ControlOrigin,
  TControl_ControlState,
  TControl_ControlStyle,
  TControl_Enabled,
  TControl_Font,
  TControl_IsControl,
  TControl_MouseInClient,
  TControl_Parent,
  TControl_PopupMenu,
  TControl_ShowHint,
  TControl_Visible,
  TControl_DockOrientation,
  TControl_Floating,
  TControl_FloatingDockSiteClass,
  TControl_HostDockSite,
  TControl_LRDockWidth,
  TControl_TBDockHeight,
  TControl_UndockHeight,
  TControl_UndockWidth,
  TControl_BiDiMode,
  TControl_ParentBiDiMode,
  TControl_AnchorSideLeft,
  TControl_AnchorSideTop,
  TControl_AnchorSideRight,
  TControl_AnchorSideBottom,
  TControl_Cursor,
  TControl_Left,
  TControl_Height,
  TControl_Hint,
  TControl_Top,
  TControl_Width,
  TControl_HelpType,
  TControl_HelpKeyword,
  TControl_HelpContext,
  TControl_OnChangeBounds,
  TControl_OnClick,
  TControl_OnResize,
  TControl_OnShowHint,
  TControl_WindowProc,
  TControl_TClass;