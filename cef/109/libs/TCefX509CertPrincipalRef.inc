// constructor
function TCefX509CertPrincipalRef_Create(data: Pointer; out IntfX509CertPrincipal: ICefX509CertPrincipal): TCefX509CertPrincipalRef; extdecl;
begin
  {$define handleExceptionID := 22000}
  handleExceptionBegin
  Result := TCefX509CertPrincipalRef.Create(data);
  IntfX509CertPrincipal := Result as ICefX509CertPrincipal;
  handleExceptionEnd
end;

// function
procedure TCefX509CertPrincipalRef_GetDisplayName(AObj: ICefX509CertPrincipal;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22001}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetDisplayName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefX509CertPrincipalRef_GetCommonName(AObj: ICefX509CertPrincipal;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22002}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetCommonName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefX509CertPrincipalRef_GetLocalityName(AObj: ICefX509CertPrincipal;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22003}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetLocalityName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefX509CertPrincipalRef_GetStateOrProvinceName(AObj: ICefX509CertPrincipal;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22004}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetStateOrProvinceName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefX509CertPrincipalRef_GetCountryName(AObj: ICefX509CertPrincipal;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22005}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetCountryName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function static
procedure TCefX509CertPrincipalRef_UnWrap(data: Pointer; var Result: ICefX509CertPrincipal); extdecl;
begin
  Result := TCefX509CertPrincipalRef.UnWrap(data);
end;

// procedure
procedure TCefX509CertPrincipalRef_GetStreetAddresses(AObj: ICefX509CertPrincipal; const addresses: TStrings); extdecl;
begin
  {$define handleExceptionID := 22006}
  handleExceptionBegin
  AObj.GetStreetAddresses(addresses);
  handleExceptionEnd
end;

// procedure
procedure TCefX509CertPrincipalRef_GetOrganizationNames(AObj: ICefX509CertPrincipal; const names: TStrings); extdecl;
begin
  {$define handleExceptionID := 22007}
  handleExceptionBegin
  AObj.GetOrganizationNames(names);
  handleExceptionEnd
end;

// procedure
procedure TCefX509CertPrincipalRef_GetOrganizationUnitNames(AObj: ICefX509CertPrincipal; const names: TStrings); extdecl;
begin
  {$define handleExceptionID := 22008}
  handleExceptionBegin
  AObj.GetOrganizationUnitNames(names);
  handleExceptionEnd
end;

// procedure
procedure TCefX509CertPrincipalRef_GetDomainComponents(AObj: ICefX509CertPrincipal; const components: TStrings); extdecl;
begin
  {$define handleExceptionID := 22009}
  handleExceptionBegin
  AObj.GetDomainComponents(components);
  handleExceptionEnd
end;

exports
  TCefX509CertPrincipalRef_Create,
  TCefX509CertPrincipalRef_GetDisplayName,
  TCefX509CertPrincipalRef_GetCommonName,
  TCefX509CertPrincipalRef_GetLocalityName,
  TCefX509CertPrincipalRef_GetStateOrProvinceName,
  TCefX509CertPrincipalRef_GetCountryName,
  TCefX509CertPrincipalRef_UnWrap,
  TCefX509CertPrincipalRef_GetStreetAddresses,
  TCefX509CertPrincipalRef_GetOrganizationNames,
  TCefX509CertPrincipalRef_GetOrganizationUnitNames,
  TCefX509CertPrincipalRef_GetDomainComponents;