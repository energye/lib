// constructor
function TCefWindowDelegateRef_Create(data: Pointer; out IntfWindowDelegate: ICefWindowDelegate; out IntfPanelDelegate: ICefPanelDelegate; out IntfViewDelegate: ICefViewDelegate): TCefWindowDelegateRef; extdecl;
begin
  {$define handleExceptionID := 6900}
  handleExceptionBegin
  Result := TCefWindowDelegateRef.Create(data);
  IntfWindowDelegate := Result as ICefWindowDelegate;
  IntfPanelDelegate := Result as ICefPanelDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

// function static
procedure TCefWindowDelegateRef_UnWrapWithPointer(data: Pointer; var Result: ICefWindowDelegate); extdecl;
begin
  Result := TCefWindowDelegateRef.UnWrap(data);
end;

exports
  TCefWindowDelegateRef_Create,
  TCefWindowDelegateRef_UnWrapWithPointer;