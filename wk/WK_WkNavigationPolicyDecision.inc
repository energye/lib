
//constructor
function WkNavigationPolicyDecision_Create(aDecision: WebKitNavigationPolicyDecision): TWkNavigationPolicyDecision; extdecl;
begin
  handleExceptionBegin
  Result := TWkNavigationPolicyDecision.Create(aDecision);
  handleExceptionEnd
end;

//function
function WkNavigationPolicyDecision_GetNavigationAction(AObj: TWkNavigationPolicyDecision): WebKitNavigationAction; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetNavigationAction();
  handleExceptionEnd
end;


exports
  WkNavigationPolicyDecision_Create,
  WkNavigationPolicyDecision_GetNavigationAction;