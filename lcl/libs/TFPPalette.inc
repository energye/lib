// constructor
function TFPPalette_Create(ACount: integer): TFPPalette; extdecl;
begin
  {$define handleExceptionID := 25400}
  handleExceptionBegin
  Result := TFPPalette.Create (ACount);
  handleExceptionEnd
end;

// function
function TFPPalette_IndexOf(AObj: TFPPalette; var AColor: TFPColorPtr): integer; extdecl;
var
  InAColor: TFPColor;
begin
  {$define handleExceptionID := 25401}
  handleExceptionBegin
  InAColor := TFPColorToPas(AColor);
  Result := AObj.IndexOf(InAColor);
  handleExceptionEnd
end;

// function
function TFPPalette_Add(AObj: TFPPalette; var Value: TFPColorPtr): integer; extdecl;
var
  InValue: TFPColor;
begin
  {$define handleExceptionID := 25402}
  handleExceptionBegin
  InValue := TFPColorToPas(Value);
  Result := AObj.Add(InValue);
  handleExceptionEnd
end;

// procedure
procedure TFPPalette_Build(AObj: TFPPalette; Img: TFPCustomImage); extdecl;
begin
  {$define handleExceptionID := 25403}
  handleExceptionBegin
  AObj.Build(Img);
  handleExceptionEnd
end;

// procedure
procedure TFPPalette_Copy(AObj: TFPPalette; APalette: TFPPalette); extdecl;
begin
  {$define handleExceptionID := 25404}
  handleExceptionBegin
  AObj.Copy(APalette);
  handleExceptionEnd
end;

// procedure
procedure TFPPalette_Merge(AObj: TFPPalette; pal: TFPPalette); extdecl;
begin
  {$define handleExceptionID := 25405}
  handleExceptionBegin
  AObj.Merge(pal);
  handleExceptionEnd
end;

// procedure
procedure TFPPalette_Clear(AObj: TFPPalette); extdecl;
begin
  {$define handleExceptionID := 25406}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// property
procedure TFPPalette_Color(ASet: LongBool; AObj: TFPPalette; Index: integer; var AValue: TFPColorPtr; var Result: TFPColorPtr); extdecl;
begin
  {$define handleExceptionID := 25407}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Color[Index] := TFPColorToPas(AValue)
  end else
    Result := TFPColorToGo(AObj.Color[Index]);
  handleExceptionEnd
end;

// property
function TFPPalette_Count(ASet: LongBool; AObj: TFPPalette; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 25408}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Count := AValue
  end else
    Result := AObj.Count;
  handleExceptionEnd
end;

// property
function TFPPalette_Capacity(ASet: LongBool; AObj: TFPPalette; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 25409}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Capacity := AValue
  end else
    Result := AObj.Capacity;
  handleExceptionEnd
end;

exports
  TFPPalette_Create,
  TFPPalette_IndexOf,
  TFPPalette_Add,
  TFPPalette_Build,
  TFPPalette_Copy,
  TFPPalette_Merge,
  TFPPalette_Clear,
  TFPPalette_Color,
  TFPPalette_Count,
  TFPPalette_Capacity;