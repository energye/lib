// constructor
function TCustomGroupBox_Create(AOwner: TComponent): TCustomGroupBox; extdecl;
begin
  {$define handleExceptionID := 3500}
  handleExceptionBegin
  Result := TCustomGroupBox.Create(AOwner);
  handleExceptionEnd
end;

// property
function TCustomGroupBox_ParentBackground(ASet: LongBool; AObj: TCustomGroupBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3501}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentBackground := AValue
  end else
    Result := AObj.ParentBackground;
  handleExceptionEnd
end;

function TCustomGroupBox_TClass(): TClass; extdecl;
begin
  Result := TCustomGroupBox;
end;

exports
  TCustomGroupBox_Create,
  TCustomGroupBox_ParentBackground,
  TCustomGroupBox_TClass;