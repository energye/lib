// constructor
function TCefExtensionRef_Create(data: Pointer; out IntfExtension: ICefExtension): TCefExtensionRef; extdecl;
begin
  {$define handleExceptionID := 25800}
  handleExceptionBegin
  Result := TCefExtensionRef.Create(data);
  IntfExtension := Result as ICefExtension;
  handleExceptionEnd
end;

// function
procedure TCefExtensionRef_GetIdentifier(AObj: ICefExtension;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25801}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetIdentifier()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefExtensionRef_GetPath(AObj: ICefExtension;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25802}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetPath()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefExtensionRef_GetManifest(AObj: ICefExtension; var Result: ICefDictionaryValue); extdecl;
begin
  {$define handleExceptionID := 25803}
  handleExceptionBegin
  Result := AObj.GetManifest();
  handleExceptionEnd
end;

// function
function TCefExtensionRef_IsSame(AObj: ICefExtension; const that: ICefExtension): LongBool; extdecl;
begin
  {$define handleExceptionID := 25804}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
procedure TCefExtensionRef_GetHandler(AObj: ICefExtension; var Result: ICefExtensionHandler); extdecl;
begin
  {$define handleExceptionID := 25805}
  handleExceptionBegin
  Result := AObj.GetHandler();
  handleExceptionEnd
end;

// function
procedure TCefExtensionRef_GetLoaderContext(AObj: ICefExtension; var Result: ICefRequestContext); extdecl;
begin
  {$define handleExceptionID := 25806}
  handleExceptionBegin
  Result := AObj.GetLoaderContext();
  handleExceptionEnd
end;

// function
function TCefExtensionRef_IsLoaded(AObj: ICefExtension): LongBool; extdecl;
begin
  {$define handleExceptionID := 25807}
  handleExceptionBegin
  Result := AObj.IsLoaded();
  handleExceptionEnd
end;

// function
procedure TCefExtensionRef_GetBrowserActionPopup(AObj: ICefExtension;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25808}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetBrowserActionPopup()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefExtensionRef_GetBrowserActionIcon(AObj: ICefExtension;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25809}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetBrowserActionIcon()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefExtensionRef_GetPageActionPopup(AObj: ICefExtension;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25810}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetPageActionPopup()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefExtensionRef_GetPageActionIcon(AObj: ICefExtension;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25811}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetPageActionIcon()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefExtensionRef_GetOptionsPage(AObj: ICefExtension;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25812}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetOptionsPage()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefExtensionRef_GetOptionsUIPage(AObj: ICefExtension;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25813}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetOptionsUIPage()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefExtensionRef_GetBackgroundPage(AObj: ICefExtension;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25814}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetBackgroundPage()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefExtensionRef_GetURL(AObj: ICefExtension;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 25815}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetURL()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function static
procedure TCefExtensionRef_UnWrap(data: Pointer; var Result: ICefExtension); extdecl;
begin
  Result := TCefExtensionRef.UnWrap(data);
end;

// procedure
procedure TCefExtensionRef_unload(AObj: ICefExtension); extdecl;
begin
  {$define handleExceptionID := 25816}
  handleExceptionBegin
  AObj.unload();
  handleExceptionEnd
end;

exports
  TCefExtensionRef_Create,
  TCefExtensionRef_GetIdentifier,
  TCefExtensionRef_GetPath,
  TCefExtensionRef_GetManifest,
  TCefExtensionRef_IsSame,
  TCefExtensionRef_GetHandler,
  TCefExtensionRef_GetLoaderContext,
  TCefExtensionRef_IsLoaded,
  TCefExtensionRef_GetBrowserActionPopup,
  TCefExtensionRef_GetBrowserActionIcon,
  TCefExtensionRef_GetPageActionPopup,
  TCefExtensionRef_GetPageActionIcon,
  TCefExtensionRef_GetOptionsPage,
  TCefExtensionRef_GetOptionsUIPage,
  TCefExtensionRef_GetBackgroundPage,
  TCefExtensionRef_GetURL,
  TCefExtensionRef_UnWrap,
  TCefExtensionRef_unload;