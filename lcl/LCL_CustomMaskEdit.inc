
//constructor
function CustomMaskEdit_Create(TheOwner: TComponent): TCustomMaskEdit; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomMaskEdit.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomMaskEdit_EnableSets(AIsSet: LongBool; AObj: TCustomMaskEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='EnableSets'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnableSets := AValue;
  end else
    Result := AObj.EnableSets;
  handleExceptionEnd
end;

//property
function CustomMaskEdit_ValidationErrorMode(AIsSet: LongBool; AObj: TCustomMaskEdit; AValue: TMaskEditValidationErrorMode): TMaskEditValidationErrorMode; extdecl;
begin
  {$define handleExceptionFuncName :='ValidationErrorMode'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ValidationErrorMode := AValue;
  end else
    Result := AObj.ValidationErrorMode;
  handleExceptionEnd
end;

//function
function CustomMaskEdit_Class(): TClass; extdecl;
begin
  Result := TCustomMaskEdit;
end;

//procedure
procedure CustomMaskEdit_ValidateEdit(AObj: TCustomMaskEdit); extdecl;
begin
  {$define handleExceptionFuncName :='ValidateEdit'}
  handleExceptionBegin
  AObj.ValidateEdit();
  handleExceptionEnd
end;

//property event
procedure CustomMaskEdit_SetOnValidationError(AObj: TCustomMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnValidationError}
  EventMethodCode
end;


exports
  CustomMaskEdit_Create,
  CustomMaskEdit_EnableSets,
  CustomMaskEdit_ValidationErrorMode,
  CustomMaskEdit_Class,
  CustomMaskEdit_ValidateEdit,
  CustomMaskEdit_SetOnValidationError;