
//constructor
function IconOptions_Create(AOwner: TCustomListView): TIconOptions; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TIconOptions.Create(AOwner);
  handleExceptionEnd
end;

//property
function IconOptions_Arrangement(AIsSet: LongBool; AObj: TIconOptions; AValue: TIconArrangement): TIconArrangement; extdecl;
begin
  {$define handleExceptionFuncName :='Arrangement'}
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
  {$define handleExceptionFuncName :='AutoArrange'}
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
  {$define handleExceptionFuncName :='WrapText'}
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