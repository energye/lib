
//constructor
function WkNavigationAction_Create(aNavigationAction: WebKitNavigationAction): TWkNavigationAction; extdecl;
begin
  handleExceptionBegin
  Result := TWkNavigationAction.Create(aNavigationAction);
  handleExceptionEnd
end;

//function
function WkNavigationAction_GetRequest(AObj: TWkNavigationAction): WebKitURIRequest; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetRequest();
  handleExceptionEnd
end;


exports
  WkNavigationAction_Create,
  WkNavigationAction_GetRequest;