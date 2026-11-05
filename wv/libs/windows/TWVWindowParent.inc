// constructor
function TWVWindowParent_Create(AOwner: TComponent): TWVWindowParent; extdecl;
begin
  {$define handleExceptionID := 400}
  handleExceptionBegin
  Result := TWVWindowParent.Create(AOwner);
  handleExceptionEnd
end;

// property
function TWVWindowParent_Browser(ASet: LongBool; AObj: TWVWindowParent; AValue: TWVBrowserBase): TWVBrowserBase; extdecl;
begin
  {$define handleExceptionID := 401}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Browser := AValue
  end else
    Result := AObj.Browser;
  handleExceptionEnd
end;

exports
  TWVWindowParent_Create,
  TWVWindowParent_Browser;