// constructor
function TWkPolicyDecision_Create(aDecision: WebKitPolicyDecision): TWkPolicyDecision; extdecl;
begin
  {$define handleExceptionID := 2700}
  handleExceptionBegin
  Result := TWkPolicyDecision.Create(aDecision);
  handleExceptionEnd
end;

// function
function TWkPolicyDecision_Data(AObj: TWkPolicyDecision): WebKitPolicyDecision; extdecl;
begin
  {$define handleExceptionID := 2701}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// procedure
procedure TWkPolicyDecision_Use(AObj: TWkPolicyDecision); extdecl;
begin
  {$define handleExceptionID := 2702}
  handleExceptionBegin
  AObj.Use();
  handleExceptionEnd
end;

// procedure
procedure TWkPolicyDecision_UseWithPolicies(AObj: TWkPolicyDecision; policies: WebKitWebsitePolicies); extdecl;
begin
  {$define handleExceptionID := 2703}
  handleExceptionBegin
  AObj.UseWithPolicies(policies);
  handleExceptionEnd
end;

// procedure
procedure TWkPolicyDecision_Ignore(AObj: TWkPolicyDecision); extdecl;
begin
  {$define handleExceptionID := 2704}
  handleExceptionBegin
  AObj.Ignore();
  handleExceptionEnd
end;

// procedure
procedure TWkPolicyDecision_Download(AObj: TWkPolicyDecision); extdecl;
begin
  {$define handleExceptionID := 2705}
  handleExceptionBegin
  AObj.Download();
  handleExceptionEnd
end;

exports
  TWkPolicyDecision_Create,
  TWkPolicyDecision_Data,
  TWkPolicyDecision_Use,
  TWkPolicyDecision_UseWithPolicies,
  TWkPolicyDecision_Ignore,
  TWkPolicyDecision_Download;