// constructor
function TBasicActionLink_Create(AClient: TObject): TBasicActionLink; extdecl;
begin
  {$define handleExceptionID := 27500}
  handleExceptionBegin
  Result := TBasicActionLink.Create(AClient);
  handleExceptionEnd
end;

// function
function TBasicActionLink_Execute(AObj: TBasicActionLink; AComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 27501}
  handleExceptionBegin
  Result := AObj.Execute(AComponent);
  handleExceptionEnd
end;

// function
function TBasicActionLink_Update(AObj: TBasicActionLink): LongBool; extdecl;
begin
  {$define handleExceptionID := 27502}
  handleExceptionBegin
  Result := AObj.Update();
  handleExceptionEnd
end;

// property
function TBasicActionLink_Action(ASet: LongBool; AObj: TBasicActionLink; AValue: TBasicAction): TBasicAction; extdecl;
begin
  {$define handleExceptionID := 27503}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Action := AValue
  end else
    Result := AObj.Action;
  handleExceptionEnd
end;

// event
procedure TBasicActionLink_OnChange(AObj: TBasicActionLink; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

exports
  TBasicActionLink_Create,
  TBasicActionLink_Execute,
  TBasicActionLink_Update,
  TBasicActionLink_Action,
  TBasicActionLink_OnChange;