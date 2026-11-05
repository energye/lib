// constructor
function TCefCustomStringList_Create(out IntfStringList: ICefStringList): TCefCustomStringList; extdecl;
begin
  {$define handleExceptionID := 26300}
  handleExceptionBegin
  Result := TCefCustomStringList.Create();
  IntfStringList := Result as ICefStringList;
  handleExceptionEnd
end;

// function
function TCefCustomStringList_GetHandle(AObj: ICefStringList): TCefStringList; extdecl;
begin
  {$define handleExceptionID := 26301}
  handleExceptionBegin
  Result := AObj.GetHandle();
  handleExceptionEnd
end;

// function
function TCefCustomStringList_GetSize(AObj: ICefStringList): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 26302}
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

// function
procedure TCefCustomStringList_GetValue(AObj: ICefStringList; index: NativeUInt;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 26303}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetValue(index)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefCustomStringList_Copy(AObj: ICefStringList): TCefStringList; extdecl;
begin
  {$define handleExceptionID := 26304}
  handleExceptionBegin
  Result := AObj.Copy();
  handleExceptionEnd
end;

// procedure
procedure TCefCustomStringList_Append(AObj: ICefStringList; const value: PChar); extdecl;
begin
  {$define handleExceptionID := 26305}
  handleExceptionBegin
  AObj.Append(PCharToUStr(value));
  handleExceptionEnd
end;

// procedure
procedure TCefCustomStringList_Clear(AObj: ICefStringList); extdecl;
begin
  {$define handleExceptionID := 26306}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TCefCustomStringList_CopyToStrings(AObj: ICefStringList; const aStrings: TStrings); extdecl;
begin
  {$define handleExceptionID := 26307}
  handleExceptionBegin
  AObj.CopyToStrings(aStrings);
  handleExceptionEnd
end;

// procedure
procedure TCefCustomStringList_AddStrings(AObj: ICefStringList; const aStrings: TStrings); extdecl;
begin
  {$define handleExceptionID := 26308}
  handleExceptionBegin
  AObj.AddStrings(aStrings);
  handleExceptionEnd
end;

exports
  TCefCustomStringList_Create,
  TCefCustomStringList_GetHandle,
  TCefCustomStringList_GetSize,
  TCefCustomStringList_GetValue,
  TCefCustomStringList_Copy,
  TCefCustomStringList_Append,
  TCefCustomStringList_Clear,
  TCefCustomStringList_CopyToStrings,
  TCefCustomStringList_AddStrings;