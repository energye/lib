// constructor
function TWkNavigationAction_Create(aNavigationAction: WebKitNavigationAction): TWkNavigationAction; extdecl;
begin
  {$define handleExceptionID := 2600}
  handleExceptionBegin
  Result := TWkNavigationAction.Create(aNavigationAction);
  handleExceptionEnd
end;

// function
function TWkNavigationAction_Data(AObj: TWkNavigationAction): WebKitNavigationAction; extdecl;
begin
  {$define handleExceptionID := 2601}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkNavigationAction_GetRequest(AObj: TWkNavigationAction): WebKitURIRequest; extdecl;
begin
  {$define handleExceptionID := 2602}
  handleExceptionBegin
  Result := AObj.GetRequest();
  handleExceptionEnd
end;

exports
  TWkNavigationAction_Create,
  TWkNavigationAction_Data,
  TWkNavigationAction_GetRequest;