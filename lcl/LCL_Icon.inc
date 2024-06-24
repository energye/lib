
//constructor
function Icon_Create(): TIcon; extdecl;
begin
  handleExceptionBegin
  Result := TIcon.Create();
  handleExceptionEnd
end;

//property
function Icon_Handle(AIsSet: LongBool; AObj: TIcon; AValue: HICON): HICON; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Handle := AValue;
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

//function
function Icon_ReleaseHandle(AObj: TIcon): HICON; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ReleaseHandle();
  handleExceptionEnd
end;

//function
function Icon_Class(): TClass; extdecl;
begin
  Result := TIcon;
end;


exports
  Icon_Create,
  Icon_Handle,
  Icon_ReleaseHandle,
  Icon_Class;