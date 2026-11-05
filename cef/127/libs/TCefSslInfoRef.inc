// constructor
function TCefSslInfoRef_Create(data: Pointer; out IntfSslInfo: ICefSslInfo): TCefSslInfoRef; extdecl;
begin
  {$define handleExceptionID := 20900}
  handleExceptionBegin
  Result := TCefSslInfoRef.Create(data);
  IntfSslInfo := Result as ICefSslInfo;
  handleExceptionEnd
end;

// function
function TCefSslInfoRef_GetCertStatus(AObj: ICefSslInfo): TCefCertStatus; extdecl;
begin
  {$define handleExceptionID := 20901}
  handleExceptionBegin
  Result := AObj.GetCertStatus();
  handleExceptionEnd
end;

// function
procedure TCefSslInfoRef_GetX509Certificate(AObj: ICefSslInfo; var Result: ICefX509Certificate); extdecl;
begin
  {$define handleExceptionID := 20902}
  handleExceptionBegin
  Result := AObj.GetX509Certificate();
  handleExceptionEnd
end;

// function static
procedure TCefSslInfoRef_UnWrap(data: Pointer; var Result: ICefSslInfo); extdecl;
begin
  Result := TCefSslInfoRef.UnWrap(data);
end;

exports
  TCefSslInfoRef_Create,
  TCefSslInfoRef_GetCertStatus,
  TCefSslInfoRef_GetX509Certificate,
  TCefSslInfoRef_UnWrap;