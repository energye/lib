// constructor
function TCefFillLayoutRef_Create(data: Pointer; out IntfFillLayout: ICefFillLayout; out IntfLayout: ICefLayout): TCefFillLayoutRef; extdecl;
begin
  {$define handleExceptionID := 24800}
  handleExceptionBegin
  Result := TCefFillLayoutRef.Create(data);
  IntfFillLayout := Result as ICefFillLayout;
  IntfLayout := Result as ICefLayout;
  handleExceptionEnd
end;

// function static
procedure TCefFillLayoutRef_UnWrapWithPointer(data: Pointer; var Result: ICefFillLayout); extdecl;
begin
  Result := TCefFillLayoutRef.UnWrap(data);
end;

exports
  TCefFillLayoutRef_Create,
  TCefFillLayoutRef_UnWrapWithPointer;