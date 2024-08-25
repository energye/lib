// IUnknown
function COMUnknown_AddRef(AObj: IUnknown): Integer ; extdecl;
begin
  {$define handleExceptionFuncName :='COMUnknown.AddRef'}
  handleExceptionBegin
  Result := Integer(AObj._AddRef);
  handleExceptionEnd
end;

function COMUnknown_Release(AObj: IUnknown): Integer ; extdecl;
begin
  {$define handleExceptionFuncName :='COMUnknown.Release'}
  handleExceptionBegin
  Result := Integer(AObj._Release);
  handleExceptionEnd
end;

exports
  COMUnknown_AddRef,
  COMUnknown_Release;
