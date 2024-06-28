
//function
procedure CefResourceSkipCallback_UnWrap(data: Pointer; var Result: ICefResourceSkipCallback); extdecl;
begin
  Result := TCefResourceSkipCallbackRef.UnWrap(data);
end;

//procedure
procedure CefResourceSkipCallback_Cont(AObj: ICefResourceSkipCallback; var bytesskipped: int64); extdecl;
begin
  {$define handleExceptionFuncName :='Cont'}
  handleExceptionBegin
  AObj.Cont(bytesskipped);
  handleExceptionEnd
end;


exports
  CefResourceSkipCallback_UnWrap,
  CefResourceSkipCallback_Cont;