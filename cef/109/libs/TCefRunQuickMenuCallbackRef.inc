// constructor
function TCefRunQuickMenuCallbackRef_Create(data: Pointer; out IntfRunQuickMenuCallback: ICefRunQuickMenuCallback): TCefRunQuickMenuCallbackRef; extdecl;
begin
  {$define handleExceptionID := 24600}
  handleExceptionBegin
  Result := TCefRunQuickMenuCallbackRef.Create(data);
  IntfRunQuickMenuCallback := Result as ICefRunQuickMenuCallback;
  handleExceptionEnd
end;

// function static
procedure TCefRunQuickMenuCallbackRef_UnWrap(data: Pointer; var Result: ICefRunQuickMenuCallback); extdecl;
begin
  Result := TCefRunQuickMenuCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefRunQuickMenuCallbackRef_Cont(AObj: ICefRunQuickMenuCallback; command_id: Integer; event_flags: TCefEventFlags); extdecl;
begin
  {$define handleExceptionID := 24601}
  handleExceptionBegin
  AObj.Cont(command_id, event_flags);
  handleExceptionEnd
end;

// procedure
procedure TCefRunQuickMenuCallbackRef_Cancel(AObj: ICefRunQuickMenuCallback); extdecl;
begin
  {$define handleExceptionID := 24602}
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;

exports
  TCefRunQuickMenuCallbackRef_Create,
  TCefRunQuickMenuCallbackRef_UnWrap,
  TCefRunQuickMenuCallbackRef_Cont,
  TCefRunQuickMenuCallbackRef_Cancel;