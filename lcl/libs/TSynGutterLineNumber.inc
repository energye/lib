// constructor
function TSynGutterLineNumber_Create(AOwner: TComponent): TSynGutterLineNumber; extdecl;
begin
  {$define handleExceptionID := 39100}
  handleExceptionBegin
  Result := TSynGutterLineNumber.Create(AOwner);
  handleExceptionEnd
end;

// function
procedure TSynGutterLineNumber_FormatLineNumber(AObj: TSynGutterLineNumber; Line: integer; IsDot: LongBool;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 39101}
  handleExceptionBegin
  StringBufferCreate(AObj.FormatLineNumber(Line, IsDot), AStrData, AStrSize);
  handleExceptionEnd
end;

// procedure
procedure TSynGutterLineNumber_PaintWithCanvasRectIntX2(AObj: TSynGutterLineNumber; Canvas: TCanvas; var AClip: TRect; FirstLine: integer; LastLine: integer); extdecl;
begin
  {$define handleExceptionID := 39102}
  handleExceptionBegin
  AObj.Paint(Canvas, AClip, FirstLine, LastLine);
  handleExceptionEnd
end;

// property
function TSynGutterLineNumber_DigitCount(ASet: LongBool; AObj: TSynGutterLineNumber; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 39103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DigitCount := AValue
  end else
    Result := AObj.DigitCount;
  handleExceptionEnd
end;

// property
function TSynGutterLineNumber_ShowOnlyLineNumbersMultiplesOf(ASet: LongBool; AObj: TSynGutterLineNumber; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 39104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowOnlyLineNumbersMultiplesOf := AValue
  end else
    Result := AObj.ShowOnlyLineNumbersMultiplesOf;
  handleExceptionEnd
end;

// property
function TSynGutterLineNumber_ZeroStart(ASet: LongBool; AObj: TSynGutterLineNumber; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 39105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ZeroStart := AValue
  end else
    Result := AObj.ZeroStart;
  handleExceptionEnd
end;

// property
function TSynGutterLineNumber_LeadingZeros(ASet: LongBool; AObj: TSynGutterLineNumber; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 39106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LeadingZeros := AValue
  end else
    Result := AObj.LeadingZeros;
  handleExceptionEnd
end;

// event
procedure TSynGutterLineNumber_OnFormatLineNumber(AObj: TSynGutterLineNumber; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynEditGetGutterLineTextEvent}
  {$DEFINE EventName := OnFormatLineNumber}
  LCLEventMethodCode
end;

function TSynGutterLineNumber_TClass(): TClass; extdecl;
begin
  Result := TSynGutterLineNumber;
end;

exports
  TSynGutterLineNumber_Create,
  TSynGutterLineNumber_FormatLineNumber,
  TSynGutterLineNumber_PaintWithCanvasRectIntX2,
  TSynGutterLineNumber_DigitCount,
  TSynGutterLineNumber_ShowOnlyLineNumbersMultiplesOf,
  TSynGutterLineNumber_ZeroStart,
  TSynGutterLineNumber_LeadingZeros,
  TSynGutterLineNumber_OnFormatLineNumber,
  TSynGutterLineNumber_TClass;