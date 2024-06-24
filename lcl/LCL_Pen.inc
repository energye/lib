
//constructor
function Pen_Create(): TPen; extdecl;
begin
  handleExceptionBegin
  Result := TPen.Create();
  handleExceptionEnd
end;

//property
function Pen_Color(AIsSet: LongBool; AObj: TPen; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Color := AValue;
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

//property
function Pen_Cosmetic(AIsSet: LongBool; AObj: TPen; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Cosmetic := AValue;
  end else
    Result := AObj.Cosmetic;
  handleExceptionEnd
end;

//property
function Pen_EndCapForPenEndCap(AIsSet: LongBool; AObj: TPen; AValue: TPenEndCap): TPenEndCap; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EndCap := AValue;
  end else
    Result := AObj.EndCap;
  handleExceptionEnd
end;

//property
function Pen_JoinStyleForPenJoinStyle(AIsSet: LongBool; AObj: TPen; AValue: TPenJoinStyle): TPenJoinStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.JoinStyle := AValue;
  end else
    Result := AObj.JoinStyle;
  handleExceptionEnd
end;

//function
function Pen_GetPatternForUintptr(AObj: TPen): Pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetPattern();
  handleExceptionEnd
end;

//function
function Pen_Class(): TClass; extdecl;
begin
  Result := TPen;
end;

//procedure
procedure Pen_SetPatternForPointer(AObj: TPen; APattern: Pointer); extdecl;
begin
  handleExceptionBegin
  AObj.SetPattern(APattern);
  handleExceptionEnd
end;


exports
  Pen_Create,
  Pen_Color,
  Pen_Cosmetic,
  Pen_EndCapForPenEndCap,
  Pen_JoinStyleForPenJoinStyle,
  Pen_GetPatternForUintptr,
  Pen_Class,
  Pen_SetPatternForPointer;