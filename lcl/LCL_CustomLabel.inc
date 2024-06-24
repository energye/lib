
//constructor
function CustomLabel_Create(TheOwner: TComponent): TCustomLabel; extdecl;
begin
  handleExceptionBegin
  Result := TCustomLabel.Create(TheOwner);
  handleExceptionEnd
end;

//function
function CustomLabel_CalcFittingFontHeight(AObj: TCustomLabel; const TheText: PChar; MaxWidth, MaxHeight: Integer; out OutFontHeight, OutNeededWidth, OutNeededHeight: Integer): LongBool; extdecl;
var
  RetOutFontHeight: Integer;
  RetOutNeededWidth: Integer;
  RetOutNeededHeight: Integer;
begin
  handleExceptionBegin
  RetOutFontHeight := OutFontHeight;
  RetOutNeededWidth := OutNeededWidth;
  RetOutNeededHeight := OutNeededHeight;
  Result := AObj.CalcFittingFontHeight(TheText, MaxWidth, MaxHeight, RetOutFontHeight, RetOutNeededWidth, RetOutNeededHeight);
  OutFontHeight := RetOutFontHeight;
  OutNeededWidth := RetOutNeededWidth;
  OutNeededHeight := RetOutNeededHeight;
  handleExceptionEnd
end;

//function
function CustomLabel_AdjustFontForOptimalFill(AObj: TCustomLabel): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AdjustFontForOptimalFill();
  handleExceptionEnd
end;

//function
function CustomLabel_Class(): TClass; extdecl;
begin
  Result := TCustomLabel;
end;

//procedure
procedure CustomLabel_Paint(AObj: TCustomLabel); extdecl;
begin
  handleExceptionBegin
  AObj.Paint();
  handleExceptionEnd
end;


exports
  CustomLabel_Create,
  CustomLabel_CalcFittingFontHeight,
  CustomLabel_AdjustFontForOptimalFill,
  CustomLabel_Class,
  CustomLabel_Paint;