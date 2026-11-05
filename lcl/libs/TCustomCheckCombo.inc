// constructor
function TCustomCheckCombo_Create(AOwner: TComponent): TCustomCheckCombo; extdecl;
begin
  {$define handleExceptionID := 22800}
  handleExceptionBegin
  Result := TCustomCheckCombo.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TCustomCheckCombo_AddItemWithStrCBStateBool(AObj: TCustomCheckCombo; const AItem: PChar; AState: TCheckBoxState; AEnabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 22801}
  handleExceptionBegin
  AObj.AddItem(AItem, AState, AEnabled);
  handleExceptionEnd
end;

// procedure
procedure TCustomCheckCombo_AssignItems(AObj: TCustomCheckCombo; AItems: TStrings); extdecl;
begin
  {$define handleExceptionID := 22802}
  handleExceptionBegin
  AObj.AssignItems(AItems);
  handleExceptionEnd
end;

// procedure
procedure TCustomCheckCombo_DeleteItem(AObj: TCustomCheckCombo; AIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 22803}
  handleExceptionBegin
  AObj.DeleteItem(AIndex);
  handleExceptionEnd
end;

// procedure
procedure TCustomCheckCombo_CheckAll(AObj: TCustomCheckCombo; AState: TCheckBoxState; AAllowGrayed: LongBool; AAllowDisabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 22804}
  handleExceptionBegin
  AObj.CheckAll(AState, AAllowGrayed, AAllowDisabled);
  handleExceptionEnd
end;

// procedure
procedure TCustomCheckCombo_Toggle(AObj: TCustomCheckCombo; AIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 22805}
  handleExceptionBegin
  AObj.Toggle(AIndex);
  handleExceptionEnd
end;

// property
function TCustomCheckCombo_AllowGrayed(ASet: LongBool; AObj: TCustomCheckCombo; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowGrayed := AValue
  end else
    Result := AObj.AllowGrayed;
  handleExceptionEnd
end;

// property
function TCustomCheckCombo_Count(AObj: TCustomCheckCombo): Integer; extdecl;
begin
  {$define handleExceptionID := 22807}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
function TCustomCheckCombo_Checked(ASet: LongBool; AObj: TCustomCheckCombo; AIndex: Integer; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22808}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Checked[AIndex] := AValue
  end else
    Result := AObj.Checked[AIndex];
  handleExceptionEnd
end;

// property
function TCustomCheckCombo_ItemEnabled(ASet: LongBool; AObj: TCustomCheckCombo; AIndex: Integer; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22809}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemEnabled[AIndex] := AValue
  end else
    Result := AObj.ItemEnabled[AIndex];
  handleExceptionEnd
end;

// property
function TCustomCheckCombo_Objects(ASet: LongBool; AObj: TCustomCheckCombo; AIndex: Integer; AValue: TObject): TObject; extdecl;
begin
  {$define handleExceptionID := 22810}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Objects[AIndex] := AValue
  end else
    Result := AObj.Objects[AIndex];
  handleExceptionEnd
end;

// property
function TCustomCheckCombo_State(ASet: LongBool; AObj: TCustomCheckCombo; AIndex: Integer; AValue: TCheckBoxState): TCheckBoxState; extdecl;
begin
  {$define handleExceptionID := 22811}
  handleExceptionBegin
  if ASet then
  begin
    AObj.State[AIndex] := AValue
  end else
    Result := AObj.State[AIndex];
  handleExceptionEnd
end;

// event
procedure TCustomCheckCombo_OnItemChange(AObj: TCustomCheckCombo; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCheckItemChange}
  {$DEFINE EventName := OnItemChange}
  LCLEventMethodCode
end;

function TCustomCheckCombo_TClass(): TClass; extdecl;
begin
  Result := TCustomCheckCombo;
end;

exports
  TCustomCheckCombo_Create,
  TCustomCheckCombo_AddItemWithStrCBStateBool,
  TCustomCheckCombo_AssignItems,
  TCustomCheckCombo_DeleteItem,
  TCustomCheckCombo_CheckAll,
  TCustomCheckCombo_Toggle,
  TCustomCheckCombo_AllowGrayed,
  TCustomCheckCombo_Count,
  TCustomCheckCombo_Checked,
  TCustomCheckCombo_ItemEnabled,
  TCustomCheckCombo_Objects,
  TCustomCheckCombo_State,
  TCustomCheckCombo_OnItemChange,
  TCustomCheckCombo_TClass;