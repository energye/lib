
//function
procedure CefMediaAccessCallback_UnWrap(data: Pointer; var Result: ICefMediaAccessCallback); extdecl;
begin
  Result := TCefMediaAccessCallbackRef.UnWrap(data);
end;

//procedure
procedure CefMediaAccessCallback_Cont(AObj: ICefMediaAccessCallback; allowedpermissions: TCefMediaAccessPermissionTypes); extdecl;
begin
  handleExceptionBegin
  AObj.cont(allowedpermissions);
  handleExceptionEnd
end;

//procedure
procedure CefMediaAccessCallback_Cancel(AObj: ICefMediaAccessCallback); extdecl;
begin
  handleExceptionBegin
  AObj.cancel();
  handleExceptionEnd
end;


exports
  CefMediaAccessCallback_UnWrap,
  CefMediaAccessCallback_Cont,
  CefMediaAccessCallback_Cancel;