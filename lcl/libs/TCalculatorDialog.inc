// constructor
function TCalculatorDialog_Create(AOwner: TComponent): TCalculatorDialog; extdecl;
begin
  {$define handleExceptionID := 34000}
  handleExceptionBegin
  Result := TCalculatorDialog.Create(AOwner);
  handleExceptionEnd
end;

// property
procedure TCalculatorDialog_CalcDisplay(AObj: TCalculatorDialog; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 34001}
  handleExceptionBegin
  Result := AObj.CalcDisplay;
  handleExceptionEnd
end;

// property
procedure TCalculatorDialog_Memory(AObj: TCalculatorDialog; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 34002}
  handleExceptionBegin
  Result := AObj.Memory;
  handleExceptionEnd
end;

// property
function TCalculatorDialog_BeepOnError(ASet: LongBool; AObj: TCalculatorDialog; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 34003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BeepOnError := AValue
  end else
    Result := AObj.BeepOnError;
  handleExceptionEnd
end;

// property
function TCalculatorDialog_CalculatorLayout(ASet: LongBool; AObj: TCalculatorDialog; AValue: TCalculatorLayout): TCalculatorLayout; extdecl;
begin
  {$define handleExceptionID := 34004}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CalculatorLayout := AValue
  end else
    Result := AObj.CalculatorLayout;
  handleExceptionEnd
end;

// property
function TCalculatorDialog_Precision(ASet: LongBool; AObj: TCalculatorDialog; AValue: Byte): Byte; extdecl;
begin
  {$define handleExceptionID := 34005}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Precision := AValue
  end else
    Result := AObj.Precision;
  handleExceptionEnd
end;

// property
procedure TCalculatorDialog_Value(ASet: LongBool; AObj: TCalculatorDialog; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 34006}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Value := AValue
  end else
    Result := AObj.Value;
  handleExceptionEnd
end;

// property
function TCalculatorDialog_DialogScale(ASet: LongBool; AObj: TCalculatorDialog; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 34007}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DialogScale := AValue
  end else
    Result := AObj.DialogScale;
  handleExceptionEnd
end;

// property
function TCalculatorDialog_ColorBtnDigits(ASet: LongBool; AObj: TCalculatorDialog; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 34008}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorBtnDigits := AValue
  end else
    Result := AObj.ColorBtnDigits;
  handleExceptionEnd
end;

// property
function TCalculatorDialog_ColorBtnMemory(ASet: LongBool; AObj: TCalculatorDialog; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 34009}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorBtnMemory := AValue
  end else
    Result := AObj.ColorBtnMemory;
  handleExceptionEnd
end;

// property
function TCalculatorDialog_ColorBtnOk(ASet: LongBool; AObj: TCalculatorDialog; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 34010}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorBtnOk := AValue
  end else
    Result := AObj.ColorBtnOk;
  handleExceptionEnd
end;

// property
function TCalculatorDialog_ColorBtnCancel(ASet: LongBool; AObj: TCalculatorDialog; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 34011}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorBtnCancel := AValue
  end else
    Result := AObj.ColorBtnCancel;
  handleExceptionEnd
end;

// property
function TCalculatorDialog_ColorBtnClear(ASet: LongBool; AObj: TCalculatorDialog; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 34012}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorBtnClear := AValue
  end else
    Result := AObj.ColorBtnClear;
  handleExceptionEnd
end;

// property
function TCalculatorDialog_ColorBtnOthers(ASet: LongBool; AObj: TCalculatorDialog; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 34013}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorBtnOthers := AValue
  end else
    Result := AObj.ColorBtnOthers;
  handleExceptionEnd
end;

// property
function TCalculatorDialog_ColorDisplayText(ASet: LongBool; AObj: TCalculatorDialog; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 34014}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorDisplayText := AValue
  end else
    Result := AObj.ColorDisplayText;
  handleExceptionEnd
end;

// property
function TCalculatorDialog_ColorDisplayBack(ASet: LongBool; AObj: TCalculatorDialog; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 34015}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ColorDisplayBack := AValue
  end else
    Result := AObj.ColorDisplayBack;
  handleExceptionEnd
end;

// event
procedure TCalculatorDialog_OnCalcKey(AObj: TCalculatorDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTKeyPressEvent}
  {$DEFINE EventName := OnCalcKey}
  LCLEventMethodCode
end;

// event
procedure TCalculatorDialog_OnChange(AObj: TCalculatorDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

// event
procedure TCalculatorDialog_OnDisplayChange(AObj: TCalculatorDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDisplayChange}
  LCLEventMethodCode
end;

function TCalculatorDialog_TClass(): TClass; extdecl;
begin
  Result := TCalculatorDialog;
end;

exports
  TCalculatorDialog_Create,
  TCalculatorDialog_CalcDisplay,
  TCalculatorDialog_Memory,
  TCalculatorDialog_BeepOnError,
  TCalculatorDialog_CalculatorLayout,
  TCalculatorDialog_Precision,
  TCalculatorDialog_Value,
  TCalculatorDialog_DialogScale,
  TCalculatorDialog_ColorBtnDigits,
  TCalculatorDialog_ColorBtnMemory,
  TCalculatorDialog_ColorBtnOk,
  TCalculatorDialog_ColorBtnCancel,
  TCalculatorDialog_ColorBtnClear,
  TCalculatorDialog_ColorBtnOthers,
  TCalculatorDialog_ColorDisplayText,
  TCalculatorDialog_ColorDisplayBack,
  TCalculatorDialog_OnCalcKey,
  TCalculatorDialog_OnChange,
  TCalculatorDialog_OnDisplayChange,
  TCalculatorDialog_TClass;