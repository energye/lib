// constructor
function TCefButtonDelegateRef_Create(data: Pointer; out IntfButtonDelegate: ICefButtonDelegate; out IntfViewDelegate: ICefViewDelegate): TCefButtonDelegateRef; extdecl;
begin
  {$define handleExceptionID := 7700}
  handleExceptionBegin
  Result := TCefButtonDelegateRef.Create(data);
  IntfButtonDelegate := Result as ICefButtonDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

// function static
procedure TCefButtonDelegateRef_UnWrapWithPointer(data: Pointer; var Result: ICefButtonDelegate); extdecl;
begin
  Result := TCefButtonDelegateRef.UnWrap(data);
end;

exports
  TCefButtonDelegateRef_Create,
  TCefButtonDelegateRef_UnWrapWithPointer;