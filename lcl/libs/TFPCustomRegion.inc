// function
procedure TFPCustomRegion_GetBoundingRect(AObj: TFPCustomRegion; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 24400}
  handleExceptionBegin
  Result := AObj.GetBoundingRect();
  handleExceptionEnd
end;

// function
function TFPCustomRegion_IsPointInRegion(AObj: TFPCustomRegion; AX: Integer; AY: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 24401}
  handleExceptionBegin
  Result := AObj.IsPointInRegion(AX, AY);
  handleExceptionEnd
end;

exports
  TFPCustomRegion_GetBoundingRect,
  TFPCustomRegion_IsPointInRegion;