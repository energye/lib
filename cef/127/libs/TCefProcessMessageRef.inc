// constructor
function TCefProcessMessageRef_Create(data: Pointer; out IntfProcessMessage: ICefProcessMessage): TCefProcessMessageRef; extdecl;
begin
  {$define handleExceptionID := 20200}
  handleExceptionBegin
  Result := TCefProcessMessageRef.Create(data);
  IntfProcessMessage := Result as ICefProcessMessage;
  handleExceptionEnd
end;

// function
function TCefProcessMessageRef_IsValid(AObj: ICefProcessMessage): LongBool; extdecl;
begin
  {$define handleExceptionID := 20201}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefProcessMessageRef_IsReadOnly(AObj: ICefProcessMessage): LongBool; extdecl;
begin
  {$define handleExceptionID := 20202}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

// function
procedure TCefProcessMessageRef_Copy(AObj: ICefProcessMessage; var Result: ICefProcessMessage); extdecl;
begin
  {$define handleExceptionID := 20203}
  handleExceptionBegin
  Result := AObj.Copy();
  handleExceptionEnd
end;

// function
procedure TCefProcessMessageRef_GetName(AObj: ICefProcessMessage;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 20204}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefProcessMessageRef_GetArgumentList(AObj: ICefProcessMessage; var Result: ICefListValue); extdecl;
begin
  {$define handleExceptionID := 20205}
  handleExceptionBegin
  Result := AObj.GetArgumentList();
  handleExceptionEnd
end;

// function
procedure TCefProcessMessageRef_GetSharedMemoryRegion(AObj: ICefProcessMessage; var Result: ICefSharedMemoryRegion); extdecl;
begin
  {$define handleExceptionID := 20206}
  handleExceptionBegin
  Result := AObj.GetSharedMemoryRegion();
  handleExceptionEnd
end;

// function static
procedure TCefProcessMessageRef_UnWrap(data: Pointer; var Result: ICefProcessMessage); extdecl;
begin
  Result := TCefProcessMessageRef.UnWrap(data);
end;

// function static
procedure TCefProcessMessageRef_New(const name: PChar; var Result: ICefProcessMessage); extdecl;
begin
  Result := TCefProcessMessageRef.New(name);
end;

exports
  TCefProcessMessageRef_Create,
  TCefProcessMessageRef_IsValid,
  TCefProcessMessageRef_IsReadOnly,
  TCefProcessMessageRef_Copy,
  TCefProcessMessageRef_GetName,
  TCefProcessMessageRef_GetArgumentList,
  TCefProcessMessageRef_GetSharedMemoryRegion,
  TCefProcessMessageRef_UnWrap,
  TCefProcessMessageRef_New;