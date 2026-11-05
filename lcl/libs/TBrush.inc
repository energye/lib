// constructor
function TBrush_Create(): TBrush; extdecl;
begin
  {$define handleExceptionID := 11700}
  handleExceptionBegin
  Result := TBrush.Create();
  handleExceptionEnd
end;

// function
function TBrush_EqualsBrush(AObj: TBrush; ABrush: TBrush): LongBool; extdecl;
begin
  {$define handleExceptionID := 11701}
  handleExceptionBegin
  Result := AObj.EqualsBrush(ABrush);
  handleExceptionEnd
end;

// property
function TBrush_Bitmap(ASet: LongBool; AObj: TBrush; AValue: TCustomBitmap): TCustomBitmap; extdecl;
begin
  {$define handleExceptionID := 11702}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Bitmap := AValue
  end else
    Result := AObj.Bitmap;
  handleExceptionEnd
end;

// property
function TBrush_Color(ASet: LongBool; AObj: TBrush; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 11703}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Color := AValue
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

exports
  TBrush_Create,
  TBrush_EqualsBrush,
  TBrush_Bitmap,
  TBrush_Color;