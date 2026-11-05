// constructor
function TCefRunContextMenuCallbackRef_Create(data: Pointer; out IntfRunContextMenuCallback: ICefRunContextMenuCallback): TCefRunContextMenuCallbackRef; extdecl;
begin
  {$define handleExceptionID := 20100}
  handleExceptionBegin
  Result := TCefRunContextMenuCallbackRef.Create(data);
  IntfRunContextMenuCallback := Result as ICefRunContextMenuCallback;
  handleExceptionEnd
end;

// function static
procedure TCefRunContextMenuCallbackRef_UnWrap(data: Pointer; var Result: ICefRunContextMenuCallback); extdecl;
begin
  Result := TCefRunContextMenuCallbackRef.UnWrap(data);
end;

// procedure
procedure TCefRunContextMenuCallbackRef_Cont(AObj: ICefRunContextMenuCallback; commandId: Integer; eventFlags: TCefEventFlags); extdecl;
begin
  {$define handleExceptionID := 20101}
  handleExceptionBegin
  AObj.Cont(commandId, eventFlags);
  handleExceptionEnd
end;

// procedure
procedure TCefRunContextMenuCallbackRef_Cancel(AObj: ICefRunContextMenuCallback); extdecl;
begin
  {$define handleExceptionID := 20102}
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;

exports
  TCefRunContextMenuCallbackRef_Create,
  TCefRunContextMenuCallbackRef_UnWrap,
  TCefRunContextMenuCallbackRef_Cont,
  TCefRunContextMenuCallbackRef_Cancel;