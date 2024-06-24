
//function
procedure CefX509CertPrincipal_UnWrap(data: Pointer; var Result: ICefX509CertPrincipal); extdecl;
begin
  Result := TCefX509CertPrincipalRef.UnWrap(data);
end;

//function
function CefX509CertPrincipal_GetDisplayName(AObj: ICefX509CertPrincipal): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetDisplayName());
  handleExceptionEnd
end;

//function
function CefX509CertPrincipal_GetCommonName(AObj: ICefX509CertPrincipal): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetCommonName());
  handleExceptionEnd
end;

//function
function CefX509CertPrincipal_GetLocalityName(AObj: ICefX509CertPrincipal): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetLocalityName());
  handleExceptionEnd
end;

//function
function CefX509CertPrincipal_GetStateOrProvinceName(AObj: ICefX509CertPrincipal): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetStateOrProvinceName());
  handleExceptionEnd
end;

//function
function CefX509CertPrincipal_GetCountryName(AObj: ICefX509CertPrincipal): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetCountryName());
  handleExceptionEnd
end;

//procedure
procedure CefX509CertPrincipal_GetOrganizationNames(AObj: ICefX509CertPrincipal; const names: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.GetOrganizationNames(names);
  handleExceptionEnd
end;

//procedure
procedure CefX509CertPrincipal_GetOrganizationUnitNames(AObj: ICefX509CertPrincipal; const names: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.GetOrganizationUnitNames(names);
  handleExceptionEnd
end;


exports
  CefX509CertPrincipal_UnWrap,
  CefX509CertPrincipal_GetDisplayName,
  CefX509CertPrincipal_GetCommonName,
  CefX509CertPrincipal_GetLocalityName,
  CefX509CertPrincipal_GetStateOrProvinceName,
  CefX509CertPrincipal_GetCountryName,
  CefX509CertPrincipal_GetOrganizationNames,
  CefX509CertPrincipal_GetOrganizationUnitNames;