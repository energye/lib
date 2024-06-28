
//constructor
function ActionList_Create(AOwner: TComponent): TActionList; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TActionList.Create(AOwner);
  handleExceptionEnd
end;

//function
function ActionList_Class(): TClass; extdecl;
begin
  Result := TActionList;
end;

//property event
procedure ActionList_SetOnChange(AObj: TActionList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//property event
procedure ActionList_SetOnExecute(AObj: TActionList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTActionEvent}
  {$DEFINE EventName := OnExecute}
  EventMethodCode
end;

//property event
procedure ActionList_SetOnUpdate(AObj: TActionList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTActionEvent}
  {$DEFINE EventName := OnUpdate}
  EventMethodCode
end;


exports
  ActionList_Create,
  ActionList_Class,
  ActionList_SetOnChange,
  ActionList_SetOnExecute,
  ActionList_SetOnUpdate;