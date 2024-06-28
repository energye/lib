
//constructor
function WindowMagnetOptions_Create(): TWindowMagnetOptions; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TWindowMagnetOptions.Create();
  handleExceptionEnd
end;

//property
function WindowMagnetOptions_SnapToMonitor(AIsSet: LongBool; AObj: TWindowMagnetOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SnapToMonitor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SnapToMonitor := AValue;
  end else
    Result := AObj.SnapToMonitor;
  handleExceptionEnd
end;

//property
function WindowMagnetOptions_SnapToForms(AIsSet: LongBool; AObj: TWindowMagnetOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SnapToForms'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SnapToForms := AValue;
  end else
    Result := AObj.SnapToForms;
  handleExceptionEnd
end;

//property
function WindowMagnetOptions_SnapFormTarget(AIsSet: LongBool; AObj: TWindowMagnetOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SnapFormTarget'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SnapFormTarget := AValue;
  end else
    Result := AObj.SnapFormTarget;
  handleExceptionEnd
end;

//property
function WindowMagnetOptions_Distance(AIsSet: LongBool; AObj: TWindowMagnetOptions; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='Distance'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Distance := AValue;
  end else
    Result := AObj.Distance;
  handleExceptionEnd
end;

//function
function WindowMagnetOptions_Class(): TClass; extdecl;
begin
  Result := TWindowMagnetOptions;
end;

//procedure
procedure WindowMagnetOptions_AssignTo(AObj: TWindowMagnetOptions; Dest: TPersistent); extdecl;
begin
  {$define handleExceptionFuncName :='AssignTo'}
  handleExceptionBegin
  AObj.AssignTo(Dest);
  handleExceptionEnd
end;


exports
  WindowMagnetOptions_Create,
  WindowMagnetOptions_SnapToMonitor,
  WindowMagnetOptions_SnapToForms,
  WindowMagnetOptions_SnapFormTarget,
  WindowMagnetOptions_Distance,
  WindowMagnetOptions_Class,
  WindowMagnetOptions_AssignTo;