// constructor
function TCefBrowserHostRef_Create(data: Pointer; out IntfBrowserHost: ICefBrowserHost): TCefBrowserHostRef; extdecl;
begin
  {$define handleExceptionID := 17400}
  handleExceptionBegin
  Result := TCefBrowserHostRef.Create(data);
  IntfBrowserHost := Result as ICefBrowserHost;
  handleExceptionEnd
end;

// function
procedure TCefBrowserHostRef_GetBrowser(AObj: ICefBrowserHost; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 17401}
  handleExceptionBegin
  Result := AObj.GetBrowser();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_TryCloseBrowser(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionID := 17402}
  handleExceptionBegin
  Result := AObj.TryCloseBrowser();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_GetWindowHandle(AObj: ICefBrowserHost): TCefWindowHandle; extdecl;
begin
  {$define handleExceptionID := 17403}
  handleExceptionBegin
  Result := AObj.GetWindowHandle();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_GetOpenerWindowHandle(AObj: ICefBrowserHost): TCefWindowHandle; extdecl;
begin
  {$define handleExceptionID := 17404}
  handleExceptionBegin
  Result := AObj.GetOpenerWindowHandle();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_HasView(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionID := 17405}
  handleExceptionBegin
  Result := AObj.HasView();
  handleExceptionEnd
end;

// function
procedure TCefBrowserHostRef_GetRequestContext(AObj: ICefBrowserHost; var Result: ICefRequestContext); extdecl;
begin
  {$define handleExceptionID := 17406}
  handleExceptionBegin
  Result := AObj.GetRequestContext();
  handleExceptionEnd
end;

// function
procedure TCefBrowserHostRef_GetZoomLevel(AObj: ICefBrowserHost; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 17407}
  handleExceptionBegin
  Result := AObj.GetZoomLevel();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_HasDevTools(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionID := 17408}
  handleExceptionBegin
  Result := AObj.HasDevTools();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_SendDevToolsMessage(AObj: ICefBrowserHost; const message_: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 17409}
  handleExceptionBegin
  Result := AObj.SendDevToolsMessage(PCharToUStr(message_));
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_ExecuteDevToolsMethod(AObj: ICefBrowserHost; message_id: integer; const method: PChar; const params: ICefDictionaryValue): Integer; extdecl;
begin
  {$define handleExceptionID := 17410}
  handleExceptionBegin
  Result := AObj.ExecuteDevToolsMethod(message_id, PCharToUStr(method), params);
  handleExceptionEnd
end;

// function
procedure TCefBrowserHostRef_AddDevToolsMessageObserver(AObj: ICefBrowserHost; const observer: ICefDevToolsMessageObserver; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionID := 17411}
  handleExceptionBegin
  Result := AObj.AddDevToolsMessageObserver(observer);
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_IsWindowRenderingDisabled(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionID := 17412}
  handleExceptionBegin
  Result := AObj.IsWindowRenderingDisabled();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_GetWindowlessFrameRate(AObj: ICefBrowserHost): Integer; extdecl;
begin
  {$define handleExceptionID := 17413}
  handleExceptionBegin
  Result := AObj.GetWindowlessFrameRate();
  handleExceptionEnd
end;

// function
procedure TCefBrowserHostRef_GetVisibleNavigationEntry(AObj: ICefBrowserHost; var Result: ICefNavigationEntry); extdecl;
begin
  {$define handleExceptionID := 17414}
  handleExceptionBegin
  Result := AObj.GetVisibleNavigationEntry();
  handleExceptionEnd
end;

// function
procedure TCefBrowserHostRef_GetExtension(AObj: ICefBrowserHost; var Result: ICefExtension); extdecl;
begin
  {$define handleExceptionID := 17415}
  handleExceptionBegin
  Result := AObj.GetExtension();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_IsBackgroundHost(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionID := 17416}
  handleExceptionBegin
  Result := AObj.IsBackgroundHost();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_IsAudioMuted(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionID := 17417}
  handleExceptionBegin
  Result := AObj.IsAudioMuted();
  handleExceptionEnd
end;

// function static
procedure TCefBrowserHostRef_UnWrap(data: Pointer; var Result: ICefBrowserHost); extdecl;
begin
  Result := TCefBrowserHostRef.UnWrap(data);
end;

// procedure
procedure TCefBrowserHostRef_CloseBrowser(AObj: ICefBrowserHost; forceClose: LongBool); extdecl;
begin
  {$define handleExceptionID := 17418}
  handleExceptionBegin
  AObj.CloseBrowser(forceClose);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SetFocus(AObj: ICefBrowserHost; focus: LongBool); extdecl;
begin
  {$define handleExceptionID := 17419}
  handleExceptionBegin
  AObj.SetFocus(focus);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SetZoomLevel(AObj: ICefBrowserHost; var zoomLevel: Double); extdecl;
begin
  {$define handleExceptionID := 17420}
  handleExceptionBegin
  AObj.SetZoomLevel(zoomLevel);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_RunFileDialog(AObj: ICefBrowserHost; mode: TCefFileDialogMode; const title: PChar; const defaultFilePath: PChar; const acceptFilters: TStrings; const callback: ICefRunFileDialogCallback); extdecl;
begin
  {$define handleExceptionID := 17421}
  handleExceptionBegin
  AObj.RunFileDialog(mode, PCharToUStr(title), PCharToUStr(defaultFilePath), acceptFilters, callback);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_StartDownload(AObj: ICefBrowserHost; const url: PChar); extdecl;
begin
  {$define handleExceptionID := 17422}
  handleExceptionBegin
  AObj.StartDownload(PCharToUStr(url));
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_DownloadImage(AObj: ICefBrowserHost; const imageUrl: PChar; isFavicon: LongBool; maxImageSize: Cardinal; bypassCache: LongBool; const callback: ICefDownloadImageCallback); extdecl;
begin
  {$define handleExceptionID := 17423}
  handleExceptionBegin
  AObj.DownloadImage(PCharToUStr(imageUrl), isFavicon, maxImageSize, bypassCache, callback);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_Print(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 17424}
  handleExceptionBegin
  AObj.Print();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_PrintToPdf(AObj: ICefBrowserHost; const path: PChar; settings: TCefPdfPrintSettingsPtr; const callback: ICefPdfPrintCallback); extdecl;
var
  Insettings: TCefPdfPrintSettings;
begin
  {$define handleExceptionID := 17425}
  handleExceptionBegin
  Insettings := TCefPdfPrintSettingsToPas(settings);
  AObj.PrintToPdf(PCharToUStr(path), @Insettings, callback);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_Find(AObj: ICefBrowserHost; const searchText: PChar; forward_: LongBool; matchCase: LongBool; findNext: LongBool); extdecl;
begin
  {$define handleExceptionID := 17426}
  handleExceptionBegin
  AObj.Find(PCharToUStr(searchText), forward_, matchCase, findNext);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_StopFinding(AObj: ICefBrowserHost; clearSelection: LongBool); extdecl;
begin
  {$define handleExceptionID := 17427}
  handleExceptionBegin
  AObj.StopFinding(clearSelection);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_ShowDevTools(AObj: ICefBrowserHost; const windowInfo: TCefWindowInfoPtr; const client: ICefClient; const settings: TCefBrowserSettingsPtr; inspectElementAt: TCefPointPtr); extdecl;
var
  InwindowInfo: TCefWindowInfo;
  Insettings: TCefBrowserSettings;
  IninspectElementAt: TCefPoint;
begin
  {$define handleExceptionID := 17428}
  handleExceptionBegin
  InwindowInfo := TCefWindowInfoToPas(windowInfo);
  Insettings := TCefBrowserSettingsToPas(settings);
  IninspectElementAt := TCefPointToPas(inspectElementAt);
  AObj.ShowDevTools(@InwindowInfo, client, @Insettings, @IninspectElementAt);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_CloseDevTools(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 17429}
  handleExceptionBegin
  AObj.CloseDevTools();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_GetNavigationEntries(AObj: ICefBrowserHost; const visitor: ICefNavigationEntryVisitor; currentOnly: LongBool); extdecl;
begin
  {$define handleExceptionID := 17430}
  handleExceptionBegin
  AObj.GetNavigationEntries(visitor, currentOnly);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_ReplaceMisspelling(AObj: ICefBrowserHost; const word: PChar); extdecl;
begin
  {$define handleExceptionID := 17431}
  handleExceptionBegin
  AObj.ReplaceMisspelling(PCharToUStr(word));
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_AddWordToDictionary(AObj: ICefBrowserHost; const word: PChar); extdecl;
begin
  {$define handleExceptionID := 17432}
  handleExceptionBegin
  AObj.AddWordToDictionary(PCharToUStr(word));
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_WasResized(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 17433}
  handleExceptionBegin
  AObj.WasResized();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_NotifyScreenInfoChanged(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 17434}
  handleExceptionBegin
  AObj.NotifyScreenInfoChanged();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_WasHidden(AObj: ICefBrowserHost; hidden: LongBool); extdecl;
begin
  {$define handleExceptionID := 17435}
  handleExceptionBegin
  AObj.WasHidden(hidden);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_Invalidate(AObj: ICefBrowserHost; type_: TCefPaintElementType); extdecl;
begin
  {$define handleExceptionID := 17436}
  handleExceptionBegin
  AObj.Invalidate(type_);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SendExternalBeginFrame(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 17437}
  handleExceptionBegin
  AObj.SendExternalBeginFrame();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SendKeyEvent(AObj: ICefBrowserHost; const event: TCefKeyEventPtr); extdecl;
var
  Inevent: TCefKeyEvent;
begin
  {$define handleExceptionID := 17438}
  handleExceptionBegin
  Inevent := TCefKeyEventToPas(event);
  AObj.SendKeyEvent(@Inevent);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SendMouseClickEvent(AObj: ICefBrowserHost; const event: TCefMouseEventPtr; type_: TCefMouseButtonType; mouseUp: LongBool; clickCount: Integer); extdecl;
var
  Inevent: TCefMouseEvent;
begin
  {$define handleExceptionID := 17439}
  handleExceptionBegin
  Inevent := TCefMouseEventToPas(event);
  AObj.SendMouseClickEvent(@Inevent, type_, mouseUp, clickCount);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SendMouseMoveEvent(AObj: ICefBrowserHost; const event: TCefMouseEventPtr; mouseLeave: LongBool); extdecl;
var
  Inevent: TCefMouseEvent;
begin
  {$define handleExceptionID := 17440}
  handleExceptionBegin
  Inevent := TCefMouseEventToPas(event);
  AObj.SendMouseMoveEvent(@Inevent, mouseLeave);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SendMouseWheelEvent(AObj: ICefBrowserHost; const event: TCefMouseEventPtr; deltaX: Integer; deltaY: Integer); extdecl;
var
  Inevent: TCefMouseEvent;
begin
  {$define handleExceptionID := 17441}
  handleExceptionBegin
  Inevent := TCefMouseEventToPas(event);
  AObj.SendMouseWheelEvent(@Inevent, deltaX, deltaY);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SendTouchEvent(AObj: ICefBrowserHost; const event: TCefTouchEventPtr); extdecl;
var
  Inevent: TCefTouchEvent;
begin
  {$define handleExceptionID := 17442}
  handleExceptionBegin
  Inevent := TCefTouchEventToPas(event);
  AObj.SendTouchEvent(@Inevent);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SendCaptureLostEvent(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 17443}
  handleExceptionBegin
  AObj.SendCaptureLostEvent();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_NotifyMoveOrResizeStarted(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 17444}
  handleExceptionBegin
  AObj.NotifyMoveOrResizeStarted();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SetWindowlessFrameRate(AObj: ICefBrowserHost; frameRate: Integer); extdecl;
begin
  {$define handleExceptionID := 17445}
  handleExceptionBegin
  AObj.SetWindowlessFrameRate(frameRate);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_IMESetComposition(AObj: ICefBrowserHost; const text: PChar; const underlines: TCefCompositionUnderlineDynArray; underlinesCount: Integer; const replacement_range: TCefRangePtr; const selection_range: TCefRangePtr); extdecl;
var
  Tempunderlines: TCefCompositionUnderlineDynArray = nil;
  TempunderlinesIdx: Integer;
  Inreplacement_range: TCefRange;
  Inselection_range: TCefRange;
begin
  {$define handleExceptionID := 17446}
  handleExceptionBegin
  SetLength(Tempunderlines, underlinesCount);
  for TempunderlinesIdx := 0 to underlinesCount - 1 do
  begin
    Tempunderlines[TempunderlinesIdx] := underlines[TempunderlinesIdx]
  end;
  Inreplacement_range := TCefRangeToPas(replacement_range);
  Inselection_range := TCefRangeToPas(selection_range);
  AObj.IMESetComposition(PCharToUStr(text), Tempunderlines, @Inreplacement_range, @Inselection_range);
  SetLength(Tempunderlines, 0);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_IMECommitText(AObj: ICefBrowserHost; const text: PChar; const replacement_range: TCefRangePtr; relative_cursor_pos: integer); extdecl;
var
  Inreplacement_range: TCefRange;
begin
  {$define handleExceptionID := 17447}
  handleExceptionBegin
  Inreplacement_range := TCefRangeToPas(replacement_range);
  AObj.IMECommitText(PCharToUStr(text), @Inreplacement_range, relative_cursor_pos);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_IMEFinishComposingText(AObj: ICefBrowserHost; keep_selection: LongBool); extdecl;
begin
  {$define handleExceptionID := 17448}
  handleExceptionBegin
  AObj.IMEFinishComposingText(keep_selection);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_IMECancelComposition(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 17449}
  handleExceptionBegin
  AObj.IMECancelComposition();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_DragTargetDragEnter(AObj: ICefBrowserHost; const dragData: ICefDragData; const event: TCefMouseEventPtr; allowedOps: TCefDragOperations); extdecl;
var
  Inevent: TCefMouseEvent;
begin
  {$define handleExceptionID := 17450}
  handleExceptionBegin
  Inevent := TCefMouseEventToPas(event);
  AObj.DragTargetDragEnter(dragData, @Inevent, allowedOps);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_DragTargetDragOver(AObj: ICefBrowserHost; const event: TCefMouseEventPtr; allowedOps: TCefDragOperations); extdecl;
var
  Inevent: TCefMouseEvent;
begin
  {$define handleExceptionID := 17451}
  handleExceptionBegin
  Inevent := TCefMouseEventToPas(event);
  AObj.DragTargetDragOver(@Inevent, allowedOps);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_DragTargetDragLeave(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 17452}
  handleExceptionBegin
  AObj.DragTargetDragLeave();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_DragTargetDrop(AObj: ICefBrowserHost; const event: TCefMouseEventPtr); extdecl;
var
  Inevent: TCefMouseEvent;
begin
  {$define handleExceptionID := 17453}
  handleExceptionBegin
  Inevent := TCefMouseEventToPas(event);
  AObj.DragTargetDrop(@Inevent);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_DragSourceEndedAt(AObj: ICefBrowserHost; x: Integer; y: Integer; op: TCefDragOperation); extdecl;
begin
  {$define handleExceptionID := 17454}
  handleExceptionBegin
  AObj.DragSourceEndedAt(x, y, op);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_DragSourceSystemDragEnded(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 17455}
  handleExceptionBegin
  AObj.DragSourceSystemDragEnded();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SetAccessibilityState(AObj: ICefBrowserHost; accessibilityState: TCefState); extdecl;
begin
  {$define handleExceptionID := 17456}
  handleExceptionBegin
  AObj.SetAccessibilityState(accessibilityState);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SetAutoResizeEnabled(AObj: ICefBrowserHost; enabled: LongBool; const min_size: TCefSizePtr; const max_size: TCefSizePtr); extdecl;
var
  Inmin_size: TCefSize;
  Inmax_size: TCefSize;
begin
  {$define handleExceptionID := 17457}
  handleExceptionBegin
  Inmin_size := TCefSizeToPas(min_size);
  Inmax_size := TCefSizeToPas(max_size);
  AObj.SetAutoResizeEnabled(enabled, @Inmin_size, @Inmax_size);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SetAudioMuted(AObj: ICefBrowserHost; mute: LongBool); extdecl;
begin
  {$define handleExceptionID := 17458}
  handleExceptionBegin
  AObj.SetAudioMuted(mute);
  handleExceptionEnd
end;

exports
  TCefBrowserHostRef_Create,
  TCefBrowserHostRef_GetBrowser,
  TCefBrowserHostRef_TryCloseBrowser,
  TCefBrowserHostRef_GetWindowHandle,
  TCefBrowserHostRef_GetOpenerWindowHandle,
  TCefBrowserHostRef_HasView,
  TCefBrowserHostRef_GetRequestContext,
  TCefBrowserHostRef_GetZoomLevel,
  TCefBrowserHostRef_HasDevTools,
  TCefBrowserHostRef_SendDevToolsMessage,
  TCefBrowserHostRef_ExecuteDevToolsMethod,
  TCefBrowserHostRef_AddDevToolsMessageObserver,
  TCefBrowserHostRef_IsWindowRenderingDisabled,
  TCefBrowserHostRef_GetWindowlessFrameRate,
  TCefBrowserHostRef_GetVisibleNavigationEntry,
  TCefBrowserHostRef_GetExtension,
  TCefBrowserHostRef_IsBackgroundHost,
  TCefBrowserHostRef_IsAudioMuted,
  TCefBrowserHostRef_UnWrap,
  TCefBrowserHostRef_CloseBrowser,
  TCefBrowserHostRef_SetFocus,
  TCefBrowserHostRef_SetZoomLevel,
  TCefBrowserHostRef_RunFileDialog,
  TCefBrowserHostRef_StartDownload,
  TCefBrowserHostRef_DownloadImage,
  TCefBrowserHostRef_Print,
  TCefBrowserHostRef_PrintToPdf,
  TCefBrowserHostRef_Find,
  TCefBrowserHostRef_StopFinding,
  TCefBrowserHostRef_ShowDevTools,
  TCefBrowserHostRef_CloseDevTools,
  TCefBrowserHostRef_GetNavigationEntries,
  TCefBrowserHostRef_ReplaceMisspelling,
  TCefBrowserHostRef_AddWordToDictionary,
  TCefBrowserHostRef_WasResized,
  TCefBrowserHostRef_NotifyScreenInfoChanged,
  TCefBrowserHostRef_WasHidden,
  TCefBrowserHostRef_Invalidate,
  TCefBrowserHostRef_SendExternalBeginFrame,
  TCefBrowserHostRef_SendKeyEvent,
  TCefBrowserHostRef_SendMouseClickEvent,
  TCefBrowserHostRef_SendMouseMoveEvent,
  TCefBrowserHostRef_SendMouseWheelEvent,
  TCefBrowserHostRef_SendTouchEvent,
  TCefBrowserHostRef_SendCaptureLostEvent,
  TCefBrowserHostRef_NotifyMoveOrResizeStarted,
  TCefBrowserHostRef_SetWindowlessFrameRate,
  TCefBrowserHostRef_IMESetComposition,
  TCefBrowserHostRef_IMECommitText,
  TCefBrowserHostRef_IMEFinishComposingText,
  TCefBrowserHostRef_IMECancelComposition,
  TCefBrowserHostRef_DragTargetDragEnter,
  TCefBrowserHostRef_DragTargetDragOver,
  TCefBrowserHostRef_DragTargetDragLeave,
  TCefBrowserHostRef_DragTargetDrop,
  TCefBrowserHostRef_DragSourceEndedAt,
  TCefBrowserHostRef_DragSourceSystemDragEnded,
  TCefBrowserHostRef_SetAccessibilityState,
  TCefBrowserHostRef_SetAutoResizeEnabled,
  TCefBrowserHostRef_SetAudioMuted;