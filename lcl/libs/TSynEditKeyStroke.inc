// constructor
function TSynEditKeyStroke_Create(ACollection: TCollection): TSynEditKeyStroke; extdecl;
begin
  {$define handleExceptionID := 37400}
  handleExceptionBegin
  Result := TSynEditKeyStroke.Create(ACollection);
  handleExceptionEnd
end;

// procedure
procedure TSynEditKeyStroke_LoadFromStream(AObj: TSynEditKeyStroke; AStream: TStream); extdecl;
begin
  {$define handleExceptionID := 37401}
  handleExceptionBegin
  AObj.LoadFromStream(AStream);
  handleExceptionEnd
end;

// procedure
procedure TSynEditKeyStroke_SaveToStream(AObj: TSynEditKeyStroke; AStream: TStream); extdecl;
begin
  {$define handleExceptionID := 37402}
  handleExceptionBegin
  AObj.SaveToStream(AStream);
  handleExceptionEnd
end;

// property
function TSynEditKeyStroke_Key(ASet: LongBool; AObj: TSynEditKeyStroke; AValue: word): word; extdecl;
begin
  {$define handleExceptionID := 37403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Key := AValue
  end else
    Result := AObj.Key;
  handleExceptionEnd
end;

// property
function TSynEditKeyStroke_Key2(ASet: LongBool; AObj: TSynEditKeyStroke; AValue: word): word; extdecl;
begin
  {$define handleExceptionID := 37404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Key2 := AValue
  end else
    Result := AObj.Key2;
  handleExceptionEnd
end;

// property
function TSynEditKeyStroke_Shift(ASet: LongBool; AObj: TSynEditKeyStroke; AValue: TShiftState): TShiftState; extdecl;
begin
  {$define handleExceptionID := 37405}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Shift := AValue
  end else
    Result := AObj.Shift;
  handleExceptionEnd
end;

// property
function TSynEditKeyStroke_Shift2(ASet: LongBool; AObj: TSynEditKeyStroke; AValue: TShiftState): TShiftState; extdecl;
begin
  {$define handleExceptionID := 37406}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Shift2 := AValue
  end else
    Result := AObj.Shift2;
  handleExceptionEnd
end;

// property
function TSynEditKeyStroke_ShiftMask(ASet: LongBool; AObj: TSynEditKeyStroke; AValue: TShiftState): TShiftState; extdecl;
begin
  {$define handleExceptionID := 37407}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShiftMask := AValue
  end else
    Result := AObj.ShiftMask;
  handleExceptionEnd
end;

// property
function TSynEditKeyStroke_ShiftMask2(ASet: LongBool; AObj: TSynEditKeyStroke; AValue: TShiftState): TShiftState; extdecl;
begin
  {$define handleExceptionID := 37408}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShiftMask2 := AValue
  end else
    Result := AObj.ShiftMask2;
  handleExceptionEnd
end;

// property
function TSynEditKeyStroke_Command(ASet: LongBool; AObj: TSynEditKeyStroke; AValue: TSynEditorCommand): TSynEditorCommand; extdecl;
begin
  {$define handleExceptionID := 37409}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Command := AValue
  end else
    Result := AObj.Command;
  handleExceptionEnd
end;

// property
function TSynEditKeyStroke_ShortCut(ASet: LongBool; AObj: TSynEditKeyStroke; AValue: TShortCut): TShortCut; extdecl;
begin
  {$define handleExceptionID := 37410}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShortCut := AValue
  end else
    Result := AObj.ShortCut;
  handleExceptionEnd
end;

// property
function TSynEditKeyStroke_ShortCut2(ASet: LongBool; AObj: TSynEditKeyStroke; AValue: TShortCut): TShortCut; extdecl;
begin
  {$define handleExceptionID := 37411}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShortCut2 := AValue
  end else
    Result := AObj.ShortCut2;
  handleExceptionEnd
end;

exports
  TSynEditKeyStroke_Create,
  TSynEditKeyStroke_LoadFromStream,
  TSynEditKeyStroke_SaveToStream,
  TSynEditKeyStroke_Key,
  TSynEditKeyStroke_Key2,
  TSynEditKeyStroke_Shift,
  TSynEditKeyStroke_Shift2,
  TSynEditKeyStroke_ShiftMask,
  TSynEditKeyStroke_ShiftMask2,
  TSynEditKeyStroke_Command,
  TSynEditKeyStroke_ShortCut,
  TSynEditKeyStroke_ShortCut2;