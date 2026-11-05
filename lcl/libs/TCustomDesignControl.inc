// constructor
function TCustomDesignControl_Create(TheOwner: TComponent): TCustomDesignControl; extdecl;
begin
  {$define handleExceptionID := 1100}
  handleExceptionBegin
  Result := TCustomDesignControl.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TCustomDesignControl_DesignTimePPI(ASet: LongBool; AObj: TCustomDesignControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 1101}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DesignTimePPI := AValue
  end else
    Result := AObj.DesignTimePPI;
  handleExceptionEnd
end;

// property
function TCustomDesignControl_PixelsPerInch(ASet: LongBool; AObj: TCustomDesignControl; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 1102}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PixelsPerInch := AValue
  end else
    Result := AObj.PixelsPerInch;
  handleExceptionEnd
end;

// property
function TCustomDesignControl_Scaled(ASet: LongBool; AObj: TCustomDesignControl; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Scaled := AValue
  end else
    Result := AObj.Scaled;
  handleExceptionEnd
end;

function TCustomDesignControl_TClass(): TClass; extdecl;
begin
  Result := TCustomDesignControl;
end;

exports
  TCustomDesignControl_Create,
  TCustomDesignControl_DesignTimePPI,
  TCustomDesignControl_PixelsPerInch,
  TCustomDesignControl_Scaled,
  TCustomDesignControl_TClass;