//procedure
procedure CefBaseRefCounted_FreeAndNil(var AObj: ICefBaseRefCounted); extdecl;
begin
  AObj := nil;
end;

exports
  CefBaseRefCounted_FreeAndNil;