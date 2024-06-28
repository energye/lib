
//constructor
function LazVirtualDrawTree_Create(AOwner: TComponent): TLazVirtualDrawTree; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TLazVirtualDrawTree.Create(AOwner);
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_LastDragEffect(AObj: TLazVirtualDrawTree): LongWord; extdecl;
begin
  {$define handleExceptionFuncName :='LastDragEffect'}
  handleExceptionBegin
  Result := AObj.LastDragEffect;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_Alignment(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionFuncName :='Alignment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_AnimationDuration(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='AnimationDuration'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AnimationDuration := AValue;
  end else
    Result := AObj.AnimationDuration;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_AutoExpandDelay(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='AutoExpandDelay'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoExpandDelay := AValue;
  end else
    Result := AObj.AutoExpandDelay;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_AutoScrollDelay(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='AutoScrollDelay'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoScrollDelay := AValue;
  end else
    Result := AObj.AutoScrollDelay;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_AutoScrollInterval(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TAutoScrollInterval): TAutoScrollInterval; extdecl;
begin
  {$define handleExceptionFuncName :='AutoScrollInterval'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoScrollInterval := AValue;
  end else
    Result := AObj.AutoScrollInterval;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_Background(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TPicture): TPicture; extdecl;
begin
  {$define handleExceptionFuncName :='Background'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Background := AValue;
  end else
    Result := AObj.Background;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_BackgroundOffsetX(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='BackgroundOffsetX'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BackgroundOffsetX := AValue;
  end else
    Result := AObj.BackgroundOffsetX;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_BackgroundOffsetY(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='BackgroundOffsetY'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BackgroundOffsetY := AValue;
  end else
    Result := AObj.BackgroundOffsetY;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_BottomSpace(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='BottomSpace'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BottomSpace := AValue;
  end else
    Result := AObj.BottomSpace;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_ButtonFillMode(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTButtonFillMode): TVTButtonFillMode; extdecl;
begin
  {$define handleExceptionFuncName :='ButtonFillMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonFillMode := AValue;
  end else
    Result := AObj.ButtonFillMode;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_ButtonStyle(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTButtonStyle): TVTButtonStyle; extdecl;
begin
  {$define handleExceptionFuncName :='ButtonStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ButtonStyle := AValue;
  end else
    Result := AObj.ButtonStyle;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_ChangeDelay(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='ChangeDelay'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ChangeDelay := AValue;
  end else
    Result := AObj.ChangeDelay;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_CheckImageKind(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TCheckImageKind): TCheckImageKind; extdecl;
begin
  {$define handleExceptionFuncName :='CheckImageKind'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CheckImageKind := AValue;
  end else
    Result := AObj.CheckImageKind;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_ClipboardFormats(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TClipboardFormats): TClipboardFormats; extdecl;
begin
  {$define handleExceptionFuncName :='ClipboardFormats'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ClipboardFormats := AValue;
  end else
    Result := AObj.ClipboardFormats;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_Colors(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTColors): TVTColors; extdecl;
begin
  {$define handleExceptionFuncName :='Colors'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Colors := AValue;
  end else
    Result := AObj.Colors;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_CustomCheckImages(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionFuncName :='CustomCheckImages'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CustomCheckImages := AValue;
  end else
    Result := AObj.CustomCheckImages;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_DefaultNodeHeight(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultNodeHeight'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultNodeHeight := AValue;
  end else
    Result := AObj.DefaultNodeHeight;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_DefaultPasteMode(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTNodeAttachMode): TVTNodeAttachMode; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultPasteMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultPasteMode := AValue;
  end else
    Result := AObj.DefaultPasteMode;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_DragCursor(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TCursor): TCursor; extdecl;
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
function LazVirtualDrawTree_DragHeight(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='DragHeight'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragHeight := AValue;
  end else
    Result := AObj.DragHeight;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_DragKind(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TDragKind): TDragKind; extdecl;
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
function LazVirtualDrawTree_DragImageKind(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTDragImageKind): TVTDragImageKind; extdecl;
begin
  {$define handleExceptionFuncName :='DragImageKind'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragImageKind := AValue;
  end else
    Result := AObj.DragImageKind;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_DragMode(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TDragMode): TDragMode; extdecl;
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
function LazVirtualDrawTree_DragOperations(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TDragOperations): TDragOperations; extdecl;
begin
  {$define handleExceptionFuncName :='DragOperations'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragOperations := AValue;
  end else
    Result := AObj.DragOperations;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_DragType(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTDragType): TVTDragType; extdecl;
begin
  {$define handleExceptionFuncName :='DragType'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragType := AValue;
  end else
    Result := AObj.DragType;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_DragWidth(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='DragWidth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DragWidth := AValue;
  end else
    Result := AObj.DragWidth;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_DrawSelectionMode(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTDrawSelectionMode): TVTDrawSelectionMode; extdecl;
begin
  {$define handleExceptionFuncName :='DrawSelectionMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DrawSelectionMode := AValue;
  end else
    Result := AObj.DrawSelectionMode;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_EditDelay(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='EditDelay'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EditDelay := AValue;
  end else
    Result := AObj.EditDelay;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_Header(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTHeader): TVTHeader; extdecl;
begin
  {$define handleExceptionFuncName :='Header'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Header := AValue;
  end else
    Result := AObj.Header;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_HintMode(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTHintMode): TVTHintMode; extdecl;
begin
  {$define handleExceptionFuncName :='HintMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HintMode := AValue;
  end else
    Result := AObj.HintMode;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_HotCursor(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionFuncName :='HotCursor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HotCursor := AValue;
  end else
    Result := AObj.HotCursor;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_Images(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionFuncName :='Images'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Images := AValue;
  end else
    Result := AObj.Images;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_IncrementalSearch(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTIncrementalSearch): TVTIncrementalSearch; extdecl;
begin
  {$define handleExceptionFuncName :='IncrementalSearch'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IncrementalSearch := AValue;
  end else
    Result := AObj.IncrementalSearch;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_IncrementalSearchDirection(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTSearchDirection): TVTSearchDirection; extdecl;
begin
  {$define handleExceptionFuncName :='IncrementalSearchDirection'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IncrementalSearchDirection := AValue;
  end else
    Result := AObj.IncrementalSearchDirection;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_IncrementalSearchStart(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTSearchStart): TVTSearchStart; extdecl;
begin
  {$define handleExceptionFuncName :='IncrementalSearchStart'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IncrementalSearchStart := AValue;
  end else
    Result := AObj.IncrementalSearchStart;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_IncrementalSearchTimeout(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='IncrementalSearchTimeout'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IncrementalSearchTimeout := AValue;
  end else
    Result := AObj.IncrementalSearchTimeout;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_Indent(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='Indent'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Indent := AValue;
  end else
    Result := AObj.Indent;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_LineMode(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTLineMode): TVTLineMode; extdecl;
begin
  {$define handleExceptionFuncName :='LineMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LineMode := AValue;
  end else
    Result := AObj.LineMode;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_LineStyle(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTLineStyle): TVTLineStyle; extdecl;
begin
  {$define handleExceptionFuncName :='LineStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LineStyle := AValue;
  end else
    Result := AObj.LineStyle;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_Margin(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Margin'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Margin := AValue;
  end else
    Result := AObj.Margin;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_NodeAlignment(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVTNodeAlignment): TVTNodeAlignment; extdecl;
begin
  {$define handleExceptionFuncName :='NodeAlignment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NodeAlignment := AValue;
  end else
    Result := AObj.NodeAlignment;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_NodeDataSize(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='NodeDataSize'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NodeDataSize := AValue;
  end else
    Result := AObj.NodeDataSize;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_OperationCanceled(AObj: TLazVirtualDrawTree): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='OperationCanceled'}
  handleExceptionBegin
  Result := AObj.OperationCanceled;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_ParentColor(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentColor := AValue;
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_ParentFont(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentFont'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentFont := AValue;
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_ParentShowHint(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: LongBool): LongBool; extdecl;
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
function LazVirtualDrawTree_RootNodeCount(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='RootNodeCount'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RootNodeCount := AValue;
  end else
    Result := AObj.RootNodeCount;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_ScrollBarOptions(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TScrollBarOptions): TScrollBarOptions; extdecl;
begin
  {$define handleExceptionFuncName :='ScrollBarOptions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScrollBarOptions := AValue;
  end else
    Result := AObj.ScrollBarOptions;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_SelectionBlendFactor(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionFuncName :='SelectionBlendFactor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectionBlendFactor := AValue;
  end else
    Result := AObj.SelectionBlendFactor;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_SelectionCurveRadius(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: uint32): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='SelectionCurveRadius'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SelectionCurveRadius := AValue;
  end else
    Result := AObj.SelectionCurveRadius;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_StateImages(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionFuncName :='StateImages'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StateImages := AValue;
  end else
    Result := AObj.StateImages;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_TextMargin(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='TextMargin'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TextMargin := AValue;
  end else
    Result := AObj.TextMargin;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_TreeOptions(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: TVirtualTreeOptions): TVirtualTreeOptions; extdecl;
begin
  {$define handleExceptionFuncName :='TreeOptions'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TreeOptions := AValue;
  end else
    Result := AObj.TreeOptions;
  handleExceptionEnd
end;

//property
function LazVirtualDrawTree_WantTabs(AIsSet: LongBool; AObj: TLazVirtualDrawTree; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='WantTabs'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WantTabs := AValue;
  end else
    Result := AObj.WantTabs;
  handleExceptionEnd
end;

//function
function LazVirtualDrawTree_Class(): TClass; extdecl;
begin
  Result := TLazVirtualDrawTree;
end;

//property event
procedure LazVirtualDrawTree_SetOnAddToSelection(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAddToSelectionEvent}
  {$DEFINE EventName := OnAddToSelection}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnAdvancedHeaderDraw(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAdvancedHeaderPaintEvent}
  {$DEFINE EventName := OnAdvancedHeaderDraw}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnAfterAutoFitColumn(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterAutoFitColumnEvent}
  {$DEFINE EventName := OnAfterAutoFitColumn}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnAfterAutoFitColumns(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterAutoFitColumnsEvent}
  {$DEFINE EventName := OnAfterAutoFitColumns}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnAfterCellPaint(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterCellPaintEvent}
  {$DEFINE EventName := OnAfterCellPaint}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnAfterColumnExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnExportEvent}
  {$DEFINE EventName := OnAfterColumnExport}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnAfterColumnWidthTracking(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterColumnWidthTrackingEvent}
  {$DEFINE EventName := OnAfterColumnWidthTracking}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnAfterGetMaxColumnWidth(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterGetMaxColumnWidthEvent}
  {$DEFINE EventName := OnAfterGetMaxColumnWidth}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnAfterHeaderExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTTreeExportEvent}
  {$DEFINE EventName := OnAfterHeaderExport}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnAfterHeaderHeightTracking(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterHeaderHeightTrackingEvent}
  {$DEFINE EventName := OnAfterHeaderHeightTracking}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnAfterItemErase(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterItemEraseEvent}
  {$DEFINE EventName := OnAfterItemErase}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnAfterItemPaint(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTAfterItemPaintEvent}
  {$DEFINE EventName := OnAfterItemPaint}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnAfterNodeExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeExportEvent}
  {$DEFINE EventName := OnAfterNodeExport}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnAfterPaint(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTPaintEvent}
  {$DEFINE EventName := OnAfterPaint}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnAfterTreeExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTTreeExportEvent}
  {$DEFINE EventName := OnAfterTreeExport}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnBeforeAutoFitColumn(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeAutoFitColumnEvent}
  {$DEFINE EventName := OnBeforeAutoFitColumn}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnBeforeAutoFitColumns(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeAutoFitColumnsEvent}
  {$DEFINE EventName := OnBeforeAutoFitColumns}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnBeforeCellPaint(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeCellPaintEvent}
  {$DEFINE EventName := OnBeforeCellPaint}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnBeforeColumnExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnExportEvent}
  {$DEFINE EventName := OnBeforeColumnExport}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnBeforeColumnWidthTracking(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeColumnWidthTrackingEvent}
  {$DEFINE EventName := OnBeforeColumnWidthTracking}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnBeforeDrawTreeLine(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeDrawLineImageEvent}
  {$DEFINE EventName := OnBeforeDrawTreeLine}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnBeforeGetMaxColumnWidth(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeGetMaxColumnWidthEvent}
  {$DEFINE EventName := OnBeforeGetMaxColumnWidth}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnBeforeHeaderExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTTreeExportEvent}
  {$DEFINE EventName := OnBeforeHeaderExport}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnBeforeHeaderHeightTracking(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeHeaderHeightTrackingEvent}
  {$DEFINE EventName := OnBeforeHeaderHeightTracking}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnBeforeItemErase(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeItemEraseEvent}
  {$DEFINE EventName := OnBeforeItemErase}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnBeforeItemPaint(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeforeItemPaintEvent}
  {$DEFINE EventName := OnBeforeItemPaint}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnBeforeNodeExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeExportEvent}
  {$DEFINE EventName := OnBeforeNodeExport}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnBeforePaint(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTPaintEvent}
  {$DEFINE EventName := OnBeforePaint}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnBeforeTreeExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTTreeExportEvent}
  {$DEFINE EventName := OnBeforeTreeExport}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnCanSplitterResizeColumn(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCanSplitterResizeColumnEvent}
  {$DEFINE EventName := OnCanSplitterResizeColumn}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnCanSplitterResizeHeader(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCanSplitterResizeHeaderEvent}
  {$DEFINE EventName := OnCanSplitterResizeHeader}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnCanSplitterResizeNode(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCanSplitterResizeNodeEvent}
  {$DEFINE EventName := OnCanSplitterResizeNode}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnChange(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnChecked(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnChecked}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnChecking(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCheckChangingEvent}
  {$DEFINE EventName := OnChecking}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnCollapsed(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnCollapsed}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnCollapsing(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangingEvent}
  {$DEFINE EventName := OnCollapsing}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnColumnClick(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnClickEvent}
  {$DEFINE EventName := OnColumnClick}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnColumnDblClick(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnDblClickEvent}
  {$DEFINE EventName := OnColumnDblClick}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnColumnExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnExportEvent}
  {$DEFINE EventName := OnColumnExport}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnColumnResize(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderNotifyEvent}
  {$DEFINE EventName := OnColumnResize}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnColumnWidthDblClickResize(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnWidthDblClickResizeEvent}
  {$DEFINE EventName := OnColumnWidthDblClickResize}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnColumnWidthTracking(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTColumnWidthTrackingEvent}
  {$DEFINE EventName := OnColumnWidthTracking}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnCompareNodes(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCompareEvent}
  {$DEFINE EventName := OnCompareNodes}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnContextPopup(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnCreateDataObject(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCreateDataObjectEvent}
  {$DEFINE EventName := OnCreateDataObject}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnCreateDragManager(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCreateDragManagerEvent}
  {$DEFINE EventName := OnCreateDragManager}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnCreateEditor(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTCreateEditorEvent}
  {$DEFINE EventName := OnCreateEditor}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnDblClick(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnDragAllowed(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDragAllowedEvent}
  {$DEFINE EventName := OnDragAllowed}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnDragOver(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnDragDrop(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnDrawHint(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDrawHintEvent}
  {$DEFINE EventName := OnDrawHint}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnDrawNode(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTDrawNodeEvent}
  {$DEFINE EventName := OnDrawNode}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnEdited(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTEditChangeEvent}
  {$DEFINE EventName := OnEdited}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnEditing(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTEditChangingEvent}
  {$DEFINE EventName := OnEditing}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnEndDock(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnEndDrag(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnEndOperation(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTOperationEvent}
  {$DEFINE EventName := OnEndOperation}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnExpanded(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnExpanded}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnExpanding(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangingEvent}
  {$DEFINE EventName := OnExpanding}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnFocusChanged(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTFocusChangeEvent}
  {$DEFINE EventName := OnFocusChanged}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnFocusChanging(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTFocusChangingEvent}
  {$DEFINE EventName := OnFocusChanging}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnFreeNode(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTFreeNodeEvent}
  {$DEFINE EventName := OnFreeNode}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnGetCellIsEmpty(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetCellIsEmptyEvent}
  {$DEFINE EventName := OnGetCellIsEmpty}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnGetCursor(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetCursorEvent}
  {$DEFINE EventName := OnGetCursor}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnGetHeaderCursor(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetHeaderCursorEvent}
  {$DEFINE EventName := OnGetHeaderCursor}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnGetHelpContext(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHelpContextEvent}
  {$DEFINE EventName := OnGetHelpContext}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnGetHintKind(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHintKindEvent}
  {$DEFINE EventName := OnGetHintKind}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnGetHintSize(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetHintSizeEvent}
  {$DEFINE EventName := OnGetHintSize}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnGetImageIndex(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetImageEvent}
  {$DEFINE EventName := OnGetImageIndex}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnGetImageIndexEx(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetImageExEvent}
  {$DEFINE EventName := OnGetImageIndexEx}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnGetLineStyle(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetLineStyleEvent}
  {$DEFINE EventName := OnGetLineStyle}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnGetNodeDataSize(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetNodeDataSizeEvent}
  {$DEFINE EventName := OnGetNodeDataSize}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnGetNodeWidth(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetNodeWidthEvent}
  {$DEFINE EventName := OnGetNodeWidth}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnGetPopupMenu(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTPopupEvent}
  {$DEFINE EventName := OnGetPopupMenu}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnHeaderClick(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderClickEvent}
  {$DEFINE EventName := OnHeaderClick}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnHeaderDblClick(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderClickEvent}
  {$DEFINE EventName := OnHeaderDblClick}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnHeaderDragged(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderDraggedEvent}
  {$DEFINE EventName := OnHeaderDragged}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnHeaderDraggedOut(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderDraggedOutEvent}
  {$DEFINE EventName := OnHeaderDraggedOut}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnHeaderDragging(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderDraggingEvent}
  {$DEFINE EventName := OnHeaderDragging}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnHeaderDraw(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderPaintEvent}
  {$DEFINE EventName := OnHeaderDraw}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnHeaderDrawQueryElements(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderPaintQueryElementsEvent}
  {$DEFINE EventName := OnHeaderDrawQueryElements}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnHeaderHeightTracking(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderHeightTrackingEvent}
  {$DEFINE EventName := OnHeaderHeightTracking}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnHeaderHeightDblClickResize(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderHeightDblClickResizeEvent}
  {$DEFINE EventName := OnHeaderHeightDblClickResize}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnHeaderMouseDown(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderMouseEvent}
  {$DEFINE EventName := OnHeaderMouseDown}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnHeaderMouseMove(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderMouseMoveEvent}
  {$DEFINE EventName := OnHeaderMouseMove}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnHeaderMouseUp(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHeaderMouseEvent}
  {$DEFINE EventName := OnHeaderMouseUp}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnHotChange(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTHotNodeChangeEvent}
  {$DEFINE EventName := OnHotChange}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnIncrementalSearch(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTIncrementalSearchEvent}
  {$DEFINE EventName := OnIncrementalSearch}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnInitChildren(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTInitChildrenEvent}
  {$DEFINE EventName := OnInitChildren}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnInitNode(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTInitNodeEvent}
  {$DEFINE EventName := OnInitNode}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnKeyAction(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTKeyActionEvent}
  {$DEFINE EventName := OnKeyAction}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnLoadNode(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSaveNodeEvent}
  {$DEFINE EventName := OnLoadNode}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnLoadTree(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSaveTreeEvent}
  {$DEFINE EventName := OnLoadTree}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnMeasureItem(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTMeasureItemEvent}
  {$DEFINE EventName := OnMeasureItem}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnMouseDown(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnMouseMove(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnMouseUp(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnMouseWheel(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnNodeClick(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeClickEvent}
  {$DEFINE EventName := OnNodeClick}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnNodeCopied(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeCopiedEvent}
  {$DEFINE EventName := OnNodeCopied}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnNodeCopying(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeCopyingEvent}
  {$DEFINE EventName := OnNodeCopying}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnNodeDblClick(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeClickEvent}
  {$DEFINE EventName := OnNodeDblClick}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnNodeExport(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeExportEvent}
  {$DEFINE EventName := OnNodeExport}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnNodeHeightTracking(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeHeightTrackingEvent}
  {$DEFINE EventName := OnNodeHeightTracking}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnNodeHeightDblClickResize(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeHeightDblClickResizeEvent}
  {$DEFINE EventName := OnNodeHeightDblClickResize}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnNodeMoved(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeMovedEvent}
  {$DEFINE EventName := OnNodeMoved}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnNodeMoving(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTNodeMovingEvent}
  {$DEFINE EventName := OnNodeMoving}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnPaintBackground(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBackgroundPaintEvent}
  {$DEFINE EventName := OnPaintBackground}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnRemoveFromSelection(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTRemoveFromSelectionEvent}
  {$DEFINE EventName := OnRemoveFromSelection}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnResetNode(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTChangeEvent}
  {$DEFINE EventName := OnResetNode}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnSaveNode(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSaveNodeEvent}
  {$DEFINE EventName := OnSaveNode}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnSaveTree(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSaveTreeEvent}
  {$DEFINE EventName := OnSaveTree}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnScroll(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTScrollEvent}
  {$DEFINE EventName := OnScroll}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnShowScrollBar(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTScrollBarShowEvent}
  {$DEFINE EventName := OnShowScrollBar}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnStartDock(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnStartDrag(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnStartOperation(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTOperationEvent}
  {$DEFINE EventName := OnStartOperation}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnStateChange(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTStateChangeEvent}
  {$DEFINE EventName := OnStateChange}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnStructureChange(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTStructureChangeEvent}
  {$DEFINE EventName := OnStructureChange}
  EventMethodCode
end;

//property event
procedure LazVirtualDrawTree_SetOnUpdating(AObj: TLazVirtualDrawTree; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTUpdatingEvent}
  {$DEFINE EventName := OnUpdating}
  EventMethodCode
end;


exports
  LazVirtualDrawTree_Create,
  LazVirtualDrawTree_LastDragEffect,
  LazVirtualDrawTree_Alignment,
  LazVirtualDrawTree_AnimationDuration,
  LazVirtualDrawTree_AutoExpandDelay,
  LazVirtualDrawTree_AutoScrollDelay,
  LazVirtualDrawTree_AutoScrollInterval,
  LazVirtualDrawTree_Background,
  LazVirtualDrawTree_BackgroundOffsetX,
  LazVirtualDrawTree_BackgroundOffsetY,
  LazVirtualDrawTree_BottomSpace,
  LazVirtualDrawTree_ButtonFillMode,
  LazVirtualDrawTree_ButtonStyle,
  LazVirtualDrawTree_ChangeDelay,
  LazVirtualDrawTree_CheckImageKind,
  LazVirtualDrawTree_ClipboardFormats,
  LazVirtualDrawTree_Colors,
  LazVirtualDrawTree_CustomCheckImages,
  LazVirtualDrawTree_DefaultNodeHeight,
  LazVirtualDrawTree_DefaultPasteMode,
  LazVirtualDrawTree_DragCursor,
  LazVirtualDrawTree_DragHeight,
  LazVirtualDrawTree_DragKind,
  LazVirtualDrawTree_DragImageKind,
  LazVirtualDrawTree_DragMode,
  LazVirtualDrawTree_DragOperations,
  LazVirtualDrawTree_DragType,
  LazVirtualDrawTree_DragWidth,
  LazVirtualDrawTree_DrawSelectionMode,
  LazVirtualDrawTree_EditDelay,
  LazVirtualDrawTree_Header,
  LazVirtualDrawTree_HintMode,
  LazVirtualDrawTree_HotCursor,
  LazVirtualDrawTree_Images,
  LazVirtualDrawTree_IncrementalSearch,
  LazVirtualDrawTree_IncrementalSearchDirection,
  LazVirtualDrawTree_IncrementalSearchStart,
  LazVirtualDrawTree_IncrementalSearchTimeout,
  LazVirtualDrawTree_Indent,
  LazVirtualDrawTree_LineMode,
  LazVirtualDrawTree_LineStyle,
  LazVirtualDrawTree_Margin,
  LazVirtualDrawTree_NodeAlignment,
  LazVirtualDrawTree_NodeDataSize,
  LazVirtualDrawTree_OperationCanceled,
  LazVirtualDrawTree_ParentColor,
  LazVirtualDrawTree_ParentFont,
  LazVirtualDrawTree_ParentShowHint,
  LazVirtualDrawTree_RootNodeCount,
  LazVirtualDrawTree_ScrollBarOptions,
  LazVirtualDrawTree_SelectionBlendFactor,
  LazVirtualDrawTree_SelectionCurveRadius,
  LazVirtualDrawTree_StateImages,
  LazVirtualDrawTree_TextMargin,
  LazVirtualDrawTree_TreeOptions,
  LazVirtualDrawTree_WantTabs,
  LazVirtualDrawTree_Class,
  LazVirtualDrawTree_SetOnAddToSelection,
  LazVirtualDrawTree_SetOnAdvancedHeaderDraw,
  LazVirtualDrawTree_SetOnAfterAutoFitColumn,
  LazVirtualDrawTree_SetOnAfterAutoFitColumns,
  LazVirtualDrawTree_SetOnAfterCellPaint,
  LazVirtualDrawTree_SetOnAfterColumnExport,
  LazVirtualDrawTree_SetOnAfterColumnWidthTracking,
  LazVirtualDrawTree_SetOnAfterGetMaxColumnWidth,
  LazVirtualDrawTree_SetOnAfterHeaderExport,
  LazVirtualDrawTree_SetOnAfterHeaderHeightTracking,
  LazVirtualDrawTree_SetOnAfterItemErase,
  LazVirtualDrawTree_SetOnAfterItemPaint,
  LazVirtualDrawTree_SetOnAfterNodeExport,
  LazVirtualDrawTree_SetOnAfterPaint,
  LazVirtualDrawTree_SetOnAfterTreeExport,
  LazVirtualDrawTree_SetOnBeforeAutoFitColumn,
  LazVirtualDrawTree_SetOnBeforeAutoFitColumns,
  LazVirtualDrawTree_SetOnBeforeCellPaint,
  LazVirtualDrawTree_SetOnBeforeColumnExport,
  LazVirtualDrawTree_SetOnBeforeColumnWidthTracking,
  LazVirtualDrawTree_SetOnBeforeDrawTreeLine,
  LazVirtualDrawTree_SetOnBeforeGetMaxColumnWidth,
  LazVirtualDrawTree_SetOnBeforeHeaderExport,
  LazVirtualDrawTree_SetOnBeforeHeaderHeightTracking,
  LazVirtualDrawTree_SetOnBeforeItemErase,
  LazVirtualDrawTree_SetOnBeforeItemPaint,
  LazVirtualDrawTree_SetOnBeforeNodeExport,
  LazVirtualDrawTree_SetOnBeforePaint,
  LazVirtualDrawTree_SetOnBeforeTreeExport,
  LazVirtualDrawTree_SetOnCanSplitterResizeColumn,
  LazVirtualDrawTree_SetOnCanSplitterResizeHeader,
  LazVirtualDrawTree_SetOnCanSplitterResizeNode,
  LazVirtualDrawTree_SetOnChange,
  LazVirtualDrawTree_SetOnChecked,
  LazVirtualDrawTree_SetOnChecking,
  LazVirtualDrawTree_SetOnCollapsed,
  LazVirtualDrawTree_SetOnCollapsing,
  LazVirtualDrawTree_SetOnColumnClick,
  LazVirtualDrawTree_SetOnColumnDblClick,
  LazVirtualDrawTree_SetOnColumnExport,
  LazVirtualDrawTree_SetOnColumnResize,
  LazVirtualDrawTree_SetOnColumnWidthDblClickResize,
  LazVirtualDrawTree_SetOnColumnWidthTracking,
  LazVirtualDrawTree_SetOnCompareNodes,
  LazVirtualDrawTree_SetOnContextPopup,
  LazVirtualDrawTree_SetOnCreateDataObject,
  LazVirtualDrawTree_SetOnCreateDragManager,
  LazVirtualDrawTree_SetOnCreateEditor,
  LazVirtualDrawTree_SetOnDblClick,
  LazVirtualDrawTree_SetOnDragAllowed,
  LazVirtualDrawTree_SetOnDragOver,
  LazVirtualDrawTree_SetOnDragDrop,
  LazVirtualDrawTree_SetOnDrawHint,
  LazVirtualDrawTree_SetOnDrawNode,
  LazVirtualDrawTree_SetOnEdited,
  LazVirtualDrawTree_SetOnEditing,
  LazVirtualDrawTree_SetOnEndDock,
  LazVirtualDrawTree_SetOnEndDrag,
  LazVirtualDrawTree_SetOnEndOperation,
  LazVirtualDrawTree_SetOnExpanded,
  LazVirtualDrawTree_SetOnExpanding,
  LazVirtualDrawTree_SetOnFocusChanged,
  LazVirtualDrawTree_SetOnFocusChanging,
  LazVirtualDrawTree_SetOnFreeNode,
  LazVirtualDrawTree_SetOnGetCellIsEmpty,
  LazVirtualDrawTree_SetOnGetCursor,
  LazVirtualDrawTree_SetOnGetHeaderCursor,
  LazVirtualDrawTree_SetOnGetHelpContext,
  LazVirtualDrawTree_SetOnGetHintKind,
  LazVirtualDrawTree_SetOnGetHintSize,
  LazVirtualDrawTree_SetOnGetImageIndex,
  LazVirtualDrawTree_SetOnGetImageIndexEx,
  LazVirtualDrawTree_SetOnGetLineStyle,
  LazVirtualDrawTree_SetOnGetNodeDataSize,
  LazVirtualDrawTree_SetOnGetNodeWidth,
  LazVirtualDrawTree_SetOnGetPopupMenu,
  LazVirtualDrawTree_SetOnHeaderClick,
  LazVirtualDrawTree_SetOnHeaderDblClick,
  LazVirtualDrawTree_SetOnHeaderDragged,
  LazVirtualDrawTree_SetOnHeaderDraggedOut,
  LazVirtualDrawTree_SetOnHeaderDragging,
  LazVirtualDrawTree_SetOnHeaderDraw,
  LazVirtualDrawTree_SetOnHeaderDrawQueryElements,
  LazVirtualDrawTree_SetOnHeaderHeightTracking,
  LazVirtualDrawTree_SetOnHeaderHeightDblClickResize,
  LazVirtualDrawTree_SetOnHeaderMouseDown,
  LazVirtualDrawTree_SetOnHeaderMouseMove,
  LazVirtualDrawTree_SetOnHeaderMouseUp,
  LazVirtualDrawTree_SetOnHotChange,
  LazVirtualDrawTree_SetOnIncrementalSearch,
  LazVirtualDrawTree_SetOnInitChildren,
  LazVirtualDrawTree_SetOnInitNode,
  LazVirtualDrawTree_SetOnKeyAction,
  LazVirtualDrawTree_SetOnLoadNode,
  LazVirtualDrawTree_SetOnLoadTree,
  LazVirtualDrawTree_SetOnMeasureItem,
  LazVirtualDrawTree_SetOnMouseDown,
  LazVirtualDrawTree_SetOnMouseMove,
  LazVirtualDrawTree_SetOnMouseUp,
  LazVirtualDrawTree_SetOnMouseWheel,
  LazVirtualDrawTree_SetOnNodeClick,
  LazVirtualDrawTree_SetOnNodeCopied,
  LazVirtualDrawTree_SetOnNodeCopying,
  LazVirtualDrawTree_SetOnNodeDblClick,
  LazVirtualDrawTree_SetOnNodeExport,
  LazVirtualDrawTree_SetOnNodeHeightTracking,
  LazVirtualDrawTree_SetOnNodeHeightDblClickResize,
  LazVirtualDrawTree_SetOnNodeMoved,
  LazVirtualDrawTree_SetOnNodeMoving,
  LazVirtualDrawTree_SetOnPaintBackground,
  LazVirtualDrawTree_SetOnRemoveFromSelection,
  LazVirtualDrawTree_SetOnResetNode,
  LazVirtualDrawTree_SetOnSaveNode,
  LazVirtualDrawTree_SetOnSaveTree,
  LazVirtualDrawTree_SetOnScroll,
  LazVirtualDrawTree_SetOnShowScrollBar,
  LazVirtualDrawTree_SetOnStartDock,
  LazVirtualDrawTree_SetOnStartDrag,
  LazVirtualDrawTree_SetOnStartOperation,
  LazVirtualDrawTree_SetOnStateChange,
  LazVirtualDrawTree_SetOnStructureChange,
  LazVirtualDrawTree_SetOnUpdating;