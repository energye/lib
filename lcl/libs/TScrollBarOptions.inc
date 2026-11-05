// constructor
function TScrollBarOptions_Create(AOwner: TBaseVirtualTree): TScrollBarOptions; extdecl;
begin
  {$define handleExceptionID := 29600}
  handleExceptionBegin
  Result := TScrollBarOptions.Create(AOwner);
  handleExceptionEnd
end;

// property
function TScrollBarOptions_AlwaysVisible(ASet: LongBool; AObj: TScrollBarOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 29601}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AlwaysVisible := AValue
  end else
    Result := AObj.AlwaysVisible;
  handleExceptionEnd
end;

// property
function TScrollBarOptions_HorizontalIncrement(ASet: LongBool; AObj: TScrollBarOptions; AValue: TVTScrollIncrement): TVTScrollIncrement; extdecl;
begin
  {$define handleExceptionID := 29602}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HorizontalIncrement := AValue
  end else
    Result := AObj.HorizontalIncrement;
  handleExceptionEnd
end;

// property
function TScrollBarOptions_ScrollBars(ASet: LongBool; AObj: TScrollBarOptions; AValue: TScrollStyle): TScrollStyle; extdecl;
begin
  {$define handleExceptionID := 29603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollBars := AValue
  end else
    Result := AObj.ScrollBars;
  handleExceptionEnd
end;

// property
function TScrollBarOptions_ScrollBarStyle(ASet: LongBool; AObj: TScrollBarOptions; AValue: TVTScrollBarStyle): TVTScrollBarStyle; extdecl;
begin
  {$define handleExceptionID := 29604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollBarStyle := AValue
  end else
    Result := AObj.ScrollBarStyle;
  handleExceptionEnd
end;

// property
function TScrollBarOptions_VerticalIncrement(ASet: LongBool; AObj: TScrollBarOptions; AValue: TVTScrollIncrement): TVTScrollIncrement; extdecl;
begin
  {$define handleExceptionID := 29605}
  handleExceptionBegin
  if ASet then
  begin
    AObj.VerticalIncrement := AValue
  end else
    Result := AObj.VerticalIncrement;
  handleExceptionEnd
end;

exports
  TScrollBarOptions_Create,
  TScrollBarOptions_AlwaysVisible,
  TScrollBarOptions_HorizontalIncrement,
  TScrollBarOptions_ScrollBars,
  TScrollBarOptions_ScrollBarStyle,
  TScrollBarOptions_VerticalIncrement;