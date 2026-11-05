// constructor
function TFPCustomPen_Create(): TFPCustomPen; extdecl;
begin
  {$define handleExceptionID := 11800}
  handleExceptionBegin
  Result := TFPCustomPen.Create();
  handleExceptionEnd
end;

// function
function TFPCustomPen_CopyPen(AObj: TFPCustomPen): TFPCustomPen; extdecl;
begin
  {$define handleExceptionID := 11801}
  handleExceptionBegin
  Result := AObj.CopyPen();
  handleExceptionEnd
end;

// property
function TFPCustomPen_Style(ASet: LongBool; AObj: TFPCustomPen; AValue: TFPPenStyle): TFPPenStyle; extdecl;
begin
  {$define handleExceptionID := 11802}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

// property
function TFPCustomPen_Width(ASet: LongBool; AObj: TFPCustomPen; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 11803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

// property
function TFPCustomPen_Mode(ASet: LongBool; AObj: TFPCustomPen; AValue: TFPPenMode): TFPPenMode; extdecl;
begin
  {$define handleExceptionID := 11804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Mode := AValue
  end else
    Result := AObj.Mode;
  handleExceptionEnd
end;

// property
function TFPCustomPen_Pattern(ASet: LongBool; AObj: TFPCustomPen; AValue: longword): longword; extdecl;
begin
  {$define handleExceptionID := 11805}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Pattern := AValue
  end else
    Result := AObj.Pattern;
  handleExceptionEnd
end;

// property
function TFPCustomPen_EndCapToFPPenEndCap(ASet: LongBool; AObj: TFPCustomPen; AValue: TFPPenEndCap): TFPPenEndCap; extdecl;
begin
  {$define handleExceptionID := 11806}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EndCap := AValue
  end else
    Result := AObj.EndCap;
  handleExceptionEnd
end;

// property
function TFPCustomPen_JoinStyleToFPPenJoinStyle(ASet: LongBool; AObj: TFPCustomPen; AValue: TFPPenJoinStyle): TFPPenJoinStyle; extdecl;
begin
  {$define handleExceptionID := 11807}
  handleExceptionBegin
  if ASet then
  begin
    AObj.JoinStyle := AValue
  end else
    Result := AObj.JoinStyle;
  handleExceptionEnd
end;

exports
  TFPCustomPen_Create,
  TFPCustomPen_CopyPen,
  TFPCustomPen_Style,
  TFPCustomPen_Width,
  TFPCustomPen_Mode,
  TFPCustomPen_Pattern,
  TFPCustomPen_EndCapToFPPenEndCap,
  TFPCustomPen_JoinStyleToFPPenJoinStyle;