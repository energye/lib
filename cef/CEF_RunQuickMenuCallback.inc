
//function
procedure CefRunQuickMenuCallback_UnWrap(data: Pointer; var Result: ICefRunQuickMenuCallback); extdecl;
begin
  Result := TCefRunQuickMenuCallbackRef.UnWrap(data);
end;

//procedure
procedure CefRunQuickMenuCallback_Cont(AObj: ICefRunQuickMenuCallback; commandid: Integer; eventflags: TCefEventFlags); extdecl;
begin
  handleExceptionBegin
  AObj.Cont(commandid, eventflags);
  handleExceptionEnd
end;

//procedure
procedure CefRunQuickMenuCallback_Cancel(AObj: ICefRunQuickMenuCallback); extdecl;
begin
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;


exports
  CefRunQuickMenuCallback_UnWrap,
  CefRunQuickMenuCallback_Cont,
  CefRunQuickMenuCallback_Cancel;