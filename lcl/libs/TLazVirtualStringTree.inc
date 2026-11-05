// constructor
function TLazVirtualStringTree_Create(AOwner: TComponent): TLazVirtualStringTree; extdecl;
begin
  {$define handleExceptionID := 29100}
  handleExceptionBegin
  Result := TLazVirtualStringTree.Create(AOwner);
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_RangeX(AObj: TLazVirtualStringTree): Cardinal; extdecl;
begin
  {$define handleExceptionID := 29101}
  handleExceptionBegin
  Result := AObj.RangeX;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_LastDragEffect(AObj: TLazVirtualStringTree): LongWord; extdecl;
begin
  {$define handleExceptionID := 29102}
  handleExceptionBegin
  Result := AObj.LastDragEffect;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_Alignment(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 29103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_AnimationDuration(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 29104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AnimationDuration := AValue
  end else
    Result := AObj.AnimationDuration;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_AutoExpandDelay(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 29105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoExpandDelay := AValue
  end else
    Result := AObj.AutoExpandDelay;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_AutoScrollDelay(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 29106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoScrollDelay := AValue
  end else
    Result := AObj.AutoScrollDelay;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_AutoScrollInterval(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TAutoScrollInterval): TAutoScrollInterval; extdecl;
begin
  {$define handleExceptionID := 29107}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoScrollInterval := AValue
  end else
    Result := AObj.AutoScrollInterval;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_Background(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TPicture): TPicture; extdecl;
begin
  {$define handleExceptionID := 29108}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Background := AValue
  end else
    Result := AObj.Background;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_BackgroundOffsetX(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29109}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BackgroundOffsetX := AValue
  end else
    Result := AObj.BackgroundOffsetX;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_BackgroundOffsetY(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29110}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BackgroundOffsetY := AValue
  end else
    Result := AObj.BackgroundOffsetY;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_BottomSpace(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 29111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BottomSpace := AValue
  end else
    Result := AObj.BottomSpace;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_ButtonFillMode(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTButtonFillMode): TVTButtonFillMode; extdecl;
begin
  {$define handleExceptionID := 29112}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonFillMode := AValue
  end else
    Result := AObj.ButtonFillMode;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_ButtonStyle(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTButtonStyle): TVTButtonStyle; extdecl;
begin
  {$define handleExceptionID := 29113}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonStyle := AValue
  end else
    Result := AObj.ButtonStyle;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_ChangeDelay(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 29114}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ChangeDelay := AValue
  end else
    Result := AObj.ChangeDelay;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_CheckImageKind(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TCheckImageKind): TCheckImageKind; extdecl;
begin
  {$define handleExceptionID := 29115}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CheckImageKind := AValue
  end else
    Result := AObj.CheckImageKind;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_ClipboardFormats(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TClipboardFormats): TClipboardFormats; extdecl;
begin
  {$define handleExceptionID := 29116}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ClipboardFormats := AValue
  end else
    Result := AObj.ClipboardFormats;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_Colors(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTColors): TVTColors; extdecl;
begin
  {$define handleExceptionID := 29117}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Colors := AValue
  end else
    Result := AObj.Colors;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_CustomCheckImages(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 29118}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CustomCheckImages := AValue
  end else
    Result := AObj.CustomCheckImages;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_DefaultNodeHeight(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 29119}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultNodeHeight := AValue
  end else
    Result := AObj.DefaultNodeHeight;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_DefaultPasteMode(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTNodeAttachMode): TVTNodeAttachMode; extdecl;
begin
  {$define handleExceptionID := 29120}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultPasteMode := AValue
  end else
    Result := AObj.DefaultPasteMode;
  handleExceptionEnd
end;

// property
procedure TLazVirtualStringTree_DefaultText(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 29121}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultText := AValue
  end else
    StringBufferCreate(AObj.DefaultText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_DragCursor(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 29122}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_DragHeight(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29123}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragHeight := AValue
  end else
    Result := AObj.DragHeight;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_DragKind(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 29124}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_DragImageKind(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTDragImageKind): TVTDragImageKind; extdecl;
begin
  {$define handleExceptionID := 29125}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragImageKind := AValue
  end else
    Result := AObj.DragImageKind;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_DragMode(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 29126}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_DragOperations(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TDragOperations): TDragOperations; extdecl;
begin
  {$define handleExceptionID := 29127}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragOperations := AValue
  end else
    Result := AObj.DragOperations;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_DragType(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTDragType): TVTDragType; extdecl;
begin
  {$define handleExceptionID := 29128}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragType := AValue
  end else
    Result := AObj.DragType;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_DragWidth(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29129}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragWidth := AValue
  end else
    Result := AObj.DragWidth;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_DrawSelectionMode(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTDrawSelectionMode): TVTDrawSelectionMode; extdecl;
begin
  {$define handleExceptionID := 29130}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DrawSelectionMode := AValue
  end else
    Result := AObj.DrawSelectionMode;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_EditDelay(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 29131}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EditDelay := AValue
  end else
    Result := AObj.EditDelay;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_Header(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTHeader): TVTHeader; extdecl;
begin
  {$define handleExceptionID := 29132}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Header := AValue
  end else
    Result := AObj.Header;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_HintMode(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTHintMode): TVTHintMode; extdecl;
begin
  {$define handleExceptionID := 29133}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintMode := AValue
  end else
    Result := AObj.HintMode;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_HotCursor(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 29134}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HotCursor := AValue
  end else
    Result := AObj.HotCursor;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_Images(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 29135}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Images := AValue
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_IncrementalSearch(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTIncrementalSearch): TVTIncrementalSearch; extdecl;
begin
  {$define handleExceptionID := 29136}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IncrementalSearch := AValue
  end else
    Result := AObj.IncrementalSearch;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_IncrementalSearchDirection(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTSearchDirection): TVTSearchDirection; extdecl;
begin
  {$define handleExceptionID := 29137}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IncrementalSearchDirection := AValue
  end else
    Result := AObj.IncrementalSearchDirection;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_IncrementalSearchStart(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTSearchStart): TVTSearchStart; extdecl;
begin
  {$define handleExceptionID := 29138}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IncrementalSearchStart := AValue
  end else
    Result := AObj.IncrementalSearchStart;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_IncrementalSearchTimeout(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 29139}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IncrementalSearchTimeout := AValue
  end else
    Result := AObj.IncrementalSearchTimeout;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_Indent(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 29140}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Indent := AValue
  end else
    Result := AObj.Indent;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_LineMode(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTLineMode): TVTLineMode; extdecl;
begin
  {$define handleExceptionID := 29141}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LineMode := AValue
  end else
    Result := AObj.LineMode;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_LineStyle(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTLineStyle): TVTLineStyle; extdecl;
begin
  {$define handleExceptionID := 29142}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LineStyle := AValue
  end else
    Result := AObj.LineStyle;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_Margin(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29143}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Margin := AValue
  end else
    Result := AObj.Margin;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_NodeAlignment(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TVTNodeAlignment): TVTNodeAlignment; extdecl;
begin
  {$define handleExceptionID := 29144}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NodeAlignment := AValue
  end else
    Result := AObj.NodeAlignment;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_NodeDataSize(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29145}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NodeDataSize := AValue
  end else
    Result := AObj.NodeDataSize;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_OperationCanceled(AObj: TLazVirtualStringTree): LongBool; extdecl;
begin
  {$define handleExceptionID := 29146}
  handleExceptionBegin
  Result := AObj.OperationCanceled;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_ParentColor(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 29147}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_ParentFont(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 29148}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_ParentShowHint(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 29149}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_RootNodeCount(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 29150}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RootNodeCount := AValue
  end else
    Result := AObj.RootNodeCount;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_ScrollBarOptions(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TScrollBarOptions): TScrollBarOptions; extdecl;
begin
  {$define handleExceptionID := 29151}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollBarOptions := AValue
  end else
    Result := AObj.ScrollBarOptions;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_SelectionBlendFactor(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 29152}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectionBlendFactor := AValue
  end else
    Result := AObj.SelectionBlendFactor;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_SelectionCurveRadius(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 29153}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SelectionCurveRadius := AValue
  end else
    Result := AObj.SelectionCurveRadius;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_StateImages(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 29154}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StateImages := AValue
  end else
    Result := AObj.StateImages;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_TextMargin(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 29155}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextMargin := AValue
  end else
    Result := AObj.TextMargin;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_TreeOptions(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: TStringTreeOptions): TStringTreeOptions; extdecl;
begin
  {$define handleExceptionID := 29156}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TreeOptions := AValue
  end else
    Result := AObj.TreeOptions;
  handleExceptionEnd
end;

// property
function TLazVirtualStringTree_WantTabs(ASet: LongBool; AObj: TLazVirtualStringTree; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 29157}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WantTabs := AValue
  end else
    Result := AObj.WantTabs;
  handleExceptionEnd
end;

// event
procedure TLazVirtualStringTree_OnAddToSelection(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAddToSelectionEvent}
  {$DEFINE EventName := OnAddToSelection}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnAdvancedHeaderDraw(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAdvancedHeaderPaintEvent}
  {$DEFINE EventName := OnAdvancedHeaderDraw}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnAfterAutoFitColumn(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterAutoFitColumnEvent}
  {$DEFINE EventName := OnAfterAutoFitColumn}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnAfterAutoFitColumns(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterAutoFitColumnsEvent}
  {$DEFINE EventName := OnAfterAutoFitColumns}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnAfterCellPaint(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterCellPaintEvent}
  {$DEFINE EventName := OnAfterCellPaint}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnAfterColumnExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnExportEvent}
  {$DEFINE EventName := OnAfterColumnExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnAfterColumnWidthTracking(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterColumnWidthTrackingEvent}
  {$DEFINE EventName := OnAfterColumnWidthTracking}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnAfterGetMaxColumnWidth(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterGetMaxColumnWidthEvent}
  {$DEFINE EventName := OnAfterGetMaxColumnWidth}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnAfterHeaderExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTTreeExportEvent}
  {$DEFINE EventName := OnAfterHeaderExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnAfterHeaderHeightTracking(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterHeaderHeightTrackingEvent}
  {$DEFINE EventName := OnAfterHeaderHeightTracking}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnAfterItemErase(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterItemEraseEvent}
  {$DEFINE EventName := OnAfterItemErase}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnAfterItemPaint(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterItemPaintEvent}
  {$DEFINE EventName := OnAfterItemPaint}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnAfterNodeExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeExportEvent}
  {$DEFINE EventName := OnAfterNodeExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnAfterPaint(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTPaintEvent}
  {$DEFINE EventName := OnAfterPaint}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnAfterTreeExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTTreeExportEvent}
  {$DEFINE EventName := OnAfterTreeExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnBeforeAutoFitColumn(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeAutoFitColumnEvent}
  {$DEFINE EventName := OnBeforeAutoFitColumn}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnBeforeAutoFitColumns(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeAutoFitColumnsEvent}
  {$DEFINE EventName := OnBeforeAutoFitColumns}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnBeforeCellPaint(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeCellPaintEvent}
  {$DEFINE EventName := OnBeforeCellPaint}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnBeforeColumnExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnExportEvent}
  {$DEFINE EventName := OnBeforeColumnExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnBeforeColumnWidthTracking(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeColumnWidthTrackingEvent}
  {$DEFINE EventName := OnBeforeColumnWidthTracking}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnBeforeDrawTreeLine(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeDrawLineImageEvent}
  {$DEFINE EventName := OnBeforeDrawTreeLine}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnBeforeGetMaxColumnWidth(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeGetMaxColumnWidthEvent}
  {$DEFINE EventName := OnBeforeGetMaxColumnWidth}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnBeforeHeaderExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTTreeExportEvent}
  {$DEFINE EventName := OnBeforeHeaderExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnBeforeHeaderHeightTracking(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeHeaderHeightTrackingEvent}
  {$DEFINE EventName := OnBeforeHeaderHeightTracking}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnBeforeItemErase(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeItemEraseEvent}
  {$DEFINE EventName := OnBeforeItemErase}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnBeforeItemPaint(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeItemPaintEvent}
  {$DEFINE EventName := OnBeforeItemPaint}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnBeforeNodeExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeExportEvent}
  {$DEFINE EventName := OnBeforeNodeExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnBeforePaint(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTPaintEvent}
  {$DEFINE EventName := OnBeforePaint}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnBeforeTreeExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTTreeExportEvent}
  {$DEFINE EventName := OnBeforeTreeExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnCanSplitterResizeColumn(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCanSplitterResizeColumnEvent}
  {$DEFINE EventName := OnCanSplitterResizeColumn}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnCanSplitterResizeHeader(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCanSplitterResizeHeaderEvent}
  {$DEFINE EventName := OnCanSplitterResizeHeader}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnCanSplitterResizeNode(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCanSplitterResizeNodeEvent}
  {$DEFINE EventName := OnCanSplitterResizeNode}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnChange(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnChecked(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnChecked}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnChecking(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCheckChangingEvent}
  {$DEFINE EventName := OnChecking}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnCollapsed(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnCollapsed}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnCollapsing(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangingEvent}
  {$DEFINE EventName := OnCollapsing}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnColumnClick(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnClickEvent}
  {$DEFINE EventName := OnColumnClick}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnColumnDblClick(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnDblClickEvent}
  {$DEFINE EventName := OnColumnDblClick}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnColumnExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnExportEvent}
  {$DEFINE EventName := OnColumnExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnColumnResize(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderNotifyEvent}
  {$DEFINE EventName := OnColumnResize}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnColumnWidthDblClickResize(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnWidthDblClickResizeEvent}
  {$DEFINE EventName := OnColumnWidthDblClickResize}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnColumnWidthTracking(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnWidthTrackingEvent}
  {$DEFINE EventName := OnColumnWidthTracking}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnCompareNodes(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCompareEvent}
  {$DEFINE EventName := OnCompareNodes}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnContextPopup(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnCreateDataObject(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCreateDataObjectEvent}
  {$DEFINE EventName := OnCreateDataObject}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnCreateDragManager(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCreateDragManagerEvent}
  {$DEFINE EventName := OnCreateDragManager}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnCreateEditor(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCreateEditorEvent}
  {$DEFINE EventName := OnCreateEditor}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnDblClick(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnDragAllowed(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDragAllowedEvent}
  {$DEFINE EventName := OnDragAllowed}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnDragOver(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnDragDrop(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnDrawHint(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDrawHintEvent}
  {$DEFINE EventName := OnDrawHint}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnDrawText(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDrawTextEvent}
  {$DEFINE EventName := OnDrawText}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnEditCancelled(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTEditCancelEvent}
  {$DEFINE EventName := OnEditCancelled}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnEdited(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTEditChangeEvent}
  {$DEFINE EventName := OnEdited}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnEditing(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTEditChangingEvent}
  {$DEFINE EventName := OnEditing}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnEndDock(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnEndDrag(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnEndOperation(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTOperationEvent}
  {$DEFINE EventName := OnEndOperation}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnExpanded(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnExpanded}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnExpanding(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangingEvent}
  {$DEFINE EventName := OnExpanding}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnFocusChanged(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTFocusChangeEvent}
  {$DEFINE EventName := OnFocusChanged}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnFocusChanging(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTFocusChangingEvent}
  {$DEFINE EventName := OnFocusChanging}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnFreeNode(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTFreeNodeEvent}
  {$DEFINE EventName := OnFreeNode}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnGetCellIsEmpty(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetCellIsEmptyEvent}
  {$DEFINE EventName := OnGetCellIsEmpty}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnGetCursor(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetCursorEvent}
  {$DEFINE EventName := OnGetCursor}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnGetHeaderCursor(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetHeaderCursorEvent}
  {$DEFINE EventName := OnGetHeaderCursor}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnGetText(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVSTGetTextEvent}
  {$DEFINE EventName := OnGetText}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnPaintText(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTPaintText}
  {$DEFINE EventName := OnPaintText}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnGetHelpContext(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHelpContextEvent}
  {$DEFINE EventName := OnGetHelpContext}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnGetHintKind(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHintKindEvent}
  {$DEFINE EventName := OnGetHintKind}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnGetHintSize(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetHintSizeEvent}
  {$DEFINE EventName := OnGetHintSize}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnGetImageIndex(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetImageEvent}
  {$DEFINE EventName := OnGetImageIndex}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnGetImageIndexEx(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetImageExEvent}
  {$DEFINE EventName := OnGetImageIndexEx}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnGetImageText(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetImageTextEvent}
  {$DEFINE EventName := OnGetImageText}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnGetHint(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetHintEvent}
  {$DEFINE EventName := OnGetHint}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnGetLineStyle(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetLineStyleEvent}
  {$DEFINE EventName := OnGetLineStyle}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnGetNodeDataSize(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetNodeDataSizeEvent}
  {$DEFINE EventName := OnGetNodeDataSize}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnGetPopupMenu(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTPopupEvent}
  {$DEFINE EventName := OnGetPopupMenu}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnGetUserClipboardFormats(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetUserClipboardFormatsEvent}
  {$DEFINE EventName := OnGetUserClipboardFormats}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnHeaderClick(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderClickEvent}
  {$DEFINE EventName := OnHeaderClick}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnHeaderDblClick(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderClickEvent}
  {$DEFINE EventName := OnHeaderDblClick}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnHeaderDragged(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderDraggedEvent}
  {$DEFINE EventName := OnHeaderDragged}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnHeaderDraggedOut(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderDraggedOutEvent}
  {$DEFINE EventName := OnHeaderDraggedOut}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnHeaderDragging(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderDraggingEvent}
  {$DEFINE EventName := OnHeaderDragging}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnHeaderDraw(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderPaintEvent}
  {$DEFINE EventName := OnHeaderDraw}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnHeaderDrawQueryElements(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderPaintQueryElementsEvent}
  {$DEFINE EventName := OnHeaderDrawQueryElements}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnHeaderHeightDblClickResize(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderHeightDblClickResizeEvent}
  {$DEFINE EventName := OnHeaderHeightDblClickResize}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnHeaderHeightTracking(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderHeightTrackingEvent}
  {$DEFINE EventName := OnHeaderHeightTracking}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnHeaderMouseDown(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderMouseEvent}
  {$DEFINE EventName := OnHeaderMouseDown}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnHeaderMouseMove(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderMouseMoveEvent}
  {$DEFINE EventName := OnHeaderMouseMove}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnHeaderMouseUp(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderMouseEvent}
  {$DEFINE EventName := OnHeaderMouseUp}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnHotChange(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHotNodeChangeEvent}
  {$DEFINE EventName := OnHotChange}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnIncrementalSearch(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTIncrementalSearchEvent}
  {$DEFINE EventName := OnIncrementalSearch}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnInitChildren(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTInitChildrenEvent}
  {$DEFINE EventName := OnInitChildren}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnInitNode(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTInitNodeEvent}
  {$DEFINE EventName := OnInitNode}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnKeyAction(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTKeyActionEvent}
  {$DEFINE EventName := OnKeyAction}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnLoadNode(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSaveNodeEvent}
  {$DEFINE EventName := OnLoadNode}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnLoadTree(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSaveTreeEvent}
  {$DEFINE EventName := OnLoadTree}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnMeasureItem(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTMeasureItemEvent}
  {$DEFINE EventName := OnMeasureItem}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnMeasureTextWidth(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTMeasureTextEvent}
  {$DEFINE EventName := OnMeasureTextWidth}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnMeasureTextHeight(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTMeasureTextEvent}
  {$DEFINE EventName := OnMeasureTextHeight}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnMouseDown(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnMouseMove(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnMouseUp(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnMouseWheel(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnMouseEnter(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnMouseLeave(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnNewText(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVSTNewTextEvent}
  {$DEFINE EventName := OnNewText}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnNodeClick(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeClickEvent}
  {$DEFINE EventName := OnNodeClick}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnNodeCopied(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeCopiedEvent}
  {$DEFINE EventName := OnNodeCopied}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnNodeCopying(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeCopyingEvent}
  {$DEFINE EventName := OnNodeCopying}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnNodeDblClick(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeClickEvent}
  {$DEFINE EventName := OnNodeDblClick}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnNodeExport(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeExportEvent}
  {$DEFINE EventName := OnNodeExport}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnNodeHeightDblClickResize(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeHeightDblClickResizeEvent}
  {$DEFINE EventName := OnNodeHeightDblClickResize}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnNodeHeightTracking(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeHeightTrackingEvent}
  {$DEFINE EventName := OnNodeHeightTracking}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnNodeMoved(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeMovedEvent}
  {$DEFINE EventName := OnNodeMoved}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnNodeMoving(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeMovingEvent}
  {$DEFINE EventName := OnNodeMoving}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnPaintBackground(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBackgroundPaintEvent}
  {$DEFINE EventName := OnPaintBackground}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnRemoveFromSelection(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTRemoveFromSelectionEvent}
  {$DEFINE EventName := OnRemoveFromSelection}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnRenderOLEData(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTRenderOLEDataEvent}
  {$DEFINE EventName := OnRenderOLEData}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnResetNode(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnResetNode}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnSaveNode(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSaveNodeEvent}
  {$DEFINE EventName := OnSaveNode}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnSaveTree(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSaveTreeEvent}
  {$DEFINE EventName := OnSaveTree}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnScroll(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTScrollEvent}
  {$DEFINE EventName := OnScroll}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnShortenString(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVSTShortenStringEvent}
  {$DEFINE EventName := OnShortenString}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnShowScrollBar(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTScrollBarShowEvent}
  {$DEFINE EventName := OnShowScrollBar}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnStartDock(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnStartDrag(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnStartOperation(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTOperationEvent}
  {$DEFINE EventName := OnStartOperation}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnStateChange(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTStateChangeEvent}
  {$DEFINE EventName := OnStateChange}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnStructureChange(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTStructureChangeEvent}
  {$DEFINE EventName := OnStructureChange}
  LCLEventMethodCode
end;

// event
procedure TLazVirtualStringTree_OnUpdating(AObj: TLazVirtualStringTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTUpdatingEvent}
  {$DEFINE EventName := OnUpdating}
  LCLEventMethodCode
end;

function TLazVirtualStringTree_TClass(): TClass; extdecl;
begin
  Result := TLazVirtualStringTree;
end;

exports
  TLazVirtualStringTree_Create,
  TLazVirtualStringTree_RangeX,
  TLazVirtualStringTree_LastDragEffect,
  TLazVirtualStringTree_Alignment,
  TLazVirtualStringTree_AnimationDuration,
  TLazVirtualStringTree_AutoExpandDelay,
  TLazVirtualStringTree_AutoScrollDelay,
  TLazVirtualStringTree_AutoScrollInterval,
  TLazVirtualStringTree_Background,
  TLazVirtualStringTree_BackgroundOffsetX,
  TLazVirtualStringTree_BackgroundOffsetY,
  TLazVirtualStringTree_BottomSpace,
  TLazVirtualStringTree_ButtonFillMode,
  TLazVirtualStringTree_ButtonStyle,
  TLazVirtualStringTree_ChangeDelay,
  TLazVirtualStringTree_CheckImageKind,
  TLazVirtualStringTree_ClipboardFormats,
  TLazVirtualStringTree_Colors,
  TLazVirtualStringTree_CustomCheckImages,
  TLazVirtualStringTree_DefaultNodeHeight,
  TLazVirtualStringTree_DefaultPasteMode,
  TLazVirtualStringTree_DefaultText,
  TLazVirtualStringTree_DragCursor,
  TLazVirtualStringTree_DragHeight,
  TLazVirtualStringTree_DragKind,
  TLazVirtualStringTree_DragImageKind,
  TLazVirtualStringTree_DragMode,
  TLazVirtualStringTree_DragOperations,
  TLazVirtualStringTree_DragType,
  TLazVirtualStringTree_DragWidth,
  TLazVirtualStringTree_DrawSelectionMode,
  TLazVirtualStringTree_EditDelay,
  TLazVirtualStringTree_Header,
  TLazVirtualStringTree_HintMode,
  TLazVirtualStringTree_HotCursor,
  TLazVirtualStringTree_Images,
  TLazVirtualStringTree_IncrementalSearch,
  TLazVirtualStringTree_IncrementalSearchDirection,
  TLazVirtualStringTree_IncrementalSearchStart,
  TLazVirtualStringTree_IncrementalSearchTimeout,
  TLazVirtualStringTree_Indent,
  TLazVirtualStringTree_LineMode,
  TLazVirtualStringTree_LineStyle,
  TLazVirtualStringTree_Margin,
  TLazVirtualStringTree_NodeAlignment,
  TLazVirtualStringTree_NodeDataSize,
  TLazVirtualStringTree_OperationCanceled,
  TLazVirtualStringTree_ParentColor,
  TLazVirtualStringTree_ParentFont,
  TLazVirtualStringTree_ParentShowHint,
  TLazVirtualStringTree_RootNodeCount,
  TLazVirtualStringTree_ScrollBarOptions,
  TLazVirtualStringTree_SelectionBlendFactor,
  TLazVirtualStringTree_SelectionCurveRadius,
  TLazVirtualStringTree_StateImages,
  TLazVirtualStringTree_TextMargin,
  TLazVirtualStringTree_TreeOptions,
  TLazVirtualStringTree_WantTabs,
  TLazVirtualStringTree_OnAddToSelection,
  TLazVirtualStringTree_OnAdvancedHeaderDraw,
  TLazVirtualStringTree_OnAfterAutoFitColumn,
  TLazVirtualStringTree_OnAfterAutoFitColumns,
  TLazVirtualStringTree_OnAfterCellPaint,
  TLazVirtualStringTree_OnAfterColumnExport,
  TLazVirtualStringTree_OnAfterColumnWidthTracking,
  TLazVirtualStringTree_OnAfterGetMaxColumnWidth,
  TLazVirtualStringTree_OnAfterHeaderExport,
  TLazVirtualStringTree_OnAfterHeaderHeightTracking,
  TLazVirtualStringTree_OnAfterItemErase,
  TLazVirtualStringTree_OnAfterItemPaint,
  TLazVirtualStringTree_OnAfterNodeExport,
  TLazVirtualStringTree_OnAfterPaint,
  TLazVirtualStringTree_OnAfterTreeExport,
  TLazVirtualStringTree_OnBeforeAutoFitColumn,
  TLazVirtualStringTree_OnBeforeAutoFitColumns,
  TLazVirtualStringTree_OnBeforeCellPaint,
  TLazVirtualStringTree_OnBeforeColumnExport,
  TLazVirtualStringTree_OnBeforeColumnWidthTracking,
  TLazVirtualStringTree_OnBeforeDrawTreeLine,
  TLazVirtualStringTree_OnBeforeGetMaxColumnWidth,
  TLazVirtualStringTree_OnBeforeHeaderExport,
  TLazVirtualStringTree_OnBeforeHeaderHeightTracking,
  TLazVirtualStringTree_OnBeforeItemErase,
  TLazVirtualStringTree_OnBeforeItemPaint,
  TLazVirtualStringTree_OnBeforeNodeExport,
  TLazVirtualStringTree_OnBeforePaint,
  TLazVirtualStringTree_OnBeforeTreeExport,
  TLazVirtualStringTree_OnCanSplitterResizeColumn,
  TLazVirtualStringTree_OnCanSplitterResizeHeader,
  TLazVirtualStringTree_OnCanSplitterResizeNode,
  TLazVirtualStringTree_OnChange,
  TLazVirtualStringTree_OnChecked,
  TLazVirtualStringTree_OnChecking,
  TLazVirtualStringTree_OnCollapsed,
  TLazVirtualStringTree_OnCollapsing,
  TLazVirtualStringTree_OnColumnClick,
  TLazVirtualStringTree_OnColumnDblClick,
  TLazVirtualStringTree_OnColumnExport,
  TLazVirtualStringTree_OnColumnResize,
  TLazVirtualStringTree_OnColumnWidthDblClickResize,
  TLazVirtualStringTree_OnColumnWidthTracking,
  TLazVirtualStringTree_OnCompareNodes,
  TLazVirtualStringTree_OnContextPopup,
  TLazVirtualStringTree_OnCreateDataObject,
  TLazVirtualStringTree_OnCreateDragManager,
  TLazVirtualStringTree_OnCreateEditor,
  TLazVirtualStringTree_OnDblClick,
  TLazVirtualStringTree_OnDragAllowed,
  TLazVirtualStringTree_OnDragOver,
  TLazVirtualStringTree_OnDragDrop,
  TLazVirtualStringTree_OnDrawHint,
  TLazVirtualStringTree_OnDrawText,
  TLazVirtualStringTree_OnEditCancelled,
  TLazVirtualStringTree_OnEdited,
  TLazVirtualStringTree_OnEditing,
  TLazVirtualStringTree_OnEndDock,
  TLazVirtualStringTree_OnEndDrag,
  TLazVirtualStringTree_OnEndOperation,
  TLazVirtualStringTree_OnExpanded,
  TLazVirtualStringTree_OnExpanding,
  TLazVirtualStringTree_OnFocusChanged,
  TLazVirtualStringTree_OnFocusChanging,
  TLazVirtualStringTree_OnFreeNode,
  TLazVirtualStringTree_OnGetCellIsEmpty,
  TLazVirtualStringTree_OnGetCursor,
  TLazVirtualStringTree_OnGetHeaderCursor,
  TLazVirtualStringTree_OnGetText,
  TLazVirtualStringTree_OnPaintText,
  TLazVirtualStringTree_OnGetHelpContext,
  TLazVirtualStringTree_OnGetHintKind,
  TLazVirtualStringTree_OnGetHintSize,
  TLazVirtualStringTree_OnGetImageIndex,
  TLazVirtualStringTree_OnGetImageIndexEx,
  TLazVirtualStringTree_OnGetImageText,
  TLazVirtualStringTree_OnGetHint,
  TLazVirtualStringTree_OnGetLineStyle,
  TLazVirtualStringTree_OnGetNodeDataSize,
  TLazVirtualStringTree_OnGetPopupMenu,
  TLazVirtualStringTree_OnGetUserClipboardFormats,
  TLazVirtualStringTree_OnHeaderClick,
  TLazVirtualStringTree_OnHeaderDblClick,
  TLazVirtualStringTree_OnHeaderDragged,
  TLazVirtualStringTree_OnHeaderDraggedOut,
  TLazVirtualStringTree_OnHeaderDragging,
  TLazVirtualStringTree_OnHeaderDraw,
  TLazVirtualStringTree_OnHeaderDrawQueryElements,
  TLazVirtualStringTree_OnHeaderHeightDblClickResize,
  TLazVirtualStringTree_OnHeaderHeightTracking,
  TLazVirtualStringTree_OnHeaderMouseDown,
  TLazVirtualStringTree_OnHeaderMouseMove,
  TLazVirtualStringTree_OnHeaderMouseUp,
  TLazVirtualStringTree_OnHotChange,
  TLazVirtualStringTree_OnIncrementalSearch,
  TLazVirtualStringTree_OnInitChildren,
  TLazVirtualStringTree_OnInitNode,
  TLazVirtualStringTree_OnKeyAction,
  TLazVirtualStringTree_OnLoadNode,
  TLazVirtualStringTree_OnLoadTree,
  TLazVirtualStringTree_OnMeasureItem,
  TLazVirtualStringTree_OnMeasureTextWidth,
  TLazVirtualStringTree_OnMeasureTextHeight,
  TLazVirtualStringTree_OnMouseDown,
  TLazVirtualStringTree_OnMouseMove,
  TLazVirtualStringTree_OnMouseUp,
  TLazVirtualStringTree_OnMouseWheel,
  TLazVirtualStringTree_OnMouseEnter,
  TLazVirtualStringTree_OnMouseLeave,
  TLazVirtualStringTree_OnNewText,
  TLazVirtualStringTree_OnNodeClick,
  TLazVirtualStringTree_OnNodeCopied,
  TLazVirtualStringTree_OnNodeCopying,
  TLazVirtualStringTree_OnNodeDblClick,
  TLazVirtualStringTree_OnNodeExport,
  TLazVirtualStringTree_OnNodeHeightDblClickResize,
  TLazVirtualStringTree_OnNodeHeightTracking,
  TLazVirtualStringTree_OnNodeMoved,
  TLazVirtualStringTree_OnNodeMoving,
  TLazVirtualStringTree_OnPaintBackground,
  TLazVirtualStringTree_OnRemoveFromSelection,
  TLazVirtualStringTree_OnRenderOLEData,
  TLazVirtualStringTree_OnResetNode,
  TLazVirtualStringTree_OnSaveNode,
  TLazVirtualStringTree_OnSaveTree,
  TLazVirtualStringTree_OnScroll,
  TLazVirtualStringTree_OnShortenString,
  TLazVirtualStringTree_OnShowScrollBar,
  TLazVirtualStringTree_OnStartDock,
  TLazVirtualStringTree_OnStartDrag,
  TLazVirtualStringTree_OnStartOperation,
  TLazVirtualStringTree_OnStateChange,
  TLazVirtualStringTree_OnStructureChange,
  TLazVirtualStringTree_OnUpdating,
  TLazVirtualStringTree_TClass;