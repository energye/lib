// constructor
function TCefMediaSinkRef_Create(data: Pointer; out IntfMediaSink: ICefMediaSink): TCefMediaSinkRef; extdecl;
begin
  {$define handleExceptionID := 23400}
  handleExceptionBegin
  Result := TCefMediaSinkRef.Create(data);
  IntfMediaSink := Result as ICefMediaSink;
  handleExceptionEnd
end;

// function
procedure TCefMediaSinkRef_GetId(AObj: ICefMediaSink;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 23401}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetId()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefMediaSinkRef_GetName(AObj: ICefMediaSink;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 23402}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefMediaSinkRef_GetIconType(AObj: ICefMediaSink): TCefMediaSinkIconType; extdecl;
begin
  {$define handleExceptionID := 23403}
  handleExceptionBegin
  Result := AObj.GetIconType();
  handleExceptionEnd
end;

// function
function TCefMediaSinkRef_IsCastSink(AObj: ICefMediaSink): LongBool; extdecl;
begin
  {$define handleExceptionID := 23404}
  handleExceptionBegin
  Result := AObj.IsCastSink();
  handleExceptionEnd
end;

// function
function TCefMediaSinkRef_IsDialSink(AObj: ICefMediaSink): LongBool; extdecl;
begin
  {$define handleExceptionID := 23405}
  handleExceptionBegin
  Result := AObj.IsDialSink();
  handleExceptionEnd
end;

// function
function TCefMediaSinkRef_IsCompatibleWith(AObj: ICefMediaSink; const source: ICefMediaSource): LongBool; extdecl;
begin
  {$define handleExceptionID := 23406}
  handleExceptionBegin
  Result := AObj.IsCompatibleWith(source);
  handleExceptionEnd
end;

// function static
procedure TCefMediaSinkRef_UnWrap(data: Pointer; var Result: ICefMediaSink); extdecl;
begin
  Result := TCefMediaSinkRef.UnWrap(data);
end;

// procedure
procedure TCefMediaSinkRef_GetDeviceInfo(AObj: ICefMediaSink; const callback: ICefMediaSinkDeviceInfoCallback); extdecl;
begin
  {$define handleExceptionID := 23407}
  handleExceptionBegin
  AObj.GetDeviceInfo(callback);
  handleExceptionEnd
end;

exports
  TCefMediaSinkRef_Create,
  TCefMediaSinkRef_GetId,
  TCefMediaSinkRef_GetName,
  TCefMediaSinkRef_GetIconType,
  TCefMediaSinkRef_IsCastSink,
  TCefMediaSinkRef_IsDialSink,
  TCefMediaSinkRef_IsCompatibleWith,
  TCefMediaSinkRef_UnWrap,
  TCefMediaSinkRef_GetDeviceInfo;