// constructor
function TIcon_Create(): TIcon; extdecl;
begin
  {$define handleExceptionID := 10700}
  handleExceptionBegin
  Result := TIcon.Create();
  handleExceptionEnd
end;

// function
function TIcon_ReleaseHandle(AObj: TIcon): HICON; extdecl;
begin
  {$define handleExceptionID := 10701}
  handleExceptionBegin
  Result := AObj.ReleaseHandle();
  handleExceptionEnd
end;

// property
function TIcon_Handle(ASet: LongBool; AObj: TIcon; AValue: HICON): HICON; extdecl;
begin
  {$define handleExceptionID := 10702}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handle := AValue
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

exports
  TIcon_Create,
  TIcon_ReleaseHandle,
  TIcon_Handle;