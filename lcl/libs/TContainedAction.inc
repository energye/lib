// constructor
function TContainedAction_Create(AOwner: TComponent): TContainedAction; extdecl;
begin
  {$define handleExceptionID := 15400}
  handleExceptionBegin
  Result := TContainedAction.Create(AOwner);
  handleExceptionEnd
end;

// property
function TContainedAction_ActionList(ASet: LongBool; AObj: TContainedAction; AValue: TCustomActionList): TCustomActionList; extdecl;
begin
  {$define handleExceptionID := 15401}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ActionList := AValue
  end else
    Result := AObj.ActionList;
  handleExceptionEnd
end;

// property
function TContainedAction_Index(ASet: LongBool; AObj: TContainedAction; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 15402}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Index := AValue
  end else
    Result := AObj.Index;
  handleExceptionEnd
end;

// property
procedure TContainedAction_Category(ASet: LongBool; AObj: TContainedAction; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 15403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Category := AValue
  end else
    StringBufferCreate(AObj.Category, AStrData, AStrSize);
  handleExceptionEnd
end;

function TContainedAction_TClass(): TClass; extdecl;
begin
  Result := TContainedAction;
end;

exports
  TContainedAction_Create,
  TContainedAction_ActionList,
  TContainedAction_Index,
  TContainedAction_Category,
  TContainedAction_TClass;