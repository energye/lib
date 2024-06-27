
//function
procedure ICefStringList_GetHandle(AObj: ICefStringList; var Result: TCefStringList); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetHandle();
  handleExceptionEnd
end;

//function
function ICefStringList_GetSize(AObj: ICefStringList): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

//function
function ICefStringList_GetValue(AObj: ICefStringList; index: NativeUInt): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetValue(index));
  handleExceptionEnd
end;

//function
procedure ICefStringList_Copy(AObj: ICefStringList; var Result: TCefStringList); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Copy();
  handleExceptionEnd
end;

//procedure
procedure ICefStringList_Append(AObj: ICefStringList; const value: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Append(value);
  handleExceptionEnd
end;

//procedure
procedure ICefStringList_Clear(AObj: ICefStringList); extdecl;
begin
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

//procedure
procedure ICefStringList_CopyToStrings(AObj: ICefStringList; const aStrings: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.CopyToStrings(aStrings);
  handleExceptionEnd
end;

//procedure
procedure ICefStringList_AddStrings(AObj: ICefStringList; const aStrings: TStrings); extdecl;
begin
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