// constructor
function TFlowPanelControlList_Create(AOwner: TPersistent; out IntfObjInspInterface: IObjInspInterface): TFlowPanelControlList; extdecl;
begin
  {$define handleExceptionID := 14300}
  handleExceptionBegin
  Result := TFlowPanelControlList.Create(AOwner);
  IntfObjInspInterface := Result as IObjInspInterface;
  handleExceptionEnd
end;

// function
function TFlowPanelControlList_IndexOf(AObj: TFlowPanelControlList; AControl: TControl): Integer; extdecl;
begin
  {$define handleExceptionID := 14301}
  handleExceptionBegin
  Result := AObj.IndexOf(AControl);
  handleExceptionEnd
end;

// function
function TFlowPanelControlList_AllowAdd(AObj: TFlowPanelControlList): LongBool; extdecl;
begin
  {$define handleExceptionID := 14302}
  handleExceptionBegin
  Result := AObj.AllowAdd();
  handleExceptionEnd
end;

// function
function TFlowPanelControlList_AllowDelete(AObj: TFlowPanelControlList): LongBool; extdecl;
begin
  {$define handleExceptionID := 14303}
  handleExceptionBegin
  Result := AObj.AllowDelete();
  handleExceptionEnd
end;

// property
function TFlowPanelControlList_ItemsWithIntToFlowPanelControl(ASet: LongBool; AObj: TFlowPanelControlList; Index: Integer; AValue: TFlowPanelControl): TFlowPanelControl; extdecl;
begin
  {$define handleExceptionID := 14304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[Index] := AValue
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

exports
  TFlowPanelControlList_Create,
  TFlowPanelControlList_IndexOf,
  TFlowPanelControlList_AllowAdd,
  TFlowPanelControlList_AllowDelete,
  TFlowPanelControlList_ItemsWithIntToFlowPanelControl;