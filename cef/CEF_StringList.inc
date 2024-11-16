
//function
procedure ICefStringList_GetHandle(AObj: ICefStringList; var Result: TCefStringList); extdecl;
begin
  {$define handleExceptionFuncName :='GetHandle'}
  handleExceptionBegin
  Result := AObj.GetHandle();
  handleExceptionEnd
end;

//function
function ICefStringList_GetSize(AObj: ICefStringList): NativeUInt; extdecl;
begin
  {$define handleExceptionFuncName :='GetSize'}
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

//function
function ICefStringList_GetValue(AObj: ICefStringList; index: NativeUInt): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetValue'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetValue(index));
  handleExceptionEnd
end;

//function
procedure ICefStringList_Copy(AObj: ICefStringList; var Result: TCefStringList); extdecl;
begin
  {$define handleExceptionFuncName :='Copy'}
  handleExceptionBegin
  Result := AObj.Copy();
  handleExceptionEnd
end;

//procedure
procedure ICefStringList_Append(AObj: ICefStringList; const value: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='Append'}
  handleExceptionBegin
  AObj.Append(value);
  handleExceptionEnd
end;

//procedure
procedure ICefStringList_Clear(AObj: ICefStringList); extdecl;
begin
  {$define handleExceptionFuncName :='Clear'}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure ICefStringList_CopyToStrings(AObj: ICefStringList; const aStrings: TStrings); extdecl;
begin
  {$define handleExceptionFuncName :='CopyToStrings'}
  handleExceptionBegin
  AObj.CopyToStrings(aStrings);
  handleExceptionEnd
end;

//procedure
procedure ICefStringList_AddStrings(AObj: ICefStringList; const aStrings: TStrings); extdecl;
begin
  {$define handleExceptionFuncName :='AddStrings'}
  handleExceptionBegin
  AObj.AddStrings(aStrings);
  handleExceptionEnd
end;


exports
  ICefStringList_GetHandle,
  ICefStringList_GetSize,
  ICefStringList_GetValue,
  ICefStringList_Copy,
  ICefStringList_Append,
  ICefStringList_Clear,
  ICefStringList_CopyToStrings,
  ICefStringList_AddStrings;