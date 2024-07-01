
//constructor
function CoreWebView2SharedBuffer_Create(const aBaseIntf: ICoreWebView2SharedBuffer): TCoreWebView2SharedBuffer; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2SharedBuffer.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2SharedBuffer_Initialized(AObj: TCoreWebView2SharedBuffer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2SharedBuffer_BaseIntf(AObj: TCoreWebView2SharedBuffer; var Result: ICoreWebView2SharedBuffer); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
procedure CoreWebView2SharedBuffer_Size(AObj: TCoreWebView2SharedBuffer; var Result: int64); extdecl;
begin
  {$define handleExceptionFuncName :='Size'}
  handleExceptionBegin
  Result := AObj.Size;
  handleExceptionEnd
end;

//property
function CoreWebView2SharedBuffer_Buffer(AObj: TCoreWebView2SharedBuffer): PByte; extdecl;
begin
  {$define handleExceptionFuncName :='Buffer'}
  handleExceptionBegin
  Result := AObj.Buffer;
  handleExceptionEnd
end;

//property
procedure CoreWebView2SharedBuffer_OpenStream(AObj: TCoreWebView2SharedBuffer; var Result: IStream); extdecl;
begin
  {$define handleExceptionFuncName :='OpenStream'}
  handleExceptionBegin
  Result := AObj.OpenStream;
  handleExceptionEnd
end;

//property
function CoreWebView2SharedBuffer_FileMappingHandle(AObj: TCoreWebView2SharedBuffer): HANDLE; extdecl;
begin
  {$define handleExceptionFuncName :='FileMappingHandle'}
  handleExceptionBegin
  Result := AObj.FileMappingHandle;
  handleExceptionEnd
end;

//function
function CoreWebView2SharedBuffer_Close(AObj: TCoreWebView2SharedBuffer): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Close'}
  handleExceptionBegin
  Result := AObj.Close();
  handleExceptionEnd
end;


exports
  CoreWebView2SharedBuffer_Create,
  CoreWebView2SharedBuffer_Initialized,
  CoreWebView2SharedBuffer_BaseIntf,
  CoreWebView2SharedBuffer_Size,
  CoreWebView2SharedBuffer_Buffer,
  CoreWebView2SharedBuffer_OpenStream,
  CoreWebView2SharedBuffer_FileMappingHandle,
  CoreWebView2SharedBuffer_Close;