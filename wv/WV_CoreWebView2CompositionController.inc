
//constructor
function CoreWebView2CompositionController_Create(const aBaseIntf: ICoreWebView2CompositionController): TCoreWebView2CompositionController; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2CompositionController.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2CompositionController_Initialized(AObj: TCoreWebView2CompositionController): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2CompositionController_BaseIntf(AObj: TCoreWebView2CompositionController; var Result: ICoreWebView2CompositionController); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
procedure CoreWebView2CompositionController_RootVisualTarget(AIsSet: LongBool; AObj: TCoreWebView2CompositionController; AValue: IUnknown; var Result: IUnknown); extdecl;
begin
  {$define handleExceptionFuncName :='RootVisualTarget'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RootVisualTarget := AValue;
  end else
    Result := AObj.RootVisualTarget;
  handleExceptionEnd
end;

//property
function CoreWebView2CompositionController_Cursor(AObj: TCoreWebView2CompositionController): HCURSOR; extdecl;
begin
  {$define handleExceptionFuncName :='Cursor'}
  handleExceptionBegin
  Result := AObj.Cursor;
  handleExceptionEnd
end;

//property
function CoreWebView2CompositionController_SystemCursorID(AObj: TCoreWebView2CompositionController): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='SystemCursorID'}
  handleExceptionBegin
  Result := AObj.SystemCursorID;
  handleExceptionEnd
end;

//property
procedure CoreWebView2CompositionController_AutomationProvider(AObj: TCoreWebView2CompositionController; var Result: IUnknown); extdecl;
begin
  {$define handleExceptionFuncName :='AutomationProvider'}
  handleExceptionBegin
  Result := AObj.AutomationProvider;
  handleExceptionEnd
end;

//function
function CoreWebView2CompositionController_AddAllBrowserEvents(AObj: TCoreWebView2CompositionController; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AddAllBrowserEvents'}
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2CompositionController_SendMouseInput(AObj: TCoreWebView2CompositionController; aEventKind: TWVMouseEventKind; aVirtualKeys: TWVMouseEventVirtualKeys; aMouseData: uint32; var aPoint: TPoint): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SendMouseInput'}
  handleExceptionBegin
  Result := AObj.SendMouseInput(aEventKind, aVirtualKeys, aMouseData, aPoint);
  handleExceptionEnd
end;

//function
function CoreWebView2CompositionController_SendPointerInput(AObj: TCoreWebView2CompositionController; aEventKind: TWVPointerEventKind; const aPointerInfo: ICoreWebView2PointerInfo): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SendPointerInput'}
  handleExceptionBegin
  Result := AObj.SendPointerInput(aEventKind, aPointerInfo);
  handleExceptionEnd
end;

//function
function CoreWebView2CompositionController_DragEnter(AObj: TCoreWebView2CompositionController; const dataObject: IDataObject; keyState: LongWord; point: tagPOINT; out OutEffect: LongWord): Integer; extdecl;
var
  RetOutEffect: LongWord;
begin
  {$define handleExceptionFuncName :='DragEnter'}
  handleExceptionBegin
  RetOutEffect := OutEffect;
  Result := AObj.DragEnter(dataObject, keyState, point, RetOutEffect);
  OutEffect := RetOutEffect;
  handleExceptionEnd
end;

//function
function CoreWebView2CompositionController_DragLeave(AObj: TCoreWebView2CompositionController): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='DragLeave'}
  handleExceptionBegin
  Result := AObj.DragLeave();
  handleExceptionEnd
end;

//function
function CoreWebView2CompositionController_DragOver(AObj: TCoreWebView2CompositionController; keyState: LongWord; point: tagPOINT; out OutEffect: LongWord): Integer; extdecl;
var
  RetOutEffect: LongWord;
begin
  {$define handleExceptionFuncName :='DragOver'}
  handleExceptionBegin
  RetOutEffect := OutEffect;
  Result := AObj.DragOver(keyState, point, RetOutEffect);
  OutEffect := RetOutEffect;
  handleExceptionEnd
end;

//function
function CoreWebView2CompositionController_Drop(AObj: TCoreWebView2CompositionController; const dataObject: IDataObject; keyState: LongWord; point: tagPOINT; out OutEffect: LongWord): Integer; extdecl;
var
  RetOutEffect: LongWord;
begin
  {$define handleExceptionFuncName :='Drop'}
  handleExceptionBegin
  RetOutEffect := OutEffect;
  Result := AObj.Drop(dataObject, keyState, point, RetOutEffect);
  OutEffect := RetOutEffect;
  handleExceptionEnd
end;


exports
  CoreWebView2CompositionController_Create,
  CoreWebView2CompositionController_Initialized,
  CoreWebView2CompositionController_BaseIntf,
  CoreWebView2CompositionController_RootVisualTarget,
  CoreWebView2CompositionController_Cursor,
  CoreWebView2CompositionController_SystemCursorID,
  CoreWebView2CompositionController_AutomationProvider,
  CoreWebView2CompositionController_AddAllBrowserEvents,
  CoreWebView2CompositionController_SendMouseInput,
  CoreWebView2CompositionController_SendPointerInput,
  CoreWebView2CompositionController_DragEnter,
  CoreWebView2CompositionController_DragLeave,
  CoreWebView2CompositionController_DragOver,
  CoreWebView2CompositionController_Drop;