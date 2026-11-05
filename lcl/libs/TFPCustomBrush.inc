// constructor
function TFPCustomBrush_Create(): TFPCustomBrush; extdecl;
begin
  {$define handleExceptionID := 11600}
  handleExceptionBegin
  Result := TFPCustomBrush.Create();
  handleExceptionEnd
end;

// function
function TFPCustomBrush_CopyBrush(AObj: TFPCustomBrush): TFPCustomBrush; extdecl;
begin
  {$define handleExceptionID := 11601}
  handleExceptionBegin
  Result := AObj.CopyBrush();
  handleExceptionEnd
end;

// property
function TFPCustomBrush_Style(ASet: LongBool; AObj: TFPCustomBrush; AValue: TFPBrushStyle): TFPBrushStyle; extdecl;
begin
  {$define handleExceptionID := 11602}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Style := AValue
  end else
    Result := AObj.Style;
  handleExceptionEnd
end;

// property
function TFPCustomBrush_Image(ASet: LongBool; AObj: TFPCustomBrush; AValue: TFPCustomImage): TFPCustomImage; extdecl;
begin
  {$define handleExceptionID := 11603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Image := AValue
  end else
    Result := AObj.Image;
  handleExceptionEnd
end;

// property
function TFPCustomBrush_Pattern(ASet: LongBool; AObj: TFPCustomBrush; AValue: TBrushPatternWrap): TBrushPatternWrap; extdecl;
begin
  {$define handleExceptionID := 11604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Pattern := AValue.BrushPatternData()^
  end else
    Result := TBrushPatternWrap.Create(AObj.Pattern);
  handleExceptionEnd
end;

exports
  TFPCustomBrush_Create,
  TFPCustomBrush_CopyBrush,
  TFPCustomBrush_Style,
  TFPCustomBrush_Image,
  TFPCustomBrush_Pattern;