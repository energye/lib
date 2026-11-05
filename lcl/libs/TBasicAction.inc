// constructor
function TBasicAction_Create(AOwner: TComponent): TBasicAction; extdecl;
begin
  {$define handleExceptionID := 1800}
  handleExceptionBegin
  Result := TBasicAction.Create(AOwner);
  handleExceptionEnd
end;

// function
function TBasicAction_HandlesTarget(AObj: TBasicAction; Target: TObject): LongBool; extdecl;
begin
  {$define handleExceptionID := 1801}
  handleExceptionBegin
  Result := AObj.HandlesTarget(Target);
  handleExceptionEnd
end;

// function
function TBasicAction_Execute(AObj: TBasicAction): LongBool; extdecl;
begin
  {$define handleExceptionID := 1802}
  handleExceptionBegin
  Result := AObj.Execute();
  handleExceptionEnd
end;

// function
function TBasicAction_Update(AObj: TBasicAction): LongBool; extdecl;
begin
  {$define handleExceptionID := 1803}
  handleExceptionBegin
  Result := AObj.Update();
  handleExceptionEnd
end;

// procedure
procedure TBasicAction_UpdateTarget(AObj: TBasicAction; Target: TObject); extdecl;
begin
  {$define handleExceptionID := 1804}
  handleExceptionBegin
  AObj.UpdateTarget(Target);
  handleExceptionEnd
end;

// procedure
procedure TBasicAction_ExecuteTarget(AObj: TBasicAction; Target: TObject); extdecl;
begin
  {$define handleExceptionID := 1805}
  handleExceptionBegin
  AObj.ExecuteTarget(Target);
  handleExceptionEnd
end;

// procedure
procedure TBasicAction_RegisterChanges(AObj: TBasicAction; Value: TBasicActionLink); extdecl;
begin
  {$define handleExceptionID := 1806}
  handleExceptionBegin
  AObj.RegisterChanges(Value);
  handleExceptionEnd
end;

// procedure
procedure TBasicAction_UnRegisterChanges(AObj: TBasicAction; Value: TBasicActionLink); extdecl;
begin
  {$define handleExceptionID := 1807}
  handleExceptionBegin
  AObj.UnRegisterChanges(Value);
  handleExceptionEnd
end;

// property
function TBasicAction_ActionComponent(ASet: LongBool; AObj: TBasicAction; AValue: TComponent): TComponent; extdecl;
begin
  {$define handleExceptionID := 1808}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ActionComponent := AValue
  end else
    Result := AObj.ActionComponent;
  handleExceptionEnd
end;

// event
procedure TBasicAction_OnExecute(AObj: TBasicAction; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnExecute}
  LCLEventMethodCode
end;

// event
procedure TBasicAction_OnUpdate(AObj: TBasicAction; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnUpdate}
  LCLEventMethodCode
end;

function TBasicAction_TClass(): TClass; extdecl;
begin
  Result := TBasicAction;
end;

exports
  TBasicAction_Create,
  TBasicAction_HandlesTarget,
  TBasicAction_Execute,
  TBasicAction_Update,
  TBasicAction_UpdateTarget,
  TBasicAction_ExecuteTarget,
  TBasicAction_RegisterChanges,
  TBasicAction_UnRegisterChanges,
  TBasicAction_ActionComponent,
  TBasicAction_OnExecute,
  TBasicAction_OnUpdate,
  TBasicAction_TClass;