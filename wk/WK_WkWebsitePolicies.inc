
//constructor
function WkWebsitePolicies_Create(): TWkWebsitePolicies; extdecl;
begin
  handleExceptionBegin
  Result := TWkWebsitePolicies.Create();
  handleExceptionEnd
end;

//constructor
function WkWebsitePolicies_Create1(firstpolicyname: PChar): TWkWebsitePolicies; extdecl;
begin
  handleExceptionBegin
  Result := TWkWebsitePolicies.Create(firstpolicyname);
  handleExceptionEnd
end;

//function
function WkWebsitePolicies_GetAutoplayPolicy(AObj: TWkWebsitePolicies): WebKitAutoplayPolicy; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetAutoplayPolicy();
  handleExceptionEnd
end;

//function
function WkWebsitePolicies_Data(AObj: TWkWebsitePolicies): WebKitWebsitePolicies; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;


exports
  WkWebsitePolicies_Create,
  WkWebsitePolicies_Create1,
  WkWebsitePolicies_GetAutoplayPolicy,
  WkWebsitePolicies_Data;