// constructor
function TLazVirtualDrawTree_Create(AOwner: TComponent): TLazVirtualDrawTree; extdecl;
begin
  {$define handleExceptionID := 28900}
  handleExceptionBegin
  Result := TLazVirtualDrawTree.Create(AOwner);
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_LastDragEffect(AObj: TLazVirtualDrawTree): LongWord; extdecl;
begin
  {$define handleExceptionID := 28901}
  handleExceptionBegin
  Result := AObj.LastDragEffect;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_Alignment(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 28902}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_AnimationDuration(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AnimationDuration := AValue
  end else
    Result := AObj.AnimationDuration;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_AutoExpandDelay(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoExpandDelay := AValue
  end else
    Result := AObj.AutoExpandDelay;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_AutoScrollDelay(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoScrollDelay := AValue
  end else
    Result := AObj.AutoScrollDelay;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_AutoScrollInterval(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TAutoScrollInterval): TAutoScrollInterval; extdecl;
begin
  {$define handleExceptionID := 28906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoScrollInterval := AValue
  end else
    Result := AObj.AutoScrollInterval;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_Background(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TPicture): TPicture; extdecl;
begin
  {$define handleExceptionID := 28907}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Background := AValue
  end else
    Result := AObj.Background;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_BackgroundOffsetX(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 28908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BackgroundOffsetX := AValue
  end else
    Result := AObj.BackgroundOffsetX;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_BackgroundOffsetY(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 28909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BackgroundOffsetY := AValue
  end else
    Result := AObj.BackgroundOffsetY;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_BottomSpace(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28910}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BottomSpace := AValue
  end else
    Result := AObj.BottomSpace;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_ButtonFillMode(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTButtonFillMode): TVTButtonFillMode; extdecl;
begin
  {$define handleExceptionID := 28911}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonFillMode := AValue
  end else
    Result := AObj.ButtonFillMode;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_ButtonStyle(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTButtonStyle): TVTButtonStyle; extdecl;
begin
  {$define handleExceptionID := 28912}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonStyle := AValue
  end else
    Result := AObj.ButtonStyle;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_ChangeDelay(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28913}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ChangeDelay := AValue
  end else
    Result := AObj.ChangeDelay;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_CheckImageKind(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TCheckImageKind): TCheckImageKind; extdecl;
begin
  {$define handleExceptionID := 28914}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CheckImageKind := AValue
  end else
    Result := AObj.CheckImageKind;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_ClipboardFormats(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TClipboardFormats): TClipboardFormats; extdecl;
begin
  {$define handleExceptionID := 28915}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ClipboardFormats := AValue
  end else
    Result := AObj.ClipboardFormats;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_Colors(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTColors): TVTColors; extdecl;
begin
  {$define handleExceptionID := 28916}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Colors := AValue
  end else
    Result := AObj.Colors;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_CustomCheckImages(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 28917}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CustomCheckImages := AValue
  end else
    Result := AObj.CustomCheckImages;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_DefaultNodeHeight(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28918}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultNodeHeight := AValue
  end else
    Result := AObj.DefaultNodeHeight;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_DefaultPasteMode(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTNodeAttachMode): TVTNodeAttachMode; extdecl;
begin
  {$define handleExceptionID := 28919}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultPasteMode := AValue
  end else
    Result := AObj.DefaultPasteMode;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_DragCursor(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 28920}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_DragHeight(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 28921}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragHeight := AValue
  end else
    Result := AObj.DragHeight;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_DragKind(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 28922}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_DragImageKind(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTDragImageKind): TVTDragImageKind; extdecl;
begin
  {$define handleExceptionID := 28923}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragImageKind := AValue
  end else
    Result := AObj.DragImageKind;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_DragMode(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 28924}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_DragOperations(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TDragOperations): TDragOperations; extdecl;
begin
  {$define handleExceptionID := 28925}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragOperations := AValue
  end else
    Result := AObj.DragOperations;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_DragType(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTDragType): TVTDragType; extdecl;
begin
  {$define handleExceptionID := 28926}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragType := AValue
  end else
    Result := AObj.DragType;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_DragWidth(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 28927}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragWidth := AValue
  end else
    Result := AObj.DragWidth;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_DrawSelectionMode(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTDrawSelectionMode): TVTDrawSelectionMode; extdecl;
begin
  {$define handleExceptionID := 28928}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DrawSelectionMode := AValue
  end else
    Result := AObj.DrawSelectionMode;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_EditDelay(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28929}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EditDelay := AValue
  end else
    Result := AObj.EditDelay;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_Header(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTHeader): TVTHeader; extdecl;
begin
  {$define handleExceptionID := 28930}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Header := AValue
  end else
    Result := AObj.Header;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_HintMode(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTHintMode): TVTHintMode; extdecl;
begin
  {$define handleExceptionID := 28931}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintMode := AValue
  end else
    Result := AObj.HintMode;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_HotCursor(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 28932}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HotCursor := AValue
  end else
    Result := AObj.HotCursor;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_Images(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 28933}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_IncrementalSearch(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTIncrementalSearch): TVTIncrementalSearch; extdecl;
begin
  {$define handleExceptionID := 28934}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IncrementalSearch := AValue
  end else
    Result := AObj.IncrementalSearch;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_IncrementalSearchDirection(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTSearchDirection): TVTSearchDirection; extdecl;
begin
  {$define handleExceptionID := 28935}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IncrementalSearchDirection := AValue
  end else
    Result := AObj.IncrementalSearchDirection;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_IncrementalSearchStart(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTSearchStart): TVTSearchStart; extdecl;
begin
  {$define handleExceptionID := 28936}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IncrementalSearchStart := AValue
  end else
    Result := AObj.IncrementalSearchStart;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_IncrementalSearchTimeout(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28937}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IncrementalSearchTimeout := AValue
  end else
    Result := AObj.IncrementalSearchTimeout;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_Indent(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28938}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Indent := AValue
  end else
    Result := AObj.Indent;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_LineMode(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTLineMode): TVTLineMode; extdecl;
begin
  {$define handleExceptionID := 28939}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LineMode := AValue
  end else
    Result := AObj.LineMode;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_LineStyle(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTLineStyle): TVTLineStyle; extdecl;
begin
  {$define handleExceptionID := 28940}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LineStyle := AValue
  end else
    Result := AObj.LineStyle;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_Margin(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 28941}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Margin := AValue
  end else
    Result := AObj.Margin;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_NodeAlignment(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTNodeAlignment): TVTNodeAlignment; extdecl;
begin
  {$define handleExceptionID := 28942}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NodeAlignment := AValue
  end else
    Result := AObj.NodeAlignment;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_NodeDataSize(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 28943}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NodeDataSize := AValue
  end else
    Result := AObj.NodeDataSize;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_OperationCanceled(AObj: TLazVirtualDrawTree): LongBool; extdecl;
begin
  {$define handleExceptionID := 28944}
  handleExceptionBegin
  Result := AObj.OperationCanceled;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_ParentColor(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 28945}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_ParentFont(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 28946}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_ParentShowHint(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 28947}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_RootNodeCount(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28948}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RootNodeCount := AValue
  end else
    Result := AObj.RootNodeCount;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_ScrollBarOptions(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TScrollBarOptions): TScrollBarOptions; extdecl;
begin
  {$define handleExceptionID := 28949}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollBarOptions := AValue
  end else
    Result := AObj.ScrollBarOptions;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_SelectionBlendFactor(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 28950}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectionBlendFactor := AValue
  end else
    Result := AObj.SelectionBlendFactor;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_SelectionCurveRadius(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 28951}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectionCurveRadius := AValue
  end else
    Result := AObj.SelectionCurveRadius;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_StateImages(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 28952}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StateImages := AValue
  end else
    Result := AObj.StateImages;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_TextMargin(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 28953}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextMargin := AValue
  end else
    Result := AObj.TextMargin;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_TreeOptions(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVirtualTreeOptions): TVirtualTreeOptions; extdecl;
begin
  {$define handleExceptionID := 28954}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TreeOptions := AValue
  end else
    Result := AObj.TreeOptions;
  handleExceptionEnd
end;

// property
function TLazVirtualDrawTree_WantTabs(ASet: LongBool; AObj: TLazVirtualDrawTree; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 28955}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WantTabs := AValue
  end else
    Result := AObj.WantTabs;
  handleExceptionEnd
end;

// event
procedure TLazVirtualDrawTree_OnAddToSelection(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAddToSelectionEvent}
  {$DEFINE EventName := OnAddToSelection}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnAdvancedHeaderDraw(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAdvancedHeaderPaintEvent}
  {$DEFINE EventName := OnAdvancedHeaderDraw}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnAfterAutoFitColumn(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterAutoFitColumnEvent}
  {$DEFINE EventName := OnAfterAutoFitColumn}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnAfterAutoFitColumns(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterAutoFitColumnsEvent}
  {$DEFINE EventName := OnAfterAutoFitColumns}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnAfterCellPaint(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterCellPaintEvent}
  {$DEFINE EventName := OnAfterCellPaint}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnAfterColumnExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnExportEvent}
  {$DEFINE EventName := OnAfterColumnExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnAfterColumnWidthTracking(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterColumnWidthTrackingEvent}
  {$DEFINE EventName := OnAfterColumnWidthTracking}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnAfterGetMaxColumnWidth(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterGetMaxColumnWidthEvent}
  {$DEFINE EventName := OnAfterGetMaxColumnWidth}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnAfterHeaderExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTTreeExportEvent}
  {$DEFINE EventName := OnAfterHeaderExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnAfterHeaderHeightTracking(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterHeaderHeightTrackingEvent}
  {$DEFINE EventName := OnAfterHeaderHeightTracking}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnAfterItemErase(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterItemEraseEvent}
  {$DEFINE EventName := OnAfterItemErase}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnAfterItemPaint(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterItemPaintEvent}
  {$DEFINE EventName := OnAfterItemPaint}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnAfterNodeExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeExportEvent}
  {$DEFINE EventName := OnAfterNodeExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnAfterPaint(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTPaintEvent}
  {$DEFINE EventName := OnAfterPaint}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnAfterTreeExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTTreeExportEvent}
  {$DEFINE EventName := OnAfterTreeExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnBeforeAutoFitColumn(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeAutoFitColumnEvent}
  {$DEFINE EventName := OnBeforeAutoFitColumn}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnBeforeAutoFitColumns(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeAutoFitColumnsEvent}
  {$DEFINE EventName := OnBeforeAutoFitColumns}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnBeforeCellPaint(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeCellPaintEvent}
  {$DEFINE EventName := OnBeforeCellPaint}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnBeforeColumnExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnExportEvent}
  {$DEFINE EventName := OnBeforeColumnExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnBeforeColumnWidthTracking(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeColumnWidthTrackingEvent}
  {$DEFINE EventName := OnBeforeColumnWidthTracking}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnBeforeDrawTreeLine(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeDrawLineImageEvent}
  {$DEFINE EventName := OnBeforeDrawTreeLine}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnBeforeGetMaxColumnWidth(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeGetMaxColumnWidthEvent}
  {$DEFINE EventName := OnBeforeGetMaxColumnWidth}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnBeforeHeaderExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTTreeExportEvent}
  {$DEFINE EventName := OnBeforeHeaderExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnBeforeHeaderHeightTracking(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeHeaderHeightTrackingEvent}
  {$DEFINE EventName := OnBeforeHeaderHeightTracking}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnBeforeItemErase(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeItemEraseEvent}
  {$DEFINE EventName := OnBeforeItemErase}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnBeforeItemPaint(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeItemPaintEvent}
  {$DEFINE EventName := OnBeforeItemPaint}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnBeforeNodeExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeExportEvent}
  {$DEFINE EventName := OnBeforeNodeExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnBeforePaint(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTPaintEvent}
  {$DEFINE EventName := OnBeforePaint}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnBeforeTreeExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTTreeExportEvent}
  {$DEFINE EventName := OnBeforeTreeExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnCanSplitterResizeColumn(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCanSplitterResizeColumnEvent}
  {$DEFINE EventName := OnCanSplitterResizeColumn}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnCanSplitterResizeHeader(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCanSplitterResizeHeaderEvent}
  {$DEFINE EventName := OnCanSplitterResizeHeader}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnCanSplitterResizeNode(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCanSplitterResizeNodeEvent}
  {$DEFINE EventName := OnCanSplitterResizeNode}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnChange(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnChecked(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnChecked}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnChecking(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCheckChangingEvent}
  {$DEFINE EventName := OnChecking}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnCollapsed(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnCollapsed}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnCollapsing(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangingEvent}
  {$DEFINE EventName := OnCollapsing}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnColumnClick(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnClickEvent}
  {$DEFINE EventName := OnColumnClick}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnColumnDblClick(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnDblClickEvent}
  {$DEFINE EventName := OnColumnDblClick}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnColumnExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnExportEvent}
  {$DEFINE EventName := OnColumnExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnColumnResize(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderNotifyEvent}
  {$DEFINE EventName := OnColumnResize}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnColumnWidthDblClickResize(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnWidthDblClickResizeEvent}
  {$DEFINE EventName := OnColumnWidthDblClickResize}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnColumnWidthTracking(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnWidthTrackingEvent}
  {$DEFINE EventName := OnColumnWidthTracking}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnCompareNodes(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCompareEvent}
  {$DEFINE EventName := OnCompareNodes}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnContextPopup(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnCreateDataObject(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCreateDataObjectEvent}
  {$DEFINE EventName := OnCreateDataObject}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnCreateDragManager(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCreateDragManagerEvent}
  {$DEFINE EventName := OnCreateDragManager}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnCreateEditor(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCreateEditorEvent}
  {$DEFINE EventName := OnCreateEditor}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnDblClick(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnDragAllowed(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDragAllowedEvent}
  {$DEFINE EventName := OnDragAllowed}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnDragOver(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnDragDrop(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnDrawHint(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDrawHintEvent}
  {$DEFINE EventName := OnDrawHint}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnDrawNode(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDrawNodeEvent}
  {$DEFINE EventName := OnDrawNode}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnEdited(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTEditChangeEvent}
  {$DEFINE EventName := OnEdited}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnEditing(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTEditChangingEvent}
  {$DEFINE EventName := OnEditing}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnEndDock(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnEndDrag(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnEndOperation(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTOperationEvent}
  {$DEFINE EventName := OnEndOperation}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnExpanded(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnExpanded}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnExpanding(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangingEvent}
  {$DEFINE EventName := OnExpanding}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnFocusChanged(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTFocusChangeEvent}
  {$DEFINE EventName := OnFocusChanged}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnFocusChanging(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTFocusChangingEvent}
  {$DEFINE EventName := OnFocusChanging}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnFreeNode(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTFreeNodeEvent}
  {$DEFINE EventName := OnFreeNode}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnGetCellIsEmpty(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetCellIsEmptyEvent}
  {$DEFINE EventName := OnGetCellIsEmpty}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnGetCursor(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetCursorEvent}
  {$DEFINE EventName := OnGetCursor}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnGetHeaderCursor(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetHeaderCursorEvent}
  {$DEFINE EventName := OnGetHeaderCursor}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnGetHelpContext(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHelpContextEvent}
  {$DEFINE EventName := OnGetHelpContext}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnGetHint(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetHintEvent}
  {$DEFINE EventName := OnGetHint}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnGetHintKind(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHintKindEvent}
  {$DEFINE EventName := OnGetHintKind}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnGetHintSize(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetHintSizeEvent}
  {$DEFINE EventName := OnGetHintSize}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnGetImageIndex(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetImageEvent}
  {$DEFINE EventName := OnGetImageIndex}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnGetImageIndexEx(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetImageExEvent}
  {$DEFINE EventName := OnGetImageIndexEx}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnGetLineStyle(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetLineStyleEvent}
  {$DEFINE EventName := OnGetLineStyle}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnGetNodeDataSize(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetNodeDataSizeEvent}
  {$DEFINE EventName := OnGetNodeDataSize}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnGetNodeWidth(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetNodeWidthEvent}
  {$DEFINE EventName := OnGetNodeWidth}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnGetPopupMenu(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTPopupEvent}
  {$DEFINE EventName := OnGetPopupMenu}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnGetUserClipboardFormats(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetUserClipboardFormatsEvent}
  {$DEFINE EventName := OnGetUserClipboardFormats}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnHeaderClick(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderClickEvent}
  {$DEFINE EventName := OnHeaderClick}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnHeaderDblClick(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderClickEvent}
  {$DEFINE EventName := OnHeaderDblClick}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnHeaderDragged(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderDraggedEvent}
  {$DEFINE EventName := OnHeaderDragged}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnHeaderDraggedOut(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderDraggedOutEvent}
  {$DEFINE EventName := OnHeaderDraggedOut}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnHeaderDragging(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderDraggingEvent}
  {$DEFINE EventName := OnHeaderDragging}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnHeaderDraw(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderPaintEvent}
  {$DEFINE EventName := OnHeaderDraw}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnHeaderDrawQueryElements(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderPaintQueryElementsEvent}
  {$DEFINE EventName := OnHeaderDrawQueryElements}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnHeaderHeightTracking(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderHeightTrackingEvent}
  {$DEFINE EventName := OnHeaderHeightTracking}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnHeaderHeightDblClickResize(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderHeightDblClickResizeEvent}
  {$DEFINE EventName := OnHeaderHeightDblClickResize}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnHeaderMouseDown(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderMouseEvent}
  {$DEFINE EventName := OnHeaderMouseDown}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnHeaderMouseMove(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderMouseMoveEvent}
  {$DEFINE EventName := OnHeaderMouseMove}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnHeaderMouseUp(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderMouseEvent}
  {$DEFINE EventName := OnHeaderMouseUp}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnHotChange(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHotNodeChangeEvent}
  {$DEFINE EventName := OnHotChange}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnIncrementalSearch(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTIncrementalSearchEvent}
  {$DEFINE EventName := OnIncrementalSearch}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnInitChildren(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTInitChildrenEvent}
  {$DEFINE EventName := OnInitChildren}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnInitNode(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTInitNodeEvent}
  {$DEFINE EventName := OnInitNode}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnKeyAction(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTKeyActionEvent}
  {$DEFINE EventName := OnKeyAction}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnLoadNode(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSaveNodeEvent}
  {$DEFINE EventName := OnLoadNode}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnLoadTree(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSaveTreeEvent}
  {$DEFINE EventName := OnLoadTree}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnMeasureItem(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTMeasureItemEvent}
  {$DEFINE EventName := OnMeasureItem}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnMouseDown(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnMouseMove(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnMouseUp(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnMouseWheel(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnNodeClick(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeClickEvent}
  {$DEFINE EventName := OnNodeClick}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnNodeCopied(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeCopiedEvent}
  {$DEFINE EventName := OnNodeCopied}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnNodeCopying(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeCopyingEvent}
  {$DEFINE EventName := OnNodeCopying}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnNodeDblClick(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeClickEvent}
  {$DEFINE EventName := OnNodeDblClick}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnNodeExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeExportEvent}
  {$DEFINE EventName := OnNodeExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnNodeHeightTracking(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeHeightTrackingEvent}
  {$DEFINE EventName := OnNodeHeightTracking}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnNodeHeightDblClickResize(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeHeightDblClickResizeEvent}
  {$DEFINE EventName := OnNodeHeightDblClickResize}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnNodeMoved(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeMovedEvent}
  {$DEFINE EventName := OnNodeMoved}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnNodeMoving(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeMovingEvent}
  {$DEFINE EventName := OnNodeMoving}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnPaintBackground(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBackgroundPaintEvent}
  {$DEFINE EventName := OnPaintBackground}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnRemoveFromSelection(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTRemoveFromSelectionEvent}
  {$DEFINE EventName := OnRemoveFromSelection}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnRenderOLEData(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTRenderOLEDataEvent}
  {$DEFINE EventName := OnRenderOLEData}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnResetNode(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnResetNode}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnSaveNode(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSaveNodeEvent}
  {$DEFINE EventName := OnSaveNode}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnSaveTree(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSaveTreeEvent}
  {$DEFINE EventName := OnSaveTree}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnScroll(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTScrollEvent}
  {$DEFINE EventName := OnScroll}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnShowScrollBar(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTScrollBarShowEvent}
  {$DEFINE EventName := OnShowScrollBar}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnStartDock(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnStartDrag(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnStartOperation(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTOperationEvent}
  {$DEFINE EventName := OnStartOperation}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnStateChange(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTStateChangeEvent}
  {$DEFINE EventName := OnStateChange}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnStructureChange(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTStructureChangeEvent}
  {$DEFINE EventName := OnStructureChange}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualDrawTree_OnUpdating(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTUpdatingEvent}
  {$DEFINE EventName := OnUpdating}
  LCLEventMethodCode
end;

function TLazVirtualDrawTree_TClass(): TClass; extdecl;
begin
  Result := TLazVirtualDrawTree;
end;

exports
  TLazVirtualDrawTree_Create,
  TLazVirtualDrawTree_LastDragEffect,
  TLazVirtualDrawTree_Alignment,
  TLazVirtualDrawTree_AnimationDuration,
  TLazVirtualDrawTree_AutoExpandDelay,
  TLazVirtualDrawTree_AutoScrollDelay,
  TLazVirtualDrawTree_AutoScrollInterval,
  TLazVirtualDrawTree_Background,
  TLazVirtualDrawTree_BackgroundOffsetX,
  TLazVirtualDrawTree_BackgroundOffsetY,
  TLazVirtualDrawTree_BottomSpace,
  TLazVirtualDrawTree_ButtonFillMode,
  TLazVirtualDrawTree_ButtonStyle,
  TLazVirtualDrawTree_ChangeDelay,
  TLazVirtualDrawTree_CheckImageKind,
  TLazVirtualDrawTree_ClipboardFormats,
  TLazVirtualDrawTree_Colors,
  TLazVirtualDrawTree_CustomCheckImages,
  TLazVirtualDrawTree_DefaultNodeHeight,
  TLazVirtualDrawTree_DefaultPasteMode,
  TLazVirtualDrawTree_DragCursor,
  TLazVirtualDrawTree_DragHeight,
  TLazVirtualDrawTree_DragKind,
  TLazVirtualDrawTree_DragImageKind,
  TLazVirtualDrawTree_DragMode,
  TLazVirtualDrawTree_DragOperations,
  TLazVirtualDrawTree_DragType,
  TLazVirtualDrawTree_DragWidth,
  TLazVirtualDrawTree_DrawSelectionMode,
  TLazVirtualDrawTree_EditDelay,
  TLazVirtualDrawTree_Header,
  TLazVirtualDrawTree_HintMode,
  TLazVirtualDrawTree_HotCursor,
  TLazVirtualDrawTree_Images,
  TLazVirtualDrawTree_IncrementalSearch,
  TLazVirtualDrawTree_IncrementalSearchDirection,
  TLazVirtualDrawTree_IncrementalSearchStart,
  TLazVirtualDrawTree_IncrementalSearchTimeout,
  TLazVirtualDrawTree_Indent,
  TLazVirtualDrawTree_LineMode,
  TLazVirtualDrawTree_LineStyle,
  TLazVirtualDrawTree_Margin,
  TLazVirtualDrawTree_NodeAlignment,
  TLazVirtualDrawTree_NodeDataSize,
  TLazVirtualDrawTree_OperationCanceled,
  TLazVirtualDrawTree_ParentColor,
  TLazVirtualDrawTree_ParentFont,
  TLazVirtualDrawTree_ParentShowHint,
  TLazVirtualDrawTree_RootNodeCount,
  TLazVirtualDrawTree_ScrollBarOptions,
  TLazVirtualDrawTree_SelectionBlendFactor,
  TLazVirtualDrawTree_SelectionCurveRadius,
  TLazVirtualDrawTree_StateImages,
  TLazVirtualDrawTree_TextMargin,
  TLazVirtualDrawTree_TreeOptions,
  TLazVirtualDrawTree_WantTabs,
  TLazVirtualDrawTree_OnAddToSelection,
  TLazVirtualDrawTree_OnAdvancedHeaderDraw,
  TLazVirtualDrawTree_OnAfterAutoFitColumn,
  TLazVirtualDrawTree_OnAfterAutoFitColumns,
  TLazVirtualDrawTree_OnAfterCellPaint,
  TLazVirtualDrawTree_OnAfterColumnExport,
  TLazVirtualDrawTree_OnAfterColumnWidthTracking,
  TLazVirtualDrawTree_OnAfterGetMaxColumnWidth,
  TLazVirtualDrawTree_OnAfterHeaderExport,
  TLazVirtualDrawTree_OnAfterHeaderHeightTracking,
  TLazVirtualDrawTree_OnAfterItemErase,
  TLazVirtualDrawTree_OnAfterItemPaint,
  TLazVirtualDrawTree_OnAfterNodeExport,
  TLazVirtualDrawTree_OnAfterPaint,
  TLazVirtualDrawTree_OnAfterTreeExport,
  TLazVirtualDrawTree_OnBeforeAutoFitColumn,
  TLazVirtualDrawTree_OnBeforeAutoFitColumns,
  TLazVirtualDrawTree_OnBeforeCellPaint,
  TLazVirtualDrawTree_OnBeforeColumnExport,
  TLazVirtualDrawTree_OnBeforeColumnWidthTracking,
  TLazVirtualDrawTree_OnBeforeDrawTreeLine,
  TLazVirtualDrawTree_OnBeforeGetMaxColumnWidth,
  TLazVirtualDrawTree_OnBeforeHeaderExport,
  TLazVirtualDrawTree_OnBeforeHeaderHeightTracking,
  TLazVirtualDrawTree_OnBeforeItemErase,
  TLazVirtualDrawTree_OnBeforeItemPaint,
  TLazVirtualDrawTree_OnBeforeNodeExport,
  TLazVirtualDrawTree_OnBeforePaint,
  TLazVirtualDrawTree_OnBeforeTreeExport,
  TLazVirtualDrawTree_OnCanSplitterResizeColumn,
  TLazVirtualDrawTree_OnCanSplitterResizeHeader,
  TLazVirtualDrawTree_OnCanSplitterResizeNode,
  TLazVirtualDrawTree_OnChange,
  TLazVirtualDrawTree_OnChecked,
  TLazVirtualDrawTree_OnChecking,
  TLazVirtualDrawTree_OnCollapsed,
  TLazVirtualDrawTree_OnCollapsing,
  TLazVirtualDrawTree_OnColumnClick,
  TLazVirtualDrawTree_OnColumnDblClick,
  TLazVirtualDrawTree_OnColumnExport,
  TLazVirtualDrawTree_OnColumnResize,
  TLazVirtualDrawTree_OnColumnWidthDblClickResize,
  TLazVirtualDrawTree_OnColumnWidthTracking,
  TLazVirtualDrawTree_OnCompareNodes,
  TLazVirtualDrawTree_OnContextPopup,
  TLazVirtualDrawTree_OnCreateDataObject,
  TLazVirtualDrawTree_OnCreateDragManager,
  TLazVirtualDrawTree_OnCreateEditor,
  TLazVirtualDrawTree_OnDblClick,
  TLazVirtualDrawTree_OnDragAllowed,
  TLazVirtualDrawTree_OnDragOver,
  TLazVirtualDrawTree_OnDragDrop,
  TLazVirtualDrawTree_OnDrawHint,
  TLazVirtualDrawTree_OnDrawNode,
  TLazVirtualDrawTree_OnEdited,
  TLazVirtualDrawTree_OnEditing,
  TLazVirtualDrawTree_OnEndDock,
  TLazVirtualDrawTree_OnEndDrag,
  TLazVirtualDrawTree_OnEndOperation,
  TLazVirtualDrawTree_OnExpanded,
  TLazVirtualDrawTree_OnExpanding,
  TLazVirtualDrawTree_OnFocusChanged,
  TLazVirtualDrawTree_OnFocusChanging,
  TLazVirtualDrawTree_OnFreeNode,
  TLazVirtualDrawTree_OnGetCellIsEmpty,
  TLazVirtualDrawTree_OnGetCursor,
  TLazVirtualDrawTree_OnGetHeaderCursor,
  TLazVirtualDrawTree_OnGetHelpContext,
  TLazVirtualDrawTree_OnGetHint,
  TLazVirtualDrawTree_OnGetHintKind,
  TLazVirtualDrawTree_OnGetHintSize,
  TLazVirtualDrawTree_OnGetImageIndex,
  TLazVirtualDrawTree_OnGetImageIndexEx,
  TLazVirtualDrawTree_OnGetLineStyle,
  TLazVirtualDrawTree_OnGetNodeDataSize,
  TLazVirtualDrawTree_OnGetNodeWidth,
  TLazVirtualDrawTree_OnGetPopupMenu,
  TLazVirtualDrawTree_OnGetUserClipboardFormats,
  TLazVirtualDrawTree_OnHeaderClick,
  TLazVirtualDrawTree_OnHeaderDblClick,
  TLazVirtualDrawTree_OnHeaderDragged,
  TLazVirtualDrawTree_OnHeaderDraggedOut,
  TLazVirtualDrawTree_OnHeaderDragging,
  TLazVirtualDrawTree_OnHeaderDraw,
  TLazVirtualDrawTree_OnHeaderDrawQueryElements,
  TLazVirtualDrawTree_OnHeaderHeightTracking,
  TLazVirtualDrawTree_OnHeaderHeightDblClickResize,
  TLazVirtualDrawTree_OnHeaderMouseDown,
  TLazVirtualDrawTree_OnHeaderMouseMove,
  TLazVirtualDrawTree_OnHeaderMouseUp,
  TLazVirtualDrawTree_OnHotChange,
  TLazVirtualDrawTree_OnIncrementalSearch,
  TLazVirtualDrawTree_OnInitChildren,
  TLazVirtualDrawTree_OnInitNode,
  TLazVirtualDrawTree_OnKeyAction,
  TLazVirtualDrawTree_OnLoadNode,
  TLazVirtualDrawTree_OnLoadTree,
  TLazVirtualDrawTree_OnMeasureItem,
  TLazVirtualDrawTree_OnMouseDown,
  TLazVirtualDrawTree_OnMouseMove,
  TLazVirtualDrawTree_OnMouseUp,
  TLazVirtualDrawTree_OnMouseWheel,
  TLazVirtualDrawTree_OnNodeClick,
  TLazVirtualDrawTree_OnNodeCopied,
  TLazVirtualDrawTree_OnNodeCopying,
  TLazVirtualDrawTree_OnNodeDblClick,
  TLazVirtualDrawTree_OnNodeExport,
  TLazVirtualDrawTree_OnNodeHeightTracking,
  TLazVirtualDrawTree_OnNodeHeightDblClickResize,
  TLazVirtualDrawTree_OnNodeMoved,
  TLazVirtualDrawTree_OnNodeMoving,
  TLazVirtualDrawTree_OnPaintBackground,
  TLazVirtualDrawTree_OnRemoveFromSelection,
  TLazVirtualDrawTree_OnRenderOLEData,
  TLazVirtualDrawTree_OnResetNode,
  TLazVirtualDrawTree_OnSaveNode,
  TLazVirtualDrawTree_OnSaveTree,
  TLazVirtualDrawTree_OnScroll,
  TLazVirtualDrawTree_OnShowScrollBar,
  TLazVirtualDrawTree_OnStartDock,
  TLazVirtualDrawTree_OnStartDrag,
  TLazVirtualDrawTree_OnStartOperation,
  TLazVirtualDrawTree_OnStateChange,
  TLazVirtualDrawTree_OnStructureChange,
  TLazVirtualDrawTree_OnUpdating,
  TLazVirtualDrawTree_TClass;