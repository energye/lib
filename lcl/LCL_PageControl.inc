
//constructor
function PageControl_Create(TheOwner: TComponent): TPageControl; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TPageControl.Create(TheOwner);
  handleExceptionEnd
end;

//property
function PageControl_ActivePageIndex(AIsSet: LongBool; AObj: TPageControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ActivePageIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ActivePageIndex := AValue;
  end else
    Result := AObj.ActivePageIndex;
  handleExceptionEnd
end;

//property
function PageControl_PagesForTabSheet(AObj: TPageControl; Index: Integer): TTabSheet; extdecl;
begin
  {$define handleExceptionFuncName :='PagesForTabSheet'}
  handleExceptionBegin
  Result := AObj.Pages[Index];
  handleExceptionEnd
end;

//property
function PageControl_ActivePage(AIsSet: LongBool; AObj: TPageControl; AValue: TTabSheet): TTabSheet; extdecl;
begin
  {$define handleExceptionFuncName :='ActivePage'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ActivePage := AValue;
  end else
    Result := AObj.ActivePage;
  handleExceptionEnd
end;

//property
function PageControl_DragCursor(AIsSet: LongBool; AObj: TPageControl; AValue: TCursor): TCursor; extdecl;
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
function PageControl_DragKind(AIsSet: LongBool; AObj: TPageControl; AValue: TDragKind): TDragKind; extdecl;
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
function PageControl_DragMode(AIsSet: LongBool; AObj: TPageControl; AValue: TDragMode): TDragMode; extdecl;
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
function PageControl_ParentFont(AIsSet: LongBool; AObj: TPageControl; AValue: LongBool): LongBool; extdecl;
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
function PageControl_ParentShowHint(AIsSet: LongBool; AObj: TPageControl; AValue: LongBool): LongBool; extdecl;
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
function PageControl_TabIndex(AIsSet: LongBool; AObj: TPageControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='TabIndex'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TabIndex := AValue;
  end else
    Result := AObj.TabIndex;
  handleExceptionEnd
end;

//function
function PageControl_FindNextPage(AObj: TPageControl; CurPage: TTabSheet; GoForward, CheckTabVisible: LongBool): TTabSheet; extdecl;
begin
  {$define handleExceptionFuncName :='FindNextPage'}
  handleExceptionBegin
  Result := AObj.FindNextPage(CurPage, GoForward, CheckTabVisible);
  handleExceptionEnd
end;

//function
function PageControl_IndexOfTabAt(AObj: TPageControl; X, Y: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='IndexOfTabAt'}
  handleExceptionBegin
  Result := AObj.IndexOfTabAt(X, Y);
  handleExceptionEnd
end;

//function
function PageControl_IndexOfTabAt1(AObj: TPageControl; var P: TPoint): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='IndexOfTabAt1'}
  handleExceptionBegin
  Result := AObj.IndexOfTabAt(P);
  handleExceptionEnd
end;

//function
function PageControl_IndexOfPageAt(AObj: TPageControl; X, Y: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='IndexOfPageAt'}
  handleExceptionBegin
  Result := AObj.IndexOfPageAt(X, Y);
  handleExceptionEnd
end;

//function
function PageControl_IndexOfPageAt1(AObj: TPageControl; var P: TPoint): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='IndexOfPageAt1'}
  handleExceptionBegin
  Result := AObj.IndexOfPageAt(P);
  handleExceptionEnd
end;

//function
function PageControl_AddTabSheet(AObj: TPageControl): TTabSheet; extdecl;
begin
  {$define handleExceptionFuncName :='AddTabSheet'}
  handleExceptionBegin
  Result := AObj.AddTabSheet();
  handleExceptionEnd
end;

//function
function PageControl_Class(): TClass; extdecl;
begin
  Result := TPageControl;
end;

//procedure
procedure PageControl_Clear(AObj: TPageControl); extdecl;
begin
  {$define handleExceptionFuncName :='Clear'}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure PageControl_SelectNextPage(AObj: TPageControl; GoForward: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SelectNextPage'}
  handleExceptionBegin
  AObj.SelectNextPage(GoForward);
  handleExceptionEnd
end;

//procedure
procedure PageControl_SelectNextPage1(AObj: TPageControl; GoForward: LongBool; CheckTabVisible: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SelectNextPage1'}
  handleExceptionBegin
  AObj.SelectNextPage(GoForward, CheckTabVisible);
  handleExceptionEnd
end;

//property event
procedure PageControl_SetOnGetDockCaption(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetDockCaptionEvent}
  {$DEFINE EventName := OnGetDockCaption}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnChange(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnContextPopup(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnDragDrop(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnDragOver(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnEndDock(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnEndDrag(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnGetSiteInfo(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnMouseDown(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnMouseEnter(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnMouseLeave(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnMouseMove(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnMouseUp(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnMouseWheel(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnMouseWheelDown(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnMouseWheelUp(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnStartDock(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  EventMethodCode
end;

//property event
procedure PageControl_SetOnStartDrag(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  EventMethodCode
end;


exports
  PageControl_Create,
  PageControl_ActivePageIndex,
  PageControl_PagesForTabSheet,
  PageControl_ActivePage,
  PageControl_DragCursor,
  PageControl_DragKind,
  PageControl_DragMode,
  PageControl_ParentFont,
  PageControl_ParentShowHint,
  PageControl_TabIndex,
  PageControl_FindNextPage,
  PageControl_IndexOfTabAt,
  PageControl_IndexOfTabAt1,
  PageControl_IndexOfPageAt,
  PageControl_IndexOfPageAt1,
  PageControl_AddTabSheet,
  PageControl_Class,
  PageControl_Clear,
  PageControl_SelectNextPage,
  PageControl_SelectNextPage1,
  PageControl_SetOnGetDockCaption,
  PageControl_SetOnChange,
  PageControl_SetOnContextPopup,
  PageControl_SetOnDragDrop,
  PageControl_SetOnDragOver,
  PageControl_SetOnEndDock,
  PageControl_SetOnEndDrag,
  PageControl_SetOnGetSiteInfo,
  PageControl_SetOnMouseDown,
  PageControl_SetOnMouseEnter,
  PageControl_SetOnMouseLeave,
  PageControl_SetOnMouseMove,
  PageControl_SetOnMouseUp,
  PageControl_SetOnMouseWheel,
  PageControl_SetOnMouseWheelDown,
  PageControl_SetOnMouseWheelUp,
  PageControl_SetOnStartDock,
  PageControl_SetOnStartDrag;