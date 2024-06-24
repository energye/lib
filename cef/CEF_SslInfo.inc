
//function
procedure CefSslInfo_UnWrap(data: Pointer; var Result: ICefSslInfo); extdecl;
begin
  Result := TCefSslInfoRef.UnWrap(data);
end;

//function
function CefSslInfo_GetCertStatus(AObj: ICefSslInfo): TCefCertStatus; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetCertStatus();
  handleExceptionEnd
end;

//function
procedure CefSslInfo_GetX509Certificate(AObj: ICefSslInfo; var Result: ICefX509Certificate); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetX509Certificate();
  handleExceptionEnd
end;


exports
  CefSslInfo_UnWrap,
  CefSslInfo_GetCertStatus,
  CefSslInfo_GetX509Certificate;