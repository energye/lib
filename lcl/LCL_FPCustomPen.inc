
//constructor
function FPCustomPen_Create(): TFPCustomPen; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TFPCustomPen.Create();
  handleExceptionEnd
end;

//property
function FPCustomPen_Style(AIsSet: LongBool; AObj: TFPCustomPen; AValue: TFPPenStyle): TFPPenStyle; extdecl;
begin
  {$define handleExceptionFuncName :='Style'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Style := AValue;
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

//property
function FPCustomPen_Width(AIsSet: LongBool; AObj: TFPCustomPen; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Width'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Width := AValue;
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

//property
function FPCustomPen_Mode(AIsSet: LongBool; AObj: TFPCustomPen; AValue: TFPPenMode): TFPPenMode; extdecl;
begin
  {$define handleExceptionFuncName :='Mode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Mode := AValue;
  end else
    Result := AObj.Mode;
  handleExceptionEnd
end;

//property
function FPCustomPen_Pattern(AIsSet: LongBool; AObj: TFPCustomPen; AValue: longword): longword; extdecl;
begin
  {$define handleExceptionFuncName :='Pattern'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Pattern := AValue;
  end else
    Result := AObj.Pattern;
  handleExceptionEnd
end;

//property
function FPCustomPen_EndCap(AIsSet: LongBool; AObj: TFPCustomPen; AValue: TFPPenEndCap): TFPPenEndCap; extdecl;
begin
  {$define handleExceptionFuncName :='EndCap'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EndCap := AValue;
  end else
    Result := AObj.EndCap;
  handleExceptionEnd
end;

//property
function FPCustomPen_JoinStyle(AIsSet: LongBool; AObj: TFPCustomPen; AValue: TFPPenJoinStyle): TFPPenJoinStyle; extdecl;
begin
  {$define handleExceptionFuncName :='JoinStyle'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.JoinStyle := AValue;
  end else
    Result := AObj.JoinStyle;
  handleExceptionEnd
end;

//function
function FPCustomPen_CopyPen(AObj: TFPCustomPen): TFPCustomPen; extdecl;
begin
  {$define handleExceptionFuncName :='CopyPen'}
  handleExceptionBegin
  Result := AObj.CopyPen();
  handleExceptionEnd
end;

//function
function FPCustomPen_Class(): TClass; extdecl;
begin
  Result := TFPCustomPen;
end;


exports
  FPCustomPen_Create,
  FPCustomPen_Style,
  FPCustomPen_Width,
  FPCustomPen_Mode,
  FPCustomPen_Pattern,
  FPCustomPen_EndCap,
  FPCustomPen_JoinStyle,
  FPCustomPen_CopyPen,
  FPCustomPen_Class;