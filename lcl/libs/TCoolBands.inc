// constructor
function TCoolBands_Create(ACoolBar: TCustomCoolBar): TCoolBands; extdecl;
begin
  {$define handleExceptionID := 20200}
  handleExceptionBegin
  Result := TCoolBands.Create(ACoolBar);
  handleExceptionEnd
end;

// function
function TCoolBands_AddToCoolBand(AObj: TCoolBands): TCoolBand; extdecl;
begin
  {$define handleExceptionID := 20201}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

// function
function TCoolBands_FindBand(AObj: TCoolBands; AControl: TControl): TCoolBand; extdecl;
begin
  {$define handleExceptionID := 20202}
  handleExceptionBegin
  Result := AObj.FindBand(AControl);
  handleExceptionEnd
end;

// function
function TCoolBands_FindBandIndex(AObj: TCoolBands; AControl: TControl): Integer; extdecl;
begin
  {$define handleExceptionID := 20203}
  handleExceptionBegin
  Result := AObj.FindBandIndex(AControl);
  handleExceptionEnd
end;

// property
function TCoolBands_ItemsWithIntToCoolBand(ASet: LongBool; AObj: TCoolBands; Index: Integer; AValue: TCoolBand): TCoolBand; extdecl;
begin
  {$define handleExceptionID := 20204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[Index] := AValue
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

exports
  TCoolBands_Create,
  TCoolBands_AddToCoolBand,
  TCoolBands_FindBand,
  TCoolBands_FindBandIndex,
  TCoolBands_ItemsWithIntToCoolBand;