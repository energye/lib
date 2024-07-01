
//constructor
function CoreWebView2BrowserExtensionList_Create(const aBaseIntf: ICoreWebView2BrowserExtensionList): TCoreWebView2BrowserExtensionList; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2BrowserExtensionList.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2BrowserExtensionList_Initialized(AObj: TCoreWebView2BrowserExtensionList): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2BrowserExtensionList_BaseIntf(AObj: TCoreWebView2BrowserExtensionList; var Result: ICoreWebView2BrowserExtensionList); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2BrowserExtensionList_Count(AObj: TCoreWebView2BrowserExtensionList): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='Count'}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
procedure CoreWebView2BrowserExtensionList_Items(AObj: TCoreWebView2BrowserExtensionList; idx: uint32; var Result: ICoreWebView2BrowserExtension); extdecl;
begin
  {$define handleExceptionFuncName :='Items'}
  handleExceptionBegin
  Result := AObj.Items[idx];
  handleExceptionEnd
end;


exports
  CoreWebView2BrowserExtensionList_Create,
  CoreWebView2BrowserExtensionList_Initialized,
  CoreWebView2BrowserExtensionList_BaseIntf,
  CoreWebView2BrowserExtensionList_Count,
  CoreWebView2BrowserExtensionList_Items;