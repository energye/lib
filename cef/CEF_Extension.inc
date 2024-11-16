
//function
procedure CefExtension_UnWrap(data: Pointer; var Result: ICefExtension); extdecl;
begin
  Result := TCefExtensionRef.UnWrap(data);
end;

//function
function CefExtension_GetIdentifier(AObj: ICefExtension): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetIdentifier'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetIdentifier());
  handleExceptionEnd
end;

//function
function CefExtension_GetPath(AObj: ICefExtension): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetPath'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetPath());
  handleExceptionEnd
end;

//function
procedure CefExtension_GetManifest(AObj: ICefExtension; var Result: ICefDictionaryValue); extdecl;
begin
  {$define handleExceptionFuncName :='GetManifest'}
  handleExceptionBegin
  Result := AObj.GetManifest();
  handleExceptionEnd
end;

//function
function CefExtension_IsSame(AObj: ICefExtension; const that: ICefExtension): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSame'}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
procedure CefExtension_GetHandler(AObj: ICefExtension; var Result: ICefExtensionHandler); extdecl;
begin
  {$define handleExceptionFuncName :='GetHandler'}
  handleExceptionBegin
  Result := AObj.GetHandler();
  handleExceptionEnd
end;

//function
procedure CefExtension_GetLoaderContext(AObj: ICefExtension; var Result: ICefRequestContext); extdecl;
begin
  {$define handleExceptionFuncName :='GetLoaderContext'}
  handleExceptionBegin
  Result := AObj.GetLoaderContext();
  handleExceptionEnd
end;

//function
function CefExtension_IsLoaded(AObj: ICefExtension): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsLoaded'}
  handleExceptionBegin
  Result := AObj.IsLoaded();
  handleExceptionEnd
end;

//function
function CefExtension_GetBrowserActionPopup(AObj: ICefExtension): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetBrowserActionPopup'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetBrowserActionPopup());
  handleExceptionEnd
end;

//function
function CefExtension_GetBrowserActionIcon(AObj: ICefExtension): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetBrowserActionIcon'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetBrowserActionIcon());
  handleExceptionEnd
end;

//function
function CefExtension_GetPageActionPopup(AObj: ICefExtension): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetPageActionPopup'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetPageActionPopup());
  handleExceptionEnd
end;

//function
function CefExtension_GetPageActionIcon(AObj: ICefExtension): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetPageActionIcon'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetPageActionIcon());
  handleExceptionEnd
end;

//function
function CefExtension_GetOptionsPage(AObj: ICefExtension): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetOptionsPage'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetOptionsPage());
  handleExceptionEnd
end;

//function
function CefExtension_GetOptionsUIPage(AObj: ICefExtension): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetOptionsUIPage'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetOptionsUIPage());
  handleExceptionEnd
end;

//function
function CefExtension_GetBackgroundPage(AObj: ICefExtension): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetBackgroundPage'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetBackgroundPage());
  handleExceptionEnd
end;

//function
function CefExtension_GetURL(AObj: ICefExtension): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetURL'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetURL());
  handleExceptionEnd
end;

//procedure
procedure CefExtension_Unload(AObj: ICefExtension); extdecl;
begin
  {$define handleExceptionFuncName :='Unload'}
  handleExceptionBegin
  AObj.unload();
  handleExceptionEnd
end;


exports
  CefExtension_UnWrap,
  CefExtension_GetIdentifier,
  CefExtension_GetPath,
  CefExtension_GetManifest,
  CefExtension_IsSame,
  CefExtension_GetHandler,
  CefExtension_GetLoaderContext,
  CefExtension_IsLoaded,
  CefExtension_GetBrowserActionPopup,
  CefExtension_GetBrowserActionIcon,
  CefExtension_GetPageActionPopup,
  CefExtension_GetPageActionIcon,
  CefExtension_GetOptionsPage,
  CefExtension_GetOptionsUIPage,
  CefExtension_GetBackgroundPage,
  CefExtension_GetURL,
  CefExtension_Unload;