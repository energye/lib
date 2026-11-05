// constructor
function TMenuItem_Create(TheOwner: TComponent): TMenuItem; extdecl;
begin
  {$define handleExceptionID := 12000}
  handleExceptionBegin
  Result := TMenuItem.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TMenuItem_Find(AObj: TMenuItem; const ACaption: PChar): TMenuItem; extdecl;
begin
  {$define handleExceptionID := 12001}
  handleExceptionBegin
  Result := AObj.Find(ACaption);
  handleExceptionEnd
end;

// function
function TMenuItem_GetEnumeratorToMenuItemEnumerator(AObj: TMenuItem): TMenuItemEnumerator; extdecl;
begin
  {$define handleExceptionID := 12002}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

// function
function TMenuItem_GetImageListToCustomImageList(AObj: TMenuItem): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 12003}
  handleExceptionBegin
  Result := AObj.GetImageList();
  handleExceptionEnd
end;

// function
function TMenuItem_GetParentMenu(AObj: TMenuItem): TMenu; extdecl;
begin
  {$define handleExceptionID := 12004}
  handleExceptionBegin
  Result := AObj.GetParentMenu();
  handleExceptionEnd
end;

// function
function TMenuItem_GetMergedParentMenu(AObj: TMenuItem): TMenu; extdecl;
begin
  {$define handleExceptionID := 12005}
  handleExceptionBegin
  Result := AObj.GetMergedParentMenu();
  handleExceptionEnd
end;

// function
function TMenuItem_GetIsRightToLeft(AObj: TMenuItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 12006}
  handleExceptionBegin
  Result := AObj.GetIsRightToLeft();
  handleExceptionEnd
end;

// function
function TMenuItem_HandleAllocated(AObj: TMenuItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 12007}
  handleExceptionBegin
  Result := AObj.HandleAllocated();
  handleExceptionEnd
end;

// function
function TMenuItem_HasIcon(AObj: TMenuItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 12008}
  handleExceptionBegin
  Result := AObj.HasIcon();
  handleExceptionEnd
end;

// function
function TMenuItem_IndexOf(AObj: TMenuItem; Item: TMenuItem): Integer; extdecl;
begin
  {$define handleExceptionID := 12009}
  handleExceptionBegin
  Result := AObj.IndexOf(Item);
  handleExceptionEnd
end;

// function
function TMenuItem_IndexOfCaption(AObj: TMenuItem; const ACaption: PChar): Integer; extdecl;
begin
  {$define handleExceptionID := 12010}
  handleExceptionBegin
  Result := AObj.IndexOfCaption(ACaption);
  handleExceptionEnd
end;

// function
function TMenuItem_VisibleIndexOf(AObj: TMenuItem; Item: TMenuItem): Integer; extdecl;
begin
  {$define handleExceptionID := 12011}
  handleExceptionBegin
  Result := AObj.VisibleIndexOf(Item);
  handleExceptionEnd
end;

// function
function TMenuItem_IsCheckItem(AObj: TMenuItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 12012}
  handleExceptionBegin
  Result := AObj.IsCheckItem();
  handleExceptionEnd
end;

// function
function TMenuItem_IsLine(AObj: TMenuItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 12013}
  handleExceptionBegin
  Result := AObj.IsLine();
  handleExceptionEnd
end;

// function
function TMenuItem_IsInMenuBar(AObj: TMenuItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 12014}
  handleExceptionBegin
  Result := AObj.IsInMenuBar();
  handleExceptionEnd
end;

// function
function TMenuItem_HasBitmap(AObj: TMenuItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 12015}
  handleExceptionBegin
  Result := AObj.HasBitmap();
  handleExceptionEnd
end;

// function
procedure TMenuItem_GetIconSize(AObj: TMenuItem; ADC: HDC; DPI: Integer; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 12016}
  handleExceptionBegin
  Result := AObj.GetIconSize(ADC, DPI);
  handleExceptionEnd
end;

// function
function TMenuItem_RethinkLines(AObj: TMenuItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 12017}
  handleExceptionBegin
  Result := AObj.RethinkLines();
  handleExceptionEnd
end;

// function
function TMenuItem_MenuVisibleIndex(AObj: TMenuItem): integer; extdecl;
begin
  {$define handleExceptionID := 12018}
  handleExceptionBegin
  Result := AObj.MenuVisibleIndex();
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_GetImageListWithCustomImageListInt(AObj: TMenuItem; var aImages: TCustomImageList; var aImagesWidth: Integer); extdecl;
var
  OutaImages: TCustomImageList;
  OutaImagesWidth: Integer;
begin
  {$define handleExceptionID := 12019}
  handleExceptionBegin
  AObj.GetImageList(OutaImages, OutaImagesWidth);
  aImages := OutaImages;
  aImagesWidth := OutaImagesWidth;
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_InitiateAction(AObj: TMenuItem); extdecl;
begin
  {$define handleExceptionID := 12020}
  handleExceptionBegin
  AObj.InitiateAction();
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_IntfDoSelect(AObj: TMenuItem); extdecl;
begin
  {$define handleExceptionID := 12021}
  handleExceptionBegin
  AObj.IntfDoSelect();
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_InvalidateMergedItems(AObj: TMenuItem); extdecl;
begin
  {$define handleExceptionID := 12022}
  handleExceptionBegin
  AObj.InvalidateMergedItems();
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_Add(AObj: TMenuItem; Item: TMenuItem); extdecl;
begin
  {$define handleExceptionID := 12023}
  handleExceptionBegin
  AObj.Add(Item);
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_AddSeparator(AObj: TMenuItem); extdecl;
begin
  {$define handleExceptionID := 12024}
  handleExceptionBegin
  AObj.AddSeparator();
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_Click(AObj: TMenuItem); extdecl;
begin
  {$define handleExceptionID := 12025}
  handleExceptionBegin
  AObj.Click();
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_Delete(AObj: TMenuItem; Index: Integer); extdecl;
begin
  {$define handleExceptionID := 12026}
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_HandleNeeded(AObj: TMenuItem); extdecl;
begin
  {$define handleExceptionID := 12027}
  handleExceptionBegin
  AObj.HandleNeeded();
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_Insert(AObj: TMenuItem; Index: Integer; Item: TMenuItem); extdecl;
begin
  {$define handleExceptionID := 12028}
  handleExceptionBegin
  AObj.Insert(Index, Item);
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_RecreateHandle(AObj: TMenuItem); extdecl;
begin
  {$define handleExceptionID := 12029}
  handleExceptionBegin
  AObj.RecreateHandle();
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_Remove(AObj: TMenuItem; Item: TMenuItem); extdecl;
begin
  {$define handleExceptionID := 12030}
  handleExceptionBegin
  AObj.Remove(Item);
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_UpdateImage(AObj: TMenuItem; forced: LongBool); extdecl;
begin
  {$define handleExceptionID := 12031}
  handleExceptionBegin
  AObj.UpdateImage(forced);
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_UpdateImages(AObj: TMenuItem; forced: LongBool); extdecl;
begin
  {$define handleExceptionID := 12032}
  handleExceptionBegin
  AObj.UpdateImages(forced);
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_Clear(AObj: TMenuItem); extdecl;
begin
  {$define handleExceptionID := 12033}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_AddHandler(AObj: TMenuItem; HandlerType: TMenuItemHandlerType; var AMethod: TMethodPtr; AsFirst: LongBool); extdecl;
var
  InAMethod: TMethod;
begin
  {$define handleExceptionID := 12034}
  handleExceptionBegin
  InAMethod := TMethodToPas(AMethod);
  AObj.AddHandler(HandlerType, InAMethod, AsFirst);
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_RemoveHandler(AObj: TMenuItem; HandlerType: TMenuItemHandlerType; var AMethod: TMethodPtr); extdecl;
var
  InAMethod: TMethod;
begin
  {$define handleExceptionID := 12035}
  handleExceptionBegin
  InAMethod := TMethodToPas(AMethod);
  AObj.RemoveHandler(HandlerType, InAMethod);
  handleExceptionEnd
end;

// procedure
procedure TMenuItem_WriteDebugReport(AObj: TMenuItem; const Prefix: PChar); extdecl;
begin
  {$define handleExceptionID := 12036}
  handleExceptionBegin
  AObj.WriteDebugReport(Prefix);
  handleExceptionEnd
end;

// property
function TMenuItem_Merged(AObj: TMenuItem): TMenuItem; extdecl;
begin
  {$define handleExceptionID := 12037}
  handleExceptionBegin
  Result := AObj.Merged;
  handleExceptionEnd
end;

// property
function TMenuItem_MergedWith(AObj: TMenuItem): TMenuItem; extdecl;
begin
  {$define handleExceptionID := 12038}
  handleExceptionBegin
  Result := AObj.MergedWith;
  handleExceptionEnd
end;

// property
function TMenuItem_Count(AObj: TMenuItem): Integer; extdecl;
begin
  {$define handleExceptionID := 12039}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
function TMenuItem_Handle(ASet: LongBool; AObj: TMenuItem; AValue: HMenu): HMenu; extdecl;
begin
  {$define handleExceptionID := 12040}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handle := AValue
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

// property
function TMenuItem_Items(AObj: TMenuItem; Index: Integer): TMenuItem; extdecl;
begin
  {$define handleExceptionID := 12041}
  handleExceptionBegin
  Result := AObj.Items[Index];
  handleExceptionEnd
end;

// property
function TMenuItem_MergedItems(AObj: TMenuItem): TMergedMenuItems; extdecl;
begin
  {$define handleExceptionID := 12042}
  handleExceptionBegin
  Result := AObj.MergedItems;
  handleExceptionEnd
end;

// property
function TMenuItem_MenuIndex(ASet: LongBool; AObj: TMenuItem; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12043}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MenuIndex := AValue
  end else
    Result := AObj.MenuIndex;
  handleExceptionEnd
end;

// property
function TMenuItem_Menu(AObj: TMenuItem): TMenu; extdecl;
begin
  {$define handleExceptionID := 12044}
  handleExceptionBegin
  Result := AObj.Menu;
  handleExceptionEnd
end;

// property
function TMenuItem_Parent(AObj: TMenuItem): TMenuItem; extdecl;
begin
  {$define handleExceptionID := 12045}
  handleExceptionBegin
  Result := AObj.Parent;
  handleExceptionEnd
end;

// property
function TMenuItem_MergedParent(AObj: TMenuItem): TMenuItem; extdecl;
begin
  {$define handleExceptionID := 12046}
  handleExceptionBegin
  Result := AObj.MergedParent;
  handleExceptionEnd
end;

// property
function TMenuItem_Command(AObj: TMenuItem): Word; extdecl;
begin
  {$define handleExceptionID := 12047}
  handleExceptionBegin
  Result := AObj.Command;
  handleExceptionEnd
end;

// property
function TMenuItem_Action(ASet: LongBool; AObj: TMenuItem; AValue: TBasicAction): TBasicAction; extdecl;
begin
  {$define handleExceptionID := 12048}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Action := AValue
  end else
    Result := AObj.Action;
  handleExceptionEnd
end;

// property
function TMenuItem_AutoCheck(ASet: LongBool; AObj: TMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12049}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoCheck := AValue
  end else
    Result := AObj.AutoCheck;
  handleExceptionEnd
end;

// property
function TMenuItem_AutoLineReduction(ASet: LongBool; AObj: TMenuItem; AValue: TMenuItemAutoFlag): TMenuItemAutoFlag; extdecl;
begin
  {$define handleExceptionID := 12050}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoLineReduction := AValue
  end else
    Result := AObj.AutoLineReduction;
  handleExceptionEnd
end;

// property
procedure TMenuItem_Caption(ASet: LongBool; AObj: TMenuItem; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 12051}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Caption := AValue
  end else
    StringBufferCreate(AObj.Caption, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TMenuItem_Checked(ASet: LongBool; AObj: TMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12052}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Checked := AValue
  end else
    Result := AObj.Checked;
  handleExceptionEnd
end;

// property
function TMenuItem_Default(ASet: LongBool; AObj: TMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12053}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Default := AValue
  end else
    Result := AObj.Default;
  handleExceptionEnd
end;

// property
function TMenuItem_Enabled(ASet: LongBool; AObj: TMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12054}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Enabled := AValue
  end else
    Result := AObj.Enabled;
  handleExceptionEnd
end;

// property
function TMenuItem_Bitmap(ASet: LongBool; AObj: TMenuItem; AValue: TBitmap): TBitmap; extdecl;
begin
  {$define handleExceptionID := 12055}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Bitmap := AValue
  end else
    Result := AObj.Bitmap;
  handleExceptionEnd
end;

// property
function TMenuItem_GroupIndex(ASet: LongBool; AObj: TMenuItem; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 12056}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GroupIndex := AValue
  end else
    Result := AObj.GroupIndex;
  handleExceptionEnd
end;

// property
function TMenuItem_GlyphShowMode(ASet: LongBool; AObj: TMenuItem; AValue: TGlyphShowMode): TGlyphShowMode; extdecl;
begin
  {$define handleExceptionID := 12057}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GlyphShowMode := AValue
  end else
    Result := AObj.GlyphShowMode;
  handleExceptionEnd
end;

// property
function TMenuItem_HelpContext(ASet: LongBool; AObj: TMenuItem; AValue: THelpContext): THelpContext; extdecl;
begin
  {$define handleExceptionID := 12058}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HelpContext := AValue
  end else
    Result := AObj.HelpContext;
  handleExceptionEnd
end;

// property
procedure TMenuItem_Hint(ASet: LongBool; AObj: TMenuItem; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 12059}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Hint := AValue
  end else
    StringBufferCreate(AObj.Hint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TMenuItem_ImageIndex(ASet: LongBool; AObj: TMenuItem; AValue: TImageIndex): TImageIndex; extdecl;
begin
  {$define handleExceptionID := 12060}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TMenuItem_RadioItem(ASet: LongBool; AObj: TMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12061}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RadioItem := AValue
  end else
    Result := AObj.RadioItem;
  handleExceptionEnd
end;

// property
function TMenuItem_RightJustify(ASet: LongBool; AObj: TMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12062}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RightJustify := AValue
  end else
    Result := AObj.RightJustify;
  handleExceptionEnd
end;

// property
function TMenuItem_ShortCut(ASet: LongBool; AObj: TMenuItem; AValue: TShortCut): TShortCut; extdecl;
begin
  {$define handleExceptionID := 12063}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShortCut := AValue
  end else
    Result := AObj.ShortCut;
  handleExceptionEnd
end;

// property
function TMenuItem_ShortCutKey2(ASet: LongBool; AObj: TMenuItem; AValue: TShortCut): TShortCut; extdecl;
begin
  {$define handleExceptionID := 12064}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShortCutKey2 := AValue
  end else
    Result := AObj.ShortCutKey2;
  handleExceptionEnd
end;

// property
function TMenuItem_ShowAlwaysCheckable(ASet: LongBool; AObj: TMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12065}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowAlwaysCheckable := AValue
  end else
    Result := AObj.ShowAlwaysCheckable;
  handleExceptionEnd
end;

// property
function TMenuItem_SubMenuImages(ASet: LongBool; AObj: TMenuItem; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 12066}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SubMenuImages := AValue
  end else
    Result := AObj.SubMenuImages;
  handleExceptionEnd
end;

// property
function TMenuItem_SubMenuImagesWidth(ASet: LongBool; AObj: TMenuItem; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12067}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SubMenuImagesWidth := AValue
  end else
    Result := AObj.SubMenuImagesWidth;
  handleExceptionEnd
end;

// property
function TMenuItem_Visible(ASet: LongBool; AObj: TMenuItem; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12068}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Visible := AValue
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

// event
procedure TMenuItem_OnClick(AObj: TMenuItem; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClick}
  LCLEventMethodCode
end;

// event
procedure TMenuItem_OnDrawItem(AObj: TMenuItem; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMenuDrawItemEvent}
  {$DEFINE EventName := OnDrawItem}
  LCLEventMethodCode
end;

// event
procedure TMenuItem_OnMeasureItem(AObj: TMenuItem; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMenuMeasureItemEvent}
  {$DEFINE EventName := OnMeasureItem}
  LCLEventMethodCode
end;

function TMenuItem_TClass(): TClass; extdecl;
begin
  Result := TMenuItem;
end;

exports
  TMenuItem_Create,
  TMenuItem_Find,
  TMenuItem_GetEnumeratorToMenuItemEnumerator,
  TMenuItem_GetImageListToCustomImageList,
  TMenuItem_GetParentMenu,
  TMenuItem_GetMergedParentMenu,
  TMenuItem_GetIsRightToLeft,
  TMenuItem_HandleAllocated,
  TMenuItem_HasIcon,
  TMenuItem_IndexOf,
  TMenuItem_IndexOfCaption,
  TMenuItem_VisibleIndexOf,
  TMenuItem_IsCheckItem,
  TMenuItem_IsLine,
  TMenuItem_IsInMenuBar,
  TMenuItem_HasBitmap,
  TMenuItem_GetIconSize,
  TMenuItem_RethinkLines,
  TMenuItem_MenuVisibleIndex,
  TMenuItem_GetImageListWithCustomImageListInt,
  TMenuItem_InitiateAction,
  TMenuItem_IntfDoSelect,
  TMenuItem_InvalidateMergedItems,
  TMenuItem_Add,
  TMenuItem_AddSeparator,
  TMenuItem_Click,
  TMenuItem_Delete,
  TMenuItem_HandleNeeded,
  TMenuItem_Insert,
  TMenuItem_RecreateHandle,
  TMenuItem_Remove,
  TMenuItem_UpdateImage,
  TMenuItem_UpdateImages,
  TMenuItem_Clear,
  TMenuItem_AddHandler,
  TMenuItem_RemoveHandler,
  TMenuItem_WriteDebugReport,
  TMenuItem_Merged,
  TMenuItem_MergedWith,
  TMenuItem_Count,
  TMenuItem_Handle,
  TMenuItem_Items,
  TMenuItem_MergedItems,
  TMenuItem_MenuIndex,
  TMenuItem_Menu,
  TMenuItem_Parent,
  TMenuItem_MergedParent,
  TMenuItem_Command,
  TMenuItem_Action,
  TMenuItem_AutoCheck,
  TMenuItem_AutoLineReduction,
  TMenuItem_Caption,
  TMenuItem_Checked,
  TMenuItem_Default,
  TMenuItem_Enabled,
  TMenuItem_Bitmap,
  TMenuItem_GroupIndex,
  TMenuItem_GlyphShowMode,
  TMenuItem_HelpContext,
  TMenuItem_Hint,
  TMenuItem_ImageIndex,
  TMenuItem_RadioItem,
  TMenuItem_RightJustify,
  TMenuItem_ShortCut,
  TMenuItem_ShortCutKey2,
  TMenuItem_ShowAlwaysCheckable,
  TMenuItem_SubMenuImages,
  TMenuItem_SubMenuImagesWidth,
  TMenuItem_Visible,
  TMenuItem_OnClick,
  TMenuItem_OnDrawItem,
  TMenuItem_OnMeasureItem,
  TMenuItem_TClass;