
//constructor
function Control_Create(TheOwner: TComponent): TControl; extdecl;
begin
  handleExceptionBegin
  Result := TControl.Create(TheOwner);
  handleExceptionEnd
end;

//property
function Control_AnchoredControls(AObj: TControl; Index: Integer): TControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AnchoredControls[Index];
  handleExceptionEnd
end;

//property
procedure Control_BaseBounds(AObj: TControl; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseBounds;
  handleExceptionEnd
end;

//property
procedure Control_ReadBounds(AObj: TControl; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReadBounds;
  handleExceptionEnd
end;

//property
procedure Control_BaseParentClientSize(AObj: TControl; var Result: TSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseParentClientSize;
  handleExceptionEnd
end;

//property
function Control_AccessibleName(AIsSet: LongBool; AObj: TControl; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AccessibleName := AValue;
  end else
    Result := ToPChar(AObj.AccessibleName);
  handleExceptionEnd
end;

//property
function Control_AccessibleDescription(AIsSet: LongBool; AObj: TControl; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AccessibleDescription := AValue;
  end else
    Result := ToPChar(AObj.AccessibleDescription);
  handleExceptionEnd
end;

//property
function Control_AccessibleValue(AIsSet: LongBool; AObj: TControl; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AccessibleValue := AValue;
  end else
    Result := ToPChar(AObj.AccessibleValue);
  handleExceptionEnd
end;

//property
function Control_AccessibleRole(AIsSet: LongBool; AObj: TControl; AValue: TLazAccessibilityRole): TLazAccessibilityRole; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AccessibleRole := AValue;
  end else
    Result := AObj.AccessibleRole;
  handleExceptionEnd
end;

//property
function Control_Action(AIsSet: LongBool; AObj: TControl; AValue: TBasicAction): TBasicAction; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Action := AValue;
  end else
    Result := AObj.Action;
  handleExceptionEnd
end;

//property
function Control_Align(AIsSet: LongBool; AObj: TControl; AValue: TAlign): TAlign; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Align := AValue;
  end else
    Result := AObj.Align;
  handleExceptionEnd
end;

//property
function Control_Anchors(AIsSet: LongBool; AObj: TControl; AValue: TAnchors): TAnchors; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Anchors := AValue;
  end else
    Result := AObj.Anchors;
  handleExceptionEnd
end;

//property
function Control_AnchorSide(AObj: TControl; Kind: TAnchorKind): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AnchorSide[Kind];
  handleExceptionEnd
end;

//property
function Control_AutoSize(AIsSet: LongBool; AObj: TControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSize := AValue;
  end else
    Result := AObj.AutoSize;
  handleExceptionEnd
end;

//property
function Control_BorderSpacing(AIsSet: LongBool; AObj: TControl; AValue: TControlBorderSpacing): TControlBorderSpacing; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BorderSpacing := AValue;
  end else
    Result := AObj.BorderSpacing;
  handleExceptionEnd
end;

//property
procedure Control_BoundsRect(AIsSet: LongBool; AObj: TControl; var AValue: TRect; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BoundsRect := AValue;
  end else
    Result := AObj.BoundsRect;
  handleExceptionEnd
end;

//property
procedure Control_BoundsRectForNewParent(AIsSet: LongBool; AObj: TControl; var AValue: TRect; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BoundsRectForNewParent := AValue;
  end else
    Result := AObj.BoundsRectForNewParent;
  handleExceptionEnd
end;

//property
function Control_Caption(AIsSet: LongBool; AObj: TControl; AValue: PChar): PChar; extdecl;
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
function Control_CaptureMouseButtons(AIsSet: LongBool; AObj: TControl; AValue: TCaptureMouseButtons): TCaptureMouseButtons; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CaptureMouseButtons := AValue;
  end else
    Result := AObj.CaptureMouseButtons;
  handleExceptionEnd
end;

//property
function Control_ClientHeight(AIsSet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ClientHeight := AValue;
  end else
    Result := AObj.ClientHeight;
  handleExceptionEnd
end;

//property
procedure Control_ClientOrigin(AObj: TControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClientOrigin;
  handleExceptionEnd
end;

//property
procedure Control_ClientRect(AObj: TControl; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClientRect;
  handleExceptionEnd
end;

//property
function Control_ClientWidth(AIsSet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ClientWidth := AValue;
  end else
    Result := AObj.ClientWidth;
  handleExceptionEnd
end;

//property
function Control_Color(AIsSet: LongBool; AObj: TControl; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Color := AValue;
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

//property
function Control_Constraints(AIsSet: LongBool; AObj: TControl; AValue: TSizeConstraints): TSizeConstraints; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Constraints := AValue;
  end else
    Result := AObj.Constraints;
  handleExceptionEnd
end;

//property
procedure Control_ControlOrigin(AObj: TControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ControlOrigin;
  handleExceptionEnd
end;

//property
function Control_ControlState(AIsSet: LongBool; AObj: TControl; AValue: TControlState): TControlState; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ControlState := AValue;
  end else
    Result := AObj.ControlState;
  handleExceptionEnd
end;

//property
function Control_ControlStyle(AIsSet: LongBool; AObj: TControl; AValue: TControlStyle): TControlStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ControlStyle := AValue;
  end else
    Result := AObj.ControlStyle;
  handleExceptionEnd
end;

//property
function Control_Enabled(AIsSet: LongBool; AObj: TControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Enabled := AValue;
  end else
    Result := AObj.Enabled;
  handleExceptionEnd
end;

//property
function Control_Font(AIsSet: LongBool; AObj: TControl; AValue: TFont): TFont; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Font := AValue;
  end else
    Result := AObj.Font;
  handleExceptionEnd
end;

//property
function Control_IsControl(AIsSet: LongBool; AObj: TControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsControl := AValue;
  end else
    Result := AObj.IsControl;
  handleExceptionEnd
end;

//property
function Control_MouseInClient(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MouseInClient;
  handleExceptionEnd
end;

//property
function Control_Parent(AIsSet: LongBool; AObj: TControl; AValue: TWinControl): TWinControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Parent := AValue;
  end else
    Result := AObj.Parent;
  handleExceptionEnd
end;

//property
function Control_PopupMenu(AIsSet: LongBool; AObj: TControl; AValue: TPopupmenu): TPopupmenu; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PopupMenu := AValue;
  end else
    Result := AObj.PopupMenu;
  handleExceptionEnd
end;

//property
function Control_ShowHint(AIsSet: LongBool; AObj: TControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowHint := AValue;
  end else
    Result := AObj.ShowHint;
  handleExceptionEnd
end;

//property
function Control_Visible(AIsSet: LongBool; AObj: TControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Visible := AValue;
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

//property
function Control_DockOrientation(AIsSet: LongBool; AObj: TControl; AValue: TDockOrientation): TDockOrientation; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DockOrientation := AValue;
  end else
    Result := AObj.DockOrientation;
  handleExceptionEnd
end;

//property
function Control_Floating(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Floating;
  handleExceptionEnd
end;

//property
function Control_FloatingDockSiteClass(AIsSet: LongBool; AObj: TControl; AValue: TWinControlClass): TWinControlClass; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FloatingDockSiteClass := AValue;
  end else
    Result := AObj.FloatingDockSiteClass;
  handleExceptionEnd
end;

//property
function Control_HostDockSite(AIsSet: LongBool; AObj: TControl; AValue: TWinControl): TWinControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HostDockSite := AValue;
  end else
    Result := AObj.HostDockSite;
  handleExceptionEnd
end;

//property
function Control_LRDockWidth(AIsSet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LRDockWidth := AValue;
  end else
    Result := AObj.LRDockWidth;
  handleExceptionEnd
end;

//property
function Control_TBDockHeight(AIsSet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TBDockHeight := AValue;
  end else
    Result := AObj.TBDockHeight;
  handleExceptionEnd
end;

//property
function Control_UndockHeight(AIsSet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UndockHeight := AValue;
  end else
    Result := AObj.UndockHeight;
  handleExceptionEnd
end;

//property
function Control_UndockWidth(AIsSet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UndockWidth := AValue;
  end else
    Result := AObj.UndockWidth;
  handleExceptionEnd
end;

//property
function Control_BiDiMode(AIsSet: LongBool; AObj: TControl; AValue: TBiDiMode): TBiDiMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BiDiMode := AValue;
  end else
    Result := AObj.BiDiMode;
  handleExceptionEnd
end;

//property
function Control_ParentBiDiMode(AIsSet: LongBool; AObj: TControl; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentBiDiMode := AValue;
  end else
    Result := AObj.ParentBiDiMode;
  handleExceptionEnd
end;

//property
function Control_AnchorSideLeft(AIsSet: LongBool; AObj: TControl; AValue: TAnchorSide): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AnchorSideLeft := AValue;
  end else
    Result := AObj.AnchorSideLeft;
  handleExceptionEnd
end;

//property
function Control_AnchorSideTop(AIsSet: LongBool; AObj: TControl; AValue: TAnchorSide): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AnchorSideTop := AValue;
  end else
    Result := AObj.AnchorSideTop;
  handleExceptionEnd
end;

//property
function Control_AnchorSideRight(AIsSet: LongBool; AObj: TControl; AValue: TAnchorSide): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AnchorSideRight := AValue;
  end else
    Result := AObj.AnchorSideRight;
  handleExceptionEnd
end;

//property
function Control_AnchorSideBottom(AIsSet: LongBool; AObj: TControl; AValue: TAnchorSide): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AnchorSideBottom := AValue;
  end else
    Result := AObj.AnchorSideBottom;
  handleExceptionEnd
end;

//property
function Control_Cursor(AIsSet: LongBool; AObj: TControl; AValue: TCursor): TCursor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Cursor := AValue;
  end else
    Result := AObj.Cursor;
  handleExceptionEnd
end;

//property
function Control_Left(AIsSet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Left := AValue;
  end else
    Result := AObj.Left;
  handleExceptionEnd
end;

//property
function Control_Height(AIsSet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Height := AValue;
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

//property
function Control_Hint(AIsSet: LongBool; AObj: TControl; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Hint := AValue;
  end else
    Result := ToPChar(AObj.Hint);
  handleExceptionEnd
end;

//property
function Control_Top(AIsSet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Top := AValue;
  end else
    Result := AObj.Top;
  handleExceptionEnd
end;

//property
function Control_Width(AIsSet: LongBool; AObj: TControl; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Width := AValue;
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

//property
function Control_HelpType(AIsSet: LongBool; AObj: TControl; AValue: THelpType): THelpType; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HelpType := AValue;
  end else
    Result := AObj.HelpType;
  handleExceptionEnd
end;

//property
function Control_HelpKeyword(AIsSet: LongBool; AObj: TControl; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HelpKeyword := AValue;
  end else
    Result := ToPChar(AObj.HelpKeyword);
  handleExceptionEnd
end;

//property
function Control_HelpContext(AIsSet: LongBool; AObj: TControl; AValue: THelpContext): THelpContext; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HelpContext := AValue;
  end else
    Result := AObj.HelpContext;
  handleExceptionEnd
end;

//function
function Control_ManualDock(AObj: TControl; NewDockSite: TWinControl; DropControl: TControl; ControlSide: TAlign; KeepDockSiteSize: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ManualDock(NewDockSite, DropControl, ControlSide, KeepDockSiteSize);
  handleExceptionEnd
end;

//function
function Control_ManualFloat(AObj: TControl; var TheScreenRect: TRect; KeepDockSiteSize: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ManualFloat(TheScreenRect, KeepDockSiteSize);
  handleExceptionEnd
end;

//function
function Control_ReplaceDockedControl(AObj: TControl; Control: TControl; NewDockSite: TWinControl; DropControl: TControl; ControlSide: TAlign): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReplaceDockedControl(Control, NewDockSite, DropControl, ControlSide);
  handleExceptionEnd
end;

//function
function Control_Docked(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Docked();
  handleExceptionEnd
end;

//function
function Control_Dragging(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Dragging();
  handleExceptionEnd
end;

//function
function Control_GetAccessibleObject(AObj: TControl): TLazAccessibleObject; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetAccessibleObject();
  handleExceptionEnd
end;

//function
function Control_CreateAccessibleObject(AObj: TControl): TLazAccessibleObject; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CreateAccessibleObject();
  handleExceptionEnd
end;

//function
function Control_GetSelectedChildAccessibleObject(AObj: TControl): TLazAccessibleObject; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSelectedChildAccessibleObject();
  handleExceptionEnd
end;

//function
function Control_GetChildAccessibleObjectAtPos(AObj: TControl; var APos: TPoint): TLazAccessibleObject; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetChildAccessibleObjectAtPos(APos);
  handleExceptionEnd
end;

//function
function Control_ScaleDesignToForm(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ScaleDesignToForm(ASize);
  handleExceptionEnd
end;

//function
function Control_ScaleFormToDesign(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ScaleFormToDesign(ASize);
  handleExceptionEnd
end;

//function
function Control_Scale96ToForm(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Scale96ToForm(ASize);
  handleExceptionEnd
end;

//function
function Control_ScaleFormTo96(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ScaleFormTo96(ASize);
  handleExceptionEnd
end;

//function
function Control_Scale96ToFont(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Scale96ToFont(ASize);
  handleExceptionEnd
end;

//function
function Control_ScaleFontTo96(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ScaleFontTo96(ASize);
  handleExceptionEnd
end;

//function
function Control_ScaleScreenToFont(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ScaleScreenToFont(ASize);
  handleExceptionEnd
end;

//function
function Control_ScaleFontToScreen(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ScaleFontToScreen(ASize);
  handleExceptionEnd
end;

//function
function Control_Scale96ToScreen(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Scale96ToScreen(ASize);
  handleExceptionEnd
end;

//function
function Control_ScaleScreenTo96(AObj: TControl; const ASize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ScaleScreenTo96(ASize);
  handleExceptionEnd
end;

//function
function Control_AutoSizePhases(AObj: TControl): TControlAutoSizePhases; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AutoSizePhases();
  handleExceptionEnd
end;

//function
function Control_AutoSizeDelayed(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AutoSizeDelayed();
  handleExceptionEnd
end;

//function
function Control_AutoSizeDelayedReport(AObj: TControl): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.AutoSizeDelayedReport());
  handleExceptionEnd
end;

//function
function Control_AutoSizeDelayedHandle(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AutoSizeDelayedHandle();
  handleExceptionEnd
end;

//function
function Control_AnchoredControlCount(AObj: TControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AnchoredControlCount();
  handleExceptionEnd
end;

//function
procedure Control_GetCanvasScaleFactor(AObj: TControl; var Result: Double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetCanvasScaleFactor();
  handleExceptionEnd
end;

//function
function Control_GetDefaultWidth(AObj: TControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDefaultWidth();
  handleExceptionEnd
end;

//function
function Control_GetDefaultHeight(AObj: TControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDefaultHeight();
  handleExceptionEnd
end;

//function
function Control_GetDefaultColor(AObj: TControl; const DefaultColorType: TDefaultColorType): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDefaultColor(DefaultColorType);
  handleExceptionEnd
end;

//function
function Control_GetColorResolvingParent(AObj: TControl): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetColorResolvingParent();
  handleExceptionEnd
end;

//function
function Control_GetRGBColorResolvingParent(AObj: TControl): TColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetRGBColorResolvingParent();
  handleExceptionEnd
end;

//function
function Control_GetSidePosition(AObj: TControl; Side: TAnchorKind): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSidePosition(Side);
  handleExceptionEnd
end;

//function
function Control_GetAnchorsDependingOnParent(AObj: TControl; WithNormalAnchors: LongBool): TAnchors; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetAnchorsDependingOnParent(WithNormalAnchors);
  handleExceptionEnd
end;

//function
function Control_IsParentOf(AObj: TControl; AControl: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsParentOf(AControl);
  handleExceptionEnd
end;

//function
function Control_GetTopParent(AObj: TControl): TControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTopParent();
  handleExceptionEnd
end;

//function
function Control_FindSubComponent(AObj: TControl; AName: PChar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindSubComponent(AName);
  handleExceptionEnd
end;

//function
function Control_IsVisible(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsVisible();
  handleExceptionEnd
end;

//function
function Control_IsControlVisible(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsControlVisible();
  handleExceptionEnd
end;

//function
function Control_IsEnabled(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsEnabled();
  handleExceptionEnd
end;

//function
function Control_IsParentColor(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsParentColor();
  handleExceptionEnd
end;

//function
function Control_IsParentFont(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsParentFont();
  handleExceptionEnd
end;

//function
function Control_FormIsUpdating(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FormIsUpdating();
  handleExceptionEnd
end;

//function
function Control_IsProcessingPaintMsg(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsProcessingPaintMsg();
  handleExceptionEnd
end;

//function
function Control_CheckChildClassAllowed(AObj: TControl; ChildClass: TClass; ExceptionOnInvalid: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CheckChildClassAllowed(ChildClass, ExceptionOnInvalid);
  handleExceptionEnd
end;

//function
function Control_GetTextBuf(AObj: TControl; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTextBuf(Buffer, BufSize);
  handleExceptionEnd
end;

//function
function Control_GetTextLen(AObj: TControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTextLen();
  handleExceptionEnd
end;

//function
function Control_Perform(AObj: TControl; Msg: uint32; WParam: WParam; LParam: LParam): LRESULT; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Perform(Msg, WParam, LParam);
  handleExceptionEnd
end;

//function
procedure Control_ScreenToClient(AObj: TControl; var APoint: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ScreenToClient(APoint);
  handleExceptionEnd
end;

//function
procedure Control_ClientToScreen(AObj: TControl; var APoint: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClientToScreen(APoint);
  handleExceptionEnd
end;

//function
procedure Control_ClientToScreen1(AObj: TControl; var ARect: TRect; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClientToScreen(ARect);
  handleExceptionEnd
end;

//function
procedure Control_ScreenToControl(AObj: TControl; var APoint: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ScreenToControl(APoint);
  handleExceptionEnd
end;

//function
procedure Control_ControlToScreen(AObj: TControl; var APoint: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ControlToScreen(APoint);
  handleExceptionEnd
end;

//function
procedure Control_ClientToParent(AObj: TControl; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ClientToParent(Point, AParent);
  handleExceptionEnd
end;

//function
procedure Control_ParentToClient(AObj: TControl; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ParentToClient(Point, AParent);
  handleExceptionEnd
end;

//function
procedure Control_GetChildrenRect(AObj: TControl; Scrolled: LongBool; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetChildrenRect(Scrolled);
  handleExceptionEnd
end;

//function
function Control_HandleObjectShouldBeVisible(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HandleObjectShouldBeVisible();
  handleExceptionEnd
end;

//function
function Control_ParentDestroyingHandle(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ParentDestroyingHandle();
  handleExceptionEnd
end;

//function
function Control_ParentHandlesAllocated(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ParentHandlesAllocated();
  handleExceptionEnd
end;

//function
function Control_HasHelp(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasHelp();
  handleExceptionEnd
end;

//function
function Control_UseRightToLeftAlignment(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UseRightToLeftAlignment();
  handleExceptionEnd
end;

//function
function Control_UseRightToLeftReading(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UseRightToLeftReading();
  handleExceptionEnd
end;

//function
function Control_UseRightToLeftScrollBar(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UseRightToLeftScrollBar();
  handleExceptionEnd
end;

//function
function Control_IsRightToLeft(AObj: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsRightToLeft();
  handleExceptionEnd
end;

//function
function Control_Class(): TClass; extdecl;
begin
  Result := TControl;
end;

//procedure
procedure Control_DragDrop(AObj: TControl; Source: TObject; X, Y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.DragDrop(Source, X, Y);
  handleExceptionEnd
end;

//procedure
procedure Control_Dock(AObj: TControl; NewDockSite: TWinControl; var ARect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.Dock(NewDockSite, ARect);
  handleExceptionEnd
end;

//procedure
procedure Control_AdjustSize(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AdjustSize();
  handleExceptionEnd
end;

//procedure
procedure Control_AnchorToNeighbour(AObj: TControl; Side: TAnchorKind; Space: TSpacingSize; Sibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorToNeighbour(Side, Space, Sibling);
  handleExceptionEnd
end;

//procedure
procedure Control_AnchorParallel(AObj: TControl; Side: TAnchorKind; Space: TSpacingSize; Sibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorParallel(Side, Space, Sibling);
  handleExceptionEnd
end;

//procedure
procedure Control_AnchorHorizontalCenterTo(AObj: TControl; Sibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorHorizontalCenterTo(Sibling);
  handleExceptionEnd
end;

//procedure
procedure Control_AnchorVerticalCenterTo(AObj: TControl; Sibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorVerticalCenterTo(Sibling);
  handleExceptionEnd
end;

//procedure
procedure Control_AnchorToCompanion(AObj: TControl; Side: TAnchorKind; Space: TSpacingSize; Sibling: TControl; FreeCompositeSide: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorToCompanion(Side, Space, Sibling, FreeCompositeSide);
  handleExceptionEnd
end;

//procedure
procedure Control_AnchorSame(AObj: TControl; Side: TAnchorKind; Sibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSame(Side, Sibling);
  handleExceptionEnd
end;

//procedure
procedure Control_AnchorAsAlign(AObj: TControl; TheAlign: TAlign; Space: TSpacingSize); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorAsAlign(TheAlign, Space);
  handleExceptionEnd
end;

//procedure
procedure Control_AnchorClient(AObj: TControl; Space: TSpacingSize); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorClient(Space);
  handleExceptionEnd
end;

//procedure
procedure Control_SetBounds(AObj: TControl; aLeft, aTop, aWidth, aHeight: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetBounds(aLeft, aTop, aWidth, aHeight);
  handleExceptionEnd
end;

//procedure
procedure Control_SetInitialBounds(AObj: TControl; aLeft, aTop, aWidth, aHeight: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetInitialBounds(aLeft, aTop, aWidth, aHeight);
  handleExceptionEnd
end;

//procedure
procedure Control_SetBoundsKeepBase(AObj: TControl; aLeft, aTop, aWidth, aHeight: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetBoundsKeepBase(aLeft, aTop, aWidth, aHeight);
  handleExceptionEnd
end;

//procedure
procedure Control_GetPreferredSize(AObj: TControl; var PreferredWidth, PreferredHeight: Integer; Raw: LongBool; WithThemeSpace: LongBool); extdecl;
var
  RetPreferredWidth: Integer;
  RetPreferredHeight: Integer;
begin
  handleExceptionBegin
  RetPreferredWidth := PreferredWidth;
  RetPreferredHeight := PreferredHeight;
  AObj.GetPreferredSize(RetPreferredWidth, RetPreferredHeight, Raw, WithThemeSpace);
  PreferredWidth := RetPreferredWidth;
  PreferredHeight := RetPreferredHeight;
  handleExceptionEnd
end;

//procedure
procedure Control_CNPreferredSizeChanged(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.CNPreferredSizeChanged();
  handleExceptionEnd
end;

//procedure
procedure Control_InvalidatePreferredSize(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.InvalidatePreferredSize();
  handleExceptionEnd
end;

//procedure
procedure Control_DisableAutoSizing(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.DisableAutoSizing();
  handleExceptionEnd
end;

//procedure
procedure Control_EnableAutoSizing(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.EnableAutoSizing();
  handleExceptionEnd
end;

//procedure
procedure Control_UpdateBaseBounds(AObj: TControl; StoreBounds, StoreParentClientSize, UseLoadedValues: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateBaseBounds(StoreBounds, StoreParentClientSize, UseLoadedValues);
  handleExceptionEnd
end;

//procedure
procedure Control_WriteLayoutDebugReport(AObj: TControl; const Prefix: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.WriteLayoutDebugReport(Prefix);
  handleExceptionEnd
end;

//procedure
procedure Control_AutoAdjustLayout(AObj: TControl; AMode: TLayoutAdjustmentPolicy; const AFromPPI, AToPPI, AOldFormWidth, ANewFormWidth: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AutoAdjustLayout(AMode, AFromPPI, AToPPI, AOldFormWidth, ANewFormWidth);
  handleExceptionEnd
end;

//procedure
procedure Control_ShouldAutoAdjust(AObj: TControl; var AWidth, AHeight: LongBool); extdecl;
var
  RetAWidth: boolean;
  RetAHeight: boolean;
begin
  handleExceptionBegin
  RetAWidth := AWidth;
  RetAHeight := AHeight;
  AObj.ShouldAutoAdjust(RetAWidth, RetAHeight);
  AWidth := LongBool(RetAWidth);
  AHeight := LongBool(RetAHeight);
  handleExceptionEnd
end;

//procedure
procedure Control_FixDesignFontsPPI(AObj: TControl; const ADesignTimePPI: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.FixDesignFontsPPI(ADesignTimePPI);
  handleExceptionEnd
end;

//procedure
procedure Control_ScaleFontsPPI(AObj: TControl; const AToPPI: Integer; var AProportion: Double); extdecl;
begin
  handleExceptionBegin
  AObj.ScaleFontsPPI(AToPPI, AProportion);
  handleExceptionEnd
end;

//procedure
procedure Control_EditingDone(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.EditingDone();
  handleExceptionEnd
end;

//procedure
procedure Control_ExecuteDefaultAction(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.ExecuteDefaultAction();
  handleExceptionEnd
end;

//procedure
procedure Control_ExecuteCancelAction(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.ExecuteCancelAction();
  handleExceptionEnd
end;

//procedure
procedure Control_BeginDrag(AObj: TControl; Immediate: LongBool; Threshold: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.BeginDrag(Immediate, Threshold);
  handleExceptionEnd
end;

//procedure
procedure Control_EndDrag(AObj: TControl; Drop: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.EndDrag(Drop);
  handleExceptionEnd
end;

//procedure
procedure Control_BringToFront(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.BringToFront();
  handleExceptionEnd
end;

//procedure
procedure Control_Hide(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.Hide();
  handleExceptionEnd
end;

//procedure
procedure Control_Refresh(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.Refresh();
  handleExceptionEnd
end;

//procedure
procedure Control_Repaint(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.Repaint();
  handleExceptionEnd
end;

//procedure
procedure Control_Invalidate(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.Invalidate();
  handleExceptionEnd
end;

//procedure
procedure Control_CheckNewParent(AObj: TControl; AParent: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.CheckNewParent(AParent);
  handleExceptionEnd
end;

//procedure
procedure Control_SendToBack(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.SendToBack();
  handleExceptionEnd
end;

//procedure
procedure Control_SetTempCursor(AObj: TControl; Value: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.SetTempCursor(Value);
  handleExceptionEnd
end;

//procedure
procedure Control_UpdateRolesForForm(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateRolesForForm();
  handleExceptionEnd
end;

//procedure
procedure Control_ActiveDefaultControlChanged(AObj: TControl; NewControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.ActiveDefaultControlChanged(NewControl);
  handleExceptionEnd
end;

//procedure
procedure Control_SetTextBuf(AObj: TControl; Buffer: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetTextBuf(Buffer);
  handleExceptionEnd
end;

//procedure
procedure Control_Show(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.Show();
  handleExceptionEnd
end;

//procedure
procedure Control_Update(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.Update();
  handleExceptionEnd
end;

//procedure
procedure Control_InitiateAction(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.InitiateAction();
  handleExceptionEnd
end;

//procedure
procedure Control_ShowHelp(AObj: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.ShowHelp();
  handleExceptionEnd
end;

//property event
procedure Control_SetOnChangeBounds(AObj: TControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChangeBounds}
  EventMethodCode
end;

//property event
procedure Control_SetOnClick(AObj: TControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClick}
  EventMethodCode
end;

//property event
procedure Control_SetOnResize(AObj: TControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnResize}
  EventMethodCode
end;

//property event
procedure Control_SetOnShowHint(AObj: TControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTControlShowHintEvent}
  {$DEFINE EventName := OnShowHint}
  EventMethodCode
end;


exports
  Control_Create,
  Control_AnchoredControls,
  Control_BaseBounds,
  Control_ReadBounds,
  Control_BaseParentClientSize,
  Control_AccessibleName,
  Control_AccessibleDescription,
  Control_AccessibleValue,
  Control_AccessibleRole,
  Control_Action,
  Control_Align,
  Control_Anchors,
  Control_AnchorSide,
  Control_AutoSize,
  Control_BorderSpacing,
  Control_BoundsRect,
  Control_BoundsRectForNewParent,
  Control_Caption,
  Control_CaptureMouseButtons,
  Control_ClientHeight,
  Control_ClientOrigin,
  Control_ClientRect,
  Control_ClientWidth,
  Control_Color,
  Control_Constraints,
  Control_ControlOrigin,
  Control_ControlState,
  Control_ControlStyle,
  Control_Enabled,
  Control_Font,
  Control_IsControl,
  Control_MouseInClient,
  Control_Parent,
  Control_PopupMenu,
  Control_ShowHint,
  Control_Visible,
  Control_DockOrientation,
  Control_Floating,
  Control_FloatingDockSiteClass,
  Control_HostDockSite,
  Control_LRDockWidth,
  Control_TBDockHeight,
  Control_UndockHeight,
  Control_UndockWidth,
  Control_BiDiMode,
  Control_ParentBiDiMode,
  Control_AnchorSideLeft,
  Control_AnchorSideTop,
  Control_AnchorSideRight,
  Control_AnchorSideBottom,
  Control_Cursor,
  Control_Left,
  Control_Height,
  Control_Hint,
  Control_Top,
  Control_Width,
  Control_HelpType,
  Control_HelpKeyword,
  Control_HelpContext,
  Control_ManualDock,
  Control_ManualFloat,
  Control_ReplaceDockedControl,
  Control_Docked,
  Control_Dragging,
  Control_GetAccessibleObject,
  Control_CreateAccessibleObject,
  Control_GetSelectedChildAccessibleObject,
  Control_GetChildAccessibleObjectAtPos,
  Control_ScaleDesignToForm,
  Control_ScaleFormToDesign,
  Control_Scale96ToForm,
  Control_ScaleFormTo96,
  Control_Scale96ToFont,
  Control_ScaleFontTo96,
  Control_ScaleScreenToFont,
  Control_ScaleFontToScreen,
  Control_Scale96ToScreen,
  Control_ScaleScreenTo96,
  Control_AutoSizePhases,
  Control_AutoSizeDelayed,
  Control_AutoSizeDelayedReport,
  Control_AutoSizeDelayedHandle,
  Control_AnchoredControlCount,
  Control_GetCanvasScaleFactor,
  Control_GetDefaultWidth,
  Control_GetDefaultHeight,
  Control_GetDefaultColor,
  Control_GetColorResolvingParent,
  Control_GetRGBColorResolvingParent,
  Control_GetSidePosition,
  Control_GetAnchorsDependingOnParent,
  Control_IsParentOf,
  Control_GetTopParent,
  Control_FindSubComponent,
  Control_IsVisible,
  Control_IsControlVisible,
  Control_IsEnabled,
  Control_IsParentColor,
  Control_IsParentFont,
  Control_FormIsUpdating,
  Control_IsProcessingPaintMsg,
  Control_CheckChildClassAllowed,
  Control_GetTextBuf,
  Control_GetTextLen,
  Control_Perform,
  Control_ScreenToClient,
  Control_ClientToScreen,
  Control_ClientToScreen1,
  Control_ScreenToControl,
  Control_ControlToScreen,
  Control_ClientToParent,
  Control_ParentToClient,
  Control_GetChildrenRect,
  Control_HandleObjectShouldBeVisible,
  Control_ParentDestroyingHandle,
  Control_ParentHandlesAllocated,
  Control_HasHelp,
  Control_UseRightToLeftAlignment,
  Control_UseRightToLeftReading,
  Control_UseRightToLeftScrollBar,
  Control_IsRightToLeft,
  Control_Class,
  Control_DragDrop,
  Control_Dock,
  Control_AdjustSize,
  Control_AnchorToNeighbour,
  Control_AnchorParallel,
  Control_AnchorHorizontalCenterTo,
  Control_AnchorVerticalCenterTo,
  Control_AnchorToCompanion,
  Control_AnchorSame,
  Control_AnchorAsAlign,
  Control_AnchorClient,
  Control_SetBounds,
  Control_SetInitialBounds,
  Control_SetBoundsKeepBase,
  Control_GetPreferredSize,
  Control_CNPreferredSizeChanged,
  Control_InvalidatePreferredSize,
  Control_DisableAutoSizing,
  Control_EnableAutoSizing,
  Control_UpdateBaseBounds,
  Control_WriteLayoutDebugReport,
  Control_AutoAdjustLayout,
  Control_ShouldAutoAdjust,
  Control_FixDesignFontsPPI,
  Control_ScaleFontsPPI,
  Control_EditingDone,
  Control_ExecuteDefaultAction,
  Control_ExecuteCancelAction,
  Control_BeginDrag,
  Control_EndDrag,
  Control_BringToFront,
  Control_Hide,
  Control_Refresh,
  Control_Repaint,
  Control_Invalidate,
  Control_CheckNewParent,
  Control_SendToBack,
  Control_SetTempCursor,
  Control_UpdateRolesForForm,
  Control_ActiveDefaultControlChanged,
  Control_SetTextBuf,
  Control_Show,
  Control_Update,
  Control_InitiateAction,
  Control_ShowHelp,
  Control_SetOnChangeBounds,
  Control_SetOnClick,
  Control_SetOnResize,
  Control_SetOnShowHint;