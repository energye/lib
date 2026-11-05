// constructor
function TTaskDialogProgressBar_Create(ADialog: TCustomTaskDialog): TTaskDialogProgressBar; extdecl;
begin
  {$define handleExceptionID := 32500}
  handleExceptionBegin
  Result := TTaskDialogProgressBar.Create(ADialog);
  handleExceptionEnd
end;

// procedure
procedure TTaskDialogProgressBar_Initialize(AObj: TTaskDialogProgressBar); extdecl;
begin
  {$define handleExceptionID := 32501}
  handleExceptionBegin
  AObj.Initialize();
  handleExceptionEnd
end;

// procedure
procedure TTaskDialogProgressBar_SetRange(AObj: TTaskDialogProgressBar; AMin: Integer; AMax: Integer); extdecl;
begin
  {$define handleExceptionID := 32502}
  handleExceptionBegin
  AObj.SetRange(AMin, AMax);
  handleExceptionEnd
end;

// property
function TTaskDialogProgressBar_MarqueeSpeed(ASet: LongBool; AObj: TTaskDialogProgressBar; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 32503}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarqueeSpeed := AValue
  end else
    Result := AObj.MarqueeSpeed;
  handleExceptionEnd
end;

// property
function TTaskDialogProgressBar_Max(ASet: LongBool; AObj: TTaskDialogProgressBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 32504}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Max := AValue
  end else
    Result := AObj.Max;
  handleExceptionEnd
end;

// property
function TTaskDialogProgressBar_Min(ASet: LongBool; AObj: TTaskDialogProgressBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 32505}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Min := AValue
  end else
    Result := AObj.Min;
  handleExceptionEnd
end;

// property
function TTaskDialogProgressBar_Position(ASet: LongBool; AObj: TTaskDialogProgressBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 32506}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Position := AValue
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

// property
function TTaskDialogProgressBar_State(ASet: LongBool; AObj: TTaskDialogProgressBar; AValue: TProgressBarState): TProgressBarState; extdecl;
begin
  {$define handleExceptionID := 32507}
  handleExceptionBegin
  if ASet then
  begin
    AObj.State := AValue
  end else
    Result := AObj.State;
  handleExceptionEnd
end;

exports
  TTaskDialogProgressBar_Create,
  TTaskDialogProgressBar_Initialize,
  TTaskDialogProgressBar_SetRange,
  TTaskDialogProgressBar_MarqueeSpeed,
  TTaskDialogProgressBar_Max,
  TTaskDialogProgressBar_Min,
  TTaskDialogProgressBar_Position,
  TTaskDialogProgressBar_State;