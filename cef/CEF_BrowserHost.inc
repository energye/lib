
//function
procedure CefBrowserHost_UnWrap(data: Pointer; var Result: ICefBrowserHost); extdecl;
begin
  Result := TCefBrowserHostRef.UnWrap(data);
end;

//function
procedure CefBrowserHost_GetBrowser(AObj: ICefBrowserHost; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionFuncName :='GetBrowser'}
  handleExceptionBegin
  Result := AObj.GetBrowser();
  handleExceptionEnd
end;

//function
function CefBrowserHost_TryCloseBrowser(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='TryCloseBrowser'}
  handleExceptionBegin
  Result := AObj.TryCloseBrowser();
  handleExceptionEnd
end;

//function
function CefBrowserHost_GetWindowHandle(AObj: ICefBrowserHost): TCefWindowHandle; extdecl;
begin
  {$define handleExceptionFuncName :='GetWindowHandle'}
  handleExceptionBegin
  Result := AObj.GetWindowHandle();
  handleExceptionEnd
end;

//function
function CefBrowserHost_GetOpenerWindowHandle(AObj: ICefBrowserHost): TCefWindowHandle; extdecl;
begin
  {$define handleExceptionFuncName :='GetOpenerWindowHandle'}
  handleExceptionBegin
  Result := AObj.GetOpenerWindowHandle();
  handleExceptionEnd
end;

//function
function CefBrowserHost_HasView(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasView'}
  handleExceptionBegin
  Result := AObj.HasView();
  handleExceptionEnd
end;

//function
procedure CefBrowserHost_GetRequestContext(AObj: ICefBrowserHost; var Result: ICefRequestContext); extdecl;
begin
  {$define handleExceptionFuncName :='GetRequestContext'}
  handleExceptionBegin
  Result := AObj.GetRequestContext();
  handleExceptionEnd
end;

//function
procedure CefBrowserHost_GetZoomLevel(AObj: ICefBrowserHost; var Result: Double); extdecl;
begin
  {$define handleExceptionFuncName :='GetZoomLevel'}
  handleExceptionBegin
  Result := AObj.GetZoomLevel();
  handleExceptionEnd
end;

//function
function CefBrowserHost_HasDevTools(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasDevTools'}
  handleExceptionBegin
  Result := AObj.HasDevTools();
  handleExceptionEnd
end;

//function
function CefBrowserHost_SendDevToolsMessage(AObj: ICefBrowserHost; const message: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SendDevToolsMessage'}
  handleExceptionBegin
  Result := AObj.SendDevToolsMessage(message);
  handleExceptionEnd
end;

//function
function CefBrowserHost_ExecuteDevToolsMethod(AObj: ICefBrowserHost; messageid: integer; const method: PChar; const params: ICefDictionaryValue): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ExecuteDevToolsMethod'}
  handleExceptionBegin
  Result := AObj.ExecuteDevToolsMethod(messageid, method, params);
  handleExceptionEnd
end;

//function
procedure CefBrowserHost_AddDevToolsMessageObserver(AObj: ICefBrowserHost; const observer: ICefDevToolsMessageObserver; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionFuncName :='AddDevToolsMessageObserver'}
  handleExceptionBegin
  Result := AObj.AddDevToolsMessageObserver(observer);
  handleExceptionEnd
end;

//function
function CefBrowserHost_IsWindowRenderingDisabled(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsWindowRenderingDisabled'}
  handleExceptionBegin
  Result := AObj.IsWindowRenderingDisabled();
  handleExceptionEnd
end;

//function
function CefBrowserHost_GetWindowlessFrameRate(AObj: ICefBrowserHost): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetWindowlessFrameRate'}
  handleExceptionBegin
  Result := AObj.GetWindowlessFrameRate();
  handleExceptionEnd
end;

//function
procedure CefBrowserHost_GetVisibleNavigationEntry(AObj: ICefBrowserHost; var Result: ICefNavigationEntry); extdecl;
begin
  {$define handleExceptionFuncName :='GetVisibleNavigationEntry'}
  handleExceptionBegin
  Result := AObj.GetVisibleNavigationEntry();
  handleExceptionEnd
end;

//function
procedure CefBrowserHost_GetExtension(AObj: ICefBrowserHost; var Result: ICefExtension); extdecl;
begin
  {$define handleExceptionFuncName :='GetExtension'}
  handleExceptionBegin
  Result := AObj.GetExtension();
  handleExceptionEnd
end;

//function
function CefBrowserHost_IsBackgroundHost(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsBackgroundHost'}
  handleExceptionBegin
  Result := AObj.IsBackgroundHost();
  handleExceptionEnd
end;

//function
function CefBrowserHost_IsAudioMuted(AObj: ICefBrowserHost): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsAudioMuted'}
  handleExceptionBegin
  Result := AObj.IsAudioMuted();
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_CloseBrowser(AObj: ICefBrowserHost; forceClose: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='CloseBrowser'}
  handleExceptionBegin
  AObj.CloseBrowser(forceClose);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_SetFocus(AObj: ICefBrowserHost; focus: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SetFocus'}
  handleExceptionBegin
  AObj.SetFocus(focus);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_SetZoomLevel(AObj: ICefBrowserHost; var zoomLevel: Double); extdecl;
begin
  {$define handleExceptionFuncName :='SetZoomLevel'}
  handleExceptionBegin
  AObj.SetZoomLevel(zoomLevel);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_RunFileDialog(AObj: ICefBrowserHost; mode: TCefFileDialogMode; const title,  defaultFilePath: PChar; const acceptFilters: TStrings; selectedAcceptFilter: Integer; const callback: ICefRunFileDialogCallback); extdecl;
begin
  {$define handleExceptionFuncName :='RunFileDialog'}
  handleExceptionBegin
  AObj.RunFileDialog(mode, title,  defaultFilePath, acceptFilters, selectedAcceptFilter, callback);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_StartDownload(AObj: ICefBrowserHost; const url: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='StartDownload'}
  handleExceptionBegin
  AObj.StartDownload(url);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_DownloadImage(AObj: ICefBrowserHost; const imageUrl: PChar; isFavicon: LongBool; maxImageSize: uint32; bypassCache: LongBool; const callback: ICefDownloadImageCallback); extdecl;
begin
  {$define handleExceptionFuncName :='DownloadImage'}
  handleExceptionBegin
  AObj.DownloadImage(imageUrl, isFavicon, maxImageSize, bypassCache, callback);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_Print(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionFuncName :='Print'}
  handleExceptionBegin
  AObj.Print();
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_PrintToPdf(AObj: ICefBrowserHost; const path: PChar; settings: PEngPdfPrintSettingsPtr; const callback: ICefPdfPrintCallback); extdecl;
var
  Insettings: TCefPdfPrintSettings;
begin
  {$define handleExceptionFuncName :='PrintToPdf'}
  handleExceptionBegin
  Insettings := EngPdfPrintSettingsToPas(settings^);
  AObj.PrintToPdf(path, @Insettings, callback);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_Find(AObj: ICefBrowserHost; identifier: Integer; const searchText: PChar; forward,  matchCase,  findNext: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='Find'}
  handleExceptionBegin
  AObj.Find(identifier, searchText, forward,  matchCase,  findNext);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_StopFinding(AObj: ICefBrowserHost; clearSelection: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='StopFinding'}
  handleExceptionBegin
  AObj.StopFinding(clearSelection);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_ShowDevTools(AObj: ICefBrowserHost; const windowInfo: PEngWindowInfoPtr; const client: ICefClient; const settings: PEngBrowserSettingsPtr; inspectElementAt: PCefPoint); extdecl;
var
  InwindowInfo: TCefWindowInfo;
  Insettings: TCefBrowserSettings;
begin
  {$define handleExceptionFuncName :='ShowDevTools'}
  handleExceptionBegin
  InwindowInfo := EngWindowInfoToPas(windowInfo^);
  Insettings := EngBrowserSettingsToPas(settings^);
  AObj.ShowDevTools(@InwindowInfo, client, @Insettings, inspectElementAt);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_CloseDevTools(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionFuncName :='CloseDevTools'}
  handleExceptionBegin
  AObj.CloseDevTools();
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_GetNavigationEntries(AObj: ICefBrowserHost; const visitor: ICefNavigationEntryVisitor; currentOnly: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='GetNavigationEntries'}
  handleExceptionBegin
  AObj.GetNavigationEntries(visitor, currentOnly);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_ReplaceMisspelling(AObj: ICefBrowserHost; const word: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='ReplaceMisspelling'}
  handleExceptionBegin
  AObj.ReplaceMisspelling(word);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_AddWordToDictionary(AObj: ICefBrowserHost; const word: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='AddWordToDictionary'}
  handleExceptionBegin
  AObj.AddWordToDictionary(word);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_WasResized(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionFuncName :='WasResized'}
  handleExceptionBegin
  AObj.WasResized();
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_NotifyScreenInfoChanged(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionFuncName :='NotifyScreenInfoChanged'}
  handleExceptionBegin
  AObj.NotifyScreenInfoChanged();
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_WasHidden(AObj: ICefBrowserHost; hidden: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='WasHidden'}
  handleExceptionBegin
  AObj.WasHidden(hidden);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_Invalidate(AObj: ICefBrowserHost; type_: TCefPaintElementType); extdecl;
begin
  {$define handleExceptionFuncName :='Invalidate'}
  handleExceptionBegin
  AObj.Invalidate(type_);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_SendExternalBeginFrame(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionFuncName :='SendExternalBeginFrame'}
  handleExceptionBegin
  AObj.SendExternalBeginFrame();
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_SendKeyEvent(AObj: ICefBrowserHost; const event: PCefKeyEvent); extdecl;
begin
  {$define handleExceptionFuncName :='SendKeyEvent'}
  handleExceptionBegin
  AObj.SendKeyEvent(event);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_SendMouseClickEvent(AObj: ICefBrowserHost; const event: PCefMouseEvent; type_: TCefMouseButtonType; mouseUp: LongBool; clickCount: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='SendMouseClickEvent'}
  handleExceptionBegin
  AObj.SendMouseClickEvent(event, type_, mouseUp, clickCount);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_SendMouseMoveEvent(AObj: ICefBrowserHost; const event: PCefMouseEvent; mouseLeave: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SendMouseMoveEvent'}
  handleExceptionBegin
  AObj.SendMouseMoveEvent(event, mouseLeave);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_SendMouseWheelEvent(AObj: ICefBrowserHost; const event: PCefMouseEvent; deltaX,  deltaY: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='SendMouseWheelEvent'}
  handleExceptionBegin
  AObj.SendMouseWheelEvent(event, deltaX,  deltaY);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_SendTouchEvent(AObj: ICefBrowserHost; const event: PCefTouchEvent); extdecl;
begin
  {$define handleExceptionFuncName :='SendTouchEvent'}
  handleExceptionBegin
  AObj.SendTouchEvent(event);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_SendFocusEvent(AObj: ICefBrowserHost; aSetFocus: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SendFocusEvent'}
  handleExceptionBegin
  AObj.SendFocusEvent(aSetFocus);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_SendCaptureLostEvent(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionFuncName :='SendCaptureLostEvent'}
  handleExceptionBegin
  AObj.SendCaptureLostEvent();
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_NotifyMoveOrResizeStarted(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionFuncName :='NotifyMoveOrResizeStarted'}
  handleExceptionBegin
  AObj.NotifyMoveOrResizeStarted();
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_SetWindowlessFrameRate(AObj: ICefBrowserHost; frameRate: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='SetWindowlessFrameRate'}
  handleExceptionBegin
  AObj.SetWindowlessFrameRate(frameRate);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_IMECommitText(AObj: ICefBrowserHost; const text: PChar; const replacementrange: PCefRange; relativecursorpos: integer); extdecl;
begin
  {$define handleExceptionFuncName :='IMECommitText'}
  handleExceptionBegin
  AObj.IMECommitText(text, replacementrange, relativecursorpos);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_IMEFinishComposingText(AObj: ICefBrowserHost; keepselection: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='IMEFinishComposingText'}
  handleExceptionBegin
  AObj.IMEFinishComposingText(keepselection);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_IMECancelComposition(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionFuncName :='IMECancelComposition'}
  handleExceptionBegin
  AObj.IMECancelComposition();
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_DragTargetDragEnter(AObj: ICefBrowserHost; const dragData: ICefDragData; const event: PCefMouseEvent; allowedOps: TCefDragOperations); extdecl;
begin
  {$define handleExceptionFuncName :='DragTargetDragEnter'}
  handleExceptionBegin
  AObj.DragTargetDragEnter(dragData, event, allowedOps);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_DragTargetDragOver(AObj: ICefBrowserHost; const event: PCefMouseEvent; allowedOps: TCefDragOperations); extdecl;
begin
  {$define handleExceptionFuncName :='DragTargetDragOver'}
  handleExceptionBegin
  AObj.DragTargetDragOver(event, allowedOps);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_DragTargetDragLeave(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionFuncName :='DragTargetDragLeave'}
  handleExceptionBegin
  AObj.DragTargetDragLeave();
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_DragTargetDrop(AObj: ICefBrowserHost; const event: PCefMouseEvent); extdecl;
begin
  {$define handleExceptionFuncName :='DragTargetDrop'}
  handleExceptionBegin
  AObj.DragTargetDrop(event);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_DragSourceEndedAt(AObj: ICefBrowserHost; x,  y: Integer; op: TCefDragOperation); extdecl;
begin
  {$define handleExceptionFuncName :='DragSourceEndedAt'}
  handleExceptionBegin
  AObj.DragSourceEndedAt(x,  y, op);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_DragSourceSystemDragEnded(AObj: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionFuncName :='DragSourceSystemDragEnded'}
  handleExceptionBegin
  AObj.DragSourceSystemDragEnded();
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_SetAccessibilityState(AObj: ICefBrowserHost; accessibilityState: TCefState); extdecl;
begin
  {$define handleExceptionFuncName :='SetAccessibilityState'}
  handleExceptionBegin
  AObj.SetAccessibilityState(accessibilityState);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_SetAutoResizeEnabled(AObj: ICefBrowserHost; enabled: LongBool; const minsize,  maxsize: PCefSize); extdecl;
begin
  {$define handleExceptionFuncName :='SetAutoResizeEnabled'}
  handleExceptionBegin
  AObj.SetAutoResizeEnabled(enabled, minsize,  maxsize);
  handleExceptionEnd
end;

//procedure
procedure CefBrowserHost_SetAudioMuted(AObj: ICefBrowserHost; mute: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SetAudioMuted'}
  handleExceptionBegin
  AObj.SetAudioMuted(mute);
  handleExceptionEnd
end;


exports
  CefBrowserHost_UnWrap,
  CefBrowserHost_GetBrowser,
  CefBrowserHost_TryCloseBrowser,
  CefBrowserHost_GetWindowHandle,
  CefBrowserHost_GetOpenerWindowHandle,
  CefBrowserHost_HasView,
  CefBrowserHost_GetRequestContext,
  CefBrowserHost_GetZoomLevel,
  CefBrowserHost_HasDevTools,
  CefBrowserHost_SendDevToolsMessage,
  CefBrowserHost_ExecuteDevToolsMethod,
  CefBrowserHost_AddDevToolsMessageObserver,
  CefBrowserHost_IsWindowRenderingDisabled,
  CefBrowserHost_GetWindowlessFrameRate,
  CefBrowserHost_GetVisibleNavigationEntry,
  CefBrowserHost_GetExtension,
  CefBrowserHost_IsBackgroundHost,
  CefBrowserHost_IsAudioMuted,
  CefBrowserHost_CloseBrowser,
  CefBrowserHost_SetFocus,
  CefBrowserHost_SetZoomLevel,
  CefBrowserHost_RunFileDialog,
  CefBrowserHost_StartDownload,
  CefBrowserHost_DownloadImage,
  CefBrowserHost_Print,
  CefBrowserHost_PrintToPdf,
  CefBrowserHost_Find,
  CefBrowserHost_StopFinding,
  CefBrowserHost_ShowDevTools,
  CefBrowserHost_CloseDevTools,
  CefBrowserHost_GetNavigationEntries,
  CefBrowserHost_ReplaceMisspelling,
  CefBrowserHost_AddWordToDictionary,
  CefBrowserHost_WasResized,
  CefBrowserHost_NotifyScreenInfoChanged,
  CefBrowserHost_WasHidden,
  CefBrowserHost_Invalidate,
  CefBrowserHost_SendExternalBeginFrame,
  CefBrowserHost_SendKeyEvent,
  CefBrowserHost_SendMouseClickEvent,
  CefBrowserHost_SendMouseMoveEvent,
  CefBrowserHost_SendMouseWheelEvent,
  CefBrowserHost_SendTouchEvent,
  CefBrowserHost_SendFocusEvent,
  CefBrowserHost_SendCaptureLostEvent,
  CefBrowserHost_NotifyMoveOrResizeStarted,
  CefBrowserHost_SetWindowlessFrameRate,
  CefBrowserHost_IMECommitText,
  CefBrowserHost_IMEFinishComposingText,
  CefBrowserHost_IMECancelComposition,
  CefBrowserHost_DragTargetDragEnter,
  CefBrowserHost_DragTargetDragOver,
  CefBrowserHost_DragTargetDragLeave,
  CefBrowserHost_DragTargetDrop,
  CefBrowserHost_DragSourceEndedAt,
  CefBrowserHost_DragSourceSystemDragEnded,
  CefBrowserHost_SetAccessibilityState,
  CefBrowserHost_SetAutoResizeEnabled,
  CefBrowserHost_SetAudioMuted;