// constructor
function TExtendedNotebook_Create(TheOwner: TComponent): TExtendedNotebook; extdecl;
begin
  {$define handleExceptionID := 34400}
  handleExceptionBegin
  Result := TExtendedNotebook.Create(TheOwner);
  handleExceptionEnd
end;

// procedure
procedure TExtendedNotebook_BeginDragTab(AObj: TExtendedNotebook; ATabIndex: Integer; Immediate: LongBool; Threshold: Integer); extdecl;
begin
  {$define handleExceptionID := 34401}
  handleExceptionBegin
  AObj.BeginDragTab(ATabIndex, Immediate, Threshold);
  handleExceptionEnd
end;

// property
function TExtendedNotebook_DraggingTabIndex(AObj: TExtendedNotebook): Integer; extdecl;
begin
  {$define handleExceptionID := 34402}
  handleExceptionBegin
  Result := AObj.DraggingTabIndex;
  handleExceptionEnd
end;

// property
function TExtendedNotebook_TabDragMode(ASet: LongBool; AObj: TExtendedNotebook; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 34403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TabDragMode := AValue
  end else
    Result := AObj.TabDragMode;
  handleExceptionEnd
end;

// property
function TExtendedNotebook_TabDragAcceptMode(ASet: LongBool; AObj: TExtendedNotebook; AValue: TDragMode): TDragMode; extdecl;
begin
  {$define handleExceptionID := 34404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TabDragAcceptMode := AValue
  end else
    Result := AObj.TabDragAcceptMode;
  handleExceptionEnd
end;

// event
procedure TExtendedNotebook_OnTabDragOver(AObj: TExtendedNotebook; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent}
  {$DEFINE EventName := OnTabDragOver}
  LCLEventMethodCode
end;

// event
procedure TExtendedNotebook_OnTabDragOverEx(AObj: TExtendedNotebook; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotebookTabDragOverEvent}
  {$DEFINE EventName := OnTabDragOverEx}
  LCLEventMethodCode
end;

// event
procedure TExtendedNotebook_OnTabDragDrop(AObj: TExtendedNotebook; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent}
  {$DEFINE EventName := OnTabDragDrop}
  LCLEventMethodCode
end;

// event
procedure TExtendedNotebook_OnTabDragDropEx(AObj: TExtendedNotebook; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotebookTabDragDropEvent}
  {$DEFINE EventName := OnTabDragDropEx}
  LCLEventMethodCode
end;

// event
procedure TExtendedNotebook_OnTabEndDrag(AObj: TExtendedNotebook; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent}
  {$DEFINE EventName := OnTabEndDrag}
  LCLEventMethodCode
end;

// event
procedure TExtendedNotebook_OnTabStartDrag(AObj: TExtendedNotebook; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTStartDragEvent}
  {$DEFINE EventName := OnTabStartDrag}
  LCLEventMethodCode
end;

function TExtendedNotebook_TClass(): TClass; extdecl;
begin
  Result := TExtendedNotebook;
end;

exports
  TExtendedNotebook_Create,
  TExtendedNotebook_BeginDragTab,
  TExtendedNotebook_DraggingTabIndex,
  TExtendedNotebook_TabDragMode,
  TExtendedNotebook_TabDragAcceptMode,
  TExtendedNotebook_OnTabDragOver,
  TExtendedNotebook_OnTabDragOverEx,
  TExtendedNotebook_OnTabDragDrop,
  TExtendedNotebook_OnTabDragDropEx,
  TExtendedNotebook_OnTabEndDrag,
  TExtendedNotebook_OnTabStartDrag,
  TExtendedNotebook_TClass;