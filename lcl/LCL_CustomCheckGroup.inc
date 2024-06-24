
//constructor
function CustomCheckGroup_Create(TheOwner: TComponent): TCustomCheckGroup; extdecl;
begin
  handleExceptionBegin
  Result := TCustomCheckGroup.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomCheckGroup_AutoFill(AIsSet: LongBool; AObj: TCustomCheckGroup; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoFill := AValue;
  end else
    Result := AObj.AutoFill;
  handleExceptionEnd
end;

//property
function CustomCheckGroup_Items(AIsSet: LongBool; AObj: TCustomCheckGroup; AValue: TStrings): TStrings; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Items := AValue;
  end else
    Result := AObj.Items;
  handleExceptionEnd
end;

//property
function CustomCheckGroup_Checked(AIsSet: LongBool; AObj: TCustomCheckGroup; Index: integer; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Checked[Index] := AValue;
  end else
    Result := AObj.Checked[Index];
  handleExceptionEnd
end;

//property
function CustomCheckGroup_CheckEnabled(AIsSet: LongBool; AObj: TCustomCheckGroup; Index: integer; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CheckEnabled[Index] := AValue;
  end else
    Result := AObj.CheckEnabled[Index];
  handleExceptionEnd
end;

//property
function CustomCheckGroup_Columns(AIsSet: LongBool; AObj: TCustomCheckGroup; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Columns := AValue;
  end else
    Result := AObj.Columns;
  handleExceptionEnd
end;

//property
function CustomCheckGroup_ColumnLayout(AIsSet: LongBool; AObj: TCustomCheckGroup; AValue: TColumnLayout): TColumnLayout; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ColumnLayout := AValue;
  end else
    Result := AObj.ColumnLayout;
  handleExceptionEnd
end;

//function
function CustomCheckGroup_Rows(AObj: TCustomCheckGroup): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Rows();
  handleExceptionEnd
end;

//function
function CustomCheckGroup_Class(): TClass; extdecl;
begin
  Result := TCustomCheckGroup;
end;


exports
  CustomCheckGroup_Create,
  CustomCheckGroup_AutoFill,
  CustomCheckGroup_Items,
  CustomCheckGroup_Checked,
  CustomCheckGroup_CheckEnabled,
  CustomCheckGroup_Columns,
  CustomCheckGroup_ColumnLayout,
  CustomCheckGroup_Rows,
  CustomCheckGroup_Class;