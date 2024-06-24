
//constructor
function MenuItem_Create(TheOwner: TComponent): TMenuItem; extdecl;
begin
  handleExceptionBegin
  Result := TMenuItem.Create(TheOwner);
  handleExceptionEnd
end;

//property
function MenuItem_Merged(AObj: TMenuItem): TMenuItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Merged;
  handleExceptionEnd
end;

//property
function MenuItem_MergedWith(AObj: TMenuItem): TMenuItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MergedWith;
  handleExceptionEnd
end;

//property
function MenuItem_Count(AObj: TMenuItem): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
function MenuItem_Handle(AIsSet: LongBool; AObj: TMenuItem; AValue: HMenu): HMenu; extdecl;
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
function MenuItem_Items(AObj: TMenuItem; Index: Integer): TMenuItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Items[Index];
  handleExceptionEnd
end;

//property
function MenuItem_MergedItems(AObj: TMenuItem): TMergedMenuItems; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MergedItems;
  handleExceptionEnd
end;

//property
function MenuItem_MenuIndex(AIsSet: LongBool; AObj: TMenuItem; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MenuIndex := AValue;
  end else
    Result := AObj.MenuIndex;
  handleExceptionEnd
end;

//property
function MenuItem_Menu(AObj: TMenuItem): TMenu; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Menu;
  handleExceptionEnd
end;

//property
function MenuItem_Parent(AObj: TMenuItem): TMenuItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Parent;
  handleExceptionEnd
end;

//property
function MenuItem_MergedParent(AObj: TMenuItem): TMenuItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MergedParent;
  handleExceptionEnd
end;

//property
function MenuItem_Command(AObj: TMenuItem): Word; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Command;
  handleExceptionEnd
end;

//property
function MenuItem_Action(AIsSet: LongBool; AObj: TMenuItem; AValue: TBasicAction): TBasicAction; extdecl;
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
function MenuItem_AutoCheck(AIsSet: LongBool; AObj: TMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoCheck := AValue;
  end else
    Result := AObj.AutoCheck;
  handleExceptionEnd
end;

//property
function MenuItem_Caption(AIsSet: LongBool; AObj: TMenuItem; AValue: PChar): PChar; extdecl;
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
function MenuItem_Checked(AIsSet: LongBool; AObj: TMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Checked := AValue;
  end else
    Result := AObj.Checked;
  handleExceptionEnd
end;

//property
function MenuItem_Default(AIsSet: LongBool; AObj: TMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Default := AValue;
  end else
    Result := AObj.Default;
  handleExceptionEnd
end;

//property
function MenuItem_Enabled(AIsSet: LongBool; AObj: TMenuItem; AValue: LongBool): LongBool; extdecl;
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
function MenuItem_Bitmap(AIsSet: LongBool; AObj: TMenuItem; AValue: TBitmap): TBitmap; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Bitmap := AValue;
  end else
    Result := AObj.Bitmap;
  handleExceptionEnd
end;

//property
function MenuItem_GroupIndex(AIsSet: LongBool; AObj: TMenuItem; AValue: Byte): Byte; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.GroupIndex := AValue;
  end else
    Result := AObj.GroupIndex;
  handleExceptionEnd
end;

//property
function MenuItem_GlyphShowMode(AIsSet: LongBool; AObj: TMenuItem; AValue: TGlyphShowMode): TGlyphShowMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.GlyphShowMode := AValue;
  end else
    Result := AObj.GlyphShowMode;
  handleExceptionEnd
end;

//property
function MenuItem_HelpContext(AIsSet: LongBool; AObj: TMenuItem; AValue: THelpContext): THelpContext; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HelpContext := AValue;
  end else
    Result := AObj.HelpContext;
  handleExceptionEnd
end;

//property
function MenuItem_Hint(AIsSet: LongBool; AObj: TMenuItem; AValue: PChar): PChar; extdecl;
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
function MenuItem_ImageIndex(AIsSet: LongBool; AObj: TMenuItem; AValue: TImageIndex): TImageIndex; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageIndex := AValue;
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

//property
function MenuItem_RadioItem(AIsSet: LongBool; AObj: TMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RadioItem := AValue;
  end else
    Result := AObj.RadioItem;
  handleExceptionEnd
end;

//property
function MenuItem_RightJustify(AIsSet: LongBool; AObj: TMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RightJustify := AValue;
  end else
    Result := AObj.RightJustify;
  handleExceptionEnd
end;

//property
function MenuItem_ShortCut(AIsSet: LongBool; AObj: TMenuItem; AValue: TShortCut): TShortCut; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShortCut := AValue;
  end else
    Result := AObj.ShortCut;
  handleExceptionEnd
end;

//property
function MenuItem_ShortCutKey2(AIsSet: LongBool; AObj: TMenuItem; AValue: TShortCut): TShortCut; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShortCutKey2 := AValue;
  end else
    Result := AObj.ShortCutKey2;
  handleExceptionEnd
end;

//property
function MenuItem_ShowAlwaysCheckable(AIsSet: LongBool; AObj: TMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowAlwaysCheckable := AValue;
  end else
    Result := AObj.ShowAlwaysCheckable;
  handleExceptionEnd
end;

//property
function MenuItem_SubMenuImages(AIsSet: LongBool; AObj: TMenuItem; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SubMenuImages := AValue;
  end else
    Result := AObj.SubMenuImages;
  handleExceptionEnd
end;

//property
function MenuItem_SubMenuImagesWidth(AIsSet: LongBool; AObj: TMenuItem; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SubMenuImagesWidth := AValue;
  end else
    Result := AObj.SubMenuImagesWidth;
  handleExceptionEnd
end;

//property
function MenuItem_Visible(AIsSet: LongBool; AObj: TMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Visible := AValue;
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

//function
function MenuItem_Find(AObj: TMenuItem; const ACaption: PChar): TMenuItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Find(ACaption);
  handleExceptionEnd
end;

//function
function MenuItem_GetEnumeratorForMenuItemEnumerator(AObj: TMenuItem): TMenuItemEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function MenuItem_GetImageList(AObj: TMenuItem): TCustomImageList; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetImageList();
  handleExceptionEnd
end;

//function
function MenuItem_GetParentMenu(AObj: TMenuItem): TMenu; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetParentMenu();
  handleExceptionEnd
end;

//function
function MenuItem_GetMergedParentMenu(AObj: TMenuItem): TMenu; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetMergedParentMenu();
  handleExceptionEnd
end;

//function
function MenuItem_GetIsRightToLeft(AObj: TMenuItem): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetIsRightToLeft();
  handleExceptionEnd
end;

//function
function MenuItem_HandleAllocated(AObj: TMenuItem): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HandleAllocated();
  handleExceptionEnd
end;

//function
function MenuItem_HasIcon(AObj: TMenuItem): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasIcon();
  handleExceptionEnd
end;

//function
function MenuItem_IndexOf(AObj: TMenuItem; Item: TMenuItem): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IndexOf(Item);
  handleExceptionEnd
end;

//function
function MenuItem_IndexOfCaption(AObj: TMenuItem; const ACaption: PChar): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IndexOfCaption(ACaption);
  handleExceptionEnd
end;

//function
function MenuItem_VisibleIndexOf(AObj: TMenuItem; Item: TMenuItem): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.VisibleIndexOf(Item);
  handleExceptionEnd
end;

//function
function MenuItem_IsCheckItem(AObj: TMenuItem): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsCheckItem();
  handleExceptionEnd
end;

//function
function MenuItem_IsLine(AObj: TMenuItem): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsLine();
  handleExceptionEnd
end;

//function
function MenuItem_IsInMenuBar(AObj: TMenuItem): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsInMenuBar();
  handleExceptionEnd
end;

//function
function MenuItem_HasBitmap(AObj: TMenuItem): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasBitmap();
  handleExceptionEnd
end;

//function
procedure MenuItem_GetIconSize(AObj: TMenuItem; ADC: HDC; DPI: Integer; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetIconSize(ADC, DPI);
  handleExceptionEnd
end;

//function
function MenuItem_MenuVisibleIndex(AObj: TMenuItem): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MenuVisibleIndex();
  handleExceptionEnd
end;

//function
function MenuItem_Class(): TClass; extdecl;
begin
  Result := TMenuItem;
end;

//procedure
procedure MenuItem_GetImageList1(AObj: TMenuItem; out OutImages: TCustomImageList; out OutImagesWidth: Integer); extdecl;
var
  RetOutImages: TCustomImageList;
  RetOutImagesWidth: Integer;
begin
  handleExceptionBegin
  RetOutImages := OutImages;
  RetOutImagesWidth := OutImagesWidth;
  AObj.GetImageList(RetOutImages, RetOutImagesWidth);
  OutImages := RetOutImages;
  OutImagesWidth := RetOutImagesWidth;
  handleExceptionEnd
end;

//procedure
procedure MenuItem_InitiateAction(AObj: TMenuItem); extdecl;
begin
  handleExceptionBegin
  AObj.InitiateAction();
  handleExceptionEnd
end;

//procedure
procedure MenuItem_IntfDoSelect(AObj: TMenuItem); extdecl;
begin
  handleExceptionBegin
  AObj.IntfDoSelect();
  handleExceptionEnd
end;

//procedure
procedure MenuItem_InvalidateMergedItems(AObj: TMenuItem); extdecl;
begin
  handleExceptionBegin
  AObj.InvalidateMergedItems();
  handleExceptionEnd
end;

//procedure
procedure MenuItem_Add(AObj: TMenuItem; Item: TMenuItem); extdecl;
begin
  handleExceptionBegin
  AObj.Add(Item);
  handleExceptionEnd
end;

//procedure
procedure MenuItem_AddSeparator(AObj: TMenuItem); extdecl;
begin
  handleExceptionBegin
  AObj.AddSeparator();
  handleExceptionEnd
end;

//procedure
procedure MenuItem_Click(AObj: TMenuItem); extdecl;
begin
  handleExceptionBegin
  AObj.Click();
  handleExceptionEnd
end;

//procedure
procedure MenuItem_Delete(AObj: TMenuItem; Index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

//procedure
procedure MenuItem_HandleNeeded(AObj: TMenuItem); extdecl;
begin
  handleExceptionBegin
  AObj.HandleNeeded();
  handleExceptionEnd
end;

//procedure
procedure MenuItem_Insert(AObj: TMenuItem; Index: Integer; Item: TMenuItem); extdecl;
begin
  handleExceptionBegin
  AObj.Insert(Index, Item);
  handleExceptionEnd
end;

//procedure
procedure MenuItem_RecreateHandle(AObj: TMenuItem); extdecl;
begin
  handleExceptionBegin
  AObj.RecreateHandle();
  handleExceptionEnd
end;

//procedure
procedure MenuItem_Remove(AObj: TMenuItem; Item: TMenuItem); extdecl;
begin
  handleExceptionBegin
  AObj.Remove(Item);
  handleExceptionEnd
end;

//procedure
procedure MenuItem_UpdateImage(AObj: TMenuItem; forced: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateImage(forced);
  handleExceptionEnd
end;

//procedure
procedure MenuItem_UpdateImages(AObj: TMenuItem; forced: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateImages(forced);
  handleExceptionEnd
end;

//procedure
procedure MenuItem_Clear(AObj: TMenuItem); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure MenuItem_WriteDebugReport(AObj: TMenuItem; const Prefix: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.WriteDebugReport(Prefix);
  handleExceptionEnd
end;

//property event
procedure MenuItem_SetOnClick(AObj: TMenuItem; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClick}
  EventMethodCode
end;

//property event
procedure MenuItem_SetOnDrawItem(AObj: TMenuItem; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMenuDrawItemEvent}
  {$DEFINE EventName := OnDrawItem}
  EventMethodCode
end;

//property event
procedure MenuItem_SetOnMeasureItem(AObj: TMenuItem; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMenuMeasureItemEvent}
  {$DEFINE EventName := OnMeasureItem}
  EventMethodCode
end;


exports
  MenuItem_Create,
  MenuItem_Merged,
  MenuItem_MergedWith,
  MenuItem_Count,
  MenuItem_Handle,
  MenuItem_Items,
  MenuItem_MergedItems,
  MenuItem_MenuIndex,
  MenuItem_Menu,
  MenuItem_Parent,
  MenuItem_MergedParent,
  MenuItem_Command,
  MenuItem_Action,
  MenuItem_AutoCheck,
  MenuItem_Caption,
  MenuItem_Checked,
  MenuItem_Default,
  MenuItem_Enabled,
  MenuItem_Bitmap,
  MenuItem_GroupIndex,
  MenuItem_GlyphShowMode,
  MenuItem_HelpContext,
  MenuItem_Hint,
  MenuItem_ImageIndex,
  MenuItem_RadioItem,
  MenuItem_RightJustify,
  MenuItem_ShortCut,
  MenuItem_ShortCutKey2,
  MenuItem_ShowAlwaysCheckable,
  MenuItem_SubMenuImages,
  MenuItem_SubMenuImagesWidth,
  MenuItem_Visible,
  MenuItem_Find,
  MenuItem_GetEnumeratorForMenuItemEnumerator,
  MenuItem_GetImageList,
  MenuItem_GetParentMenu,
  MenuItem_GetMergedParentMenu,
  MenuItem_GetIsRightToLeft,
  MenuItem_HandleAllocated,
  MenuItem_HasIcon,
  MenuItem_IndexOf,
  MenuItem_IndexOfCaption,
  MenuItem_VisibleIndexOf,
  MenuItem_IsCheckItem,
  MenuItem_IsLine,
  MenuItem_IsInMenuBar,
  MenuItem_HasBitmap,
  MenuItem_GetIconSize,
  MenuItem_MenuVisibleIndex,
  MenuItem_Class,
  MenuItem_GetImageList1,
  MenuItem_InitiateAction,
  MenuItem_IntfDoSelect,
  MenuItem_InvalidateMergedItems,
  MenuItem_Add,
  MenuItem_AddSeparator,
  MenuItem_Click,
  MenuItem_Delete,
  MenuItem_HandleNeeded,
  MenuItem_Insert,
  MenuItem_RecreateHandle,
  MenuItem_Remove,
  MenuItem_UpdateImage,
  MenuItem_UpdateImages,
  MenuItem_Clear,
  MenuItem_WriteDebugReport,
  MenuItem_SetOnClick,
  MenuItem_SetOnDrawItem,
  MenuItem_SetOnMeasureItem;