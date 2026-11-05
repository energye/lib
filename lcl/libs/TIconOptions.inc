// constructor
function TIconOptions_Create(AOwner: TCustomListView): TIconOptions; extdecl;
begin
  {$define handleExceptionID := 16700}
  handleExceptionBegin
  Result := TIconOptions.Create(AOwner);
  handleExceptionEnd
end;

// property
function TIconOptions_Arrangement(ASet: LongBool; AObj: TIconOptions; AValue: TIconArrangement): TIconArrangement; extdecl;
begin
  {$define handleExceptionID := 16701}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Arrangement := AValue
  end else
    Result := AObj.Arrangement;
  handleExceptionEnd
end;

// property
function TIconOptions_AutoArrange(ASet: LongBool; AObj: TIconOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 16702}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoArrange := AValue
  end else
    Result := AObj.AutoArrange;
  handleExceptionEnd
end;

// property
function TIconOptions_WrapText(ASet: LongBool; AObj: TIconOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 16703}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WrapText := AValue
  end else
    Result := AObj.WrapText;
  handleExceptionEnd
end;

exports
  TIconOptions_Create,
  TIconOptions_Arrangement,
  TIconOptions_AutoArrange,
  TIconOptions_WrapText;