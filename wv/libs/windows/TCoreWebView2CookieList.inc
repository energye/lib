// constructor
function TCoreWebView2CookieList_Create(const aBaseIntf: ICoreWebView2CookieList): TCoreWebView2CookieList; extdecl;
begin
  {$define handleExceptionID := 5500}
  handleExceptionBegin
  Result := TCoreWebView2CookieList.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2CookieList_Initialized(AObj: TCoreWebView2CookieList): LongBool; extdecl;
begin
  {$define handleExceptionID := 5501}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2CookieList_BaseIntf(AObj: TCoreWebView2CookieList; var Result: ICoreWebView2CookieList); extdecl;
begin
  {$define handleExceptionID := 5502}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2CookieList_Count(AObj: TCoreWebView2CookieList): cardinal; extdecl;
begin
  {$define handleExceptionID := 5503}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2CookieList_Items(AObj: TCoreWebView2CookieList; idx: cardinal; var Result: ICoreWebView2Cookie); extdecl;
begin
  {$define handleExceptionID := 5504}
  handleExceptionBegin
  Result := AObj.Items[idx];
  handleExceptionEnd
end;

exports
  TCoreWebView2CookieList_Create,
  TCoreWebView2CookieList_Initialized,
  TCoreWebView2CookieList_BaseIntf,
  TCoreWebView2CookieList_Count,
  TCoreWebView2CookieList_Items;