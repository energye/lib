// constructor
function TSynEditMouseAction_Create(ACollection: TCollection): TSynEditMouseAction; extdecl;
begin
  {$define handleExceptionID := 37600}
  handleExceptionBegin
  Result := TSynEditMouseAction.Create(ACollection);
  handleExceptionEnd
end;

// function
function TSynEditMouseAction_IsMatchingShiftState(AObj: TSynEditMouseAction; AShift: TShiftState): LongBool; extdecl;
begin
  {$define handleExceptionID := 37601}
  handleExceptionBegin
  Result := AObj.IsMatchingShiftState(AShift);
  handleExceptionEnd
end;

// function
function TSynEditMouseAction_IsMatchingClick(AObj: TSynEditMouseAction; ABtn: TSynMouseButton; ACCount: TSynMAClickCount; ACDir: TSynMAClickDir): LongBool; extdecl;
begin
  {$define handleExceptionID := 37602}
  handleExceptionBegin
  Result := AObj.IsMatchingClick(ABtn, ACCount, ACDir);
  handleExceptionEnd
end;

// function
function TSynEditMouseAction_IsFallback(AObj: TSynEditMouseAction): LongBool; extdecl;
begin
  {$define handleExceptionID := 37603}
  handleExceptionBegin
  Result := AObj.IsFallback();
  handleExceptionEnd
end;

// function
function TSynEditMouseAction_Conflicts(AObj: TSynEditMouseAction; Other: TSynEditMouseAction): LongBool; extdecl;
begin
  {$define handleExceptionID := 37604}
  handleExceptionBegin
  Result := AObj.Conflicts(Other);
  handleExceptionEnd
end;

// function
function TSynEditMouseAction_EqualsWithSynEditMouseActionBool(AObj: TSynEditMouseAction; Other: TSynEditMouseAction; IgnoreCmd: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 37605}
  handleExceptionBegin
  Result := AObj.Equals(Other, IgnoreCmd);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMouseAction_Clear(AObj: TSynEditMouseAction); extdecl;
begin
  {$define handleExceptionID := 37606}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// property
function TSynEditMouseAction_Shift(ASet: LongBool; AObj: TSynEditMouseAction; AValue: TShiftState): TShiftState; extdecl;
begin
  {$define handleExceptionID := 37607}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Shift := AValue
  end else
    Result := AObj.Shift;
  handleExceptionEnd
end;

// property
function TSynEditMouseAction_ShiftMask(ASet: LongBool; AObj: TSynEditMouseAction; AValue: TShiftState): TShiftState; extdecl;
begin
  {$define handleExceptionID := 37608}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShiftMask := AValue
  end else
    Result := AObj.ShiftMask;
  handleExceptionEnd
end;

// property
function TSynEditMouseAction_Button(ASet: LongBool; AObj: TSynEditMouseAction; AValue: TSynMouseButton): TSynMouseButton; extdecl;
begin
  {$define handleExceptionID := 37609}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Button := AValue
  end else
    Result := AObj.Button;
  handleExceptionEnd
end;

// property
function TSynEditMouseAction_ClickCount(ASet: LongBool; AObj: TSynEditMouseAction; AValue: TSynMAClickCount): TSynMAClickCount; extdecl;
begin
  {$define handleExceptionID := 37610}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ClickCount := AValue
  end else
    Result := AObj.ClickCount;
  handleExceptionEnd
end;

// property
function TSynEditMouseAction_ClickDir(ASet: LongBool; AObj: TSynEditMouseAction; AValue: TSynMAClickDir): TSynMAClickDir; extdecl;
begin
  {$define handleExceptionID := 37611}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ClickDir := AValue
  end else
    Result := AObj.ClickDir;
  handleExceptionEnd
end;

// property
function TSynEditMouseAction_ButtonUpRestrictions(ASet: LongBool; AObj: TSynEditMouseAction; AValue: TSynMAUpRestrictions): TSynMAUpRestrictions; extdecl;
begin
  {$define handleExceptionID := 37612}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ButtonUpRestrictions := AValue
  end else
    Result := AObj.ButtonUpRestrictions;
  handleExceptionEnd
end;

// property
function TSynEditMouseAction_Command(ASet: LongBool; AObj: TSynEditMouseAction; AValue: TSynEditorMouseCommand): TSynEditorMouseCommand; extdecl;
begin
  {$define handleExceptionID := 37613}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Command := AValue
  end else
    Result := AObj.Command;
  handleExceptionEnd
end;

// property
function TSynEditMouseAction_MoveCaret(ASet: LongBool; AObj: TSynEditMouseAction; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 37614}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MoveCaret := AValue
  end else
    Result := AObj.MoveCaret;
  handleExceptionEnd
end;

// property
function TSynEditMouseAction_IgnoreUpClick(ASet: LongBool; AObj: TSynEditMouseAction; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 37615}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IgnoreUpClick := AValue
  end else
    Result := AObj.IgnoreUpClick;
  handleExceptionEnd
end;

// property
function TSynEditMouseAction_Option(ASet: LongBool; AObj: TSynEditMouseAction; AValue: TSynEditorMouseCommandOpt): TSynEditorMouseCommandOpt; extdecl;
begin
  {$define handleExceptionID := 37616}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Option := AValue
  end else
    Result := AObj.Option;
  handleExceptionEnd
end;

// property
function TSynEditMouseAction_Option2(ASet: LongBool; AObj: TSynEditMouseAction; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 37617}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Option2 := AValue
  end else
    Result := AObj.Option2;
  handleExceptionEnd
end;

// property
function TSynEditMouseAction_Priority(ASet: LongBool; AObj: TSynEditMouseAction; AValue: TSynEditorMouseCommandOpt): TSynEditorMouseCommandOpt; extdecl;
begin
  {$define handleExceptionID := 37618}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Priority := AValue
  end else
    Result := AObj.Priority;
  handleExceptionEnd
end;

exports
  TSynEditMouseAction_Create,
  TSynEditMouseAction_IsMatchingShiftState,
  TSynEditMouseAction_IsMatchingClick,
  TSynEditMouseAction_IsFallback,
  TSynEditMouseAction_Conflicts,
  TSynEditMouseAction_EqualsWithSynEditMouseActionBool,
  TSynEditMouseAction_Clear,
  TSynEditMouseAction_Shift,
  TSynEditMouseAction_ShiftMask,
  TSynEditMouseAction_Button,
  TSynEditMouseAction_ClickCount,
  TSynEditMouseAction_ClickDir,
  TSynEditMouseAction_ButtonUpRestrictions,
  TSynEditMouseAction_Command,
  TSynEditMouseAction_MoveCaret,
  TSynEditMouseAction_IgnoreUpClick,
  TSynEditMouseAction_Option,
  TSynEditMouseAction_Option2,
  TSynEditMouseAction_Priority;