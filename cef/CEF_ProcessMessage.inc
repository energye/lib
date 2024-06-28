
//function
procedure CefProcessMessage_UnWrap(data: Pointer; var Result: ICefProcessMessage); extdecl;
begin
  Result := TCefProcessMessageRef.UnWrap(data);
end;

//function
procedure CefProcessMessage_New(const name: PChar; var Result: ICefProcessMessage); extdecl;
begin
  Result := TCefProcessMessageRef.New(name);
end;

//function
function CefProcessMessage_IsValid(AObj: ICefProcessMessage): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsValid'}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefProcessMessage_IsReadOnly(AObj: ICefProcessMessage): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsReadOnly'}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

//function
procedure CefProcessMessage_Copy(AObj: ICefProcessMessage; var Result: ICefProcessMessage); extdecl;
begin
  {$define handleExceptionFuncName :='Copy'}
  handleExceptionBegin
  Result := AObj.Copy();
  handleExceptionEnd
end;

//function
function CefProcessMessage_GetName(AObj: ICefProcessMessage): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetName'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetName());
  handleExceptionEnd
end;

//function
procedure CefProcessMessage_GetArgumentList(AObj: ICefProcessMessage; var Result: ICefListValue); extdecl;
begin
  {$define handleExceptionFuncName :='GetArgumentList'}
  handleExceptionBegin
  Result := AObj.GetArgumentList();
  handleExceptionEnd
end;

//function
procedure CefProcessMessage_GetSharedMemoryRegion(AObj: ICefProcessMessage; var Result: ICefSharedMemoryRegion); extdecl;
begin
  {$define handleExceptionFuncName :='GetSharedMemoryRegion'}
  handleExceptionBegin
  Result := AObj.GetSharedMemoryRegion();
  handleExceptionEnd
end;


exports
  CefProcessMessage_UnWrap,
  CefProcessMessage_New,
  CefProcessMessage_IsValid,
  CefProcessMessage_IsReadOnly,
  CefProcessMessage_Copy,
  CefProcessMessage_GetName,
  CefProcessMessage_GetArgumentList,
  CefProcessMessage_GetSharedMemoryRegion;