// constructor
function TEditAction_Create(AOwner: TComponent): TEditAction; extdecl;
begin
  {$define handleExceptionID := 45800}
  handleExceptionBegin
  Result := TEditAction.Create(AOwner);
  handleExceptionEnd
end;

// property
function TEditAction_Control(ASet: LongBool; AObj: TEditAction; AValue: TCustomEdit): TCustomEdit; extdecl;
begin
  {$define handleExceptionID := 45801}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Control := AValue
  end else
    Result := AObj.Control;
  handleExceptionEnd
end;

function TEditAction_TClass(): TClass; extdecl;
begin
  Result := TEditAction;
end;

exports
  TEditAction_Create,
  TEditAction_Control,
  TEditAction_TClass;