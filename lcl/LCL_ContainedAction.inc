
//constructor
function ContainedAction_Create(AOwner: TComponent): TContainedAction; extdecl;
begin
  handleExceptionBegin
  Result := TContainedAction.Create(AOwner);
  handleExceptionEnd
end;

//property
function ContainedAction_ActionList(AIsSet: LongBool; AObj: TContainedAction; AValue: TCustomActionList): TCustomActionList; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ActionList := AValue;
  end else
    Result := AObj.ActionList;
  handleExceptionEnd
end;

//property
function ContainedAction_Index(AIsSet: LongBool; AObj: TContainedAction; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Index := AValue;
  end else
    Result := AObj.Index;
  handleExceptionEnd
end;

//property
function ContainedAction_Category(AIsSet: LongBool; AObj: TContainedAction; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Category := AValue;
  end else
    Result := ToPChar(AObj.Category);
  handleExceptionEnd
end;

//function
function ContainedAction_Class(): TClass; extdecl;
begin
  Result := TContainedAction;
end;


exports
  ContainedAction_Create,
  ContainedAction_ActionList,
  ContainedAction_Index,
  ContainedAction_Category,
  ContainedAction_Class;