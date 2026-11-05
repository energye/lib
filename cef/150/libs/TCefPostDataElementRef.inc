// constructor
function TCefPostDataElementRef_Create(data: Pointer; out IntfPostDataElement: ICefPostDataElement): TCefPostDataElementRef; extdecl;
begin
  {$define handleExceptionID := 20200}
  handleExceptionBegin
  Result := TCefPostDataElementRef.Create(data);
  IntfPostDataElement := Result as ICefPostDataElement;
  handleExceptionEnd
end;

// function
function TCefPostDataElementRef_IsReadOnly(AObj: ICefPostDataElement): LongBool; extdecl;
begin
  {$define handleExceptionID := 20201}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

// function
function TCefPostDataElementRef_GetType(AObj: ICefPostDataElement): TCefPostDataElementType; extdecl;
begin
  {$define handleExceptionID := 20202}
  handleExceptionBegin
  Result := AObj.GetType();
  handleExceptionEnd
end;

// function
procedure TCefPostDataElementRef_GetFile(AObj: ICefPostDataElement;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20203}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetFile()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefPostDataElementRef_GetBytesCount(AObj: ICefPostDataElement): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 20204}
  handleExceptionBegin
  Result := AObj.GetBytesCount();
  handleExceptionEnd
end;

// function
function TCefPostDataElementRef_GetBytes(AObj: ICefPostDataElement; size: NativeUInt; bytes: Pointer): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 20205}
  handleExceptionBegin
  Result := AObj.GetBytes(size, bytes);
  handleExceptionEnd
end;

// function static
procedure TCefPostDataElementRef_UnWrap(data: Pointer; var Result: ICefPostDataElement); extdecl;
begin
  Result := TCefPostDataElementRef.UnWrap(data);
end;

// function static
procedure TCefPostDataElementRef_New(var Result: ICefPostDataElement); extdecl;
begin
  Result := TCefPostDataElementRef.New();
end;

// procedure
procedure TCefPostDataElementRef_SetToEmpty(AObj: ICefPostDataElement); extdecl;
begin
  {$define handleExceptionID := 20206}
  handleExceptionBegin
  AObj.SetToEmpty();
  handleExceptionEnd
end;

// procedure
procedure TCefPostDataElementRef_SetToFile(AObj: ICefPostDataElement; const fileName: PChar); extdecl;
begin
  {$define handleExceptionID := 20207}
  handleExceptionBegin
  AObj.SetToFile(PCharToUStr(fileName));
  handleExceptionEnd
end;

// procedure
procedure TCefPostDataElementRef_SetToBytes(AObj: ICefPostDataElement; size: NativeUInt; const bytes: Pointer); extdecl;
begin
  {$define handleExceptionID := 20208}
  handleExceptionBegin
  AObj.SetToBytes(size, bytes);
  handleExceptionEnd
end;

exports
  TCefPostDataElementRef_Create,
  TCefPostDataElementRef_IsReadOnly,
  TCefPostDataElementRef_GetType,
  TCefPostDataElementRef_GetFile,
  TCefPostDataElementRef_GetBytesCount,
  TCefPostDataElementRef_GetBytes,
  TCefPostDataElementRef_UnWrap,
  TCefPostDataElementRef_New,
  TCefPostDataElementRef_SetToEmpty,
  TCefPostDataElementRef_SetToFile,
  TCefPostDataElementRef_SetToBytes;