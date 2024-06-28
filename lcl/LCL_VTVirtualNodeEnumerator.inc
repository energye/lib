
//constructor
function VTVirtualNodeEnumerator_Create(): TVTVirtualNodeEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TVTVirtualNodeEnumerator.Create();
  handleExceptionEnd
end;

//property
function VTVirtualNodeEnumerator_Current(AObj: TVTVirtualNodeEnumerator): PVirtualNode; extdecl;
begin
  {$define handleExceptionFuncName :='Current'}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

//function
function VTVirtualNodeEnumerator_MoveNext(AObj: TVTVirtualNodeEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MoveNext'}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

//function
function VTVirtualNodeEnumerator_Class(): TClass; extdecl;
begin
  Result := TVTVirtualNodeEnumerator;
end;


exports
  VTVirtualNodeEnumerator_Create,
  VTVirtualNodeEnumerator_Current,
  VTVirtualNodeEnumerator_MoveNext,
  VTVirtualNodeEnumerator_Class;