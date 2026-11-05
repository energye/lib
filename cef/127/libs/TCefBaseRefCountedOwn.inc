// constructor
function TCefBaseRefCountedOwn_CreateData(size: Cardinal; owned: LongBool): TCefBaseRefCountedOwn; extdecl;
begin
  {$define handleExceptionID := 26400}
  handleExceptionBegin
  Result := TCefBaseRefCountedOwn.CreateData(size, owned);
  handleExceptionEnd
end;

// function
function TCefBaseRefCountedOwn_HasOneRef(AObj: ICefBaseRefCounted): LongBool; extdecl;
begin
  {$define handleExceptionID := 26401}
  handleExceptionBegin
  Result := AObj.HasOneRef();
  handleExceptionEnd
end;

// function
function TCefBaseRefCountedOwn_HasAtLeastOneRef(AObj: ICefBaseRefCounted): LongBool; extdecl;
begin
  {$define handleExceptionID := 26402}
  handleExceptionBegin
  Result := AObj.HasAtLeastOneRef();
  handleExceptionEnd
end;

// function
function TCefBaseRefCountedOwn_SameAs(AObj: ICefBaseRefCounted; aData: Pointer): LongBool; extdecl;
begin
  {$define handleExceptionID := 26403}
  handleExceptionBegin
  Result := AObj.SameAs(aData);
  handleExceptionEnd
end;

// function
function TCefBaseRefCountedOwn_Wrap(AObj: ICefBaseRefCounted): Pointer; extdecl;
begin
  {$define handleExceptionID := 26404}
  handleExceptionBegin
  Result := AObj.Wrap();
  handleExceptionEnd
end;

// procedure
procedure TCefBaseRefCountedOwn_DestroyOtherRefs(AObj: ICefBaseRefCounted); extdecl;
begin
  {$define handleExceptionID := 26405}
  handleExceptionBegin
  AObj.DestroyOtherRefs();
  handleExceptionEnd
end;

exports
  TCefBaseRefCountedOwn_CreateData,
  TCefBaseRefCountedOwn_HasOneRef,
  TCefBaseRefCountedOwn_HasAtLeastOneRef,
  TCefBaseRefCountedOwn_SameAs,
  TCefBaseRefCountedOwn_Wrap,
  TCefBaseRefCountedOwn_DestroyOtherRefs;