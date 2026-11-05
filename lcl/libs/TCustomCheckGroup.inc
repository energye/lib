// constructor
function TCustomCheckGroup_Create(TheOwner: TComponent): TCustomCheckGroup; extdecl;
begin
  {$define handleExceptionID := 22500}
  handleExceptionBegin
  Result := TCustomCheckGroup.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TCustomCheckGroup_Rows(AObj: TCustomCheckGroup): integer; extdecl;
begin
  {$define handleExceptionID := 22501}
  handleExceptionBegin
  Result := AObj.Rows();
  handleExceptionEnd
end;

// property
function TCustomCheckGroup_AutoFill(ASet: LongBool; AObj: TCustomCheckGroup; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22502}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoFill := AValue
  end else
    Result := AObj.AutoFill;
  handleExceptionEnd
end;

// property
function TCustomCheckGroup_Buttons(AObj: TCustomCheckGroup; Index: integer): TCheckBox; extdecl;
begin
  {$define handleExceptionID := 22503}
  handleExceptionBegin
  Result := AObj.Buttons[Index];
  handleExceptionEnd
end;

// property
function TCustomCheckGroup_Items(ASet: LongBool; AObj: TCustomCheckGroup; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 22504}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items := AValue
  end else
    Result := AObj.Items;
  handleExceptionEnd
end;

// property
function TCustomCheckGroup_Checked(ASet: LongBool; AObj: TCustomCheckGroup; Index: integer; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22505}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Checked[Index] := AValue
  end else
    Result := AObj.Checked[Index];
  handleExceptionEnd
end;

// property
function TCustomCheckGroup_CheckEnabled(ASet: LongBool; AObj: TCustomCheckGroup; Index: integer; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 22506}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CheckEnabled[Index] := AValue
  end else
    Result := AObj.CheckEnabled[Index];
  handleExceptionEnd
end;

// property
function TCustomCheckGroup_Columns(ASet: LongBool; AObj: TCustomCheckGroup; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 22507}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Columns := AValue
  end else
    Result := AObj.Columns;
  handleExceptionEnd
end;

// property
function TCustomCheckGroup_ColumnLayout(ASet: LongBool; AObj: TCustomCheckGroup; AValue: TColumnLayout): TColumnLayout; extdecl;
begin
  {$define handleExceptionID := 22508}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColumnLayout := AValue
  end else
    Result := AObj.ColumnLayout;
  handleExceptionEnd
end;

// event
procedure TCustomCheckGroup_OnItemClick(AObj: TCustomCheckGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCheckGroupClicked}
  {$DEFINE EventName := OnItemClick}
  LCLEventMethodCode
end;

function TCustomCheckGroup_TClass(): TClass; extdecl;
begin
  Result := TCustomCheckGroup;
end;

exports
  TCustomCheckGroup_Create,
  TCustomCheckGroup_Rows,
  TCustomCheckGroup_AutoFill,
  TCustomCheckGroup_Buttons,
  TCustomCheckGroup_Items,
  TCustomCheckGroup_Checked,
  TCustomCheckGroup_CheckEnabled,
  TCustomCheckGroup_Columns,
  TCustomCheckGroup_ColumnLayout,
  TCustomCheckGroup_OnItemClick,
  TCustomCheckGroup_TClass;