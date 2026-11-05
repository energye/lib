// constructor
function TCefBoxLayoutRef_Create(data: Pointer; out IntfBoxLayout: ICefBoxLayout; out IntfLayout: ICefLayout): TCefBoxLayoutRef; extdecl;
begin
  {$define handleExceptionID := 24700}
  handleExceptionBegin
  Result := TCefBoxLayoutRef.Create(data);
  IntfBoxLayout := Result as ICefBoxLayout;
  IntfLayout := Result as ICefLayout;
  handleExceptionEnd
end;

// function static
procedure TCefBoxLayoutRef_UnWrapWithPointer(data: Pointer; var Result: ICefBoxLayout); extdecl;
begin
  Result := TCefBoxLayoutRef.UnWrap(data);
end;

// procedure
procedure TCefBoxLayoutRef_SetFlexForView(AObj: ICefBoxLayout; const view: ICefView; flex: Integer); extdecl;
begin
  {$define handleExceptionID := 24701}
  handleExceptionBegin
  AObj.SetFlexForView(view, flex);
  handleExceptionEnd
end;

// procedure
procedure TCefBoxLayoutRef_ClearFlexForView(AObj: ICefBoxLayout; const view: ICefView); extdecl;
begin
  {$define handleExceptionID := 24702}
  handleExceptionBegin
  AObj.ClearFlexForView(view);
  handleExceptionEnd
end;

exports
  TCefBoxLayoutRef_Create,
  TCefBoxLayoutRef_UnWrapWithPointer,
  TCefBoxLayoutRef_SetFlexForView,
  TCefBoxLayoutRef_ClearFlexForView;