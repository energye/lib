// constructor
function TWindowMagnetOptions_Create(): TWindowMagnetOptions; extdecl;
begin
  {$define handleExceptionID := 24600}
  handleExceptionBegin
  Result := TWindowMagnetOptions.Create();
  handleExceptionEnd
end;

// procedure
procedure TWindowMagnetOptions_AssignTo(AObj: TWindowMagnetOptions; Dest: TPersistent); extdecl;
begin
  {$define handleExceptionID := 24601}
  handleExceptionBegin
  AObj.AssignTo(Dest);
  handleExceptionEnd
end;

// property
function TWindowMagnetOptions_SnapToMonitor(ASet: LongBool; AObj: TWindowMagnetOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 24602}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SnapToMonitor := AValue
  end else
    Result := AObj.SnapToMonitor;
  handleExceptionEnd
end;

// property
function TWindowMagnetOptions_SnapToForms(ASet: LongBool; AObj: TWindowMagnetOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 24603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SnapToForms := AValue
  end else
    Result := AObj.SnapToForms;
  handleExceptionEnd
end;

// property
function TWindowMagnetOptions_SnapFormTarget(ASet: LongBool; AObj: TWindowMagnetOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 24604}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SnapFormTarget := AValue
  end else
    Result := AObj.SnapFormTarget;
  handleExceptionEnd
end;

// property
function TWindowMagnetOptions_Distance(ASet: LongBool; AObj: TWindowMagnetOptions; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 24605}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Distance := AValue
  end else
    Result := AObj.Distance;
  handleExceptionEnd
end;

exports
  TWindowMagnetOptions_Create,
  TWindowMagnetOptions_AssignTo,
  TWindowMagnetOptions_SnapToMonitor,
  TWindowMagnetOptions_SnapToForms,
  TWindowMagnetOptions_SnapFormTarget,
  TWindowMagnetOptions_Distance;