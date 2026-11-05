// constructor
function TCustomLabel_Create(TheOwner: TComponent): TCustomLabel; extdecl;
begin
  {$define handleExceptionID := 3800}
  handleExceptionBegin
  Result := TCustomLabel.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TCustomLabel_CalcFittingFontHeight(AObj: TCustomLabel; const TheText: PChar; MaxWidth: Integer; MaxHeight: Integer; var FontHeight: Integer; var NeededWidth: Integer; var NeededHeight: Integer): LongBool; extdecl;
var
  OutFontHeight: Integer;
  OutNeededWidth: Integer;
  OutNeededHeight: Integer;
begin
  {$define handleExceptionID := 3801}
  handleExceptionBegin
  Result := AObj.CalcFittingFontHeight(TheText, MaxWidth, MaxHeight, OutFontHeight, OutNeededWidth, OutNeededHeight);
  FontHeight := OutFontHeight;
  NeededWidth := OutNeededWidth;
  NeededHeight := OutNeededHeight;
  handleExceptionEnd
end;

// function
function TCustomLabel_AdjustFontForOptimalFill(AObj: TCustomLabel): LongBool; extdecl;
begin
  {$define handleExceptionID := 3802}
  handleExceptionBegin
  Result := AObj.AdjustFontForOptimalFill();
  handleExceptionEnd
end;

// procedure
procedure TCustomLabel_Paint(AObj: TCustomLabel); extdecl;
begin
  {$define handleExceptionID := 3803}
  handleExceptionBegin
  AObj.Paint();
  handleExceptionEnd
end;

function TCustomLabel_TClass(): TClass; extdecl;
begin
  Result := TCustomLabel;
end;

exports
  TCustomLabel_Create,
  TCustomLabel_CalcFittingFontHeight,
  TCustomLabel_AdjustFontForOptimalFill,
  TCustomLabel_Paint,
  TCustomLabel_TClass;