
//constructor
function WkResponsePolicyDecision_Create(aDecision: WebKitResponsePolicyDecision): TWkResponsePolicyDecision; extdecl;
begin
  handleExceptionBegin
  Result := TWkResponsePolicyDecision.Create(aDecision);
  handleExceptionEnd
end;

//function
function WkResponsePolicyDecision_GetRequest(AObj: TWkResponsePolicyDecision): WebKitURIRequest; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetRequest();
  handleExceptionEnd
end;

//function
function WkResponsePolicyDecision_GetResponse(AObj: TWkResponsePolicyDecision): WebKitURIResponse; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetResponse();
  handleExceptionEnd
end;


exports
  WkResponsePolicyDecision_Create,
  WkResponsePolicyDecision_GetRequest,
  WkResponsePolicyDecision_GetResponse;