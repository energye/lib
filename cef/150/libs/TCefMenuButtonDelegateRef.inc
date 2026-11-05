// constructor
function TCefMenuButtonDelegateRef_Create(data: Pointer; out IntfMenuButtonDelegate: ICefMenuButtonDelegate; out IntfButtonDelegate: ICefButtonDelegate; out IntfViewDelegate: ICefViewDelegate): TCefMenuButtonDelegateRef; extdecl;
begin
  {$define handleExceptionID := 7900}
  handleExceptionBegin
  Result := TCefMenuButtonDelegateRef.Create(data);
  IntfMenuButtonDelegate := Result as ICefMenuButtonDelegate;
  IntfButtonDelegate := Result as ICefButtonDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

// function static
procedure TCefMenuButtonDelegateRef_UnWrapWithPointer(data: Pointer; var Result: ICefMenuButtonDelegate); extdecl;
begin
  Result := TCefMenuButtonDelegateRef.UnWrap(data);
end;

exports
  TCefMenuButtonDelegateRef_Create,
  TCefMenuButtonDelegateRef_UnWrapWithPointer;