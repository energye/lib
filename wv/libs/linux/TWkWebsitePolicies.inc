// constructor
function TWkWebsitePolicies_Create(): TWkWebsitePolicies; extdecl;
begin
  {$define handleExceptionID := 3500}
  handleExceptionBegin
  Result := TWkWebsitePolicies.Create();
  handleExceptionEnd
end;

// constructor
function TWkWebsitePolicies_CreateWithStr(first_policy_name: PChar): TWkWebsitePolicies; extdecl;
begin
  {$define handleExceptionID := 3501}
  handleExceptionBegin
  Result := TWkWebsitePolicies.Create(first_policy_name);
  handleExceptionEnd
end;

// function
function TWkWebsitePolicies_Data(AObj: TWkWebsitePolicies): WebKitWebsitePolicies; extdecl;
begin
  {$define handleExceptionID := 3502}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkWebsitePolicies_GetAutoplayPolicy(AObj: TWkWebsitePolicies): WebKitAutoplayPolicy; extdecl;
begin
  {$define handleExceptionID := 3503}
  handleExceptionBegin
  Result := AObj.GetAutoplayPolicy();
  handleExceptionEnd
end;

exports
  TWkWebsitePolicies_Create,
  TWkWebsitePolicies_CreateWithStr,
  TWkWebsitePolicies_Data,
  TWkWebsitePolicies_GetAutoplayPolicy;