// constructor
function TCefBrowserHostRef_Create(data: Pointer; out IntfBrowserHost: ICefBrowserHost): TCefBrowserHostRef; extdecl;
begin
  {$define handleExceptionID := 18200}
  handleExceptionBegin
  Result := TCefBrowserHostRef.Create(data);
  IntfBrowserHost := Result as ICefBrowserHost;
  handleExceptionEnd
end;

// function
procedure TCefBrowserHostRef_GetBrowser(AObj: ICefBrowserHost; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 18201}
  handleExceptionBegin
  Result := AObj.GetBrowser();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_TryCloseBrowser(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionID := 18202}
  handleExceptionBegin
  Result := AObj.TryCloseBrowser();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_IsReadyToBeClosed(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionID := 18203}
  handleExceptionBegin
  Result := AObj.IsReadyToBeClosed();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_GetWindowHandle(AObj: ICefBrowserHost): TCefWindowHandle; extdecl;
begin
  {$define handleExceptionID := 18204}
  handleExceptionBegin
  Result := AObj.GetWindowHandle();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_GetOpenerWindowHandle(AObj: ICefBrowserHost): TCefWindowHandle; extdecl;
begin
  {$define handleExceptionID := 18205}
  handleExceptionBegin
  Result := AObj.GetOpenerWindowHandle();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_GetOpenerIdentifier(AObj: ICefBrowserHost): integer; extdecl;
begin
  {$define handleExceptionID := 18206}
  handleExceptionBegin
  Result := AObj.GetOpenerIdentifier();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_HasView(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionID := 18207}
  handleExceptionBegin
  Result := AObj.HasView();
  handleExceptionEnd
end;

// function
procedure TCefBrowserHostRef_GetClient(AObj: ICefBrowserHost; var Result: ICefClient); extdecl;
begin
  {$define handleExceptionID := 18208}
  handleExceptionBegin
  Result := AObj.GetClient();
  handleExceptionEnd
end;

// function
procedure TCefBrowserHostRef_GetRequestContext(AObj: ICefBrowserHost; var Result: ICefRequestContext); extdecl;
begin
  {$define handleExceptionID := 18209}
  handleExceptionBegin
  Result := AObj.GetRequestContext();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_CanZoom(AObj: ICefBrowserHost; command: TCefZoomCommand): LongBool; extdecl;
begin
  {$define handleExceptionID := 18210}
  handleExceptionBegin
  Result := AObj.CanZoom(command);
  handleExceptionEnd
end;

// function
procedure TCefBrowserHostRef_GetDefaultZoomLevel(AObj: ICefBrowserHost; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 18211}
  handleExceptionBegin
  Result := AObj.GetDefaultZoomLevel();
  handleExceptionEnd
end;

// function
procedure TCefBrowserHostRef_GetZoomLevel(AObj: ICefBrowserHost; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 18212}
  handleExceptionBegin
  Result := AObj.GetZoomLevel();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_HasDevTools(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionID := 18213}
  handleExceptionBegin
  Result := AObj.HasDevTools();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_SendDevToolsMessage(AObj: ICefBrowserHost; const message_: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 18214}
  handleExceptionBegin
  Result := AObj.SendDevToolsMessage(PCharToUStr(message_));
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_ExecuteDevToolsMethod(AObj: ICefBrowserHost; message_id: integer; const method: PChar; const params: ICefDictionaryValue): Integer; extdecl;
begin
  {$define handleExceptionID := 18215}
  handleExceptionBegin
  Result := AObj.ExecuteDevToolsMethod(message_id, PCharToUStr(method), params);
  handleExceptionEnd
end;

// function
procedure TCefBrowserHostRef_AddDevToolsMessageObserver(AObj: ICefBrowserHost; const observer: ICefDevToolsMessageObserver; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionID := 18216}
  handleExceptionBegin
  Result := AObj.AddDevToolsMessageObserver(observer);
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_IsWindowRenderingDisabled(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionID := 18217}
  handleExceptionBegin
  Result := AObj.IsWindowRenderingDisabled();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_GetWindowlessFrameRate(AObj: ICefBrowserHost): Integer; extdecl;
begin
  {$define handleExceptionID := 18218}
  handleExceptionBegin
  Result := AObj.GetWindowlessFrameRate();
  handleExceptionEnd
end;

// function
procedure TCefBrowserHostRef_GetVisibleNavigationEntry(AObj: ICefBrowserHost; var Result: ICefNavigationEntry); extdecl;
begin
  {$define handleExceptionID := 18219}
  handleExceptionBegin
  Result := AObj.GetVisibleNavigationEntry();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_IsAudioMuted(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionID := 18220}
  handleExceptionBegin
  Result := AObj.IsAudioMuted();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_IsFullscreen(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionID := 18221}
  handleExceptionBegin
  Result := AObj.IsFullscreen();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_CanExecuteChromeCommand(AObj: ICefBrowserHost; command_id: integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 18222}
  handleExceptionBegin
  Result := AObj.CanExecuteChromeCommand(command_id);
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_IsRenderProcessUnresponsive(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionID := 18223}
  handleExceptionBegin
  Result := AObj.IsRenderProcessUnresponsive();
  handleExceptionEnd
end;

// function
function TCefBrowserHostRef_GetRuntimeStyle(AObj: ICefBrowserHost): TCefRuntimeStyle; extdecl;
begin
  {$define handleExceptionID := 18224}
  handleExceptionBegin
  Result := AObj.GetRuntimeStyle();
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
  {$define handleExceptionID := 18225}
  handleExceptionBegin
  AObj.CloseBrowser(forceClose);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SetFocus(AObj: ICefBrowserHost; focus: LongBool); extdecl;
begin
  {$define handleExceptionID := 18226}
  handleExceptionBegin
  AObj.SetFocus(focus);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_Zoom(AObj: ICefBrowserHost; command: TCefZoomCommand); extdecl;
begin
  {$define handleExceptionID := 18227}
  handleExceptionBegin
  AObj.Zoom(command);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SetZoomLevel(AObj: ICefBrowserHost; var zoomLevel: Double); extdecl;
begin
  {$define handleExceptionID := 18228}
  handleExceptionBegin
  AObj.SetZoomLevel(zoomLevel);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_RunFileDialog(AObj: ICefBrowserHost; mode: TCefFileDialogMode; const title: PChar; const defaultFilePath: PChar; const acceptFilters: TStrings; const callback: ICefRunFileDialogCallback); extdecl;
begin
  {$define handleExceptionID := 18229}
  handleExceptionBegin
  AObj.RunFileDialog(mode, PCharToUStr(title), PCharToUStr(defaultFilePath), acceptFilters, callback);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_StartDownload(AObj: ICefBrowserHost; const url: PChar); extdecl;
begin
  {$define handleExceptionID := 18230}
  handleExceptionBegin
  AObj.StartDownload(PCharToUStr(url));
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_DownloadImage(AObj: ICefBrowserHost; const imageUrl: PChar; isFavicon: LongBool; maxImageSize: Cardinal; bypassCache: LongBool; const callback: ICefDownloadImageCallback); extdecl;
begin
  {$define handleExceptionID := 18231}
  handleExceptionBegin
  AObj.DownloadImage(PCharToUStr(imageUrl), isFavicon, maxImageSize, bypassCache, callback);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_Print(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 18232}
  handleExceptionBegin
  AObj.Print();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_PrintToPdf(AObj: ICefBrowserHost; const path: PChar; settings: TCefPdfPrintSettingsPtr; const callback: ICefPdfPrintCallback); extdecl;
var
  Insettings: TCefPdfPrintSettings;
begin
  {$define handleExceptionID := 18233}
  handleExceptionBegin
  Insettings := TCefPdfPrintSettingsToPas(settings);
  AObj.PrintToPdf(PCharToUStr(path), @Insettings, callback);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_Find(AObj: ICefBrowserHost; const searchText: PChar; forward_: LongBool; matchCase: LongBool; findNext: LongBool); extdecl;
begin
  {$define handleExceptionID := 18234}
  handleExceptionBegin
  AObj.Find(PCharToUStr(searchText), forward_, matchCase, findNext);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_StopFinding(AObj: ICefBrowserHost; clearSelection: LongBool); extdecl;
begin
  {$define handleExceptionID := 18235}
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
  {$define handleExceptionID := 18236}
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
  {$define handleExceptionID := 18237}
  handleExceptionBegin
  AObj.CloseDevTools();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_GetNavigationEntries(AObj: ICefBrowserHost; const visitor: ICefNavigationEntryVisitor; currentOnly: LongBool); extdecl;
begin
  {$define handleExceptionID := 18238}
  handleExceptionBegin
  AObj.GetNavigationEntries(visitor, currentOnly);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_ReplaceMisspelling(AObj: ICefBrowserHost; const word: PChar); extdecl;
begin
  {$define handleExceptionID := 18239}
  handleExceptionBegin
  AObj.ReplaceMisspelling(PCharToUStr(word));
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_AddWordToDictionary(AObj: ICefBrowserHost; const word: PChar); extdecl;
begin
  {$define handleExceptionID := 18240}
  handleExceptionBegin
  AObj.AddWordToDictionary(PCharToUStr(word));
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_WasResized(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 18241}
  handleExceptionBegin
  AObj.WasResized();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_NotifyScreenInfoChanged(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 18242}
  handleExceptionBegin
  AObj.NotifyScreenInfoChanged();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_WasHidden(AObj: ICefBrowserHost; hidden: LongBool); extdecl;
begin
  {$define handleExceptionID := 18243}
  handleExceptionBegin
  AObj.WasHidden(hidden);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_Invalidate(AObj: ICefBrowserHost; type_: TCefPaintElementType); extdecl;
begin
  {$define handleExceptionID := 18244}
  handleExceptionBegin
  AObj.Invalidate(type_);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SendExternalBeginFrame(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 18245}
  handleExceptionBegin
  AObj.SendExternalBeginFrame();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SendKeyEvent(AObj: ICefBrowserHost; const event: TCefKeyEventPtr); extdecl;
var
  Inevent: TCefKeyEvent;
begin
  {$define handleExceptionID := 18246}
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
  {$define handleExceptionID := 18247}
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
  {$define handleExceptionID := 18248}
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
  {$define handleExceptionID := 18249}
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
  {$define handleExceptionID := 18250}
  handleExceptionBegin
  Inevent := TCefTouchEventToPas(event);
  AObj.SendTouchEvent(@Inevent);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SendCaptureLostEvent(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 18251}
  handleExceptionBegin
  AObj.SendCaptureLostEvent();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_NotifyMoveOrResizeStarted(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 18252}
  handleExceptionBegin
  AObj.NotifyMoveOrResizeStarted();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SetWindowlessFrameRate(AObj: ICefBrowserHost; frameRate: Integer); extdecl;
begin
  {$define handleExceptionID := 18253}
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
  {$define handleExceptionID := 18254}
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
  {$define handleExceptionID := 18255}
  handleExceptionBegin
  Inreplacement_range := TCefRangeToPas(replacement_range);
  AObj.IMECommitText(PCharToUStr(text), @Inreplacement_range, relative_cursor_pos);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_IMEFinishComposingText(AObj: ICefBrowserHost; keep_selection: LongBool); extdecl;
begin
  {$define handleExceptionID := 18256}
  handleExceptionBegin
  AObj.IMEFinishComposingText(keep_selection);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_IMECancelComposition(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 18257}
  handleExceptionBegin
  AObj.IMECancelComposition();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_DragTargetDragEnter(AObj: ICefBrowserHost; const dragData: ICefDragData; const event: TCefMouseEventPtr; allowedOps: TCefDragOperations); extdecl;
var
  Inevent: TCefMouseEvent;
begin
  {$define handleExceptionID := 18258}
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
  {$define handleExceptionID := 18259}
  handleExceptionBegin
  Inevent := TCefMouseEventToPas(event);
  AObj.DragTargetDragOver(@Inevent, allowedOps);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_DragTargetDragLeave(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 18260}
  handleExceptionBegin
  AObj.DragTargetDragLeave();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_DragTargetDrop(AObj: ICefBrowserHost; const event: TCefMouseEventPtr); extdecl;
var
  Inevent: TCefMouseEvent;
begin
  {$define handleExceptionID := 18261}
  handleExceptionBegin
  Inevent := TCefMouseEventToPas(event);
  AObj.DragTargetDrop(@Inevent);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_DragSourceEndedAt(AObj: ICefBrowserHost; x: Integer; y: Integer; op: TCefDragOperation); extdecl;
begin
  {$define handleExceptionID := 18262}
  handleExceptionBegin
  AObj.DragSourceEndedAt(x, y, op);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_DragSourceSystemDragEnded(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 18263}
  handleExceptionBegin
  AObj.DragSourceSystemDragEnded();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SetAccessibilityState(AObj: ICefBrowserHost; accessibilityState: TCefState); extdecl;
begin
  {$define handleExceptionID := 18264}
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
  {$define handleExceptionID := 18265}
  handleExceptionBegin
  Inmin_size := TCefSizeToPas(min_size);
  Inmax_size := TCefSizeToPas(max_size);
  AObj.SetAutoResizeEnabled(enabled, @Inmin_size, @Inmax_size);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SetAudioMuted(AObj: ICefBrowserHost; mute: LongBool); extdecl;
begin
  {$define handleExceptionID := 18266}
  handleExceptionBegin
  AObj.SetAudioMuted(mute);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_ExitFullscreen(AObj: ICefBrowserHost; will_cause_resize: LongBool); extdecl;
begin
  {$define handleExceptionID := 18267}
  handleExceptionBegin
  AObj.ExitFullscreen(will_cause_resize);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_ExecuteChromeCommand(AObj: ICefBrowserHost; command_id: integer; disposition: TCefWindowOpenDisposition); extdecl;
begin
  {$define handleExceptionID := 18268}
  handleExceptionBegin
  AObj.ExecuteChromeCommand(command_id, disposition);
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserHostRef_SetAxViewportCollapse(AObj: ICefBrowserHost; enabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 18269}
  handleExceptionBegin
  AObj.SetAxViewportCollapse(enabled);
  handleExceptionEnd
end;

exports
  TCefBrowserHostRef_Create,
  TCefBrowserHostRef_GetBrowser,
  TCefBrowserHostRef_TryCloseBrowser,
  TCefBrowserHostRef_IsReadyToBeClosed,
  TCefBrowserHostRef_GetWindowHandle,
  TCefBrowserHostRef_GetOpenerWindowHandle,
  TCefBrowserHostRef_GetOpenerIdentifier,
  TCefBrowserHostRef_HasView,
  TCefBrowserHostRef_GetClient,
  TCefBrowserHostRef_GetRequestContext,
  TCefBrowserHostRef_CanZoom,
  TCefBrowserHostRef_GetDefaultZoomLevel,
  TCefBrowserHostRef_GetZoomLevel,
  TCefBrowserHostRef_HasDevTools,
  TCefBrowserHostRef_SendDevToolsMessage,
  TCefBrowserHostRef_ExecuteDevToolsMethod,
  TCefBrowserHostRef_AddDevToolsMessageObserver,
  TCefBrowserHostRef_IsWindowRenderingDisabled,
  TCefBrowserHostRef_GetWindowlessFrameRate,
  TCefBrowserHostRef_GetVisibleNavigationEntry,
  TCefBrowserHostRef_IsAudioMuted,
  TCefBrowserHostRef_IsFullscreen,
  TCefBrowserHostRef_CanExecuteChromeCommand,
  TCefBrowserHostRef_IsRenderProcessUnresponsive,
  TCefBrowserHostRef_GetRuntimeStyle,
  TCefBrowserHostRef_UnWrap,
  TCefBrowserHostRef_CloseBrowser,
  TCefBrowserHostRef_SetFocus,
  TCefBrowserHostRef_Zoom,
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
  TCefBrowserHostRef_SetAudioMuted,
  TCefBrowserHostRef_ExitFullscreen,
  TCefBrowserHostRef_ExecuteChromeCommand,
  TCefBrowserHostRef_SetAxViewportCollapse;