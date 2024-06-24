
//constructor
function FlowPanelControlList_Create(AOwner: TPersistent): TFlowPanelControlList; extdecl;
begin
  handleExceptionBegin
  Result := TFlowPanelControlList.Create(AOwner);
  handleExceptionEnd
end;

//property
function FlowPanelControlList_ItemsForFlowPanelControl(AIsSet: LongBool; AObj: TFlowPanelControlList; Index: Integer; AValue: TFlowPanelControl): TFlowPanelControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Items[Index] := AValue;
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

//function
function FlowPanelControlList_IndexOf(AObj: TFlowPanelControlList; AControl: TControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IndexOf(AControl);
  handleExceptionEnd
end;

//function
function FlowPanelControlList_AllowAdd(AObj: TFlowPanelControlList): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AllowAdd();
  handleExceptionEnd
end;

//function
function FlowPanelControlList_AllowDelete(AObj: TFlowPanelControlList): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AllowDelete();
  handleExceptionEnd
end;

//function
function FlowPanelControlList_Class(): TClass; extdecl;
begin
  Result := TFlowPanelControlList;
end;


exports
  FlowPanelControlList_Create,
  FlowPanelControlList_ItemsForFlowPanelControl,
  FlowPanelControlList_IndexOf,
  FlowPanelControlList_AllowAdd,
  FlowPanelControlList_AllowDelete,
  FlowPanelControlList_Class;