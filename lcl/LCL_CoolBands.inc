
//constructor
function CoolBands_Create(ACoolBar: TCustomCoolBar): TCoolBands; extdecl;
begin
  handleExceptionBegin
  Result := TCoolBands.Create(ACoolBar);
  handleExceptionEnd
end;

//property
function CoolBands_ItemsForCoolBand(AIsSet: LongBool; AObj: TCoolBands; Index: Integer; AValue: TCoolBand): TCoolBand; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Items[Index] := AValue;
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

//function
function CoolBands_AddForCoolBand(AObj: TCoolBands): TCoolBand; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

//function
function CoolBands_FindBand(AObj: TCoolBands; AControl: TControl): TCoolBand; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindBand(AControl);
  handleExceptionEnd
end;

//function
function CoolBands_FindBandIndex(AObj: TCoolBands; AControl: TControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindBandIndex(AControl);
  handleExceptionEnd
end;

//function
function CoolBands_Class(): TClass; extdecl;
begin
  Result := TCoolBands;
end;


exports
  CoolBands_Create,
  CoolBands_ItemsForCoolBand,
  CoolBands_AddForCoolBand,
  CoolBands_FindBand,
  CoolBands_FindBandIndex,
  CoolBands_Class;