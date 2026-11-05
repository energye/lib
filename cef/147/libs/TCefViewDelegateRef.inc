// constructor
function TCefViewDelegateRef_Create(data: Pointer; out IntfViewDelegate: ICefViewDelegate): TCefViewDelegateRef; extdecl;
begin
  {$define handleExceptionID := 7400}
  handleExceptionBegin
  Result := TCefViewDelegateRef.Create(data);
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

// function static
procedure TCefViewDelegateRef_UnWrapWithPointer(data: Pointer; var Result: ICefViewDelegate); extdecl;
begin
  Result := TCefViewDelegateRef.UnWrap(data);
end;

exports
  TCefViewDelegateRef_Create,
  TCefViewDelegateRef_UnWrapWithPointer;