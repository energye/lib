// constructor
function TCustomProgressBar_Create(AOwner: TComponent): TCustomProgressBar; extdecl;
begin
  {$define handleExceptionID := 8700}
  handleExceptionBegin
  Result := TCustomProgressBar.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TCustomProgressBar_StepIt(AObj: TCustomProgressBar); extdecl;
begin
  {$define handleExceptionID := 8701}
  handleExceptionBegin
  AObj.StepIt();
  handleExceptionEnd
end;

// procedure
procedure TCustomProgressBar_StepBy(AObj: TCustomProgressBar; Delta: Integer); extdecl;
begin
  {$define handleExceptionID := 8702}
  handleExceptionBegin
  AObj.StepBy(Delta);
  handleExceptionEnd
end;

// property
function TCustomProgressBar_Max(ASet: LongBool; AObj: TCustomProgressBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8703}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Max := AValue
  end else
    Result := AObj.Max;
  handleExceptionEnd
end;

// property
function TCustomProgressBar_Min(ASet: LongBool; AObj: TCustomProgressBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8704}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Min := AValue
  end else
    Result := AObj.Min;
  handleExceptionEnd
end;

// property
function TCustomProgressBar_Orientation(ASet: LongBool; AObj: TCustomProgressBar; AValue: TProgressBarOrientation): TProgressBarOrientation; extdecl;
begin
  {$define handleExceptionID := 8705}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Orientation := AValue
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

// property
function TCustomProgressBar_Position(ASet: LongBool; AObj: TCustomProgressBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8706}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Position := AValue
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

// property
function TCustomProgressBar_Smooth(ASet: LongBool; AObj: TCustomProgressBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8707}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Smooth := AValue
  end else
    Result := AObj.Smooth;
  handleExceptionEnd
end;

// property
function TCustomProgressBar_Step(ASet: LongBool; AObj: TCustomProgressBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8708}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Step := AValue
  end else
    Result := AObj.Step;
  handleExceptionEnd
end;

// property
function TCustomProgressBar_Style(ASet: LongBool; AObj: TCustomProgressBar; AValue: TProgressBarStyle): TProgressBarStyle; extdecl;
begin
  {$define handleExceptionID := 8709}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

// property
function TCustomProgressBar_BarShowText(ASet: LongBool; AObj: TCustomProgressBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8710}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BarShowText := AValue
  end else
    Result := AObj.BarShowText;
  handleExceptionEnd
end;

function TCustomProgressBar_TClass(): TClass; extdecl;
begin
  Result := TCustomProgressBar;
end;

exports
  TCustomProgressBar_Create,
  TCustomProgressBar_StepIt,
  TCustomProgressBar_StepBy,
  TCustomProgressBar_Max,
  TCustomProgressBar_Min,
  TCustomProgressBar_Orientation,
  TCustomProgressBar_Position,
  TCustomProgressBar_Smooth,
  TCustomProgressBar_Step,
  TCustomProgressBar_Style,
  TCustomProgressBar_BarShowText,
  TCustomProgressBar_TClass;