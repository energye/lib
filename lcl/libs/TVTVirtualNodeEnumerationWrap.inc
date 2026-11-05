// function
function TVTVirtualNodeEnumerationWrap_GetEnumerator(AObj: TVTVirtualNodeEnumerationWrap): TVTVirtualNodeEnumerator; extdecl;
begin
  {$define handleExceptionID := 31100}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

exports
  TVTVirtualNodeEnumerationWrap_GetEnumerator;
