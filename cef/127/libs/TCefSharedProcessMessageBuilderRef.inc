// constructor
function TCefSharedProcessMessageBuilderRef_Create(data: Pointer; out IntfSharedProcessMessageBuilder: ICefSharedProcessMessageBuilder): TCefSharedProcessMessageBuilderRef; extdecl;
begin
  {$define handleExceptionID := 25500}
  handleExceptionBegin
  Result := TCefSharedProcessMessageBuilderRef.Create(data);
  IntfSharedProcessMessageBuilder := Result as ICefSharedProcessMessageBuilder;
  handleExceptionEnd
end;

// function
function TCefSharedProcessMessageBuilderRef_IsValid(AObj: ICefSharedProcessMessageBuilder): LongBool; extdecl;
begin
  {$define handleExceptionID := 25501}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefSharedProcessMessageBuilderRef_Size(AObj: ICefSharedProcessMessageBuilder): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 25502}
  handleExceptionBegin
  Result := AObj.Size();
  handleExceptionEnd
end;

// function
function TCefSharedProcessMessageBuilderRef_Memory(AObj: ICefSharedProcessMessageBuilder): pointer; extdecl;
begin
  {$define handleExceptionID := 25503}
  handleExceptionBegin
  Result := AObj.Memory();
  handleExceptionEnd
end;

// function
procedure TCefSharedProcessMessageBuilderRef_Build(AObj: ICefSharedProcessMessageBuilder; var Result: ICefProcessMessage); extdecl;
begin
  {$define handleExceptionID := 25504}
  handleExceptionBegin
  Result := AObj.Build();
  handleExceptionEnd
end;

// function static
procedure TCefSharedProcessMessageBuilderRef_UnWrap(data: Pointer; var Result: ICefSharedProcessMessageBuilder); extdecl;
begin
  Result := TCefSharedProcessMessageBuilderRef.UnWrap(data);
end;

// function static
procedure TCefSharedProcessMessageBuilderRef_CreateBuilder(const name: PChar; byte_size: NativeUInt; var Result: ICefSharedProcessMessageBuilder); extdecl;
begin
  Result := TCefSharedProcessMessageBuilderRef.CreateBuilder(name, byte_size);
end;

exports
  TCefSharedProcessMessageBuilderRef_Create,
  TCefSharedProcessMessageBuilderRef_IsValid,
  TCefSharedProcessMessageBuilderRef_Size,
  TCefSharedProcessMessageBuilderRef_Memory,
  TCefSharedProcessMessageBuilderRef_Build,
  TCefSharedProcessMessageBuilderRef_UnWrap,
  TCefSharedProcessMessageBuilderRef_CreateBuilder;