// constructor
function TCefTaskRef_Create(data: Pointer; out IntfTask: ICefTask): TCefTaskRef; extdecl;
begin
  {$define handleExceptionID := 4400}
  handleExceptionBegin
  Result := TCefTaskRef.Create(data);
  IntfTask := Result as ICefTask;
  handleExceptionEnd
end;

// function static
procedure TCefTaskRef_UnWrap(data: Pointer; var Result: ICefTask); extdecl;
begin
  Result := TCefTaskRef.UnWrap(data);
end;

exports
  TCefTaskRef_Create,
  TCefTaskRef_UnWrap;