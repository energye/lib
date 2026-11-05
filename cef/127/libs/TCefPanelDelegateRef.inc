// constructor
function TCefPanelDelegateRef_Create(data: Pointer; out IntfPanelDelegate: ICefPanelDelegate; out IntfViewDelegate: ICefViewDelegate): TCefPanelDelegateRef; extdecl;
begin
  {$define handleExceptionID := 7400}
  handleExceptionBegin
  Result := TCefPanelDelegateRef.Create(data);
  IntfPanelDelegate := Result as ICefPanelDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

// function static
procedure TCefPanelDelegateRef_UnWrapWithPointer(data: Pointer; var Result: ICefPanelDelegate); extdecl;
begin
  Result := TCefPanelDelegateRef.UnWrap(data);
end;

exports
  TCefPanelDelegateRef_Create,
  TCefPanelDelegateRef_UnWrapWithPointer;