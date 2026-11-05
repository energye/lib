// constructor
function TCustomCheckBox_Create(TheOwner: TComponent): TCustomCheckBox; extdecl;
begin
  {$define handleExceptionID := 3200}
  handleExceptionBegin
  Result := TCustomCheckBox.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TCustomCheckBox_Alignment(ASet: LongBool; AObj: TCustomCheckBox; AValue: TLeftRight): TLeftRight; extdecl;
begin
  {$define handleExceptionID := 3201}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TCustomCheckBox_AllowGrayed(ASet: LongBool; AObj: TCustomCheckBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowGrayed := AValue
  end else
    Result := AObj.AllowGrayed;
  handleExceptionEnd
end;

// property
function TCustomCheckBox_State(ASet: LongBool; AObj: TCustomCheckBox; AValue: TCheckBoxState): TCheckBoxState; extdecl;
begin
  {$define handleExceptionID := 3203}
  handleExceptionBegin
  if ASet then
  begin
    AObj.State := AValue
  end else
    Result := AObj.State;
  handleExceptionEnd
end;

// property
function TCustomCheckBox_ShortCut(AObj: TCustomCheckBox): TShortcut; extdecl;
begin
  {$define handleExceptionID := 3204}
  handleExceptionBegin
  Result := AObj.ShortCut;
  handleExceptionEnd
end;

// property
function TCustomCheckBox_ShortCutKey2(AObj: TCustomCheckBox): TShortcut; extdecl;
begin
  {$define handleExceptionID := 3205}
  handleExceptionBegin
  Result := AObj.ShortCutKey2;
  handleExceptionEnd
end;

// event
procedure TCustomCheckBox_OnChange(AObj: TCustomCheckBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

function TCustomCheckBox_TClass(): TClass; extdecl;
begin
  Result := TCustomCheckBox;
end;

exports
  TCustomCheckBox_Create,
  TCustomCheckBox_Alignment,
  TCustomCheckBox_AllowGrayed,
  TCustomCheckBox_State,
  TCustomCheckBox_ShortCut,
  TCustomCheckBox_ShortCutKey2,
  TCustomCheckBox_OnChange,
  TCustomCheckBox_TClass;