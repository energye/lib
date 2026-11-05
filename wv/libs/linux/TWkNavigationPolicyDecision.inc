// constructor
function TWkNavigationPolicyDecision_Create(aDecision: WebKitNavigationPolicyDecision): TWkNavigationPolicyDecision; extdecl;
begin
  {$define handleExceptionID := 2800}
  handleExceptionBegin
  Result := TWkNavigationPolicyDecision.Create(aDecision);
  handleExceptionEnd
end;

// function
function TWkNavigationPolicyDecision_GetNavigationAction(AObj: TWkNavigationPolicyDecision): WebKitNavigationAction; extdecl;
begin
  {$define handleExceptionID := 2801}
  handleExceptionBegin
  Result := AObj.GetNavigationAction();
  handleExceptionEnd
end;

exports
  TWkNavigationPolicyDecision_Create,
  TWkNavigationPolicyDecision_GetNavigationAction;