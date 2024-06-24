
//constructor
function CEFBaseScopedWrapperRef_Create(data: Pointer): TCEFBaseScopedWrapperRef; extdecl;
begin
  handleExceptionBegin
  Result := TCEFBaseScopedWrapperRef.Create(data);
  handleExceptionEnd
end;

//function
function CEFBaseScopedWrapperRef_Wrap(AObj: TCEFBaseScopedWrapperRef): Pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Wrap();
  handleExceptionEnd
end;


exports
  CEFBaseScopedWrapperRef_Create,
  CEFBaseScopedWrapperRef_Wrap;