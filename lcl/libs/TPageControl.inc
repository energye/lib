// constructor
function TPageControl_Create(TheOwner: TComponent): TPageControl; extdecl;
begin
  {$define handleExceptionID := 12900}
  handleExceptionBegin
  Result := TPageControl.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TPageControl_FindNextPage(AObj: TPageControl; CurPage: TTabSheet; GoForward: LongBool; CheckTabVisible: LongBool): TTabSheet; extdecl;
begin
  {$define handleExceptionID := 12901}
  handleExceptionBegin
  Result := AObj.FindNextPage(CurPage, GoForward, CheckTabVisible);
  handleExceptionEnd
end;

// function
function TPageControl_IndexOfTabAtWithIntX2(AObj: TPageControl; X: Integer; Y: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12902}
  handleExceptionBegin
  Result := AObj.IndexOfTabAt(X, Y);
  handleExceptionEnd
end;

// function
function TPageControl_IndexOfTabAtWithPoint(AObj: TPageControl; var P: TPoint): Integer; extdecl;
begin
  {$define handleExceptionID := 12903}
  handleExceptionBegin
  Result := AObj.IndexOfTabAt(P);
  handleExceptionEnd
end;

// function
function TPageControl_IndexOfPageAtWithIntX2(AObj: TPageControl; X: Integer; Y: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12904}
  handleExceptionBegin
  Result := AObj.IndexOfPageAt(X, Y);
  handleExceptionEnd
end;

// function
function TPageControl_IndexOfPageAtWithPoint(AObj: TPageControl; var P: TPoint): Integer; extdecl;
begin
  {$define handleExceptionID := 12905}
  handleExceptionBegin
  Result := AObj.IndexOfPageAt(P);
  handleExceptionEnd
end;

// function
function TPageControl_AddTabSheet(AObj: TPageControl): TTabSheet; extdecl;
begin
  {$define handleExceptionID := 12906}
  handleExceptionBegin
  Result := AObj.AddTabSheet();
  handleExceptionEnd
end;

// procedure
procedure TPageControl_Clear(AObj: TPageControl); extdecl;
begin
  {$define handleExceptionID := 12907}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TPageControl_SelectNextPageWithBool(AObj: TPageControl; GoForward: LongBool); extdecl;
begin
  {$define handleExceptionID := 12908}
  handleExceptionBegin
  AObj.SelectNextPage(GoForward);
  handleExceptionEnd
end;

// procedure
procedure TPageControl_SelectNextPageWithBoolX2(AObj: TPageControl; GoForward: LongBool; CheckTabVisible: LongBool); extdecl;
begin
  {$define handleExceptionID := 12909}
  handleExceptionBegin
  AObj.SelectNextPage(GoForward, CheckTabVisible);
  handleExceptionEnd
end;

// property
function TPageControl_ActivePageIndex(ASet: LongBool; AObj: TPageControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12910}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ActivePageIndex := AValue
  end else
    Result := AObj.ActivePageIndex;
  handleExceptionEnd
end;

// property
function TPageControl_PagesWithIntToTabSheet(AObj: TPageControl; Index: Integer): TTabSheet; extdecl;
begin
  {$define handleExceptionID := 12911}
  handleExceptionBegin
  Result := AObj.Pages[Index];
  handleExceptionEnd
end;

// property
function TPageControl_ActivePage(ASet: LongBool; AObj: TPageControl; AValue: TTabSheet): TTabSheet; extdecl;
begin
  {$define handleExceptionID := 12912}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ActivePage := AValue
  end else
    Result := AObj.ActivePage;
  handleExceptionEnd
end;

// property
function TPageControl_DragCursor(ASet: LongBool; AObj: TPageControl; AValue: TCursor): TCursor; extdecl;
begin
  {$define handleExceptionID := 12913}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragCursor := AValue
  end else
    Result := AObj.DragCursor;
  handleExceptionEnd
end;

// property
function TPageControl_DragKind(ASet: LongBool; AObj: TPageControl; AValue: TDragKind): TDragKind; extdecl;
begin
  {$define handleExceptionID := 12914}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragKind := AValue
  end else
    Result := AObj.DragKind;
  handleExceptionEnd
end;

// property
function TPageControl_DragMode(ASet: LongBool; AObj: TPageControl; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 12915}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DragMode := AValue
  end else
    Result := AObj.DragMode;
  handleExceptionEnd
end;

// property
function TPageControl_ParentFont(ASet: LongBool; AObj: TPageControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12916}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentFont := AValue
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

// property
function TPageControl_ParentShowHint(ASet: LongBool; AObj: TPageControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 12917}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentShowHint := AValue
  end else
    Result := AObj.ParentShowHint;
  handleExceptionEnd
end;

// property
function TPageControl_TabIndex(ASet: LongBool; AObj: TPageControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 12918}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TabIndex := AValue
  end else
    Result := AObj.TabIndex;
  handleExceptionEnd
end;

// event
procedure TPageControl_OnGetDockCaption(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetDockCaptionEvent}
  {$DEFINE EventName := OnGetDockCaption}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnChange(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnContextPopup(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent}
  {$DEFINE EventName := OnContextPopup}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnDragDrop(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnDragDrop}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnDragOver(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnDragOver}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnEndDock(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDock}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnEndDrag(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnEndDrag}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnGetSiteInfo(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTGetSiteInfoEvent}
  {$DEFINE EventName := OnGetSiteInfo}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnMouseDown(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnMouseEnter(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseEnter}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnMouseLeave(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnMouseMove(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnMouseUp(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnMouseWheel(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelEvent}
  {$DEFINE EventName := OnMouseWheel}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnMouseWheelDown(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelDown}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnMouseWheelUp(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseWheelUpDownEvent}
  {$DEFINE EventName := OnMouseWheelUp}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnStartDock(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDockEvent}
  {$DEFINE EventName := OnStartDock}
  LCLEventMethodCode
end;

// event
procedure TPageControl_OnStartDrag(AObj: TPageControl; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnStartDrag}
  LCLEventMethodCode
end;

function TPageControl_TClass(): TClass; extdecl;
begin
  Result := TPageControl;
end;

exports
  TPageControl_Create,
  TPageControl_FindNextPage,
  TPageControl_IndexOfTabAtWithIntX2,
  TPageControl_IndexOfTabAtWithPoint,
  TPageControl_IndexOfPageAtWithIntX2,
  TPageControl_IndexOfPageAtWithPoint,
  TPageControl_AddTabSheet,
  TPageControl_Clear,
  TPageControl_SelectNextPageWithBool,
  TPageControl_SelectNextPageWithBoolX2,
  TPageControl_ActivePageIndex,
  TPageControl_PagesWithIntToTabSheet,
  TPageControl_ActivePage,
  TPageControl_DragCursor,
  TPageControl_DragKind,
  TPageControl_DragMode,
  TPageControl_ParentFont,
  TPageControl_ParentShowHint,
  TPageControl_TabIndex,
  TPageControl_OnGetDockCaption,
  TPageControl_OnChange,
  TPageControl_OnContextPopup,
  TPageControl_OnDragDrop,
  TPageControl_OnDragOver,
  TPageControl_OnEndDock,
  TPageControl_OnEndDrag,
  TPageControl_OnGetSiteInfo,
  TPageControl_OnMouseDown,
  TPageControl_OnMouseEnter,
  TPageControl_OnMouseLeave,
  TPageControl_OnMouseMove,
  TPageControl_OnMouseUp,
  TPageControl_OnMouseWheel,
  TPageControl_OnMouseWheelDown,
  TPageControl_OnMouseWheelUp,
  TPageControl_OnStartDock,
  TPageControl_OnStartDrag,
  TPageControl_TClass;