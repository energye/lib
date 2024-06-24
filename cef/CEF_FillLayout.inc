
//function
procedure CefFillLayout_UnWrap(data: Pointer; var Result: ICefFillLayout); extdecl;
begin
  Result := TCefFillLayoutRef.UnWrap(data);
end;


exports
  CefFillLayout_UnWrap;