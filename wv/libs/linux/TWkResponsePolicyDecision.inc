// constructor
function TWkResponsePolicyDecision_Create(aDecision: WebKitResponsePolicyDecision): TWkResponsePolicyDecision; extdecl;
begin
  {$define handleExceptionID := 2900}
  handleExceptionBegin
  Result := TWkResponsePolicyDecision.Create(aDecision);
  handleExceptionEnd
end;

// function
function TWkResponsePolicyDecision_GetRequest(AObj: TWkResponsePolicyDecision): WebKitURIRequest; extdecl;
begin
  {$define handleExceptionID := 2901}
  handleExceptionBegin
  Result := AObj.GetRequest();
  handleExceptionEnd
end;

// function
function TWkResponsePolicyDecision_GetResponse(AObj: TWkResponsePolicyDecision): WebKitURIResponse; extdecl;
begin
  {$define handleExceptionID := 2902}
  handleExceptionBegin
  Result := AObj.GetResponse();
  handleExceptionEnd
end;

exports
  TWkResponsePolicyDecision_Create,
  TWkResponsePolicyDecision_GetRequest,
  TWkResponsePolicyDecision_GetResponse;