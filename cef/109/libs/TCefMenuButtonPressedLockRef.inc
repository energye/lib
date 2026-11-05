// constructor
function TCefMenuButtonPressedLockRef_Create(data: Pointer; out IntfMenuButtonPressedLock: ICefMenuButtonPressedLock): TCefMenuButtonPressedLockRef; extdecl;
begin
  {$define handleExceptionID := 25500}
  handleExceptionBegin
  Result := TCefMenuButtonPressedLockRef.Create(data);
  IntfMenuButtonPressedLock := Result as ICefMenuButtonPressedLock;
  handleExceptionEnd
end;

// function static
procedure TCefMenuButtonPressedLockRef_UnWrap(data: Pointer; var Result: ICefMenuButtonPressedLock); extdecl;
begin
  Result := TCefMenuButtonPressedLockRef.UnWrap(data);
end;

exports
  TCefMenuButtonPressedLockRef_Create,
  TCefMenuButtonPressedLockRef_UnWrap;