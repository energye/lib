// constructor
function TCEFBaseScopedWrapperRef_Create(data: Pointer): TCEFBaseScopedWrapperRef; extdecl;
begin
  {$define handleExceptionID := 10700}
  handleExceptionBegin
  Result := TCEFBaseScopedWrapperRef.Create(data);
  handleExceptionEnd
end;

// function
function TCEFBaseScopedWrapperRef_Wrap(AObj: TCEFBaseScopedWrapperRef): Pointer; extdecl;
begin
  {$define handleExceptionID := 10701}
  handleExceptionBegin
  Result := AObj.Wrap();
  handleExceptionEnd
end;

exports
  TCEFBaseScopedWrapperRef_Create,
  TCEFBaseScopedWrapperRef_Wrap;