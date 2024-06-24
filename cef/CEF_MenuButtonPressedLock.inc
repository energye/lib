
//function
procedure CefMenuButtonPressedLock_UnWrap(data: Pointer; var Result: ICefMenuButtonPressedLock); extdecl;
begin
  Result := TCefMenuButtonPressedLockRef.UnWrap(data);
end;


exports
  CefMenuButtonPressedLock_UnWrap;