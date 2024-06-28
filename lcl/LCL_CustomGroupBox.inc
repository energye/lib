
//constructor
function CustomGroupBox_Create(AOwner: TComponent): TCustomGroupBox; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomGroupBox.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomGroupBox_ParentBackground(AIsSet: LongBool; AObj: TCustomGroupBox; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentBackground'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentBackground := AValue;
  end else
    Result := AObj.ParentBackground;
  handleExceptionEnd
end;

//function
function CustomGroupBox_Class(): TClass; extdecl;
begin
  Result := TCustomGroupBox;
end;


exports
  CustomGroupBox_Create,
  CustomGroupBox_ParentBackground,
  CustomGroupBox_Class;