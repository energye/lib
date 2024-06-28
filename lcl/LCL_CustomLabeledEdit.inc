
//constructor
function CustomLabeledEdit_Create(TheOwner: TComponent): TCustomLabeledEdit; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomLabeledEdit.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomLabeledEdit_EditLabel(AObj: TCustomLabeledEdit): TBoundLabel; extdecl;
begin
  {$define handleExceptionFuncName :='EditLabel'}
  handleExceptionBegin
  Result := AObj.EditLabel;
  handleExceptionEnd
end;

//property
function CustomLabeledEdit_LabelPosition(AIsSet: LongBool; AObj: TCustomLabeledEdit; AValue: TLabelPosition): TLabelPosition; extdecl;
begin
  {$define handleExceptionFuncName :='LabelPosition'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LabelPosition := AValue;
  end else
    Result := AObj.LabelPosition;
  handleExceptionEnd
end;

//property
function CustomLabeledEdit_LabelSpacing(AIsSet: LongBool; AObj: TCustomLabeledEdit; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='LabelSpacing'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LabelSpacing := AValue;
  end else
    Result := AObj.LabelSpacing;
  handleExceptionEnd
end;

//function
function CustomLabeledEdit_Class(): TClass; extdecl;
begin
  Result := TCustomLabeledEdit;
end;


exports
  CustomLabeledEdit_Create,
  CustomLabeledEdit_EditLabel,
  CustomLabeledEdit_LabelPosition,
  CustomLabeledEdit_LabelSpacing,
  CustomLabeledEdit_Class;