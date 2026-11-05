// constructor
function TCoreWebView2WebResourceRequestRef_Create(const aBaseIntf: ICoreWebView2WebResourceRequest): TCoreWebView2WebResourceRequestRef; extdecl;
begin
  {$define handleExceptionID := 6300}
  handleExceptionBegin
  Result := TCoreWebView2WebResourceRequestRef.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2WebResourceRequestRef_Initialized(AObj: TCoreWebView2WebResourceRequestRef): LongBool; extdecl;
begin
  {$define handleExceptionID := 6301}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceRequestRef_BaseIntf(AObj: TCoreWebView2WebResourceRequestRef; var Result: ICoreWebView2WebResourceRequest); extdecl;
begin
  {$define handleExceptionID := 6302}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceRequestRef_URI(ASet: LongBool; AObj: TCoreWebView2WebResourceRequestRef; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6303}
  handleExceptionBegin
  if ASet then
  begin
    AObj.URI := AValue
  end else
    StringBufferCreate(AObj.URI, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceRequestRef_Method(ASet: LongBool; AObj: TCoreWebView2WebResourceRequestRef; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Method := AValue
  end else
    StringBufferCreate(AObj.Method, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceRequestRef_Content(ASet: LongBool; AObj: TCoreWebView2WebResourceRequestRef; AValue: IStream; var Result: IStream); extdecl;
begin
  {$define handleExceptionID := 6305}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Content := AValue
  end else
    Result := AObj.Content;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceRequestRef_Headers(AObj: TCoreWebView2WebResourceRequestRef; var Result: ICoreWebView2HttpRequestHeaders); extdecl;
begin
  {$define handleExceptionID := 6306}
  handleExceptionBegin
  Result := AObj.Headers;
  handleExceptionEnd
end;

exports
  TCoreWebView2WebResourceRequestRef_Create,
  TCoreWebView2WebResourceRequestRef_Initialized,
  TCoreWebView2WebResourceRequestRef_BaseIntf,
  TCoreWebView2WebResourceRequestRef_URI,
  TCoreWebView2WebResourceRequestRef_Method,
  TCoreWebView2WebResourceRequestRef_Content,
  TCoreWebView2WebResourceRequestRef_Headers;