
//constructor
function CEFBaseScopedWrapperRef_Create(data: Pointer): TCEFBaseScopedWrapperRef; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCEFBaseScopedWrapperRef.Create(data);
  handleExceptionEnd
end;

//function
function CEFBaseScopedWrapperRef_Wrap(AObj: TCEFBaseScopedWrapperRef): Pointer; extdecl;
begin
  {$define handleExceptionFuncName :='Wrap'}
  handleExceptionBegin
  Result := AObj.Wrap();
  handleExceptionEnd
end;


exports
  CEFBaseScopedWrapperRef_Create,
  CEFBaseScopedWrapperRef_Wrap;