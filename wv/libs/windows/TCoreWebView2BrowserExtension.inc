// constructor
function TCoreWebView2BrowserExtension_Create(const aBaseIntf: ICoreWebView2BrowserExtension): TCoreWebView2BrowserExtension; extdecl;
begin
  {$define handleExceptionID := 4800}
  handleExceptionBegin
  Result := TCoreWebView2BrowserExtension.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2BrowserExtension_Remove(AObj: TCoreWebView2BrowserExtension; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 4801}
  handleExceptionBegin
  Result := AObj.Remove(aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2BrowserExtension_Enable(AObj: TCoreWebView2BrowserExtension; aIsEnabled: LongBool; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 4802}
  handleExceptionBegin
  Result := AObj.Enable(aIsEnabled, aBrowserComponent);
  handleExceptionEnd
end;

// property
function TCoreWebView2BrowserExtension_Initialized(AObj: TCoreWebView2BrowserExtension): LongBool; extdecl;
begin
  {$define handleExceptionID := 4803}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2BrowserExtension_BaseIntf(ASet: LongBool; AObj: TCoreWebView2BrowserExtension; AValue: ICoreWebView2BrowserExtension; var Result: ICoreWebView2BrowserExtension); extdecl;
begin
  {$define handleExceptionID := 4804}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BaseIntf := AValue
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2BrowserExtension_ID(AObj: TCoreWebView2BrowserExtension; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4805}
  handleExceptionBegin
  StringBufferCreate(AObj.ID, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2BrowserExtension_Name(AObj: TCoreWebView2BrowserExtension; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4806}
  handleExceptionBegin
  StringBufferCreate(AObj.Name, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2BrowserExtension_IsEnabled(AObj: TCoreWebView2BrowserExtension): LongBool; extdecl;
begin
  {$define handleExceptionID := 4807}
  handleExceptionBegin
  Result := AObj.IsEnabled;
  handleExceptionEnd
end;

exports
  TCoreWebView2BrowserExtension_Create,
  TCoreWebView2BrowserExtension_Remove,
  TCoreWebView2BrowserExtension_Enable,
  TCoreWebView2BrowserExtension_Initialized,
  TCoreWebView2BrowserExtension_BaseIntf,
  TCoreWebView2BrowserExtension_ID,
  TCoreWebView2BrowserExtension_Name,
  TCoreWebView2BrowserExtension_IsEnabled;