
//constructor
function CustomProgressBar_Create(AOwner: TComponent): TCustomProgressBar; extdecl;
begin
  handleExceptionBegin
  Result := TCustomProgressBar.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomProgressBar_Max(AIsSet: LongBool; AObj: TCustomProgressBar; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Max := AValue;
  end else
    Result := AObj.Max;
  handleExceptionEnd
end;

//property
function CustomProgressBar_Min(AIsSet: LongBool; AObj: TCustomProgressBar; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Min := AValue;
  end else
    Result := AObj.Min;
  handleExceptionEnd
end;

//property
function CustomProgressBar_Orientation(AIsSet: LongBool; AObj: TCustomProgressBar; AValue: TProgressBarOrientation): TProgressBarOrientation; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Orientation := AValue;
  end else
    Result := AObj.Orientation;
  handleExceptionEnd
end;

//property
function CustomProgressBar_Position(AIsSet: LongBool; AObj: TCustomProgressBar; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Position := AValue;
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

//property
function CustomProgressBar_Smooth(AIsSet: LongBool; AObj: TCustomProgressBar; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Smooth := AValue;
  end else
    Result := AObj.Smooth;
  handleExceptionEnd
end;

//property
function CustomProgressBar_Step(AIsSet: LongBool; AObj: TCustomProgressBar; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Step := AValue;
  end else
    Result := AObj.Step;
  handleExceptionEnd
end;

//property
function CustomProgressBar_Style(AIsSet: LongBool; AObj: TCustomProgressBar; AValue: TProgressBarStyle): TProgressBarStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Style := AValue;
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

//property
function CustomProgressBar_BarShowText(AIsSet: LongBool; AObj: TCustomProgressBar; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BarShowText := AValue;
  end else
    Result := AObj.BarShowText;
  handleExceptionEnd
end;

//function
function CustomProgressBar_Class(): TClass; extdecl;
begin
  Result := TCustomProgressBar;
end;

//procedure
procedure CustomProgressBar_StepIt(AObj: TCustomProgressBar); extdecl;
begin
  handleExceptionBegin
  AObj.StepIt();
  handleExceptionEnd
end;

//procedure
procedure CustomProgressBar_StepBy(AObj: TCustomProgressBar; Delta: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.StepBy(Delta);
  handleExceptionEnd
end;


exports
  CustomProgressBar_Create,
  CustomProgressBar_Max,
  CustomProgressBar_Min,
  CustomProgressBar_Orientation,
  CustomProgressBar_Position,
  CustomProgressBar_Smooth,
  CustomProgressBar_Step,
  CustomProgressBar_Style,
  CustomProgressBar_BarShowText,
  CustomProgressBar_Class,
  CustomProgressBar_StepIt,
  CustomProgressBar_StepBy;