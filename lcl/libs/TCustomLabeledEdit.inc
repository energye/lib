// constructor
function TCustomLabeledEdit_Create(TheOwner: TComponent): TCustomLabeledEdit; extdecl;
begin
  {$define handleExceptionID := 19500}
  handleExceptionBegin
  Result := TCustomLabeledEdit.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TCustomLabeledEdit_EditLabel(AObj: TCustomLabeledEdit): TBoundLabel; extdecl;
begin
  {$define handleExceptionID := 19501}
  handleExceptionBegin
  Result := AObj.EditLabel;
  handleExceptionEnd
end;

// property
function TCustomLabeledEdit_LabelPosition(ASet: LongBool; AObj: TCustomLabeledEdit; AValue: TLabelPosition): TLabelPosition; extdecl;
begin
  {$define handleExceptionID := 19502}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LabelPosition := AValue
  end else
    Result := AObj.LabelPosition;
  handleExceptionEnd
end;

// property
function TCustomLabeledEdit_LabelSpacing(ASet: LongBool; AObj: TCustomLabeledEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 19503}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LabelSpacing := AValue
  end else
    Result := AObj.LabelSpacing;
  handleExceptionEnd
end;

function TCustomLabeledEdit_TClass(): TClass; extdecl;
begin
  Result := TCustomLabeledEdit;
end;

exports
  TCustomLabeledEdit_Create,
  TCustomLabeledEdit_EditLabel,
  TCustomLabeledEdit_LabelPosition,
  TCustomLabeledEdit_LabelSpacing,
  TCustomLabeledEdit_TClass;