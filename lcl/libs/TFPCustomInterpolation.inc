// property
function TFPCustomInterpolation_Canvas(AObj: TFPCustomInterpolation): TFPCustomCanvas; extdecl;
begin
  {$define handleExceptionID := 31200}
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

// property
function TFPCustomInterpolation_Image(AObj: TFPCustomInterpolation): TFPCustomImage; extdecl;
begin
  {$define handleExceptionID := 31201}
  handleExceptionBegin
  Result := AObj.Image;
  handleExceptionEnd
end;

exports
  TFPCustomInterpolation_Canvas,
  TFPCustomInterpolation_Image;