// constructor
function TCustomVTEditLink_Create(out IntfVTEditLink: IVTEditLink): TCustomVTEditLink; extdecl;
begin
  {$define handleExceptionID := 35000}
  handleExceptionBegin
  Result := TCustomVTEditLink.Create();
  IntfVTEditLink := Result as IVTEditLink;
  handleExceptionEnd
end;

// event
procedure TCustomVTEditLink_OnBeginEdit(AObj: TCustomVTEditLink; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeginCancelEndEditEvent}
  {$DEFINE EventName := OnBeginEdit}
  LCLEventMethodCode
end;

// event
procedure TCustomVTEditLink_OnCancelEdit(AObj: TCustomVTEditLink; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeginCancelEndEditEvent}
  {$DEFINE EventName := OnCancelEdit}
  LCLEventMethodCode
end;

// event
procedure TCustomVTEditLink_OnEndEdit(AObj: TCustomVTEditLink; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTBeginCancelEndEditEvent}
  {$DEFINE EventName := OnEndEdit}
  LCLEventMethodCode
end;

// event
procedure TCustomVTEditLink_OnPrepareEdit(AObj: TCustomVTEditLink; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTPrepareEditEvent}
  {$DEFINE EventName := OnPrepareEdit}
  LCLEventMethodCode
end;

// event
procedure TCustomVTEditLink_OnGetBounds(AObj: TCustomVTEditLink; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTGetBoundsEvent}
  {$DEFINE EventName := OnGetBounds}
  LCLEventMethodCode
end;

// event
procedure TCustomVTEditLink_OnProcessMessage(AObj: TCustomVTEditLink; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTProcessMessageEvent}
  {$DEFINE EventName := OnProcessMessage}
  LCLEventMethodCode
end;

// event
procedure TCustomVTEditLink_OnSetBounds(AObj: TCustomVTEditLink; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTVTSetBoundsEvent}
  {$DEFINE EventName := OnSetBounds}
  LCLEventMethodCode
end;

// event
procedure TCustomVTEditLink_OnDestroy(AObj: TCustomVTEditLink; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDestroy}
  LCLEventMethodCode
end;

exports
  TCustomVTEditLink_Create,
  TCustomVTEditLink_OnBeginEdit,
  TCustomVTEditLink_OnCancelEdit,
  TCustomVTEditLink_OnEndEdit,
  TCustomVTEditLink_OnPrepareEdit,
  TCustomVTEditLink_OnGetBounds,
  TCustomVTEditLink_OnProcessMessage,
  TCustomVTEditLink_OnSetBounds,
  TCustomVTEditLink_OnDestroy;