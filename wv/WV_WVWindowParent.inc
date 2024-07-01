
//constructor
function WVWindowParent_Create(AOwner: TComponent): TWVWindowParent; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TWVWindowParent.Create(AOwner);
  handleExceptionEnd
end;

//property
procedure WVWindowParent_Browser(AIsSet: LongBool; AObj: TWVWindowParent; AValue: TWVBrowserBase; var Result: TWVBrowserBase); extdecl;
begin
  {$define handleExceptionFuncName :='Browser'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Browser := AValue;
  end else
    Result := AObj.Browser;
  handleExceptionEnd
end;


exports
  WVWindowParent_Create,
  WVWindowParent_Browser;