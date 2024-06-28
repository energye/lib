
//constructor
function CustomCheckBox_Create(TheOwner: TComponent): TCustomCheckBox; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomCheckBox.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomCheckBox_Alignment(AIsSet: LongBool; AObj: TCustomCheckBox; AValue: TLeftRight): TLeftRight; extdecl;
begin
  {$define handleExceptionFuncName :='Alignment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function CustomCheckBox_AllowGrayed(AIsSet: LongBool; AObj: TCustomCheckBox; AValue: LongBool): LongBool; extdecl;
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
function CustomCheckBox_State(AIsSet: LongBool; AObj: TCustomCheckBox; AValue: TCheckBoxState): TCheckBoxState; extdecl;
begin
  {$define handleExceptionFuncName :='State'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.State := AValue;
  end else
    Result := AObj.State;
  handleExceptionEnd
end;

//property
function CustomCheckBox_ShortCut(AObj: TCustomCheckBox): TShortcut; extdecl;
begin
  {$define handleExceptionFuncName :='ShortCut'}
  handleExceptionBegin
  Result := AObj.ShortCut;
  handleExceptionEnd
end;

//property
function CustomCheckBox_ShortCutKey2(AObj: TCustomCheckBox): TShortcut; extdecl;
begin
  {$define handleExceptionFuncName :='ShortCutKey2'}
  handleExceptionBegin
  Result := AObj.ShortCutKey2;
  handleExceptionEnd
end;

//function
function CustomCheckBox_Class(): TClass; extdecl;
begin
  Result := TCustomCheckBox;
end;

//property event
procedure CustomCheckBox_SetOnChange(AObj: TCustomCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;


exports
  CustomCheckBox_Create,
  CustomCheckBox_Alignment,
  CustomCheckBox_AllowGrayed,
  CustomCheckBox_State,
  CustomCheckBox_ShortCut,
  CustomCheckBox_ShortCutKey2,
  CustomCheckBox_Class,
  CustomCheckBox_SetOnChange;