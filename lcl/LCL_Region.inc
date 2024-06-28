
//constructor
function Region_Create(): TRegion; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TRegion.Create();
  handleExceptionEnd
end;

//property
procedure Region_ClipRect(AIsSet: LongBool; AObj: TRegion; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='ClipRect'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ClipRect := AValue;
  end else
    Result := AObj.ClipRect;
  handleExceptionEnd
end;

//function
function Region_Class(): TClass; extdecl;
begin
  Result := TRegion;
end;

//procedure
procedure Region_AddRectangle(AObj: TRegion; X1, Y1, X2, Y2: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='AddRectangle'}
  handleExceptionBegin
  AObj.AddRectangle(X1, Y1, X2, Y2);
  handleExceptionEnd
end;


exports
  Region_Create,
  Region_ClipRect,
  Region_Class,
  Region_AddRectangle;