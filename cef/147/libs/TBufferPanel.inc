// constructor
function TBufferPanel_Create(AOwner: TComponent): TBufferPanel; extdecl;
begin
  {$define handleExceptionID := 5900}
  handleExceptionBegin
  Result := TBufferPanel.Create(AOwner);
  handleExceptionEnd
end;

// function
function TBufferPanel_SaveToFile(AObj: TBufferPanel; const aFilename: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 5901}
  handleExceptionBegin
  Result := AObj.SaveToFile(aFilename);
  handleExceptionEnd
end;

// function
function TBufferPanel_InvalidatePanel(AObj: TBufferPanel): LongBool; extdecl;
begin
  {$define handleExceptionID := 5902}
  handleExceptionBegin
  Result := AObj.InvalidatePanel();
  handleExceptionEnd
end;

// function
function TBufferPanel_BeginBufferDraw(AObj: TBufferPanel): LongBool; extdecl;
begin
  {$define handleExceptionID := 5903}
  handleExceptionBegin
  Result := AObj.BeginBufferDraw();
  handleExceptionEnd
end;

// function
function TBufferPanel_UpdateBufferDimensions(AObj: TBufferPanel; aWidth: integer; aHeight: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 5904}
  handleExceptionBegin
  Result := AObj.UpdateBufferDimensions(aWidth, aHeight);
  handleExceptionEnd
end;

// function
function TBufferPanel_UpdateOrigBufferDimensions(AObj: TBufferPanel; aWidth: integer; aHeight: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 5905}
  handleExceptionBegin
  Result := AObj.UpdateOrigBufferDimensions(aWidth, aHeight);
  handleExceptionEnd
end;

// function
function TBufferPanel_UpdateOrigPopupBufferDimensions(AObj: TBufferPanel; aWidth: integer; aHeight: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 5906}
  handleExceptionBegin
  Result := AObj.UpdateOrigPopupBufferDimensions(aWidth, aHeight);
  handleExceptionEnd
end;

// function
function TBufferPanel_BufferIsResized(AObj: TBufferPanel; aUseMutex: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5907}
  handleExceptionBegin
  Result := AObj.BufferIsResized(aUseMutex);
  handleExceptionEnd
end;

// procedure
procedure TBufferPanel_EndBufferDraw(AObj: TBufferPanel); extdecl;
begin
  {$define handleExceptionID := 5908}
  handleExceptionBegin
  AObj.EndBufferDraw();
  handleExceptionEnd
end;

// procedure
procedure TBufferPanel_BufferDrawWithIntX2Bitmap(AObj: TBufferPanel; x: integer; y: integer; const aBitmap: TBitmap); extdecl;
begin
  {$define handleExceptionID := 5909}
  handleExceptionBegin
  AObj.BufferDraw(x, y, aBitmap);
  handleExceptionEnd
end;

// procedure
procedure TBufferPanel_BufferDrawWithBitmapRectX2(AObj: TBufferPanel; const aBitmap: TBitmap; var aSrcRect: TRect; var aDstRect: TRect); extdecl;
begin
  {$define handleExceptionID := 5910}
  handleExceptionBegin
  AObj.BufferDraw(aBitmap, aSrcRect, aDstRect);
  handleExceptionEnd
end;

// procedure
procedure TBufferPanel_UpdateDeviceScaleFactor(AObj: TBufferPanel); extdecl;
begin
  {$define handleExceptionID := 5911}
  handleExceptionBegin
  AObj.UpdateDeviceScaleFactor();
  handleExceptionEnd
end;

// procedure
procedure TBufferPanel_CreateIMEHandler(AObj: TBufferPanel); extdecl;
begin
  {$define handleExceptionID := 5912}
  handleExceptionBegin
  AObj.CreateIMEHandler();
  handleExceptionEnd
end;

// procedure
procedure TBufferPanel_ChangeCompositionRange(AObj: TBufferPanel; var selection_range: TCefRangePtr; const character_bounds: TCefRectDynArray; character_boundsCount: Integer); extdecl;
var
  Inselection_range: TCefRange;
  Tempcharacter_bounds: TCefRectDynArray = nil;
  Tempcharacter_boundsIdx: Integer;
begin
  {$define handleExceptionID := 5913}
  handleExceptionBegin
  Inselection_range := TCefRangeToPas(selection_range);
  SetLength(Tempcharacter_bounds, character_boundsCount);
  for Tempcharacter_boundsIdx := 0 to character_boundsCount - 1 do
  begin
    Tempcharacter_bounds[Tempcharacter_boundsIdx] := character_bounds[Tempcharacter_boundsIdx]
  end;
  AObj.ChangeCompositionRange(Inselection_range, Tempcharacter_bounds);
  SetLength(Tempcharacter_bounds, 0);
  handleExceptionEnd
end;

// procedure
procedure TBufferPanel_DrawOrigPopupBuffer(AObj: TBufferPanel; var aSrcRect: TRect; var aDstRect: TRect); extdecl;
begin
  {$define handleExceptionID := 5914}
  handleExceptionBegin
  AObj.DrawOrigPopupBuffer(aSrcRect, aDstRect);
  handleExceptionEnd
end;

{$IFDEF LCLGTK3}
// procedure
procedure TBufferPanel_SendMessage(AObj: TBufferPanel; var aMessage: TMessage); extdecl;
var
  OutaMessage: TMessage;
begin
  {$define handleExceptionID := 5915}
  handleExceptionBegin
  OutaMessage := aMessage;
  AObj.SendMessage(OutaMessage);
  aMessage := OutaMessage;
  handleExceptionEnd
end;
{$ENDIF}

// property
function TBufferPanel_ScanlineSize(AObj: TBufferPanel): integer; extdecl;
begin
  {$define handleExceptionID := 5916}
  handleExceptionBegin
  Result := AObj.ScanlineSize;
  handleExceptionEnd
end;

// property
function TBufferPanel_BufferWidth(AObj: TBufferPanel): integer; extdecl;
begin
  {$define handleExceptionID := 5917}
  handleExceptionBegin
  Result := AObj.BufferWidth;
  handleExceptionEnd
end;

// property
function TBufferPanel_BufferHeight(AObj: TBufferPanel): integer; extdecl;
begin
  {$define handleExceptionID := 5918}
  handleExceptionBegin
  Result := AObj.BufferHeight;
  handleExceptionEnd
end;

// property
function TBufferPanel_BufferBits(AObj: TBufferPanel): pointer; extdecl;
begin
  {$define handleExceptionID := 5919}
  handleExceptionBegin
  Result := AObj.BufferBits;
  handleExceptionEnd
end;

// property
procedure TBufferPanel_ScreenScale(AObj: TBufferPanel; var Result: single); extdecl;
begin
  {$define handleExceptionID := 5920}
  handleExceptionBegin
  Result := AObj.ScreenScale;
  handleExceptionEnd
end;

// property
procedure TBufferPanel_ForcedDeviceScaleFactor(ASet: LongBool; AObj: TBufferPanel; var AValue: single; var Result: single); extdecl;
begin
  {$define handleExceptionID := 5921}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ForcedDeviceScaleFactor := AValue
  end else
    Result := AObj.ForcedDeviceScaleFactor;
  handleExceptionEnd
end;

// property
function TBufferPanel_MustInitBuffer(ASet: LongBool; AObj: TBufferPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5922}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MustInitBuffer := AValue
  end else
    Result := AObj.MustInitBuffer;
  handleExceptionEnd
end;

// property
function TBufferPanel_Buffer(AObj: TBufferPanel): TBitmap; extdecl;
begin
  {$define handleExceptionID := 5923}
  handleExceptionBegin
  Result := AObj.Buffer;
  handleExceptionEnd
end;

// property
function TBufferPanel_OrigBuffer(AObj: TBufferPanel): TCEFBitmapBitBuffer; extdecl;
begin
  {$define handleExceptionID := 5924}
  handleExceptionBegin
  Result := AObj.OrigBuffer;
  handleExceptionEnd
end;

// property
function TBufferPanel_OrigBufferWidth(AObj: TBufferPanel): integer; extdecl;
begin
  {$define handleExceptionID := 5925}
  handleExceptionBegin
  Result := AObj.OrigBufferWidth;
  handleExceptionEnd
end;

// property
function TBufferPanel_OrigBufferHeight(AObj: TBufferPanel): integer; extdecl;
begin
  {$define handleExceptionID := 5926}
  handleExceptionBegin
  Result := AObj.OrigBufferHeight;
  handleExceptionEnd
end;

// property
function TBufferPanel_OrigPopupBuffer(AObj: TBufferPanel): TCEFBitmapBitBuffer; extdecl;
begin
  {$define handleExceptionID := 5927}
  handleExceptionBegin
  Result := AObj.OrigPopupBuffer;
  handleExceptionEnd
end;

// property
function TBufferPanel_OrigPopupBufferWidth(AObj: TBufferPanel): integer; extdecl;
begin
  {$define handleExceptionID := 5928}
  handleExceptionBegin
  Result := AObj.OrigPopupBufferWidth;
  handleExceptionEnd
end;

// property
function TBufferPanel_OrigPopupBufferHeight(AObj: TBufferPanel): integer; extdecl;
begin
  {$define handleExceptionID := 5929}
  handleExceptionBegin
  Result := AObj.OrigPopupBufferHeight;
  handleExceptionEnd
end;

// property
function TBufferPanel_OrigPopupBufferBits(AObj: TBufferPanel): pointer; extdecl;
begin
  {$define handleExceptionID := 5930}
  handleExceptionBegin
  Result := AObj.OrigPopupBufferBits;
  handleExceptionEnd
end;

// property
function TBufferPanel_OrigPopupScanlineSize(AObj: TBufferPanel): integer; extdecl;
begin
  {$define handleExceptionID := 5931}
  handleExceptionBegin
  Result := AObj.OrigPopupScanlineSize;
  handleExceptionEnd
end;

{$IFDEF MSWINDOWS}
// property
function TBufferPanel_ParentFormHandle(AObj: TBufferPanel): TCefWindowHandle; extdecl;
begin
  {$define handleExceptionID := 5932}
  handleExceptionBegin
  Result := AObj.ParentFormHandle;
  handleExceptionEnd
end;
{$ENDIF}

{$IFDEF MSWINDOWS}
// property
function TBufferPanel_ParentForm(AObj: TBufferPanel): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 5933}
  handleExceptionBegin
  Result := AObj.ParentForm;
  handleExceptionEnd
end;
{$ENDIF}

// property
function TBufferPanel_Transparent(ASet: LongBool; AObj: TBufferPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5934}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Transparent := AValue
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

// property
function TBufferPanel_CopyOriginalBuffer(ASet: LongBool; AObj: TBufferPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5935}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CopyOriginalBuffer := AValue
  end else
    Result := AObj.CopyOriginalBuffer;
  handleExceptionEnd
end;

// property
function TBufferPanel_DragCursor(ASet: LongBool; AObj: TBufferPanel; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 5936}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TBufferPanel_DragKind(ASet: LongBool; AObj: TBufferPanel; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 5937}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TBufferPanel_DragMode(ASet: LongBool; AObj: TBufferPanel; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 5938}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TBufferPanel_ParentFont(ASet: LongBool; AObj: TBufferPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5939}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TBufferPanel_ParentShowHint(ASet: LongBool; AObj: TBufferPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5940}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

{$IFDEF MSWINDOWS}
// event
procedure TBufferPanel_OnIMECancelComposition(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TNotifyEvent}
  {$DEFINE EventName := OnIMECancelComposition}
  CEFEventMethodCode
end;
{$ENDIF}

{$IFDEF MSWINDOWS}
// event
procedure TBufferPanel_OnIMECommitText(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TOnIMECommitTextEvent}
  {$DEFINE EventName := OnIMECommitText}
  CEFEventMethodCode
end;
{$ENDIF}

{$IFDEF MSWINDOWS}
// event
procedure TBufferPanel_OnIMESetComposition(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TOnIMESetCompositionEvent}
  {$DEFINE EventName := OnIMESetComposition}
  CEFEventMethodCode
end;
{$ENDIF}

{$IFDEF MSWINDOWS}
// event
procedure TBufferPanel_OnCustomTouch(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TOnHandledMessageEvent}
  {$DEFINE EventName := OnCustomTouch}
  CEFEventMethodCode
end;
{$ENDIF}

{$IFDEF MSWINDOWS}
// event
procedure TBufferPanel_OnPointerDown(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TOnHandledMessageEvent}
  {$DEFINE EventName := OnPointerDown}
  CEFEventMethodCode
end;
{$ENDIF}

{$IFDEF MSWINDOWS}
// event
procedure TBufferPanel_OnPointerUp(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TOnHandledMessageEvent}
  {$DEFINE EventName := OnPointerUp}
  CEFEventMethodCode
end;
{$ENDIF}

{$IFDEF MSWINDOWS}
// event
procedure TBufferPanel_OnPointerUpdate(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TOnHandledMessageEvent}
  {$DEFINE EventName := OnPointerUpdate}
  CEFEventMethodCode
end;
{$ENDIF}

// event
procedure TBufferPanel_OnPaintParentBkg(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TNotifyEvent}
  {$DEFINE EventName := OnPaintParentBkg}
  CEFEventMethodCode
end;

// event
procedure TBufferPanel_OnConstrainedResize(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TConstrainedResizeEvent}
  {$DEFINE EventName := OnConstrainedResize}
  CEFEventMethodCode
end;

// event
procedure TBufferPanel_OnContextPopup(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  CEFEventMethodCode
end;

// event
procedure TBufferPanel_OnDblClick(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  CEFEventMethodCode
end;

// event
procedure TBufferPanel_OnDragDrop(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  CEFEventMethodCode
end;

// event
procedure TBufferPanel_OnDragOver(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  CEFEventMethodCode
end;

// event
procedure TBufferPanel_OnEndDock(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  CEFEventMethodCode
end;

// event
procedure TBufferPanel_OnEndDrag(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  CEFEventMethodCode
end;

// event
procedure TBufferPanel_OnGetSiteInfo(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  CEFEventMethodCode
end;

// event
procedure TBufferPanel_OnMouseDown(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  CEFEventMethodCode
end;

// event
procedure TBufferPanel_OnMouseMove(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  CEFEventMethodCode
end;

// event
procedure TBufferPanel_OnMouseUp(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  CEFEventMethodCode
end;

// event
procedure TBufferPanel_OnMouseWheel(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  CEFEventMethodCode
end;

// event
procedure TBufferPanel_OnStartDock(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  CEFEventMethodCode
end;

// event
procedure TBufferPanel_OnStartDrag(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  CEFEventMethodCode
end;

// event
procedure TBufferPanel_OnMouseEnter(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  CEFEventMethodCode
end;

// event
procedure TBufferPanel_OnMouseLeave(AObj: TBufferPanel; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TBufferPanel_TNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  CEFEventMethodCode
end;

exports
  TBufferPanel_Create,
  TBufferPanel_SaveToFile,
  TBufferPanel_InvalidatePanel,
  TBufferPanel_BeginBufferDraw,
  TBufferPanel_UpdateBufferDimensions,
  TBufferPanel_UpdateOrigBufferDimensions,
  TBufferPanel_UpdateOrigPopupBufferDimensions,
  TBufferPanel_BufferIsResized,
  TBufferPanel_EndBufferDraw,
  TBufferPanel_BufferDrawWithIntX2Bitmap,
  TBufferPanel_BufferDrawWithBitmapRectX2,
  TBufferPanel_UpdateDeviceScaleFactor,
  TBufferPanel_CreateIMEHandler,
  TBufferPanel_ChangeCompositionRange,
  TBufferPanel_DrawOrigPopupBuffer,
{$IFDEF LCLGTK3}
  TBufferPanel_SendMessage,
{$ENDIF}
  TBufferPanel_ScanlineSize,
  TBufferPanel_BufferWidth,
  TBufferPanel_BufferHeight,
  TBufferPanel_BufferBits,
  TBufferPanel_ScreenScale,
  TBufferPanel_ForcedDeviceScaleFactor,
  TBufferPanel_MustInitBuffer,
  TBufferPanel_Buffer,
  TBufferPanel_OrigBuffer,
  TBufferPanel_OrigBufferWidth,
  TBufferPanel_OrigBufferHeight,
  TBufferPanel_OrigPopupBuffer,
  TBufferPanel_OrigPopupBufferWidth,
  TBufferPanel_OrigPopupBufferHeight,
  TBufferPanel_OrigPopupBufferBits,
  TBufferPanel_OrigPopupScanlineSize,
{$IFDEF MSWINDOWS}
  TBufferPanel_ParentFormHandle,
{$ENDIF}
{$IFDEF MSWINDOWS}
  TBufferPanel_ParentForm,
{$ENDIF}
  TBufferPanel_Transparent,
  TBufferPanel_CopyOriginalBuffer,
  TBufferPanel_DragCursor,
  TBufferPanel_DragKind,
  TBufferPanel_DragMode,
  TBufferPanel_ParentFont,
  TBufferPanel_ParentShowHint,
{$IFDEF MSWINDOWS}
  TBufferPanel_OnIMECancelComposition,
{$ENDIF}
{$IFDEF MSWINDOWS}
  TBufferPanel_OnIMECommitText,
{$ENDIF}
{$IFDEF MSWINDOWS}
  TBufferPanel_OnIMESetComposition,
{$ENDIF}
{$IFDEF MSWINDOWS}
  TBufferPanel_OnCustomTouch,
{$ENDIF}
{$IFDEF MSWINDOWS}
  TBufferPanel_OnPointerDown,
{$ENDIF}
{$IFDEF MSWINDOWS}
  TBufferPanel_OnPointerUp,
{$ENDIF}
{$IFDEF MSWINDOWS}
  TBufferPanel_OnPointerUpdate,
{$ENDIF}
  TBufferPanel_OnPaintParentBkg,
  TBufferPanel_OnConstrainedResize,
  TBufferPanel_OnContextPopup,
  TBufferPanel_OnDblClick,
  TBufferPanel_OnDragDrop,
  TBufferPanel_OnDragOver,
  TBufferPanel_OnEndDock,
  TBufferPanel_OnEndDrag,
  TBufferPanel_OnGetSiteInfo,
  TBufferPanel_OnMouseDown,
  TBufferPanel_OnMouseMove,
  TBufferPanel_OnMouseUp,
  TBufferPanel_OnMouseWheel,
  TBufferPanel_OnStartDock,
  TBufferPanel_OnStartDrag,
  TBufferPanel_OnMouseEnter,
  TBufferPanel_OnMouseLeave;