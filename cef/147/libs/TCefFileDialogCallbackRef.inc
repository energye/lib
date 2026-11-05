// constructor
function TCefFileDialogCallbackRef_Create(data: Pointer; out IntfFileDialogCallback: ICefFileDialogCallback): TCefFileDialogCallbackRef; extdecl;
begin
  {$define handleExceptionID := 19400}
  handleExceptionBegin
  Result := TCefFileDialogCallbackRef.Create(data);
  IntfFileDialogCallback := Result as ICefFileDialogCallback;
  handleExceptionEnd
end;

// function static
procedure TCefFileDialogCallbackRef_UnWrap(data: Pointer; var Result: ICefFileDialogCallback); extdecl;
begin
  Result := TCefFileDialogCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefFileDialogCallbackRef_Cont(AObj: ICefFileDialogCallback; const filePaths: TStrings); extdecl;
begin
  {$define handleExceptionID := 19401}
  handleExceptionBegin
  AObj.Cont(filePaths);
  handleExceptionEnd
end;

// procedure
procedure TCefFileDialogCallbackRef_Cancel(AObj: ICefFileDialogCallback); extdecl;
begin
  {$define handleExceptionID := 19402}
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;

exports
  TCefFileDialogCallbackRef_Create,
  TCefFileDialogCallbackRef_UnWrap,
  TCefFileDialogCallbackRef_Cont,
  TCefFileDialogCallbackRef_Cancel;