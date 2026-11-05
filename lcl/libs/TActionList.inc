// constructor
function TActionList_Create(AOwner: TComponent): TActionList; extdecl;
begin
  {$define handleExceptionID := 15300}
  handleExceptionBegin
  Result := TActionList.Create(AOwner);
  handleExceptionEnd
end;

// event
procedure TActionList_OnChange(AObj: TActionList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TActionList_OnExecute(AObj: TActionList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTActionEvent}
  {$DEFINE EventName := OnExecute}
  LCLEventMethodCode
end;

// event
procedure TActionList_OnUpdate(AObj: TActionList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTActionEvent}
  {$DEFINE EventName := OnUpdate}
  LCLEventMethodCode
end;

function TActionList_TClass(): TClass; extdecl;
begin
  Result := TActionList;
end;

exports
  TActionList_Create,
  TActionList_OnChange,
  TActionList_OnExecute,
  TActionList_OnUpdate,
  TActionList_TClass;