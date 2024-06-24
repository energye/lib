
//constructor
function CoreWebView2BrowserExtension_Create(const aBaseIntf: ICoreWebView2BrowserExtension): TCoreWebView2BrowserExtension; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2BrowserExtension.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2BrowserExtension_Initialized(AObj: TCoreWebView2BrowserExtension): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2BrowserExtension_BaseIntf(AIsSet: LongBool; AObj: TCoreWebView2BrowserExtension; AValue: ICoreWebView2BrowserExtension; var Result: ICoreWebView2BrowserExtension); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BaseIntf := AValue;
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2BrowserExtension_ID(AObj: TCoreWebView2BrowserExtension): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ID);
  handleExceptionEnd
end;

//property
function CoreWebView2BrowserExtension_Name(AObj: TCoreWebView2BrowserExtension): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Name);
  handleExceptionEnd
end;

//property
function CoreWebView2BrowserExtension_IsEnabled(AObj: TCoreWebView2BrowserExtension): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsEnabled;
  handleExceptionEnd
end;

//function
function CoreWebView2BrowserExtension_Remove(AObj: TCoreWebView2BrowserExtension; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Remove(aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2BrowserExtension_Enable(AObj: TCoreWebView2BrowserExtension; aIsEnabled: LongBool; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enable(aIsEnabled, aBrowserComponent);
  handleExceptionEnd
end;


exports
  CoreWebView2BrowserExtension_Create,
  CoreWebView2BrowserExtension_Initialized,
  CoreWebView2BrowserExtension_BaseIntf,
  CoreWebView2BrowserExtension_ID,
  CoreWebView2BrowserExtension_Name,
  CoreWebView2BrowserExtension_IsEnabled,
  CoreWebView2BrowserExtension_Remove,
  CoreWebView2BrowserExtension_Enable;