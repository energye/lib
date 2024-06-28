
//constructor
function FPPalette_Create(ACount: integer): TFPPalette; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TFPPalette.Create(ACount);
  handleExceptionEnd
end;

//property
function FPPalette_Color(AIsSet: LongBool; AObj: TFPPalette; Index: integer; AValue: TFPColor): TFPColor; extdecl;
begin
  {$define handleExceptionFuncName :='Color'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Color[Index] := AValue;
  end else
    Result := AObj.Color[Index];
  handleExceptionEnd
end;

//property
function FPPalette_Count(AIsSet: LongBool; AObj: TFPPalette; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='Count'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Count := AValue;
  end else
    Result := AObj.Count;
  handleExceptionEnd
end;

//property
function FPPalette_Capacity(AIsSet: LongBool; AObj: TFPPalette; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='Capacity'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Capacity := AValue;
  end else
    Result := AObj.Capacity;
  handleExceptionEnd
end;

//function
function FPPalette_IndexOf(AObj: TFPPalette; const AColor: TFPColor): integer; extdecl;
begin
  {$define handleExceptionFuncName :='IndexOf'}
  handleExceptionBegin
  Result := AObj.IndexOf(AColor);
  handleExceptionEnd
end;

//function
function FPPalette_Add(AObj: TFPPalette; const Value: TFPColor): integer; extdecl;
begin
  {$define handleExceptionFuncName :='Add'}
  handleExceptionBegin
  Result := AObj.Add(Value);
  handleExceptionEnd
end;

//function
function FPPalette_Class(): TClass; extdecl;
begin
  Result := TFPPalette;
end;

//procedure
procedure FPPalette_Build(AObj: TFPPalette; Img: TFPCustomImage); extdecl;
begin
  {$define handleExceptionFuncName :='Build'}
  handleExceptionBegin
  AObj.Build(Img);
  handleExceptionEnd
end;

//procedure
procedure FPPalette_Copy(AObj: TFPPalette; APalette: TFPPalette); extdecl;
begin
  {$define handleExceptionFuncName :='Copy'}
  handleExceptionBegin
  AObj.Copy(APalette);
  handleExceptionEnd
end;

//procedure
procedure FPPalette_Merge(AObj: TFPPalette; pal: TFPPalette); extdecl;
begin
  {$define handleExceptionFuncName :='Merge'}
  handleExceptionBegin
  AObj.Merge(pal);
  handleExceptionEnd
end;

//procedure
procedure FPPalette_Clear(AObj: TFPPalette); extdecl;
begin
  {$define handleExceptionFuncName :='Clear'}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;


exports
  FPPalette_Create,
  FPPalette_Color,
  FPPalette_Count,
  FPPalette_Capacity,
  FPPalette_IndexOf,
  FPPalette_Add,
  FPPalette_Class,
  FPPalette_Build,
  FPPalette_Copy,
  FPPalette_Merge,
  FPPalette_Clear;