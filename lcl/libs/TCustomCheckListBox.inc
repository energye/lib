// constructor
function TCustomCheckListBox_Create(AOwner: TComponent): TCustomCheckListBox; extdecl;
begin
  {$define handleExceptionID := 17500}
  handleExceptionBegin
  Result := TCustomCheckListBox.Create(AOwner);
  handleExceptionEnd
end;

// function
function TCustomCheckListBox_CalculateStandardItemHeight(AObj: TCustomCheckListBox): Integer; extdecl;
begin
  {$define handleExceptionID := 17501}
  handleExceptionBegin
  Result := AObj.CalculateStandardItemHeight();
  handleExceptionEnd
end;

// procedure
procedure TCustomCheckListBox_Toggle(AObj: TCustomCheckListBox; AIndex: Integer); extdecl;
begin
  {$define handleExceptionID := 17502}
  handleExceptionBegin
  AObj.Toggle(AIndex);
  handleExceptionEnd
end;

// procedure
procedure TCustomCheckListBox_CheckAll(AObj: TCustomCheckListBox; AState: TCheckBoxState; aAllowGrayed: LongBool; aAllowDisabled: LongBool); extdecl;
begin
  {$define handleExceptionID := 17503}
  handleExceptionBegin
  AObj.CheckAll(AState, aAllowGrayed, aAllowDisabled);
  handleExceptionEnd
end;

// procedure
procedure TCustomCheckListBox_Exchange(AObj: TCustomCheckListBox; AIndex1: Integer; AIndex2: Integer); extdecl;
begin
  {$define handleExceptionID := 17504}
  handleExceptionBegin
  AObj.Exchange(AIndex1, AIndex2);
  handleExceptionEnd
end;

// property
function TCustomCheckListBox_AllowGrayed(ASet: LongBool; AObj: TCustomCheckListBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17505}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowGrayed := AValue
  end else
    Result := AObj.AllowGrayed;
  handleExceptionEnd
end;

// property
function TCustomCheckListBox_Checked(ASet: LongBool; AObj: TCustomCheckListBox; AIndex: Integer; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17506}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Checked[AIndex] := AValue
  end else
    Result := AObj.Checked[AIndex];
  handleExceptionEnd
end;

// property
function TCustomCheckListBox_Header(ASet: LongBool; AObj: TCustomCheckListBox; AIndex: Integer; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17507}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Header[AIndex] := AValue
  end else
    Result := AObj.Header[AIndex];
  handleExceptionEnd
end;

// property
function TCustomCheckListBox_HeaderBackgroundColor(ASet: LongBool; AObj: TCustomCheckListBox; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 17508}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HeaderBackgroundColor := AValue
  end else
    Result := AObj.HeaderBackgroundColor;
  handleExceptionEnd
end;

// property
function TCustomCheckListBox_HeaderColor(ASet: LongBool; AObj: TCustomCheckListBox; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 17509}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HeaderColor := AValue
  end else
    Result := AObj.HeaderColor;
  handleExceptionEnd
end;

// property
function TCustomCheckListBox_ItemEnabled(ASet: LongBool; AObj: TCustomCheckListBox; AIndex: Integer; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 17510}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ItemEnabled[AIndex] := AValue
  end else
    Result := AObj.ItemEnabled[AIndex];
  handleExceptionEnd
end;

// property
function TCustomCheckListBox_State(ASet: LongBool; AObj: TCustomCheckListBox; AIndex: Integer; AValue: TCheckBoxState): TCheckBoxState; extdecl;
begin
  {$define handleExceptionID := 17511}
  handleExceptionBegin
  if ASet then
  begin
    AObj.State[AIndex] := AValue
  end else
    Result := AObj.State[AIndex];
  handleExceptionEnd
end;

// event
procedure TCustomCheckListBox_OnClickCheck(AObj: TCustomCheckListBox; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClickCheck}
  LCLEventMethodCode
end;

function TCustomCheckListBox_TClass(): TClass; extdecl;
begin
  Result := TCustomCheckListBox;
end;

exports
  TCustomCheckListBox_Create,
  TCustomCheckListBox_CalculateStandardItemHeight,
  TCustomCheckListBox_Toggle,
  TCustomCheckListBox_CheckAll,
  TCustomCheckListBox_Exchange,
  TCustomCheckListBox_AllowGrayed,
  TCustomCheckListBox_Checked,
  TCustomCheckListBox_Header,
  TCustomCheckListBox_HeaderBackgroundColor,
  TCustomCheckListBox_HeaderColor,
  TCustomCheckListBox_ItemEnabled,
  TCustomCheckListBox_State,
  TCustomCheckListBox_OnClickCheck,
  TCustomCheckListBox_TClass;