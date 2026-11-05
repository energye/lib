// constructor
function TCefv8BackingStoreRef_Create(data: Pointer; out IntfV8BackingStore: ICefv8BackingStore): TCefv8BackingStoreRef; extdecl;
begin
  {$define handleExceptionID := 27000}
  handleExceptionBegin
  Result := TCefv8BackingStoreRef.Create(data);
  IntfV8BackingStore := Result as ICefv8BackingStore;
  handleExceptionEnd
end;

// function
function TCefv8BackingStoreRef_data(AObj: ICefv8BackingStore): Pointer; extdecl;
begin
  {$define handleExceptionID := 27001}
  handleExceptionBegin
  Result := AObj.data();
  handleExceptionEnd
end;

// function
function TCefv8BackingStoreRef_ByteLength(AObj: ICefv8BackingStore): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 27002}
  handleExceptionBegin
  Result := AObj.ByteLength();
  handleExceptionEnd
end;

// function
function TCefv8BackingStoreRef_IsValid(AObj: ICefv8BackingStore): LongBool; extdecl;
begin
  {$define handleExceptionID := 27003}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function static
procedure TCefv8BackingStoreRef_UnWrap(data_: Pointer; var Result: ICefv8BackingStore); extdecl;
begin
  Result := TCefv8BackingStoreRef.UnWrap(data_);
end;

// function static
procedure TCefv8BackingStoreRef_New(byte_length: NativeUInt; var Result: ICefv8BackingStore); extdecl;
begin
  Result := TCefv8BackingStoreRef.New(byte_length);
end;

exports
  TCefv8BackingStoreRef_Create,
  TCefv8BackingStoreRef_data,
  TCefv8BackingStoreRef_ByteLength,
  TCefv8BackingStoreRef_IsValid,
  TCefv8BackingStoreRef_UnWrap,
  TCefv8BackingStoreRef_New;