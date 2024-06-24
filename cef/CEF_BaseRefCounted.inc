
//constructor
function CefBaseRefCounted_Create(data: Pointer): TCefBaseRefCountedRef; extdecl;
begin
  handleExceptionBegin
  Result := TCefBaseRefCountedRef.Create(data);
  handleExceptionEnd
end;

//function
procedure CefBaseRefCounted_UnWrap(data: Pointer; var Result: ICefBaseRefCounted); extdecl;
begin
  Result := TCefBaseRefCountedRef.UnWrap(data);
end;

//function
function CefBaseRefCounted_HasOneRef(AObj: ICefBaseRefCounted): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasOneRef();
  handleExceptionEnd
end;

//function
function CefBaseRefCounted_HasAtLeastOneRef(AObj: ICefBaseRefCounted): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasAtLeastOneRef();
  handleExceptionEnd
end;

//function
function CefBaseRefCounted_SameAs(AObj: ICefBaseRefCounted; aData: Pointer): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SameAs(aData);
  handleExceptionEnd
end;

//function
function CefBaseRefCounted_SameAs1(AObj: ICefBaseRefCounted; const aBaseRefCounted: ICefBaseRefCounted): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SameAs(aBaseRefCounted);
  handleExceptionEnd
end;

//function
function CefBaseRefCounted_Wrap(AObj: ICefBaseRefCounted): Pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Wrap();
  handleExceptionEnd
end;

//procedure
procedure CefBaseRefCounted_DestroyOtherRefs(AObj: ICefBaseRefCounted); extdecl;
begin
  handleExceptionBegin
  AObj.DestroyOtherRefs();
  handleExceptionEnd
end;


exports
  CefBaseRefCounted_Create,
  CefBaseRefCounted_UnWrap,
  CefBaseRefCounted_HasOneRef,
  CefBaseRefCounted_HasAtLeastOneRef,
  CefBaseRefCounted_SameAs,
  CefBaseRefCounted_SameAs1,
  CefBaseRefCounted_Wrap,
  CefBaseRefCounted_DestroyOtherRefs;