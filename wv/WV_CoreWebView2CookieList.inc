
//constructor
function CoreWebView2CookieList_Create(const aBaseIntf: ICoreWebView2CookieList): TCoreWebView2CookieList; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2CookieList.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2CookieList_Initialized(AObj: TCoreWebView2CookieList): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2CookieList_BaseIntf(AObj: TCoreWebView2CookieList; var Result: ICoreWebView2CookieList); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2CookieList_Count(AObj: TCoreWebView2CookieList): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//property
procedure CoreWebView2CookieList_Items(AObj: TCoreWebView2CookieList; idx: uint32; var Result: ICoreWebView2Cookie); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Items[idx];
  handleExceptionEnd
end;


exports
  CoreWebView2CookieList_Create,
  CoreWebView2CookieList_Initialized,
  CoreWebView2CookieList_BaseIntf,
  CoreWebView2CookieList_Count,
  CoreWebView2CookieList_Items;