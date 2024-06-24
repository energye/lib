
//function
procedure CefSharedProcessMessageBuilder_UnWrap(data: Pointer; var Result: ICefSharedProcessMessageBuilder); extdecl;
begin
  Result := TCefSharedProcessMessageBuilderRef.UnWrap(data);
end;

//function
procedure CefSharedProcessMessageBuilder_CreateBuilder(const name: PChar; bytesize: NativeUInt; var Result: ICefSharedProcessMessageBuilder); extdecl;
begin
  Result := TCefSharedProcessMessageBuilderRef.CreateBuilder(name, bytesize);
end;

//function
function CefSharedProcessMessageBuilder_IsValid(AObj: ICefSharedProcessMessageBuilder): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefSharedProcessMessageBuilder_Size(AObj: ICefSharedProcessMessageBuilder): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Size();
  handleExceptionEnd
end;

//function
function CefSharedProcessMessageBuilder_Memory(AObj: ICefSharedProcessMessageBuilder): pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Memory();
  handleExceptionEnd
end;

//function
procedure CefSharedProcessMessageBuilder_Build(AObj: ICefSharedProcessMessageBuilder; var Result: ICefProcessMessage); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Build();
  handleExceptionEnd
end;


exports
  CefSharedProcessMessageBuilder_UnWrap,
  CefSharedProcessMessageBuilder_CreateBuilder,
  CefSharedProcessMessageBuilder_IsValid,
  CefSharedProcessMessageBuilder_Size,
  CefSharedProcessMessageBuilder_Memory,
  CefSharedProcessMessageBuilder_Build;