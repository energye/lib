
//constructor
function CustomDesignControl_Create(TheOwner: TComponent): TCustomDesignControl; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomDesignControl.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomDesignControl_DesignTimePPI(AIsSet: LongBool; AObj: TCustomDesignControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='DesignTimePPI'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DesignTimePPI := AValue;
  end else
    Result := AObj.DesignTimePPI;
  handleExceptionEnd
end;

//property
function CustomDesignControl_PixelsPerInch(AIsSet: LongBool; AObj: TCustomDesignControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='PixelsPerInch'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PixelsPerInch := AValue;
  end else
    Result := AObj.PixelsPerInch;
  handleExceptionEnd
end;

//property
function CustomDesignControl_Scaled(AIsSet: LongBool; AObj: TCustomDesignControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Scaled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Scaled := AValue;
  end else
    Result := AObj.Scaled;
  handleExceptionEnd
end;

//function
function CustomDesignControl_Class(): TClass; extdecl;
begin
  Result := TCustomDesignControl;
end;


exports
  CustomDesignControl_Create,
  CustomDesignControl_DesignTimePPI,
  CustomDesignControl_PixelsPerInch,
  CustomDesignControl_Scaled,
  CustomDesignControl_Class;