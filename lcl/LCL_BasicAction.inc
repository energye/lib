
//constructor
function BasicAction_Create(AOwner: TComponent): TBasicAction; extdecl;
begin
  handleExceptionBegin
  Result := TBasicAction.Create(AOwner);
  handleExceptionEnd
end;

//property
function BasicAction_ActionComponent(AIsSet: LongBool; AObj: TBasicAction; AValue: TComponent): TComponent; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ActionComponent := AValue;
  end else
    Result := AObj.ActionComponent;
  handleExceptionEnd
end;

//function
function BasicAction_HandlesTarget(AObj: TBasicAction; Target: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HandlesTarget(Target);
  handleExceptionEnd
end;

//function
function BasicAction_Execute(AObj: TBasicAction): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Execute();
  handleExceptionEnd
end;

//function
function BasicAction_Update(AObj: TBasicAction): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Update();
  handleExceptionEnd
end;

//function
function BasicAction_Class(): TClass; extdecl;
begin
  Result := TBasicAction;
end;

//procedure
procedure BasicAction_UpdateTarget(AObj: TBasicAction; Target: TObject); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateTarget(Target);
  handleExceptionEnd
end;

//procedure
procedure BasicAction_ExecuteTarget(AObj: TBasicAction; Target: TObject); extdecl;
begin
  handleExceptionBegin
  AObj.ExecuteTarget(Target);
  handleExceptionEnd
end;

//procedure
procedure BasicAction_RegisterChanges(AObj: TBasicAction; Value: TBasicActionLink); extdecl;
begin
  handleExceptionBegin
  AObj.RegisterChanges(Value);
  handleExceptionEnd
end;

//procedure
procedure BasicAction_UnRegisterChanges(AObj: TBasicAction; Value: TBasicActionLink); extdecl;
begin
  handleExceptionBegin
  AObj.UnRegisterChanges(Value);
  handleExceptionEnd
end;

//property event
procedure BasicAction_SetOnExecute(AObj: TBasicAction; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnExecute}
  EventMethodCode
end;

//property event
procedure BasicAction_SetOnUpdate(AObj: TBasicAction; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnUpdate}
  EventMethodCode
end;


exports
  BasicAction_Create,
  BasicAction_ActionComponent,
  BasicAction_HandlesTarget,
  BasicAction_Execute,
  BasicAction_Update,
  BasicAction_Class,
  BasicAction_UpdateTarget,
  BasicAction_ExecuteTarget,
  BasicAction_RegisterChanges,
  BasicAction_UnRegisterChanges,
  BasicAction_SetOnExecute,
  BasicAction_SetOnUpdate;