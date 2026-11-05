// constructor
function TCustomMaskEdit_Create(TheOwner: TComponent): TCustomMaskEdit; extdecl;
begin
  {$define handleExceptionID := 2400}
  handleExceptionBegin
  Result := TCustomMaskEdit.Create(TheOwner);
  handleExceptionEnd
end;

// procedure
procedure TCustomMaskEdit_Clear(AObj: TCustomMaskEdit); extdecl;
begin
  {$define handleExceptionID := 2401}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TCustomMaskEdit_ValidateEdit(AObj: TCustomMaskEdit); extdecl;
begin
  {$define handleExceptionID := 2402}
  handleExceptionBegin
  AObj.ValidateEdit();
  handleExceptionEnd
end;

// property
function TCustomMaskEdit_EnableSets(ASet: LongBool; AObj: TCustomMaskEdit; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnableSets := AValue
  end else
    Result := AObj.EnableSets;
  handleExceptionEnd
end;

// property
function TCustomMaskEdit_ValidationErrorMode(ASet: LongBool; AObj: TCustomMaskEdit; AValue: TMaskEditValidationErrorMode): TMaskEditValidationErrorMode; extdecl;
begin
  {$define handleExceptionID := 2404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ValidationErrorMode := AValue
  end else
    Result := AObj.ValidationErrorMode;
  handleExceptionEnd
end;

// event
procedure TCustomMaskEdit_OnValidationError(AObj: TCustomMaskEdit; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnValidationError}
  LCLEventMethodCode
end;

function TCustomMaskEdit_TClass(): TClass; extdecl;
begin
  Result := TCustomMaskEdit;
end;

exports
  TCustomMaskEdit_Create,
  TCustomMaskEdit_Clear,
  TCustomMaskEdit_ValidateEdit,
  TCustomMaskEdit_EnableSets,
  TCustomMaskEdit_ValidationErrorMode,
  TCustomMaskEdit_OnValidationError,
  TCustomMaskEdit_TClass;