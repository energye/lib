// constructor
function TSynGutterSeparator_Create(AOwner: TComponent): TSynGutterSeparator; extdecl;
begin
  {$define handleExceptionID := 40400}
  handleExceptionBegin
  Result := TSynGutterSeparator.Create(AOwner);
  handleExceptionEnd
end;

// property
function TSynGutterSeparator_LineWidth(ASet: LongBool; AObj: TSynGutterSeparator; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 40401}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LineWidth := AValue
  end else
    Result := AObj.LineWidth;
  handleExceptionEnd
end;

// property
function TSynGutterSeparator_LineOffset(ASet: LongBool; AObj: TSynGutterSeparator; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 40402}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LineOffset := AValue
  end else
    Result := AObj.LineOffset;
  handleExceptionEnd
end;

// property
function TSynGutterSeparator_LineOnRight(ASet: LongBool; AObj: TSynGutterSeparator; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 40403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LineOnRight := AValue
  end else
    Result := AObj.LineOnRight;
  handleExceptionEnd
end;

function TSynGutterSeparator_TClass(): TClass; extdecl;
begin
  Result := TSynGutterSeparator;
end;

exports
  TSynGutterSeparator_Create,
  TSynGutterSeparator_LineWidth,
  TSynGutterSeparator_LineOffset,
  TSynGutterSeparator_LineOnRight,
  TSynGutterSeparator_TClass;