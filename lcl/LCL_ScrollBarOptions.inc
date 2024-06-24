
//constructor
function ScrollBarOptions_Create(AOwner: TBaseVirtualTree): TScrollBarOptions; extdecl;
begin
  handleExceptionBegin
  Result := TScrollBarOptions.Create(AOwner);
  handleExceptionEnd
end;

//property
function ScrollBarOptions_AlwaysVisible(AIsSet: LongBool; AObj: TScrollBarOptions; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AlwaysVisible := AValue;
  end else
    Result := AObj.AlwaysVisible;
  handleExceptionEnd
end;

//property
function ScrollBarOptions_HorizontalIncrement(AIsSet: LongBool; AObj: TScrollBarOptions; AValue: TVTScrollIncrement): TVTScrollIncrement; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HorizontalIncrement := AValue;
  end else
    Result := AObj.HorizontalIncrement;
  handleExceptionEnd
end;

//property
function ScrollBarOptions_ScrollBars(AIsSet: LongBool; AObj: TScrollBarOptions; AValue: TScrollStyle): TScrollStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScrollBars := AValue;
  end else
    Result := AObj.ScrollBars;
  handleExceptionEnd
end;

//property
function ScrollBarOptions_ScrollBarStyle(AIsSet: LongBool; AObj: TScrollBarOptions; AValue: TVTScrollBarStyle): TVTScrollBarStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScrollBarStyle := AValue;
  end else
    Result := AObj.ScrollBarStyle;
  handleExceptionEnd
end;

//property
function ScrollBarOptions_VerticalIncrement(AIsSet: LongBool; AObj: TScrollBarOptions; AValue: TVTScrollIncrement): TVTScrollIncrement; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.VerticalIncrement := AValue;
  end else
    Result := AObj.VerticalIncrement;
  handleExceptionEnd
end;

//function
function ScrollBarOptions_Class(): TClass; extdecl;
begin
  Result := TScrollBarOptions;
end;


exports
  ScrollBarOptions_Create,
  ScrollBarOptions_AlwaysVisible,
  ScrollBarOptions_HorizontalIncrement,
  ScrollBarOptions_ScrollBars,
  ScrollBarOptions_ScrollBarStyle,
  ScrollBarOptions_VerticalIncrement,
  ScrollBarOptions_Class;