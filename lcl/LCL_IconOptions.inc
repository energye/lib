
//constructor
function IconOptions_Create(AOwner: TCustomListView): TIconOptions; extdecl;
begin
  handleExceptionBegin
  Result := TIconOptions.Create(AOwner);
  handleExceptionEnd
end;

//property
function IconOptions_Arrangement(AIsSet: LongBool; AObj: TIconOptions; AValue: TIconArrangement): TIconArrangement; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Arrangement := AValue;
  end else
    Result := AObj.Arrangement;
  handleExceptionEnd
end;

//property
function IconOptions_AutoArrange(AIsSet: LongBool; AObj: TIconOptions; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoArrange := AValue;
  end else
    Result := AObj.AutoArrange;
  handleExceptionEnd
end;

//property
function IconOptions_WrapText(AIsSet: LongBool; AObj: TIconOptions; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WrapText := AValue;
  end else
    Result := AObj.WrapText;
  handleExceptionEnd
end;

//function
function IconOptions_Class(): TClass; extdecl;
begin
  Result := TIconOptions;
end;


exports
  IconOptions_Create,
  IconOptions_Arrangement,
  IconOptions_AutoArrange,
  IconOptions_WrapText,
  IconOptions_Class;