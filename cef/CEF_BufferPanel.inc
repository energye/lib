
//constructor
function BufferPanel_Create(aOwner: TComponent): TBufferPanel; extdecl;
begin
  handleExceptionBegin
  Result := TBufferPanel.Create(aOwner);
  handleExceptionEnd
end;

//property
function BufferPanel_ScanlineSize(AObj: TBufferPanel): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ScanlineSize;
  handleExceptionEnd
end;

//property
function BufferPanel_BufferWidth(AObj: TBufferPanel): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BufferWidth;
  handleExceptionEnd
end;

//property
function BufferPanel_BufferHeight(AObj: TBufferPanel): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BufferHeight;
  handleExceptionEnd
end;

//property
function BufferPanel_BufferBits(AObj: TBufferPanel): pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BufferBits;
  handleExceptionEnd
end;

//property
procedure BufferPanel_ScreenScale(AObj: TBufferPanel; var Result: single); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ScreenScale;
  handleExceptionEnd
end;

//property
procedure BufferPanel_ForcedDeviceScaleFactor(AIsSet: LongBool; AObj: TBufferPanel; var AValue: single; var Result: single); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ForcedDeviceScaleFactor := AValue;
  end else
    Result := AObj.ForcedDeviceScaleFactor;
  handleExceptionEnd
end;

//property
function BufferPanel_MustInitBuffer(AIsSet: LongBool; AObj: TBufferPanel; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MustInitBuffer := AValue;
  end else
    Result := AObj.MustInitBuffer;
  handleExceptionEnd
end;

//property
function BufferPanel_Buffer(AObj: TBufferPanel): TBitmap; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Buffer;
  handleExceptionEnd
end;

//property
procedure BufferPanel_OrigBuffer(AObj: TBufferPanel; var Result: TCEFBitmapBitBuffer); extdecl;
begin
  handleExceptionBegin
  Result := AObj.OrigBuffer;
  handleExceptionEnd
end;

//property
function BufferPanel_OrigBufferWidth(AObj: TBufferPanel): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OrigBufferWidth;
  handleExceptionEnd
end;

//property
function BufferPanel_OrigBufferHeight(AObj: TBufferPanel): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OrigBufferHeight;
  handleExceptionEnd
end;

//property
procedure BufferPanel_OrigPopupBuffer(AObj: TBufferPanel; var Result: TCEFBitmapBitBuffer); extdecl;
begin
  handleExceptionBegin
  Result := AObj.OrigPopupBuffer;
  handleExceptionEnd
end;

//property
function BufferPanel_OrigPopupBufferWidth(AObj: TBufferPanel): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OrigPopupBufferWidth;
  handleExceptionEnd
end;

//property
function BufferPanel_OrigPopupBufferHeight(AObj: TBufferPanel): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OrigPopupBufferHeight;
  handleExceptionEnd
end;

//property
function BufferPanel_OrigPopupBufferBits(AObj: TBufferPanel): pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OrigPopupBufferBits;
  handleExceptionEnd
end;

//property
function BufferPanel_OrigPopupScanlineSize(AObj: TBufferPanel): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.OrigPopupScanlineSize;
  handleExceptionEnd
end;

//property
function BufferPanel_ParentFormHandle(AObj: TBufferPanel): TCefWindowHandle; extdecl;
begin
{$IFDEF MSWINDOWS}
  handleExceptionBegin
  Result := AObj.ParentFormHandle;
  handleExceptionEnd
{$ENDIF}
end;

//property
procedure BufferPanel_ParentForm(AObj: TBufferPanel; var Result: TCustomForm); extdecl;
begin
{$IFDEF MSWINDOWS}
  handleExceptionBegin
  Result := AObj.ParentForm;
  handleExceptionEnd
{$ENDIF}
end;

//property
function BufferPanel_Transparent(AIsSet: LongBool; AObj: TBufferPanel; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Transparent := AValue;
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

//property
function BufferPanel_CopyOriginalBuffer(AIsSet: LongBool; AObj: TBufferPanel; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CopyOriginalBuffer := AValue;
  end else
    Result := AObj.CopyOriginalBuffer;
  handleExceptionEnd
end;

//property
procedure BufferPanel_BevelEdges(AObj: TBufferPanel); extdecl;
begin
  handleExceptionBegin
  handleExceptionEnd
end;

//property
procedure BufferPanel_BevelKind(AObj: TBufferPanel); extdecl;
begin
  handleExceptionBegin
  handleExceptionEnd
end;

//property
procedure BufferPanel_Ctl3D(AObj: TBufferPanel); extdecl;
begin
  handleExceptionBegin
  handleExceptionEnd
end;

//property
procedure BufferPanel_Locked(AObj: TBufferPanel); extdecl;
begin
  handleExceptionBegin
  handleExceptionEnd
end;

//property
procedure BufferPanel_ParentCtl3D(AObj: TBufferPanel); extdecl;
begin
  handleExceptionBegin
  handleExceptionEnd
end;

//property
procedure BufferPanel_OnCanResize(AObj: TBufferPanel); extdecl;
begin
  handleExceptionBegin
  handleExceptionEnd
end;

//property
function BufferPanel_DragCursor(AIsSet: LongBool; AObj: TBufferPanel; AValue: TCursor): TCursor; extdecl;
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
function BufferPanel_DragKind(AIsSet: LongBool; AObj: TBufferPanel; AValue: TDragKind): TDragKind; extdecl;
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
function BufferPanel_DragMode(AIsSet: LongBool; AObj: TBufferPanel; AValue: TDragMode): TDragMode; extdecl;
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
procedure BufferPanel_FullRepaint(AObj: TBufferPanel); extdecl;
begin
  handleExceptionBegin
  handleExceptionEnd
end;

//property
function BufferPanel_ParentFont(AIsSet: LongBool; AObj: TBufferPanel; AValue: LongBool): LongBool; extdecl;
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
function BufferPanel_ParentShowHint(AIsSet: LongBool; AObj: TBufferPanel; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentShowHint := AValue;
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

//function
function BufferPanel_SaveToFile(AObj: TBufferPanel; const aFilename: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SaveToFile(aFilename);
  handleExceptionEnd
end;

//function
function BufferPanel_InvalidatePanel(AObj: TBufferPanel): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.InvalidatePanel();
  handleExceptionEnd
end;

//function
function BufferPanel_BeginBufferDraw(AObj: TBufferPanel): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BeginBufferDraw();
  handleExceptionEnd
end;

//function
function BufferPanel_UpdateBufferDimensions(AObj: TBufferPanel; aWidth,  aHeight: integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UpdateBufferDimensions(aWidth,  aHeight);
  handleExceptionEnd
end;

//function
function BufferPanel_UpdateOrigBufferDimensions(AObj: TBufferPanel; aWidth,  aHeight: integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UpdateOrigBufferDimensions(aWidth,  aHeight);
  handleExceptionEnd
end;

//function
function BufferPanel_UpdateOrigPopupBufferDimensions(AObj: TBufferPanel; aWidth,  aHeight: integer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.UpdateOrigPopupBufferDimensions(aWidth,  aHeight);
  handleExceptionEnd
end;

//function
function BufferPanel_BufferIsResized(AObj: TBufferPanel; aUseMutex: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.BufferIsResized(aUseMutex);
  handleExceptionEnd
end;

//procedure
procedure BufferPanel_EndBufferDraw(AObj: TBufferPanel); extdecl;
begin
  handleExceptionBegin
  AObj.EndBufferDraw();
  handleExceptionEnd
end;

//procedure
procedure BufferPanel_BufferDraw(AObj: TBufferPanel; x,  y: integer; const aBitmap: TBitmap); extdecl;
begin
  handleExceptionBegin
  AObj.BufferDraw(x,  y, aBitmap);
  handleExceptionEnd
end;

//procedure
procedure BufferPanel_BufferDraw1(AObj: TBufferPanel; const aBitmap: TBitmap; var aSrcRect,  aDstRect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.BufferDraw(aBitmap, aSrcRect,  aDstRect);
  handleExceptionEnd
end;

//procedure
procedure BufferPanel_UpdateDeviceScaleFactor(AObj: TBufferPanel); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateDeviceScaleFactor();
  handleExceptionEnd
end;

//procedure
procedure BufferPanel_CreateIMEHandler(AObj: TBufferPanel); extdecl;
begin
  handleExceptionBegin
  AObj.CreateIMEHandler();
  handleExceptionEnd
end;

//procedure
procedure BufferPanel_DrawOrigPopupBuffer(AObj: TBufferPanel; var aSrcRect,  aDstRect: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.DrawOrigPopupBuffer(aSrcRect,  aDstRect);
  handleExceptionEnd
end;

//property event
procedure BufferPanel_SetOnIMECancelComposition(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
{$IFDEF MSWINDOWS}
  {$DEFINE EventMethodName := BufferPanel_OnIMECancelComposition}
  {$DEFINE EventName := OnIMECancelComposition}
  CEFEventMethodCode
{$ENDIF}
end;

//property event
procedure BufferPanel_SetOnIMECommitText(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
{$IFDEF MSWINDOWS}
  {$DEFINE EventMethodName := BufferPanel_OnIMECommitText}
  {$DEFINE EventName := OnIMECommitText}
  CEFEventMethodCode
{$ENDIF}
end;

//property event
procedure BufferPanel_SetOnIMESetComposition(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
{$IFDEF MSWINDOWS}
  {$DEFINE EventMethodName := BufferPanel_OnIMESetComposition}
  {$DEFINE EventName := OnIMESetComposition}
  CEFEventMethodCode
{$ENDIF}
end;

//property event
procedure BufferPanel_SetOnCustomTouch(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
{$IFDEF MSWINDOWS}
  {$DEFINE EventMethodName := BufferPanel_OnCustomTouch}
  {$DEFINE EventName := OnCustomTouch}
  CEFEventMethodCode
{$ENDIF}
end;

//property event
procedure BufferPanel_SetOnPointerDown(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
{$IFDEF MSWINDOWS}
  {$DEFINE EventMethodName := BufferPanel_OnPointerDown}
  {$DEFINE EventName := OnPointerDown}
  CEFEventMethodCode
{$ENDIF}
end;

//property event
procedure BufferPanel_SetOnPointerUp(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
{$IFDEF MSWINDOWS}
  {$DEFINE EventMethodName := BufferPanel_OnPointerUp}
  {$DEFINE EventName := OnPointerUp}
  CEFEventMethodCode
{$ENDIF}
end;

//property event
procedure BufferPanel_SetOnPointerUpdate(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
{$IFDEF MSWINDOWS}
  {$DEFINE EventMethodName := BufferPanel_OnPointerUpdate}
  {$DEFINE EventName := OnPointerUpdate}
  CEFEventMethodCode
{$ENDIF}
end;

//property event
procedure BufferPanel_SetOnPaintParentBkg(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BufferPanel_OnPaintParentBkg}
  {$DEFINE EventName := OnPaintParentBkg}
  CEFEventMethodCode
end;

//property event
procedure BufferPanel_SetOnConstrainedResize(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BufferPanel_OnConstrainedResize}
  {$DEFINE EventName := OnConstrainedResize}
  CEFEventMethodCode
end;

//property event
procedure BufferPanel_SetOnContextPopup(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BufferPanel_OnContextPopup}
  {$DEFINE EventName := OnContextPopup}
  CEFEventMethodCode
end;

//property event
procedure BufferPanel_SetOnDblClick(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BufferPanel_OnDblClick}
  {$DEFINE EventName := OnDblClick}
  CEFEventMethodCode
end;

//property event
procedure BufferPanel_SetOnDragDrop(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BufferPanel_OnDragDrop}
  {$DEFINE EventName := OnDragDrop}
  CEFEventMethodCode
end;

//property event
procedure BufferPanel_SetOnDragOver(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BufferPanel_OnDragOver}
  {$DEFINE EventName := OnDragOver}
  CEFEventMethodCode
end;

//property event
procedure BufferPanel_SetOnEndDock(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BufferPanel_OnEndDock}
  {$DEFINE EventName := OnEndDock}
  CEFEventMethodCode
end;

//property event
procedure BufferPanel_SetOnEndDrag(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BufferPanel_OnEndDrag}
  {$DEFINE EventName := OnEndDrag}
  CEFEventMethodCode
end;

//property event
procedure BufferPanel_SetOnGetSiteInfo(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BufferPanel_OnGetSiteInfo}
  {$DEFINE EventName := OnGetSiteInfo}
  CEFEventMethodCode
end;

//property event
procedure BufferPanel_SetOnMouseDown(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BufferPanel_OnMouseDown}
  {$DEFINE EventName := OnMouseDown}
  CEFEventMethodCode
end;

//property event
procedure BufferPanel_SetOnMouseMove(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BufferPanel_OnMouseMove}
  {$DEFINE EventName := OnMouseMove}
  CEFEventMethodCode
end;

//property event
procedure BufferPanel_SetOnMouseUp(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BufferPanel_OnMouseUp}
  {$DEFINE EventName := OnMouseUp}
  CEFEventMethodCode
end;

//property event
procedure BufferPanel_SetOnMouseWheel(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BufferPanel_OnMouseWheel}
  {$DEFINE EventName := OnMouseWheel}
  CEFEventMethodCode
end;

//property event
procedure BufferPanel_SetOnStartDock(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BufferPanel_OnStartDock}
  {$DEFINE EventName := OnStartDock}
  CEFEventMethodCode
end;

//property event
procedure BufferPanel_SetOnStartDrag(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := BufferPanel_OnStartDrag}
  {$DEFINE EventName := OnStartDrag}
  CEFEventMethodCode
end;


exports
  BufferPanel_Create,
  BufferPanel_ScanlineSize,
  BufferPanel_BufferWidth,
  BufferPanel_BufferHeight,
  BufferPanel_BufferBits,
  BufferPanel_ScreenScale,
  BufferPanel_ForcedDeviceScaleFactor,
  BufferPanel_MustInitBuffer,
  BufferPanel_Buffer,
  BufferPanel_OrigBuffer,
  BufferPanel_OrigBufferWidth,
  BufferPanel_OrigBufferHeight,
  BufferPanel_OrigPopupBuffer,
  BufferPanel_OrigPopupBufferWidth,
  BufferPanel_OrigPopupBufferHeight,
  BufferPanel_OrigPopupBufferBits,
  BufferPanel_OrigPopupScanlineSize,
  BufferPanel_ParentFormHandle,
  BufferPanel_ParentForm,
  BufferPanel_Transparent,
  BufferPanel_CopyOriginalBuffer,
  BufferPanel_BevelEdges,
  BufferPanel_BevelKind,
  BufferPanel_Ctl3D,
  BufferPanel_Locked,
  BufferPanel_ParentCtl3D,
  BufferPanel_OnCanResize,
  BufferPanel_DragCursor,
  BufferPanel_DragKind,
  BufferPanel_DragMode,
  BufferPanel_FullRepaint,
  BufferPanel_ParentFont,
  BufferPanel_ParentShowHint,
  BufferPanel_SaveToFile,
  BufferPanel_InvalidatePanel,
  BufferPanel_BeginBufferDraw,
  BufferPanel_UpdateBufferDimensions,
  BufferPanel_UpdateOrigBufferDimensions,
  BufferPanel_UpdateOrigPopupBufferDimensions,
  BufferPanel_BufferIsResized,
  BufferPanel_EndBufferDraw,
  BufferPanel_BufferDraw,
  BufferPanel_BufferDraw1,
  BufferPanel_UpdateDeviceScaleFactor,
  BufferPanel_CreateIMEHandler,
  BufferPanel_DrawOrigPopupBuffer,
  BufferPanel_SetOnIMECancelComposition,
  BufferPanel_SetOnIMECommitText,
  BufferPanel_SetOnIMESetComposition,
  BufferPanel_SetOnCustomTouch,
  BufferPanel_SetOnPointerDown,
  BufferPanel_SetOnPointerUp,
  BufferPanel_SetOnPointerUpdate,
  BufferPanel_SetOnPaintParentBkg,
  BufferPanel_SetOnConstrainedResize,
  BufferPanel_SetOnContextPopup,
  BufferPanel_SetOnDblClick,
  BufferPanel_SetOnDragDrop,
  BufferPanel_SetOnDragOver,
  BufferPanel_SetOnEndDock,
  BufferPanel_SetOnEndDrag,
  BufferPanel_SetOnGetSiteInfo,
  BufferPanel_SetOnMouseDown,
  BufferPanel_SetOnMouseMove,
  BufferPanel_SetOnMouseUp,
  BufferPanel_SetOnMouseWheel,
  BufferPanel_SetOnStartDock,
  BufferPanel_SetOnStartDrag;