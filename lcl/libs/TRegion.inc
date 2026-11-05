// constructor
function TRegion_Create(): TRegion; extdecl;
begin
  {$define handleExceptionID := 5200}
  handleExceptionBegin
  Result := TRegion.Create();
  handleExceptionEnd
end;

// procedure
procedure TRegion_AddRectangle(AObj: TRegion; X1: Integer; Y1: Integer; X2: Integer; Y2: Integer); extdecl;
begin
  {$define handleExceptionID := 5201}
  handleExceptionBegin
  AObj.AddRectangle(X1, Y1, X2, Y2);
  handleExceptionEnd
end;

// property
procedure TRegion_ClipRect(ASet: LongBool; AObj: TRegion; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 5202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ClipRect := AValue
  end else
    Result := AObj.ClipRect;
  handleExceptionEnd
end;

exports
  TRegion_Create,
  TRegion_AddRectangle,
  TRegion_ClipRect;