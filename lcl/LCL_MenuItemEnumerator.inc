
//constructor
function MenuItemEnumerator_Create(AMenuItem: TMenuItem): TMenuItemEnumerator; extdecl;
begin
  handleExceptionBegin
  Result := TMenuItemEnumerator.Create(AMenuItem);
  handleExceptionEnd
end;

//property
function MenuItemEnumerator_Current(AObj: TMenuItemEnumerator): TMenuItem; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

//function
function MenuItemEnumerator_MoveNext(AObj: TMenuItemEnumerator): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

//function
function MenuItemEnumerator_Class(): TClass; extdecl;
begin
  Result := TMenuItemEnumerator;
end;


exports
  MenuItemEnumerator_Create,
  MenuItemEnumerator_Current,
  MenuItemEnumerator_MoveNext,
  MenuItemEnumerator_Class;