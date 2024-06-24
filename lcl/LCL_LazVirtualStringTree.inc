
//constructor
function LazVirtualStringTree_Create(AOwner: TComponent): TLazVirtualStringTree; extdecl;
begin
  handleExceptionBegin
  Result := TLazVirtualStringTree.Create(AOwner);
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_RangeX(AObj: TLazVirtualStringTree): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RangeX;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_LastDragEffect(AObj: TLazVirtualStringTree): LongWord; extdecl;
begin
  handleExceptionBegin
  Result := AObj.LastDragEffect;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_Alignment(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TAlignment): TAlignment; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_AnimationDuration(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AnimationDuration := AValue;
  end else
    Result := AObj.AnimationDuration;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_AutoExpandDelay(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoExpandDelay := AValue;
  end else
    Result := AObj.AutoExpandDelay;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_AutoScrollDelay(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoScrollDelay := AValue;
  end else
    Result := AObj.AutoScrollDelay;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_AutoScrollInterval(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TAutoScrollInterval): TAutoScrollInterval; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoScrollInterval := AValue;
  end else
    Result := AObj.AutoScrollInterval;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_Background(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TPicture): TPicture; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Background := AValue;
  end else
    Result := AObj.Background;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_BackgroundOffsetX(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BackgroundOffsetX := AValue;
  end else
    Result := AObj.BackgroundOffsetX;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_BackgroundOffsetY(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BackgroundOffsetY := AValue;
  end else
    Result := AObj.BackgroundOffsetY;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_BottomSpace(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BottomSpace := AValue;
  end else
    Result := AObj.BottomSpace;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_ButtonFillMode(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTButtonFillMode): TVTButtonFillMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonFillMode := AValue;
  end else
    Result := AObj.ButtonFillMode;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_ButtonStyle(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTButtonStyle): TVTButtonStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonStyle := AValue;
  end else
    Result := AObj.ButtonStyle;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_ChangeDelay(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ChangeDelay := AValue;
  end else
    Result := AObj.ChangeDelay;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_CheckImageKind(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TCheckImageKind): TCheckImageKind; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CheckImageKind := AValue;
  end else
    Result := AObj.CheckImageKind;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_ClipboardFormats(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TClipboardFormats): TClipboardFormats; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ClipboardFormats := AValue;
  end else
    Result := AObj.ClipboardFormats;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_Colors(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTColors): TVTColors; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Colors := AValue;
  end else
    Result := AObj.Colors;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_CustomCheckImages(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CustomCheckImages := AValue;
  end else
    Result := AObj.CustomCheckImages;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_DefaultNodeHeight(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultNodeHeight := AValue;
  end else
    Result := AObj.DefaultNodeHeight;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_DefaultPasteMode(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTNodeAttachMode): TVTNodeAttachMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultPasteMode := AValue;
  end else
    Result := AObj.DefaultPasteMode;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_DefaultText(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultText := AValue;
  end else
    Result := ToPChar(AObj.DefaultText);
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_DragCursor(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TCursor): TCursor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragCursor := AValue;
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_DragHeight(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragHeight := AValue;
  end else
    Result := AObj.DragHeight;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_DragKind(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TDragKind): TDragKind; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragKind := AValue;
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_DragImageKind(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTDragImageKind): TVTDragImageKind; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragImageKind := AValue;
  end else
    Result := AObj.DragImageKind;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_DragMode(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TDragMode): TDragMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragMode := AValue;
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_DragOperations(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TDragOperations): TDragOperations; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragOperations := AValue;
  end else
    Result := AObj.DragOperations;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_DragType(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTDragType): TVTDragType; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragType := AValue;
  end else
    Result := AObj.DragType;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_DragWidth(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragWidth := AValue;
  end else
    Result := AObj.DragWidth;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_DrawSelectionMode(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTDrawSelectionMode): TVTDrawSelectionMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DrawSelectionMode := AValue;
  end else
    Result := AObj.DrawSelectionMode;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_EditDelay(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EditDelay := AValue;
  end else
    Result := AObj.EditDelay;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_Header(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTHeader): TVTHeader; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Header := AValue;
  end else
    Result := AObj.Header;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_HintMode(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTHintMode): TVTHintMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HintMode := AValue;
  end else
    Result := AObj.HintMode;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_HotCursor(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TCursor): TCursor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HotCursor := AValue;
  end else
    Result := AObj.HotCursor;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_Images(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Images := AValue;
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_IncrementalSearch(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTIncrementalSearch): TVTIncrementalSearch; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IncrementalSearch := AValue;
  end else
    Result := AObj.IncrementalSearch;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_IncrementalSearchDirection(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTSearchDirection): TVTSearchDirection; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IncrementalSearchDirection := AValue;
  end else
    Result := AObj.IncrementalSearchDirection;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_IncrementalSearchStart(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTSearchStart): TVTSearchStart; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IncrementalSearchStart := AValue;
  end else
    Result := AObj.IncrementalSearchStart;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_IncrementalSearchTimeout(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IncrementalSearchTimeout := AValue;
  end else
    Result := AObj.IncrementalSearchTimeout;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_Indent(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Indent := AValue;
  end else
    Result := AObj.Indent;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_LineMode(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTLineMode): TVTLineMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LineMode := AValue;
  end else
    Result := AObj.LineMode;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_LineStyle(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTLineStyle): TVTLineStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LineStyle := AValue;
  end else
    Result := AObj.LineStyle;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_Margin(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Margin := AValue;
  end else
    Result := AObj.Margin;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_NodeAlignment(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTNodeAlignment): TVTNodeAlignment; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NodeAlignment := AValue;
  end else
    Result := AObj.NodeAlignment;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_NodeDataSize(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NodeDataSize := AValue;
  end else
    Result := AObj.NodeDataSize;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_OperationCanceled(AObj: TLazVirtualStringTree): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OperationCanceled;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_ParentColor(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_ParentFont(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentFont := AValue;
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_ParentShowHint(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_RootNodeCount(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RootNodeCount := AValue;
  end else
    Result := AObj.RootNodeCount;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_ScrollBarOptions(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TScrollBarOptions): TScrollBarOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScrollBarOptions := AValue;
  end else
    Result := AObj.ScrollBarOptions;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_SelectionBlendFactor(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: Byte): Byte; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectionBlendFactor := AValue;
  end else
    Result := AObj.SelectionBlendFactor;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_SelectionCurveRadius(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectionCurveRadius := AValue;
  end else
    Result := AObj.SelectionCurveRadius;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_StateImages(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StateImages := AValue;
  end else
    Result := AObj.StateImages;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_TextMargin(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TextMargin := AValue;
  end else
    Result := AObj.TextMargin;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_TreeOptions(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: TStringTreeOptions): TStringTreeOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TreeOptions := AValue;
  end else
    Result := AObj.TreeOptions;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_WantTabs(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WantTabs := AValue;
  end else
    Result := AObj.WantTabs;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_ImagesWidth(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImagesWidth := AValue;
  end else
    Result := AObj.ImagesWidth;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_StateImagesWidth(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StateImagesWidth := AValue;
  end else
    Result := AObj.StateImagesWidth;
  handleExceptionEnd
end;

//property
function LazVirtualStringTree_CustomCheckImagesWidth(AIsSet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CustomCheckImagesWidth := AValue;
  end else
    Result := AObj.CustomCheckImagesWidth;
  handleExceptionEnd
end;

//function
function LazVirtualStringTree_Class(): TClass; extdecl;
begin
  Result := TLazVirtualStringTree;
end;

//property event
procedure LazVirtualStringTree_SetOnAddToSelection(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAddToSelectionEvent}
  {$DEFINE EventName := OnAddToSelection}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnAdvancedHeaderDraw(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAdvancedHeaderPaintEvent}
  {$DEFINE EventName := OnAdvancedHeaderDraw}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnAfterAutoFitColumn(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterAutoFitColumnEvent}
  {$DEFINE EventName := OnAfterAutoFitColumn}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnAfterAutoFitColumns(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterAutoFitColumnsEvent}
  {$DEFINE EventName := OnAfterAutoFitColumns}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnAfterCellPaint(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterCellPaintEvent}
  {$DEFINE EventName := OnAfterCellPaint}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnAfterColumnExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnExportEvent}
  {$DEFINE EventName := OnAfterColumnExport}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnAfterColumnWidthTracking(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterColumnWidthTrackingEvent}
  {$DEFINE EventName := OnAfterColumnWidthTracking}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnAfterGetMaxColumnWidth(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterGetMaxColumnWidthEvent}
  {$DEFINE EventName := OnAfterGetMaxColumnWidth}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnAfterHeaderExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTTreeExportEvent}
  {$DEFINE EventName := OnAfterHeaderExport}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnAfterHeaderHeightTracking(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterHeaderHeightTrackingEvent}
  {$DEFINE EventName := OnAfterHeaderHeightTracking}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnAfterItemErase(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterItemEraseEvent}
  {$DEFINE EventName := OnAfterItemErase}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnAfterItemPaint(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterItemPaintEvent}
  {$DEFINE EventName := OnAfterItemPaint}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnAfterNodeExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeExportEvent}
  {$DEFINE EventName := OnAfterNodeExport}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnAfterPaint(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTPaintEvent}
  {$DEFINE EventName := OnAfterPaint}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnAfterTreeExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTTreeExportEvent}
  {$DEFINE EventName := OnAfterTreeExport}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnBeforeAutoFitColumn(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeAutoFitColumnEvent}
  {$DEFINE EventName := OnBeforeAutoFitColumn}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnBeforeAutoFitColumns(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeAutoFitColumnsEvent}
  {$DEFINE EventName := OnBeforeAutoFitColumns}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnBeforeCellPaint(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeCellPaintEvent}
  {$DEFINE EventName := OnBeforeCellPaint}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnBeforeColumnExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnExportEvent}
  {$DEFINE EventName := OnBeforeColumnExport}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnBeforeColumnWidthTracking(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeColumnWidthTrackingEvent}
  {$DEFINE EventName := OnBeforeColumnWidthTracking}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnBeforeDrawTreeLine(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeDrawLineImageEvent}
  {$DEFINE EventName := OnBeforeDrawTreeLine}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnBeforeGetMaxColumnWidth(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeGetMaxColumnWidthEvent}
  {$DEFINE EventName := OnBeforeGetMaxColumnWidth}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnBeforeHeaderExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTTreeExportEvent}
  {$DEFINE EventName := OnBeforeHeaderExport}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnBeforeHeaderHeightTracking(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeHeaderHeightTrackingEvent}
  {$DEFINE EventName := OnBeforeHeaderHeightTracking}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnBeforeItemErase(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeItemEraseEvent}
  {$DEFINE EventName := OnBeforeItemErase}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnBeforeItemPaint(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeItemPaintEvent}
  {$DEFINE EventName := OnBeforeItemPaint}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnBeforeNodeExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeExportEvent}
  {$DEFINE EventName := OnBeforeNodeExport}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnBeforePaint(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTPaintEvent}
  {$DEFINE EventName := OnBeforePaint}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnBeforeTreeExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTTreeExportEvent}
  {$DEFINE EventName := OnBeforeTreeExport}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnCanSplitterResizeColumn(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCanSplitterResizeColumnEvent}
  {$DEFINE EventName := OnCanSplitterResizeColumn}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnCanSplitterResizeHeader(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCanSplitterResizeHeaderEvent}
  {$DEFINE EventName := OnCanSplitterResizeHeader}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnCanSplitterResizeNode(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCanSplitterResizeNodeEvent}
  {$DEFINE EventName := OnCanSplitterResizeNode}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnChange(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnChecked(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnChecked}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnChecking(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCheckChangingEvent}
  {$DEFINE EventName := OnChecking}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnCollapsed(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnCollapsed}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnCollapsing(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangingEvent}
  {$DEFINE EventName := OnCollapsing}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnColumnClick(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnClickEvent}
  {$DEFINE EventName := OnColumnClick}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnColumnDblClick(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnDblClickEvent}
  {$DEFINE EventName := OnColumnDblClick}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnColumnExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnExportEvent}
  {$DEFINE EventName := OnColumnExport}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnColumnResize(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderNotifyEvent}
  {$DEFINE EventName := OnColumnResize}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnColumnWidthDblClickResize(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnWidthDblClickResizeEvent}
  {$DEFINE EventName := OnColumnWidthDblClickResize}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnColumnWidthTracking(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnWidthTrackingEvent}
  {$DEFINE EventName := OnColumnWidthTracking}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnCompareNodes(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCompareEvent}
  {$DEFINE EventName := OnCompareNodes}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnContextPopup(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnCreateDataObject(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCreateDataObjectEvent}
  {$DEFINE EventName := OnCreateDataObject}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnCreateDragManager(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCreateDragManagerEvent}
  {$DEFINE EventName := OnCreateDragManager}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnCreateEditor(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCreateEditorEvent}
  {$DEFINE EventName := OnCreateEditor}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnDblClick(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnDragAllowed(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDragAllowedEvent}
  {$DEFINE EventName := OnDragAllowed}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnDragOver(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnDragDrop(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnDrawHint(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDrawHintEvent}
  {$DEFINE EventName := OnDrawHint}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnDrawText(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDrawTextEvent}
  {$DEFINE EventName := OnDrawText}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnEditCancelled(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTEditCancelEvent}
  {$DEFINE EventName := OnEditCancelled}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnEdited(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTEditChangeEvent}
  {$DEFINE EventName := OnEdited}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnEditing(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTEditChangingEvent}
  {$DEFINE EventName := OnEditing}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnEndDock(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnEndDrag(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnEndOperation(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTOperationEvent}
  {$DEFINE EventName := OnEndOperation}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnExpanded(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnExpanded}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnExpanding(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangingEvent}
  {$DEFINE EventName := OnExpanding}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnFocusChanged(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTFocusChangeEvent}
  {$DEFINE EventName := OnFocusChanged}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnFocusChanging(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTFocusChangingEvent}
  {$DEFINE EventName := OnFocusChanging}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnFreeNode(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTFreeNodeEvent}
  {$DEFINE EventName := OnFreeNode}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnGetCellIsEmpty(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetCellIsEmptyEvent}
  {$DEFINE EventName := OnGetCellIsEmpty}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnGetCursor(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetCursorEvent}
  {$DEFINE EventName := OnGetCursor}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnGetHeaderCursor(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetHeaderCursorEvent}
  {$DEFINE EventName := OnGetHeaderCursor}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnGetText(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVSTGetTextEvent}
  {$DEFINE EventName := OnGetText}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnPaintText(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTPaintText}
  {$DEFINE EventName := OnPaintText}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnGetHelpContext(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHelpContextEvent}
  {$DEFINE EventName := OnGetHelpContext}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnGetHintKind(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHintKindEvent}
  {$DEFINE EventName := OnGetHintKind}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnGetHintSize(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetHintSizeEvent}
  {$DEFINE EventName := OnGetHintSize}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnGetImageIndex(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetImageEvent}
  {$DEFINE EventName := OnGetImageIndex}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnGetImageIndexEx(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetImageExEvent}
  {$DEFINE EventName := OnGetImageIndexEx}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnGetImageText(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetImageTextEvent}
  {$DEFINE EventName := OnGetImageText}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnGetHint(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVSTGetHintEvent}
  {$DEFINE EventName := OnGetHint}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnGetLineStyle(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetLineStyleEvent}
  {$DEFINE EventName := OnGetLineStyle}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnGetNodeDataSize(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetNodeDataSizeEvent}
  {$DEFINE EventName := OnGetNodeDataSize}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnGetPopupMenu(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTPopupEvent}
  {$DEFINE EventName := OnGetPopupMenu}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnHeaderClick(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderClickEvent}
  {$DEFINE EventName := OnHeaderClick}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnHeaderDblClick(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderClickEvent}
  {$DEFINE EventName := OnHeaderDblClick}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnHeaderDragged(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderDraggedEvent}
  {$DEFINE EventName := OnHeaderDragged}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnHeaderDraggedOut(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderDraggedOutEvent}
  {$DEFINE EventName := OnHeaderDraggedOut}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnHeaderDragging(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderDraggingEvent}
  {$DEFINE EventName := OnHeaderDragging}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnHeaderDraw(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderPaintEvent}
  {$DEFINE EventName := OnHeaderDraw}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnHeaderDrawQueryElements(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderPaintQueryElementsEvent}
  {$DEFINE EventName := OnHeaderDrawQueryElements}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnHeaderHeightDblClickResize(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderHeightDblClickResizeEvent}
  {$DEFINE EventName := OnHeaderHeightDblClickResize}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnHeaderHeightTracking(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderHeightTrackingEvent}
  {$DEFINE EventName := OnHeaderHeightTracking}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnHeaderMouseDown(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderMouseEvent}
  {$DEFINE EventName := OnHeaderMouseDown}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnHeaderMouseMove(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderMouseMoveEvent}
  {$DEFINE EventName := OnHeaderMouseMove}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnHeaderMouseUp(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderMouseEvent}
  {$DEFINE EventName := OnHeaderMouseUp}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnHotChange(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHotNodeChangeEvent}
  {$DEFINE EventName := OnHotChange}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnIncrementalSearch(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTIncrementalSearchEvent}
  {$DEFINE EventName := OnIncrementalSearch}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnInitChildren(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTInitChildrenEvent}
  {$DEFINE EventName := OnInitChildren}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnInitNode(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTInitNodeEvent}
  {$DEFINE EventName := OnInitNode}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnKeyAction(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTKeyActionEvent}
  {$DEFINE EventName := OnKeyAction}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnLoadNode(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSaveNodeEvent}
  {$DEFINE EventName := OnLoadNode}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnLoadTree(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSaveTreeEvent}
  {$DEFINE EventName := OnLoadTree}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnMeasureItem(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTMeasureItemEvent}
  {$DEFINE EventName := OnMeasureItem}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnMeasureTextWidth(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTMeasureTextEvent}
  {$DEFINE EventName := OnMeasureTextWidth}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnMeasureTextHeight(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTMeasureTextEvent}
  {$DEFINE EventName := OnMeasureTextHeight}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnMouseDown(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnMouseMove(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnMouseUp(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnMouseWheel(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnMouseEnter(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnMouseLeave(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnNewText(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVSTNewTextEvent}
  {$DEFINE EventName := OnNewText}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnNodeClick(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeClickEvent}
  {$DEFINE EventName := OnNodeClick}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnNodeCopied(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeCopiedEvent}
  {$DEFINE EventName := OnNodeCopied}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnNodeCopying(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeCopyingEvent}
  {$DEFINE EventName := OnNodeCopying}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnNodeDblClick(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeClickEvent}
  {$DEFINE EventName := OnNodeDblClick}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnNodeExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeExportEvent}
  {$DEFINE EventName := OnNodeExport}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnNodeHeightDblClickResize(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeHeightDblClickResizeEvent}
  {$DEFINE EventName := OnNodeHeightDblClickResize}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnNodeHeightTracking(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeHeightTrackingEvent}
  {$DEFINE EventName := OnNodeHeightTracking}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnNodeMoved(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeMovedEvent}
  {$DEFINE EventName := OnNodeMoved}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnNodeMoving(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeMovingEvent}
  {$DEFINE EventName := OnNodeMoving}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnPaintBackground(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBackgroundPaintEvent}
  {$DEFINE EventName := OnPaintBackground}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnRemoveFromSelection(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTRemoveFromSelectionEvent}
  {$DEFINE EventName := OnRemoveFromSelection}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnResetNode(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnResetNode}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnSaveNode(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSaveNodeEvent}
  {$DEFINE EventName := OnSaveNode}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnSaveTree(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSaveTreeEvent}
  {$DEFINE EventName := OnSaveTree}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnScroll(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTScrollEvent}
  {$DEFINE EventName := OnScroll}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnShowScrollBar(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTScrollBarShowEvent}
  {$DEFINE EventName := OnShowScrollBar}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnStartDock(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnStartDrag(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnStartOperation(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTOperationEvent}
  {$DEFINE EventName := OnStartOperation}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnStateChange(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTStateChangeEvent}
  {$DEFINE EventName := OnStateChange}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnStructureChange(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTStructureChangeEvent}
  {$DEFINE EventName := OnStructureChange}
  EventMethodCode
end;

//property event
procedure LazVirtualStringTree_SetOnUpdating(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTUpdatingEvent}
  {$DEFINE EventName := OnUpdating}
  EventMethodCode
end;


exports
  LazVirtualStringTree_Create,
  LazVirtualStringTree_RangeX,
  LazVirtualStringTree_LastDragEffect,
  LazVirtualStringTree_Alignment,
  LazVirtualStringTree_AnimationDuration,
  LazVirtualStringTree_AutoExpandDelay,
  LazVirtualStringTree_AutoScrollDelay,
  LazVirtualStringTree_AutoScrollInterval,
  LazVirtualStringTree_Background,
  LazVirtualStringTree_BackgroundOffsetX,
  LazVirtualStringTree_BackgroundOffsetY,
  LazVirtualStringTree_BottomSpace,
  LazVirtualStringTree_ButtonFillMode,
  LazVirtualStringTree_ButtonStyle,
  LazVirtualStringTree_ChangeDelay,
  LazVirtualStringTree_CheckImageKind,
  LazVirtualStringTree_ClipboardFormats,
  LazVirtualStringTree_Colors,
  LazVirtualStringTree_CustomCheckImages,
  LazVirtualStringTree_DefaultNodeHeight,
  LazVirtualStringTree_DefaultPasteMode,
  LazVirtualStringTree_DefaultText,
  LazVirtualStringTree_DragCursor,
  LazVirtualStringTree_DragHeight,
  LazVirtualStringTree_DragKind,
  LazVirtualStringTree_DragImageKind,
  LazVirtualStringTree_DragMode,
  LazVirtualStringTree_DragOperations,
  LazVirtualStringTree_DragType,
  LazVirtualStringTree_DragWidth,
  LazVirtualStringTree_DrawSelectionMode,
  LazVirtualStringTree_EditDelay,
  LazVirtualStringTree_Header,
  LazVirtualStringTree_HintMode,
  LazVirtualStringTree_HotCursor,
  LazVirtualStringTree_Images,
  LazVirtualStringTree_IncrementalSearch,
  LazVirtualStringTree_IncrementalSearchDirection,
  LazVirtualStringTree_IncrementalSearchStart,
  LazVirtualStringTree_IncrementalSearchTimeout,
  LazVirtualStringTree_Indent,
  LazVirtualStringTree_LineMode,
  LazVirtualStringTree_LineStyle,
  LazVirtualStringTree_Margin,
  LazVirtualStringTree_NodeAlignment,
  LazVirtualStringTree_NodeDataSize,
  LazVirtualStringTree_OperationCanceled,
  LazVirtualStringTree_ParentColor,
  LazVirtualStringTree_ParentFont,
  LazVirtualStringTree_ParentShowHint,
  LazVirtualStringTree_RootNodeCount,
  LazVirtualStringTree_ScrollBarOptions,
  LazVirtualStringTree_SelectionBlendFactor,
  LazVirtualStringTree_SelectionCurveRadius,
  LazVirtualStringTree_StateImages,
  LazVirtualStringTree_TextMargin,
  LazVirtualStringTree_TreeOptions,
  LazVirtualStringTree_WantTabs,
  LazVirtualStringTree_ImagesWidth,
  LazVirtualStringTree_StateImagesWidth,
  LazVirtualStringTree_CustomCheckImagesWidth,
  LazVirtualStringTree_Class,
  LazVirtualStringTree_SetOnAddToSelection,
  LazVirtualStringTree_SetOnAdvancedHeaderDraw,
  LazVirtualStringTree_SetOnAfterAutoFitColumn,
  LazVirtualStringTree_SetOnAfterAutoFitColumns,
  LazVirtualStringTree_SetOnAfterCellPaint,
  LazVirtualStringTree_SetOnAfterColumnExport,
  LazVirtualStringTree_SetOnAfterColumnWidthTracking,
  LazVirtualStringTree_SetOnAfterGetMaxColumnWidth,
  LazVirtualStringTree_SetOnAfterHeaderExport,
  LazVirtualStringTree_SetOnAfterHeaderHeightTracking,
  LazVirtualStringTree_SetOnAfterItemErase,
  LazVirtualStringTree_SetOnAfterItemPaint,
  LazVirtualStringTree_SetOnAfterNodeExport,
  LazVirtualStringTree_SetOnAfterPaint,
  LazVirtualStringTree_SetOnAfterTreeExport,
  LazVirtualStringTree_SetOnBeforeAutoFitColumn,
  LazVirtualStringTree_SetOnBeforeAutoFitColumns,
  LazVirtualStringTree_SetOnBeforeCellPaint,
  LazVirtualStringTree_SetOnBeforeColumnExport,
  LazVirtualStringTree_SetOnBeforeColumnWidthTracking,
  LazVirtualStringTree_SetOnBeforeDrawTreeLine,
  LazVirtualStringTree_SetOnBeforeGetMaxColumnWidth,
  LazVirtualStringTree_SetOnBeforeHeaderExport,
  LazVirtualStringTree_SetOnBeforeHeaderHeightTracking,
  LazVirtualStringTree_SetOnBeforeItemErase,
  LazVirtualStringTree_SetOnBeforeItemPaint,
  LazVirtualStringTree_SetOnBeforeNodeExport,
  LazVirtualStringTree_SetOnBeforePaint,
  LazVirtualStringTree_SetOnBeforeTreeExport,
  LazVirtualStringTree_SetOnCanSplitterResizeColumn,
  LazVirtualStringTree_SetOnCanSplitterResizeHeader,
  LazVirtualStringTree_SetOnCanSplitterResizeNode,
  LazVirtualStringTree_SetOnChange,
  LazVirtualStringTree_SetOnChecked,
  LazVirtualStringTree_SetOnChecking,
  LazVirtualStringTree_SetOnCollapsed,
  LazVirtualStringTree_SetOnCollapsing,
  LazVirtualStringTree_SetOnColumnClick,
  LazVirtualStringTree_SetOnColumnDblClick,
  LazVirtualStringTree_SetOnColumnExport,
  LazVirtualStringTree_SetOnColumnResize,
  LazVirtualStringTree_SetOnColumnWidthDblClickResize,
  LazVirtualStringTree_SetOnColumnWidthTracking,
  LazVirtualStringTree_SetOnCompareNodes,
  LazVirtualStringTree_SetOnContextPopup,
  LazVirtualStringTree_SetOnCreateDataObject,
  LazVirtualStringTree_SetOnCreateDragManager,
  LazVirtualStringTree_SetOnCreateEditor,
  LazVirtualStringTree_SetOnDblClick,
  LazVirtualStringTree_SetOnDragAllowed,
  LazVirtualStringTree_SetOnDragOver,
  LazVirtualStringTree_SetOnDragDrop,
  LazVirtualStringTree_SetOnDrawHint,
  LazVirtualStringTree_SetOnDrawText,
  LazVirtualStringTree_SetOnEditCancelled,
  LazVirtualStringTree_SetOnEdited,
  LazVirtualStringTree_SetOnEditing,
  LazVirtualStringTree_SetOnEndDock,
  LazVirtualStringTree_SetOnEndDrag,
  LazVirtualStringTree_SetOnEndOperation,
  LazVirtualStringTree_SetOnExpanded,
  LazVirtualStringTree_SetOnExpanding,
  LazVirtualStringTree_SetOnFocusChanged,
  LazVirtualStringTree_SetOnFocusChanging,
  LazVirtualStringTree_SetOnFreeNode,
  LazVirtualStringTree_SetOnGetCellIsEmpty,
  LazVirtualStringTree_SetOnGetCursor,
  LazVirtualStringTree_SetOnGetHeaderCursor,
  LazVirtualStringTree_SetOnGetText,
  LazVirtualStringTree_SetOnPaintText,
  LazVirtualStringTree_SetOnGetHelpContext,
  LazVirtualStringTree_SetOnGetHintKind,
  LazVirtualStringTree_SetOnGetHintSize,
  LazVirtualStringTree_SetOnGetImageIndex,
  LazVirtualStringTree_SetOnGetImageIndexEx,
  LazVirtualStringTree_SetOnGetImageText,
  LazVirtualStringTree_SetOnGetHint,
  LazVirtualStringTree_SetOnGetLineStyle,
  LazVirtualStringTree_SetOnGetNodeDataSize,
  LazVirtualStringTree_SetOnGetPopupMenu,
  LazVirtualStringTree_SetOnHeaderClick,
  LazVirtualStringTree_SetOnHeaderDblClick,
  LazVirtualStringTree_SetOnHeaderDragged,
  LazVirtualStringTree_SetOnHeaderDraggedOut,
  LazVirtualStringTree_SetOnHeaderDragging,
  LazVirtualStringTree_SetOnHeaderDraw,
  LazVirtualStringTree_SetOnHeaderDrawQueryElements,
  LazVirtualStringTree_SetOnHeaderHeightDblClickResize,
  LazVirtualStringTree_SetOnHeaderHeightTracking,
  LazVirtualStringTree_SetOnHeaderMouseDown,
  LazVirtualStringTree_SetOnHeaderMouseMove,
  LazVirtualStringTree_SetOnHeaderMouseUp,
  LazVirtualStringTree_SetOnHotChange,
  LazVirtualStringTree_SetOnIncrementalSearch,
  LazVirtualStringTree_SetOnInitChildren,
  LazVirtualStringTree_SetOnInitNode,
  LazVirtualStringTree_SetOnKeyAction,
  LazVirtualStringTree_SetOnLoadNode,
  LazVirtualStringTree_SetOnLoadTree,
  LazVirtualStringTree_SetOnMeasureItem,
  LazVirtualStringTree_SetOnMeasureTextWidth,
  LazVirtualStringTree_SetOnMeasureTextHeight,
  LazVirtualStringTree_SetOnMouseDown,
  LazVirtualStringTree_SetOnMouseMove,
  LazVirtualStringTree_SetOnMouseUp,
  LazVirtualStringTree_SetOnMouseWheel,
  LazVirtualStringTree_SetOnMouseEnter,
  LazVirtualStringTree_SetOnMouseLeave,
  LazVirtualStringTree_SetOnNewText,
  LazVirtualStringTree_SetOnNodeClick,
  LazVirtualStringTree_SetOnNodeCopied,
  LazVirtualStringTree_SetOnNodeCopying,
  LazVirtualStringTree_SetOnNodeDblClick,
  LazVirtualStringTree_SetOnNodeExport,
  LazVirtualStringTree_SetOnNodeHeightDblClickResize,
  LazVirtualStringTree_SetOnNodeHeightTracking,
  LazVirtualStringTree_SetOnNodeMoved,
  LazVirtualStringTree_SetOnNodeMoving,
  LazVirtualStringTree_SetOnPaintBackground,
  LazVirtualStringTree_SetOnRemoveFromSelection,
  LazVirtualStringTree_SetOnResetNode,
  LazVirtualStringTree_SetOnSaveNode,
  LazVirtualStringTree_SetOnSaveTree,
  LazVirtualStringTree_SetOnScroll,
  LazVirtualStringTree_SetOnShowScrollBar,
  LazVirtualStringTree_SetOnStartDock,
  LazVirtualStringTree_SetOnStartDrag,
  LazVirtualStringTree_SetOnStartOperation,
  LazVirtualStringTree_SetOnStateChange,
  LazVirtualStringTree_SetOnStructureChange,
  LazVirtualStringTree_SetOnUpdating;