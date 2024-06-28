
//constructor
function BasicActionLink_Create(AClient: TObject): TBasicActionLink; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TBasicActionLink.Create(AClient);
  handleExceptionEnd
end;

//property
function BasicActionLink_Action(AIsSet: LongBool; AObj: TBasicActionLink; AValue: TBasicAction): TBasicAction; extdecl;
begin
  {$define handleExceptionFuncName :='Action'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Action := AValue;
  end else
    Result := AObj.Action;
  handleExceptionEnd
end;

//function
function BasicActionLink_Execute(AObj: TBasicActionLink; AComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Execute'}
  handleExceptionBegin
  Result := AObj.Execute(AComponent);
  handleExceptionEnd
end;

//function
function BasicActionLink_Update(AObj: TBasicActionLink): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Update'}
  handleExceptionBegin
  Result := AObj.Update();
  handleExceptionEnd
end;

//function
function BasicActionLink_Class(): TClass; extdecl;
begin
  Result := TBasicActionLink;
end;

//property event
procedure BasicActionLink_SetOnChange(AObj: TBasicActionLink; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;


exports
  BasicActionLink_Create,
  BasicActionLink_Action,
  BasicActionLink_Execute,
  BasicActionLink_Update,
  BasicActionLink_Class,
  BasicActionLink_SetOnChange;