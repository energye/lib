// constructor
function TCoreWebView2SharedBuffer_Create(const aBaseIntf: ICoreWebView2SharedBuffer): TCoreWebView2SharedBuffer; extdecl;
begin
  {$define handleExceptionID := 6000}
  handleExceptionBegin
  Result := TCoreWebView2SharedBuffer.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2SharedBuffer_Close(AObj: TCoreWebView2SharedBuffer): LongBool; extdecl;
begin
  {$define handleExceptionID := 6001}
  handleExceptionBegin
  Result := AObj.Close();
  handleExceptionEnd
end;

// property
function TCoreWebView2SharedBuffer_Initialized(AObj: TCoreWebView2SharedBuffer): LongBool; extdecl;
begin
  {$define handleExceptionID := 6002}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2SharedBuffer_BaseIntf(AObj: TCoreWebView2SharedBuffer; var Result: ICoreWebView2SharedBuffer); extdecl;
begin
  {$define handleExceptionID := 6003}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2SharedBuffer_Size(AObj: TCoreWebView2SharedBuffer; var Result: int64); extdecl;
begin
  {$define handleExceptionID := 6004}
  handleExceptionBegin
  Result := AObj.Size;
  handleExceptionEnd
end;

// property
function TCoreWebView2SharedBuffer_Buffer(AObj: TCoreWebView2SharedBuffer): PByte; extdecl;
begin
  {$define handleExceptionID := 6005}
  handleExceptionBegin
  Result := AObj.Buffer;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2SharedBuffer_OpenStream(AObj: TCoreWebView2SharedBuffer; var Result: IStream); extdecl;
begin
  {$define handleExceptionID := 6006}
  handleExceptionBegin
  Result := AObj.OpenStream;
  handleExceptionEnd
end;

// property
function TCoreWebView2SharedBuffer_FileMappingHandle(AObj: TCoreWebView2SharedBuffer): HANDLE; extdecl;
begin
  {$define handleExceptionID := 6007}
  handleExceptionBegin
  Result := AObj.FileMappingHandle;
  handleExceptionEnd
end;

exports
  TCoreWebView2SharedBuffer_Create,
  TCoreWebView2SharedBuffer_Close,
  TCoreWebView2SharedBuffer_Initialized,
  TCoreWebView2SharedBuffer_BaseIntf,
  TCoreWebView2SharedBuffer_Size,
  TCoreWebView2SharedBuffer_Buffer,
  TCoreWebView2SharedBuffer_OpenStream,
  TCoreWebView2SharedBuffer_FileMappingHandle;