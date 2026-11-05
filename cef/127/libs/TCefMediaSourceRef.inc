// constructor
function TCefMediaSourceRef_Create(data: Pointer; out IntfMediaSource: ICefMediaSource): TCefMediaSourceRef; extdecl;
begin
  {$define handleExceptionID := 23500}
  handleExceptionBegin
  Result := TCefMediaSourceRef.Create(data);
  IntfMediaSource := Result as ICefMediaSource;
  handleExceptionEnd
end;

// function
procedure TCefMediaSourceRef_GetId(AObj: ICefMediaSource;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 23501}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetId()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefMediaSourceRef_IsCastSource(AObj: ICefMediaSource): LongBool; extdecl;
begin
  {$define handleExceptionID := 23502}
  handleExceptionBegin
  Result := AObj.IsCastSource();
  handleExceptionEnd
end;

// function
function TCefMediaSourceRef_IsDialSource(AObj: ICefMediaSource): LongBool; extdecl;
begin
  {$define handleExceptionID := 23503}
  handleExceptionBegin
  Result := AObj.IsDialSource();
  handleExceptionEnd
end;

// function static
procedure TCefMediaSourceRef_UnWrap(data: Pointer; var Result: ICefMediaSource); extdecl;
begin
  Result := TCefMediaSourceRef.UnWrap(data);
end;

exports
  TCefMediaSourceRef_Create,
  TCefMediaSourceRef_GetId,
  TCefMediaSourceRef_IsCastSource,
  TCefMediaSourceRef_IsDialSource,
  TCefMediaSourceRef_UnWrap;