// constructor
function TDesigner_Create(): TDesigner; extdecl;
begin
  {$define handleExceptionID := 35200}
  handleExceptionBegin
  Result := TDesigner.Create();
  handleExceptionEnd
end;

// event
procedure TDesigner_OnIsDesignMsg(AObj: TDesigner; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDesignerIsDesignMsgEvent}
  {$DEFINE EventName := OnIsDesignMsg}
  LCLEventMethodCode
end;

// event
procedure TDesigner_OnUTF8KeyPress(AObj: TDesigner; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDesignerUTF8KeyPressEvent}
  {$DEFINE EventName := OnUTF8KeyPress}
  LCLEventMethodCode
end;

// event
procedure TDesigner_OnModified(AObj: TDesigner; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDesignerModifiedEvent}
  {$DEFINE EventName := OnModified}
  LCLEventMethodCode
end;

// event
procedure TDesigner_OnNotification(AObj: TDesigner; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDesignerNotificationEvent}
  {$DEFINE EventName := OnNotification}
  LCLEventMethodCode
end;

// event
procedure TDesigner_OnPaintGrid(AObj: TDesigner; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDesignerPaintGridEvent}
  {$DEFINE EventName := OnPaintGrid}
  LCLEventMethodCode
end;

// event
procedure TDesigner_OnValidateRename(AObj: TDesigner; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDesignerValidateRenameEvent}
  {$DEFINE EventName := OnValidateRename}
  LCLEventMethodCode
end;

// event
procedure TDesigner_OnGetShiftState(AObj: TDesigner; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDesignerGetShiftStateEvent}
  {$DEFINE EventName := OnGetShiftState}
  LCLEventMethodCode
end;

// event
procedure TDesigner_OnSelectOnlyThisComponent(AObj: TDesigner; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDesignerSelectOnlyThisComponentEvent}
  {$DEFINE EventName := OnSelectOnlyThisComponent}
  LCLEventMethodCode
end;

// event
procedure TDesigner_OnUniqueName(AObj: TDesigner; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDesignerUniqueNameEvent}
  {$DEFINE EventName := OnUniqueName}
  LCLEventMethodCode
end;

// event
procedure TDesigner_OnPrepareFreeDesigner(AObj: TDesigner; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDesignerPrepareFreeDesignerEvent}
  {$DEFINE EventName := OnPrepareFreeDesigner}
  LCLEventMethodCode
end;

exports
  TDesigner_Create,
  TDesigner_OnIsDesignMsg,
  TDesigner_OnUTF8KeyPress,
  TDesigner_OnModified,
  TDesigner_OnNotification,
  TDesigner_OnPaintGrid,
  TDesigner_OnValidateRename,
  TDesigner_OnGetShiftState,
  TDesigner_OnSelectOnlyThisComponent,
  TDesigner_OnUniqueName,
  TDesigner_OnPrepareFreeDesigner;