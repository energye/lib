// constructor
function TCustomRadioGroup_Create(TheOwner: TComponent): TCustomRadioGroup; extdecl;
begin
  {$define handleExceptionID := 5800}
  handleExceptionBegin
  Result := TCustomRadioGroup.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TCustomRadioGroup_CanModify(AObj: TCustomRadioGroup): LongBool; extdecl;
begin
  {$define handleExceptionID := 5801}
  handleExceptionBegin
  Result := AObj.CanModify();
  handleExceptionEnd
end;

// function
function TCustomRadioGroup_Rows(AObj: TCustomRadioGroup): integer; extdecl;
begin
  {$define handleExceptionID := 5802}
  handleExceptionBegin
  Result := AObj.Rows();
  handleExceptionEnd
end;

// property
function TCustomRadioGroup_AutoFill(ASet: LongBool; AObj: TCustomRadioGroup; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoFill := AValue
  end else
    Result := AObj.AutoFill;
  handleExceptionEnd
end;

// property
function TCustomRadioGroup_Buttons(AObj: TCustomRadioGroup; Index: integer): TRadioButton; extdecl;
begin
  {$define handleExceptionID := 5804}
  handleExceptionBegin
  Result := AObj.Buttons[Index];
  handleExceptionEnd
end;

// property
function TCustomRadioGroup_ItemIndex(ASet: LongBool; AObj: TCustomRadioGroup; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 5805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemIndex := AValue
  end else
    Result := AObj.ItemIndex;
  handleExceptionEnd
end;

// property
function TCustomRadioGroup_Items(ASet: LongBool; AObj: TCustomRadioGroup; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 5806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items := AValue
  end else
    Result := AObj.Items;
  handleExceptionEnd
end;

// property
function TCustomRadioGroup_Columns(ASet: LongBool; AObj: TCustomRadioGroup; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 5807}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Columns := AValue
  end else
    Result := AObj.Columns;
  handleExceptionEnd
end;

// property
function TCustomRadioGroup_ColumnLayout(ASet: LongBool; AObj: TCustomRadioGroup; AValue: TColumnLayout): TColumnLayout; extdecl;
begin
  {$define handleExceptionID := 5808}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColumnLayout := AValue
  end else
    Result := AObj.ColumnLayout;
  handleExceptionEnd
end;

// event
procedure TCustomRadioGroup_OnItemEnter(AObj: TCustomRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnItemEnter}
  LCLEventMethodCode
end;

// event
procedure TCustomRadioGroup_OnItemExit(AObj: TCustomRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnItemExit}
  LCLEventMethodCode
end;

// event
procedure TCustomRadioGroup_OnSelectionChanged(AObj: TCustomRadioGroup; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnSelectionChanged}
  LCLEventMethodCode
end;

function TCustomRadioGroup_TClass(): TClass; extdecl;
begin
  Result := TCustomRadioGroup;
end;

exports
  TCustomRadioGroup_Create,
  TCustomRadioGroup_CanModify,
  TCustomRadioGroup_Rows,
  TCustomRadioGroup_AutoFill,
  TCustomRadioGroup_Buttons,
  TCustomRadioGroup_ItemIndex,
  TCustomRadioGroup_Items,
  TCustomRadioGroup_Columns,
  TCustomRadioGroup_ColumnLayout,
  TCustomRadioGroup_OnItemEnter,
  TCustomRadioGroup_OnItemExit,
  TCustomRadioGroup_OnSelectionChanged,
  TCustomRadioGroup_TClass;