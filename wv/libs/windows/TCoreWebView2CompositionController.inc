// constructor
function TCoreWebView2CompositionController_Create(const aBaseIntf: ICoreWebView2CompositionController): TCoreWebView2CompositionController; extdecl;
begin
  {$define handleExceptionID := 1200}
  handleExceptionBegin
  Result := TCoreWebView2CompositionController.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2CompositionController_AddAllBrowserEvents(AObj: TCoreWebView2CompositionController; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 1201}
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2CompositionController_SendMouseInput(AObj: TCoreWebView2CompositionController; aEventKind: TWVMouseEventKind; aVirtualKeys: TWVMouseEventVirtualKeys; aMouseData: cardinal; var aPoint: TPoint): LongBool; extdecl;
begin
  {$define handleExceptionID := 1202}
  handleExceptionBegin
  Result := AObj.SendMouseInput(aEventKind, aVirtualKeys, aMouseData, aPoint);
  handleExceptionEnd
end;

// function
function TCoreWebView2CompositionController_SendPointerInput(AObj: TCoreWebView2CompositionController; aEventKind: TWVPointerEventKind; const aPointerInfo: ICoreWebView2PointerInfo): LongBool; extdecl;
begin
  {$define handleExceptionID := 1203}
  handleExceptionBegin
  Result := AObj.SendPointerInput(aEventKind, aPointerInfo);
  handleExceptionEnd
end;

// function
function TCoreWebView2CompositionController_DragLeave(AObj: TCoreWebView2CompositionController): HResult; extdecl;
begin
  {$define handleExceptionID := 1204}
  handleExceptionBegin
  Result := AObj.DragLeave();
  handleExceptionEnd
end;

// function
function TCoreWebView2CompositionController_DragOver(AObj: TCoreWebView2CompositionController; keyState: LongWord; point: tagPOINT; var effect: LongWord): HResult; extdecl;
var
  Outeffect: LongWord;
begin
  {$define handleExceptionID := 1205}
  handleExceptionBegin
  Result := AObj.DragOver(keyState, point, Outeffect);
  effect := Outeffect;
  handleExceptionEnd
end;

// function
function TCoreWebView2CompositionController_GetNonClientRegionAtPoint(AObj: TCoreWebView2CompositionController; var point: TPoint): TWVNonClientRegionKind; extdecl;
begin
  {$define handleExceptionID := 1206}
  handleExceptionBegin
  Result := AObj.GetNonClientRegionAtPoint(point);
  handleExceptionEnd
end;

// function
procedure TCoreWebView2CompositionController_QueryNonClientRegion(AObj: TCoreWebView2CompositionController; Kind: TWVNonClientRegionKind; var Result: ICoreWebView2RegionRectCollectionView); extdecl;
begin
  {$define handleExceptionID := 1207}
  handleExceptionBegin
  Result := AObj.QueryNonClientRegion(Kind);
  handleExceptionEnd
end;

// property
function TCoreWebView2CompositionController_Initialized(AObj: TCoreWebView2CompositionController): LongBool; extdecl;
begin
  {$define handleExceptionID := 1208}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2CompositionController_BaseIntf(AObj: TCoreWebView2CompositionController; var Result: ICoreWebView2CompositionController); extdecl;
begin
  {$define handleExceptionID := 1209}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2CompositionController_RootVisualTarget(ASet: LongBool; AObj: TCoreWebView2CompositionController; AValue: IUnknown; var Result: IUnknown); extdecl;
begin
  {$define handleExceptionID := 1210}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RootVisualTarget := AValue
  end else
    Result := AObj.RootVisualTarget;
  handleExceptionEnd
end;

// property
function TCoreWebView2CompositionController_Cursor(AObj: TCoreWebView2CompositionController): HCURSOR; extdecl;
begin
  {$define handleExceptionID := 1211}
  handleExceptionBegin
  Result := AObj.Cursor;
  handleExceptionEnd
end;

// property
function TCoreWebView2CompositionController_SystemCursorID(AObj: TCoreWebView2CompositionController): cardinal; extdecl;
begin
  {$define handleExceptionID := 1212}
  handleExceptionBegin
  Result := AObj.SystemCursorID;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2CompositionController_AutomationProvider(AObj: TCoreWebView2CompositionController; var Result: IUnknown); extdecl;
begin
  {$define handleExceptionID := 1213}
  handleExceptionBegin
  Result := AObj.AutomationProvider;
  handleExceptionEnd
end;

exports
  TCoreWebView2CompositionController_Create,
  TCoreWebView2CompositionController_AddAllBrowserEvents,
  TCoreWebView2CompositionController_SendMouseInput,
  TCoreWebView2CompositionController_SendPointerInput,
  TCoreWebView2CompositionController_DragLeave,
  TCoreWebView2CompositionController_DragOver,
  TCoreWebView2CompositionController_GetNonClientRegionAtPoint,
  TCoreWebView2CompositionController_QueryNonClientRegion,
  TCoreWebView2CompositionController_Initialized,
  TCoreWebView2CompositionController_BaseIntf,
  TCoreWebView2CompositionController_RootVisualTarget,
  TCoreWebView2CompositionController_Cursor,
  TCoreWebView2CompositionController_SystemCursorID,
  TCoreWebView2CompositionController_AutomationProvider;