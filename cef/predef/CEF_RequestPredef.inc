
//procedure
procedure CefRequest_GetHeaderMap(AObj: ICefRequest; var Result: ICefStringMultimap); extdecl;
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
  CefRequest_GetHeaderMap;
