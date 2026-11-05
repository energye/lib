// constructor manually create
function TVTVirtualNodeEnumerator_Create(): TVTVirtualNodeEnumerator; extdecl;
begin
  {$define handleExceptionID := 30000}
  handleExceptionBegin
  Result := TVTVirtualNodeEnumerator.Create();
  handleExceptionEnd
end;

// function
function TVTVirtualNodeEnumerator_MoveNext(AObj: TVTVirtualNodeEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionID := 30001}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

// property
function TVTVirtualNodeEnumerator_Current(AObj: TVTVirtualNodeEnumerator): PVirtualNode; extdecl;
begin
  {$define handleExceptionID := 30002}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

exports
  TVTVirtualNodeEnumerator_Create,
  TVTVirtualNodeEnumerator_MoveNext,
  TVTVirtualNodeEnumerator_Current;