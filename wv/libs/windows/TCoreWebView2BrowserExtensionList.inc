// constructor
function TCoreWebView2BrowserExtensionList_Create(const aBaseIntf: ICoreWebView2BrowserExtensionList): TCoreWebView2BrowserExtensionList; extdecl;
begin
  {$define handleExceptionID := 5100}
  handleExceptionBegin
  Result := TCoreWebView2BrowserExtensionList.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2BrowserExtensionList_Initialized(AObj: TCoreWebView2BrowserExtensionList): LongBool; extdecl;
begin
  {$define handleExceptionID := 5101}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2BrowserExtensionList_BaseIntf(AObj: TCoreWebView2BrowserExtensionList; var Result: ICoreWebView2BrowserExtensionList); extdecl;
begin
  {$define handleExceptionID := 5102}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2BrowserExtensionList_Count(AObj: TCoreWebView2BrowserExtensionList): cardinal; extdecl;
begin
  {$define handleExceptionID := 5103}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2BrowserExtensionList_Items(AObj: TCoreWebView2BrowserExtensionList; idx: cardinal; var Result: ICoreWebView2BrowserExtension); extdecl;
begin
  {$define handleExceptionID := 5104}
  handleExceptionBegin
  Result := AObj.Items[idx];
  handleExceptionEnd
end;

exports
  TCoreWebView2BrowserExtensionList_Create,
  TCoreWebView2BrowserExtensionList_Initialized,
  TCoreWebView2BrowserExtensionList_BaseIntf,
  TCoreWebView2BrowserExtensionList_Count,
  TCoreWebView2BrowserExtensionList_Items;