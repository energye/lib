
//procedure
procedure CefResponse_GetHeaderMap(AObj: ICefResponse; var Result: ICefStringMultimap); extdecl;
var
  headerMap: TCefStringMultimapOwn;
begin
  handleExceptionBegin
  headerMap := TCefStringMultimapOwn.Create();
  AObj.GetHeaderMap(headerMap);
  Result := headerMap;
  handleExceptionEnd
end;

exports
  CefResponse_GetHeaderMap;
