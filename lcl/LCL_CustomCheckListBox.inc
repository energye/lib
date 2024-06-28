
//constructor
function CustomCheckListBox_Create(AOwner: TComponent): TCustomCheckListBox; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomCheckListBox.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomCheckListBox_AllowGrayed(AIsSet: LongBool; AObj: TCustomCheckListBox; AValue: LongBool): LongBool; extdecl;
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
function CustomCheckListBox_Checked(AIsSet: LongBool; AObj: TCustomCheckListBox; AIndex: Integer; AValue: LongBool): LongBool; extdecl;
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
function CustomCheckListBox_Header(AIsSet: LongBool; AObj: TCustomCheckListBox; AIndex: Integer; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Header'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Header[AIndex] := AValue;
  end else
    Result := AObj.Header[AIndex];
  handleExceptionEnd
end;

//property
function CustomCheckListBox_HeaderBackgroundColor(AIsSet: LongBool; AObj: TCustomCheckListBox; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='HeaderBackgroundColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HeaderBackgroundColor := AValue;
  end else
    Result := AObj.HeaderBackgroundColor;
  handleExceptionEnd
end;

//property
function CustomCheckListBox_HeaderColor(AIsSet: LongBool; AObj: TCustomCheckListBox; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='HeaderColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HeaderColor := AValue;
  end else
    Result := AObj.HeaderColor;
  handleExceptionEnd
end;

//property
function CustomCheckListBox_ItemEnabled(AIsSet: LongBool; AObj: TCustomCheckListBox; AIndex: Integer; AValue: LongBool): LongBool; extdecl;
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
function CustomCheckListBox_State(AIsSet: LongBool; AObj: TCustomCheckListBox; AIndex: Integer; AValue: TCheckBoxState): TCheckBoxState; extdecl;
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
function CustomCheckListBox_CalculateStandardItemHeight(AObj: TCustomCheckListBox): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='CalculateStandardItemHeight'}
  handleExceptionBegin
  Result := AObj.CalculateStandardItemHeight();
  handleExceptionEnd
end;

//function
function CustomCheckListBox_Class(): TClass; extdecl;
begin
  Result := TCustomCheckListBox;
end;

//procedure
procedure CustomCheckListBox_Toggle(AObj: TCustomCheckListBox; AIndex: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='Toggle'}
  handleExceptionBegin
  AObj.Toggle(AIndex);
  handleExceptionEnd
end;

//procedure
procedure CustomCheckListBox_CheckAll(AObj: TCustomCheckListBox; AState: TCheckBoxState; aAllowGrayed: LongBool; aAllowDisabled: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='CheckAll'}
  handleExceptionBegin
  AObj.CheckAll(AState, aAllowGrayed, aAllowDisabled);
  handleExceptionEnd
end;

//procedure
procedure CustomCheckListBox_Exchange(AObj: TCustomCheckListBox; AIndex1, AIndex2: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='Exchange'}
  handleExceptionBegin
  AObj.Exchange(AIndex1, AIndex2);
  handleExceptionEnd
end;

//property event
procedure CustomCheckListBox_SetOnClickCheck(AObj: TCustomCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClickCheck}
  EventMethodCode
end;


exports
  CustomCheckListBox_Create,
  CustomCheckListBox_AllowGrayed,
  CustomCheckListBox_Checked,
  CustomCheckListBox_Header,
  CustomCheckListBox_HeaderBackgroundColor,
  CustomCheckListBox_HeaderColor,
  CustomCheckListBox_ItemEnabled,
  CustomCheckListBox_State,
  CustomCheckListBox_CalculateStandardItemHeight,
  CustomCheckListBox_Class,
  CustomCheckListBox_Toggle,
  CustomCheckListBox_CheckAll,
  CustomCheckListBox_Exchange,
  CustomCheckListBox_SetOnClickCheck;