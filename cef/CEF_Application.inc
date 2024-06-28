
//constructor
function CefApplication_Create(): TCefApplication; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefApplication.Create();
  handleExceptionEnd
end;

//property
function CefApplication_DestroyApplicationObject(AIsSet: LongBool; AObj: TCefApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DestroyApplicationObject'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DestroyApplicationObject := AValue;
  end else
    Result := AObj.DestroyApplicationObject;
  handleExceptionEnd
end;

//property
function CefApplication_DestroyAppWindows(AIsSet: LongBool; AObj: TCefApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DestroyAppWindows'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DestroyAppWindows := AValue;
  end else
    Result := AObj.DestroyAppWindows;
  handleExceptionEnd
end;


exports
  CefApplication_Create,
  CefApplication_DestroyApplicationObject,
  CefApplication_DestroyAppWindows;