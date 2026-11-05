// constructor
function TEngDragHandler_Create(out IntfDragHandler: ICefDragHandler): TEngDragHandler; extdecl;
begin
  {$define handleExceptionID := 12200}
  handleExceptionBegin
  Result := TEngDragHandler.Create();
  IntfDragHandler := Result as ICefDragHandler;
  handleExceptionEnd
end;

// event
procedure TEngDragHandler_OnDragDragEnter(AObj: TEngDragHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDragHandler_TOnDragDragEnterEvent}
  {$DEFINE EventName := OnDragDragEnter}
  CEFEventMethodCode
end;

// event
procedure TEngDragHandler_OnDragDraggableRegionsChanged(AObj: TEngDragHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDragHandler_TOnDragDraggableRegionsChangedEvent}
  {$DEFINE EventName := OnDragDraggableRegionsChanged}
  CEFEventMethodCode
end;

exports
  TEngDragHandler_Create,
  TEngDragHandler_OnDragDragEnter,
  TEngDragHandler_OnDragDraggableRegionsChanged;