// constructor
function TFlowPanelControl_Create(ACollection: TCollection; out IntfObjInspInterface: IObjInspInterface): TFlowPanelControl; extdecl;
begin
  {$define handleExceptionID := 14100}
  handleExceptionBegin
  Result := TFlowPanelControl.Create(ACollection);
  IntfObjInspInterface := Result as IObjInspInterface;
  handleExceptionEnd
end;

// function
function TFlowPanelControl_AllowAdd(AObj: TFlowPanelControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 14101}
  handleExceptionBegin
  Result := AObj.AllowAdd();
  handleExceptionEnd
end;

// function
function TFlowPanelControl_AllowDelete(AObj: TFlowPanelControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 14102}
  handleExceptionBegin
  Result := AObj.AllowDelete();
  handleExceptionEnd
end;

// property
function TFlowPanelControl_Control(ASet: LongBool; AObj: TFlowPanelControl; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionID := 14103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Control := AValue
  end else
    Result := AObj.Control;
  handleExceptionEnd
end;

// property
function TFlowPanelControl_WrapAfter(ASet: LongBool; AObj: TFlowPanelControl; AValue: TWrapAfter): TWrapAfter; extdecl;
begin
  {$define handleExceptionID := 14104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WrapAfter := AValue
  end else
    Result := AObj.WrapAfter;
  handleExceptionEnd
end;

exports
  TFlowPanelControl_Create,
  TFlowPanelControl_AllowAdd,
  TFlowPanelControl_AllowDelete,
  TFlowPanelControl_Control,
  TFlowPanelControl_WrapAfter;