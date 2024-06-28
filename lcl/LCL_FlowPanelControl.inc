
//constructor
function FlowPanelControl_Create(ACollection: TCollection): TFlowPanelControl; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TFlowPanelControl.Create(ACollection);
  handleExceptionEnd
end;

//property
function FlowPanelControl_Control(AIsSet: LongBool; AObj: TFlowPanelControl; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionFuncName :='Control'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Control := AValue;
  end else
    Result := AObj.Control;
  handleExceptionEnd
end;

//property
function FlowPanelControl_WrapAfter(AIsSet: LongBool; AObj: TFlowPanelControl; AValue: TWrapAfter): TWrapAfter; extdecl;
begin
  {$define handleExceptionFuncName :='WrapAfter'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WrapAfter := AValue;
  end else
    Result := AObj.WrapAfter;
  handleExceptionEnd
end;

//function
function FlowPanelControl_AllowAdd(AObj: TFlowPanelControl): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AllowAdd'}
  handleExceptionBegin
  Result := AObj.AllowAdd();
  handleExceptionEnd
end;

//function
function FlowPanelControl_AllowDelete(AObj: TFlowPanelControl): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AllowDelete'}
  handleExceptionBegin
  Result := AObj.AllowDelete();
  handleExceptionEnd
end;

//function
function FlowPanelControl_Class(): TClass; extdecl;
begin
  Result := TFlowPanelControl;
end;


exports
  FlowPanelControl_Create,
  FlowPanelControl_Control,
  FlowPanelControl_WrapAfter,
  FlowPanelControl_AllowAdd,
  FlowPanelControl_AllowDelete,
  FlowPanelControl_Class;