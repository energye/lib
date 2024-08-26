// IUnknown
function Unknown_AddRef(var AObj: IUnknown): Integer ; extdecl;
begin
  {$define handleExceptionFuncName :='AddRef'}
  handleExceptionBegin
  Result := Integer(AObj._AddRef);
  handleExceptionEnd
end;

function Unknown_Release(var AObj: IUnknown): Integer ; extdecl;
begin
  {$define handleExceptionFuncName :='Release'}
  handleExceptionBegin
  Result := Integer(AObj._Release);
  handleExceptionEnd
end;

exports
  Unknown_AddRef,
  Unknown_Release;
