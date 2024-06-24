
//constructor
function WkNavigationAction_Create(aNavigationAction: WebKitNavigationAction): TWkNavigationAction; extdecl;
begin
  handleExceptionBegin
  Result := TWkNavigationAction.Create(aNavigationAction);
  handleExceptionEnd
end;

//function
procedure WkNavigationAction_GetRequest(AObj: TWkNavigationAction; var Result: IWkURIRequest); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetRequest();
  handleExceptionEnd
end;


exports
  WkNavigationAction_Create,
  WkNavigationAction_GetRequest;