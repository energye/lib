
//function
procedure FPCustomRegion_GetBoundingRect(AObj: TFPCustomRegion; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='GetBoundingRect'}
  handleExceptionBegin
  Result := AObj.GetBoundingRect();
  handleExceptionEnd
end;

//function
function FPCustomRegion_IsPointInRegion(AObj: TFPCustomRegion; AX, AY: Integer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsPointInRegion'}
  handleExceptionBegin
  Result := AObj.IsPointInRegion(AX, AY);
  handleExceptionEnd
end;

//function
function FPCustomRegion_Class(): TClass; extdecl;
begin
  Result := TFPCustomRegion;
end;


exports
  FPCustomRegion_GetBoundingRect,
  FPCustomRegion_IsPointInRegion,
  FPCustomRegion_Class;