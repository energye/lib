
//constructor
function CustomCheckCombo_Create(AOwner: TComponent): TCustomCheckCombo; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomCheckCombo.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomCheckCombo_AllowGrayed(AIsSet: LongBool; AObj: TCustomCheckCombo; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AllowGrayed'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowGrayed := AValue;
  end else
    Result := AObj.AllowGrayed;
  handleExceptionEnd
end;

//property
function CustomCheckCombo_Count(AObj: TCustomCheckCombo): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Count'}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
function CustomCheckCombo_Checked(AIsSet: LongBool; AObj: TCustomCheckCombo; AIndex: Integer; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Checked'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Checked[AIndex] := AValue;
  end else
    Result := AObj.Checked[AIndex];
  handleExceptionEnd
end;

//property
function CustomCheckCombo_ItemEnabled(AIsSet: LongBool; AObj: TCustomCheckCombo; AIndex: Integer; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ItemEnabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ItemEnabled[AIndex] := AValue;
  end else
    Result := AObj.ItemEnabled[AIndex];
  handleExceptionEnd
end;

//property
function CustomCheckCombo_Objects(AIsSet: LongBool; AObj: TCustomCheckCombo; AIndex: Integer; AValue: TObject): TObject; extdecl;
begin
  {$define handleExceptionFuncName :='Objects'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Objects[AIndex] := AValue;
  end else
    Result := AObj.Objects[AIndex];
  handleExceptionEnd
end;

//property
function CustomCheckCombo_State(AIsSet: LongBool; AObj: TCustomCheckCombo; AIndex: Integer; AValue: TCheckBoxState): TCheckBoxState; extdecl;
begin
  {$define handleExceptionFuncName :='State'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.State[AIndex] := AValue;
  end else
    Result := AObj.State[AIndex];
  handleExceptionEnd
end;

//function
function CustomCheckCombo_Class(): TClass; extdecl;
begin
  Result := TCustomCheckCombo;
end;

//procedure
procedure CustomCheckCombo_AddItemForPChar(AObj: TCustomCheckCombo; const AItem: PChar; AState: TCheckBoxState; AEnabled: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='AddItemForPChar'}
  handleExceptionBegin
  AObj.AddItem(AItem, AState, AEnabled);
  handleExceptionEnd
end;

//procedure
procedure CustomCheckCombo_AssignItems(AObj: TCustomCheckCombo; AItems: TStrings); extdecl;
begin
  {$define handleExceptionFuncName :='AssignItems'}
  handleExceptionBegin
  AObj.AssignItems(AItems);
  handleExceptionEnd
end;

//procedure
procedure CustomCheckCombo_DeleteItem(AObj: TCustomCheckCombo; AIndex: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='DeleteItem'}
  handleExceptionBegin
  AObj.DeleteItem(AIndex);
  handleExceptionEnd
end;

//procedure
procedure CustomCheckCombo_CheckAll(AObj: TCustomCheckCombo; AState: TCheckBoxState; AAllowGrayed: LongBool; AAllowDisabled: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='CheckAll'}
  handleExceptionBegin
  AObj.CheckAll(AState, AAllowGrayed, AAllowDisabled);
  handleExceptionEnd
end;

//procedure
procedure CustomCheckCombo_Toggle(AObj: TCustomCheckCombo; AIndex: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='Toggle'}
  handleExceptionBegin
  AObj.Toggle(AIndex);
  handleExceptionEnd
end;

//property event
procedure CustomCheckCombo_SetOnItemChange(AObj: TCustomCheckCombo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCheckItemChange}
  {$DEFINE EventName := OnItemChange}
  EventMethodCode
end;


exports
  CustomCheckCombo_Create,
  CustomCheckCombo_AllowGrayed,
  CustomCheckCombo_Count,
  CustomCheckCombo_Checked,
  CustomCheckCombo_ItemEnabled,
  CustomCheckCombo_Objects,
  CustomCheckCombo_State,
  CustomCheckCombo_Class,
  CustomCheckCombo_AddItemForPChar,
  CustomCheckCombo_AssignItems,
  CustomCheckCombo_DeleteItem,
  CustomCheckCombo_CheckAll,
  CustomCheckCombo_Toggle,
  CustomCheckCombo_SetOnItemChange;