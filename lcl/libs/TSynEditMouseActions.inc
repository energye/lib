// constructor
function TSynEditMouseActions_Create(AOwner: TPersistent): TSynEditMouseActions; extdecl;
begin
  {$define handleExceptionID := 36100}
  handleExceptionBegin
  Result := TSynEditMouseActions.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynEditMouseActions_AddToSynEditMouseAction(AObj: TSynEditMouseActions): TSynEditMouseAction; extdecl;
begin
  {$define handleExceptionID := 36101}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

// function
function TSynEditMouseActions_EqualsWithSynEditMouseActions(AObj: TSynEditMouseActions; Other: TSynEditMouseActions): LongBool; extdecl;
begin
  {$define handleExceptionID := 36102}
  handleExceptionBegin
  Result := AObj.Equals(Other);
  handleExceptionEnd
end;

// function
function TSynEditMouseActions_FindCommand(AObj: TSynEditMouseActions; var AnInfo: TSynEditMouseActionInfoPtr; APrevious: TSynEditMouseAction): TSynEditMouseAction; extdecl;
var
  InAnInfo: TSynEditMouseActionInfo;
begin
  {$define handleExceptionID := 36103}
  handleExceptionBegin
  InAnInfo := TSynEditMouseActionInfoToPas(AnInfo);
  Result := AObj.FindCommand(InAnInfo, APrevious);
  handleExceptionEnd
end;

// function
function TSynEditMouseActions_IndexOf(AObj: TSynEditMouseActions; MAction: TSynEditMouseAction; IgnoreCmd: LongBool): Integer; extdecl;
begin
  {$define handleExceptionID := 36104}
  handleExceptionBegin
  Result := AObj.IndexOf(MAction, IgnoreCmd);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMouseActions_AssertNoConflict(AObj: TSynEditMouseActions; MAction: TSynEditMouseAction); extdecl;
begin
  {$define handleExceptionID := 36105}
  handleExceptionBegin
  AObj.AssertNoConflict(MAction);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMouseActions_ResetDefaults(AObj: TSynEditMouseActions); extdecl;
begin
  {$define handleExceptionID := 36106}
  handleExceptionBegin
  AObj.ResetDefaults();
  handleExceptionEnd
end;

// procedure
procedure TSynEditMouseActions_IncAssertLock(AObj: TSynEditMouseActions); extdecl;
begin
  {$define handleExceptionID := 36107}
  handleExceptionBegin
  AObj.IncAssertLock();
  handleExceptionEnd
end;

// procedure
procedure TSynEditMouseActions_DecAssertLock(AObj: TSynEditMouseActions); extdecl;
begin
  {$define handleExceptionID := 36108}
  handleExceptionBegin
  AObj.DecAssertLock();
  handleExceptionEnd
end;

// procedure
procedure TSynEditMouseActions_AddCommandWithSEMCommandBoolX2SMButtonSMACCountSMACDirSStateX2SEMCOptIntX2(AObj: TSynEditMouseActions; const ACmd: TSynEditorMouseCommand; const AMoveCaret: LongBool; const AButton: TSynMouseButton; const AClickCount: TSynMAClickCount; const ADir: TSynMAClickDir; const AShift: TShiftState; const AShiftMask: TShiftState; const AOpt: TSynEditorMouseCommandOpt; const APrior: Integer; const AOpt2: integer; const AIgnoreUpClick: LongBool); extdecl;
begin
  {$define handleExceptionID := 36109}
  handleExceptionBegin
  AObj.AddCommand(ACmd, AMoveCaret, AButton, AClickCount, ADir, AShift, AShiftMask, AOpt, APrior, AOpt2, AIgnoreUpClick);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMouseActions_AddCommandWithSEMCommandBoolX2SMButtonSMACCountSMACDirSMAURestrictionsSStateX2SEMCOptIntX2(AObj: TSynEditMouseActions; const ACmd: TSynEditorMouseCommand; const AMoveCaret: LongBool; const AButton: TSynMouseButton; const AClickCount: TSynMAClickCount; const ADir: TSynMAClickDir; const AnUpRestrict: TSynMAUpRestrictions; const AShift: TShiftState; const AShiftMask: TShiftState; const AOpt: TSynEditorMouseCommandOpt; const APrior: Integer; const AOpt2: integer; const AIgnoreUpClick: LongBool); extdecl;
begin
  {$define handleExceptionID := 36110}
  handleExceptionBegin
  AObj.AddCommand(ACmd, AMoveCaret, AButton, AClickCount, ADir, AnUpRestrict, AShift, AShiftMask, AOpt, APrior, AOpt2, AIgnoreUpClick);
  handleExceptionEnd
end;

// property
function TSynEditMouseActions_ItemsWithIntToSynEditMouseAction(ASet: LongBool; AObj: TSynEditMouseActions; Index: Integer; AValue: TSynEditMouseAction): TSynEditMouseAction; extdecl;
begin
  {$define handleExceptionID := 36111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[Index] := AValue
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

exports
  TSynEditMouseActions_Create,
  TSynEditMouseActions_AddToSynEditMouseAction,
  TSynEditMouseActions_EqualsWithSynEditMouseActions,
  TSynEditMouseActions_FindCommand,
  TSynEditMouseActions_IndexOf,
  TSynEditMouseActions_AssertNoConflict,
  TSynEditMouseActions_ResetDefaults,
  TSynEditMouseActions_IncAssertLock,
  TSynEditMouseActions_DecAssertLock,
  TSynEditMouseActions_AddCommandWithSEMCommandBoolX2SMButtonSMACCountSMACDirSStateX2SEMCOptIntX2,
  TSynEditMouseActions_AddCommandWithSEMCommandBoolX2SMButtonSMACCountSMACDirSMAURestrictionsSStateX2SEMCOptIntX2,
  TSynEditMouseActions_ItemsWithIntToSynEditMouseAction;