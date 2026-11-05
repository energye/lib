// constructor
function TCefBaseRefCountedRef_Create(data: Pointer): TCefBaseRefCountedRef; extdecl;
begin
  {$define handleExceptionID := 25600}
  handleExceptionBegin
  Result := TCefBaseRefCountedRef.Create(data);
  handleExceptionEnd
end;

// function
function TCefBaseRefCountedRef_HasOneRef(AObj: ICefBaseRefCounted): LongBool; extdecl;
begin
  {$define handleExceptionID := 25601}
  handleExceptionBegin
  Result := AObj.HasOneRef();
  handleExceptionEnd
end;

// function
function TCefBaseRefCountedRef_HasAtLeastOneRef(AObj: ICefBaseRefCounted): LongBool; extdecl;
begin
  {$define handleExceptionID := 25602}
  handleExceptionBegin
  Result := AObj.HasAtLeastOneRef();
  handleExceptionEnd
end;

// function
function TCefBaseRefCountedRef_SameAs(AObj: ICefBaseRefCounted; aData: Pointer): LongBool; extdecl;
begin
  {$define handleExceptionID := 25603}
  handleExceptionBegin
  Result := AObj.SameAs(aData);
  handleExceptionEnd
end;

// function
function TCefBaseRefCountedRef_Wrap(AObj: ICefBaseRefCounted): Pointer; extdecl;
begin
  {$define handleExceptionID := 25604}
  handleExceptionBegin
  Result := AObj.Wrap();
  handleExceptionEnd
end;

// procedure
procedure TCefBaseRefCountedRef_DestroyOtherRefs(AObj: ICefBaseRefCounted); extdecl;
begin
  {$define handleExceptionID := 25605}
  handleExceptionBegin
  AObj.DestroyOtherRefs();
  handleExceptionEnd
end;

exports
  TCefBaseRefCountedRef_Create,
  TCefBaseRefCountedRef_HasOneRef,
  TCefBaseRefCountedRef_HasAtLeastOneRef,
  TCefBaseRefCountedRef_SameAs,
  TCefBaseRefCountedRef_Wrap,
  TCefBaseRefCountedRef_DestroyOtherRefs;