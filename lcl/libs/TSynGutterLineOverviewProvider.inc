// constructor
function TSynGutterLineOverviewProvider_Create(AOwner: TComponent): TSynGutterLineOverviewProvider; extdecl;
begin
  {$define handleExceptionID := 41300}
  handleExceptionBegin
  Result := TSynGutterLineOverviewProvider.Create(AOwner);
  handleExceptionEnd
end;

// property
function TSynGutterLineOverviewProvider_Height(ASet: LongBool; AObj: TSynGutterLineOverviewProvider; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 41301}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Height := AValue
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TSynGutterLineOverviewProvider_Priority(ASet: LongBool; AObj: TSynGutterLineOverviewProvider; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 41302}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Priority := AValue
  end else
    Result := AObj.Priority;
  handleExceptionEnd
end;

// property
function TSynGutterLineOverviewProvider_Color(ASet: LongBool; AObj: TSynGutterLineOverviewProvider; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 41303}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Color := AValue
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

function TSynGutterLineOverviewProvider_TClass(): TClass; extdecl;
begin
  Result := TSynGutterLineOverviewProvider;
end;

exports
  TSynGutterLineOverviewProvider_Create,
  TSynGutterLineOverviewProvider_Height,
  TSynGutterLineOverviewProvider_Priority,
  TSynGutterLineOverviewProvider_Color,
  TSynGutterLineOverviewProvider_TClass;