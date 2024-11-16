
//function
procedure CefRunContextMenuCallback_UnWrap(data: Pointer; var Result: ICefRunContextMenuCallback); extdecl;
begin
  Result := TCefRunContextMenuCallbackRef.UnWrap(data);
end;

//procedure
procedure CefRunContextMenuCallback_Cont(AObj: ICefRunContextMenuCallback; commandId: Integer; eventFlags: TCefEventFlags); extdecl;
begin
  {$define handleExceptionFuncName :='Cont'}
  handleExceptionBegin
  AObj.Cont(commandId, eventFlags);
  handleExceptionEnd
end;

//procedure
procedure CefRunContextMenuCallback_Cancel(AObj: ICefRunContextMenuCallback); extdecl;
begin
  {$define handleExceptionFuncName :='Cancel'}
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;


exports
  CefRunContextMenuCallback_UnWrap,
  CefRunContextMenuCallback_Cont,
  CefRunContextMenuCallback_Cancel;