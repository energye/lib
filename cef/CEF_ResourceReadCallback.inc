
//function
procedure CefResourceReadCallback_UnWrap(data: Pointer; var Result: ICefResourceReadCallback); extdecl;
begin
  Result := TCefResourceReadCallbackRef.UnWrap(data);
end;

//procedure
procedure CefResourceReadCallback_Cont(AObj: ICefResourceReadCallback; var bytesread: int64); extdecl;
begin
  handleExceptionBegin
  AObj.Cont(bytesread);
  handleExceptionEnd
end;


exports
  CefResourceReadCallback_UnWrap,
  CefResourceReadCallback_Cont;