
//constructor
function WkPolicyDecision_Create(aDecision: WebKitPolicyDecision): TWkPolicyDecision; extdecl;
begin
  handleExceptionBegin
  Result := TWkPolicyDecision.Create(aDecision);
  handleExceptionEnd
end;

//function
function WkPolicyDecision_Data(AObj: TWkPolicyDecision): WebKitPolicyDecision; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//procedure
procedure WkPolicyDecision_Use(AObj: TWkPolicyDecision); extdecl;
begin
  handleExceptionBegin
  AObj.Use();
  handleExceptionEnd
end;

//procedure
procedure WkPolicyDecision_UseWithPolicies(AObj: TWkPolicyDecision; policies: WebKitWebsitePolicies); extdecl;
begin
  handleExceptionBegin
  AObj.UseWithPolicies(policies);
  handleExceptionEnd
end;

//procedure
procedure WkPolicyDecision_Ignore(AObj: TWkPolicyDecision); extdecl;
begin
  handleExceptionBegin
  AObj.Ignore();
  handleExceptionEnd
end;

//procedure
procedure WkPolicyDecision_Download(AObj: TWkPolicyDecision); extdecl;
begin
  handleExceptionBegin
  AObj.Download();
  handleExceptionEnd
end;


exports
  WkPolicyDecision_Create,
  WkPolicyDecision_Data,
  WkPolicyDecision_Use,
  WkPolicyDecision_UseWithPolicies,
  WkPolicyDecision_Ignore,
  WkPolicyDecision_Download;