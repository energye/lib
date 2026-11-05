// constructor
function TCefTextfieldDelegateRef_Create(data: Pointer; out IntfTextfieldDelegate: ICefTextfieldDelegate; out IntfViewDelegate: ICefViewDelegate): TCefTextfieldDelegateRef; extdecl;
begin
  {$define handleExceptionID := 8400}
  handleExceptionBegin
  Result := TCefTextfieldDelegateRef.Create(data);
  IntfTextfieldDelegate := Result as ICefTextfieldDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

// function static
procedure TCefTextfieldDelegateRef_UnWrapWithPointer(data: Pointer; var Result: ICefTextfieldDelegate); extdecl;
begin
  Result := TCefTextfieldDelegateRef.UnWrap(data);
end;

exports
  TCefTextfieldDelegateRef_Create,
  TCefTextfieldDelegateRef_UnWrapWithPointer;