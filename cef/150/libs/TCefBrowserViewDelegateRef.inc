// constructor
function TCefBrowserViewDelegateRef_Create(data: Pointer; out IntfBrowserViewDelegate: ICefBrowserViewDelegate; out IntfViewDelegate: ICefViewDelegate): TCefBrowserViewDelegateRef; extdecl;
begin
  {$define handleExceptionID := 8200}
  handleExceptionBegin
  Result := TCefBrowserViewDelegateRef.Create(data);
  IntfBrowserViewDelegate := Result as ICefBrowserViewDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

// function static
procedure TCefBrowserViewDelegateRef_UnWrapWithPointer(data: Pointer; var Result: ICefBrowserViewDelegate); extdecl;
begin
  Result := TCefBrowserViewDelegateRef.UnWrap(data);
end;

exports
  TCefBrowserViewDelegateRef_Create,
  TCefBrowserViewDelegateRef_UnWrapWithPointer;