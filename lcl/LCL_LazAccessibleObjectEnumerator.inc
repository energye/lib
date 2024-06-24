
//constructor
function LazAccessibleObjectEnumerator_Create(Tree: TAVLTree; aLowToHigh: LongBool): TLazAccessibleObjectEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := TLazAccessibleObjectEnumerator.Create(Tree, aLowToHigh);
  handleExceptionEnd
end;

//property
function LazAccessibleObjectEnumerator_CurrentForLazAccessibleObject(AObj: TLazAccessibleObjectEnumerator): TLazAccessibleObject; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

//function
function LazAccessibleObjectEnumerator_Class(): TClass; extdecl;
begin
  Result := TLazAccessibleObjectEnumerator;
end;


exports
  LazAccessibleObjectEnumerator_Create,
  LazAccessibleObjectEnumerator_CurrentForLazAccessibleObject,
  LazAccessibleObjectEnumerator_Class;