
//constructor
function CustomRadioGroup_Create(TheOwner: TComponent): TCustomRadioGroup; extdecl;
begin
  handleExceptionBegin
  Result := TCustomRadioGroup.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomRadioGroup_AutoFill(AIsSet: LongBool; AObj: TCustomRadioGroup; AValue: LongBool): LongBool; extdecl;
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
function CustomRadioGroup_ItemIndex(AIsSet: LongBool; AObj: TCustomRadioGroup; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ItemIndex := AValue;
  end else
    Result := AObj.ItemIndex;
  handleExceptionEnd
end;

//property
function CustomRadioGroup_Items(AIsSet: LongBool; AObj: TCustomRadioGroup; AValue: TStrings): TStrings; extdecl;
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
function CustomRadioGroup_Columns(AIsSet: LongBool; AObj: TCustomRadioGroup; AValue: integer): integer; extdecl;
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
function CustomRadioGroup_ColumnLayout(AIsSet: LongBool; AObj: TCustomRadioGroup; AValue: TColumnLayout): TColumnLayout; extdecl;
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
function CustomRadioGroup_CanModify(AObj: TCustomRadioGroup): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CanModify();
  handleExceptionEnd
end;

//function
function CustomRadioGroup_Rows(AObj: TCustomRadioGroup): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Rows();
  handleExceptionEnd
end;

//function
function CustomRadioGroup_Class(): TClass; extdecl;
begin
  Result := TCustomRadioGroup;
end;

//property event
procedure CustomRadioGroup_SetOnItemEnter(AObj: TCustomRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnItemEnter}
  EventMethodCode
end;

//property event
procedure CustomRadioGroup_SetOnItemExit(AObj: TCustomRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnItemExit}
  EventMethodCode
end;

//property event
procedure CustomRadioGroup_SetOnSelectionChanged(AObj: TCustomRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSelectionChanged}
  EventMethodCode
end;


exports
  CustomRadioGroup_Create,
  CustomRadioGroup_AutoFill,
  CustomRadioGroup_ItemIndex,
  CustomRadioGroup_Items,
  CustomRadioGroup_Columns,
  CustomRadioGroup_ColumnLayout,
  CustomRadioGroup_CanModify,
  CustomRadioGroup_Rows,
  CustomRadioGroup_Class,
  CustomRadioGroup_SetOnItemEnter,
  CustomRadioGroup_SetOnItemExit,
  CustomRadioGroup_SetOnSelectionChanged;