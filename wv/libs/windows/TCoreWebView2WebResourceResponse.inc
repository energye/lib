// constructor
function TCoreWebView2WebResourceResponse_Create(const aBaseIntf: ICoreWebView2WebResourceResponse): TCoreWebView2WebResourceResponse; extdecl;
begin
  {$define handleExceptionID := 5900}
  handleExceptionBegin
  Result := TCoreWebView2WebResourceResponse.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2WebResourceResponse_Initialized(AObj: TCoreWebView2WebResourceResponse): LongBool; extdecl;
begin
  {$define handleExceptionID := 5901}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceResponse_BaseIntf(AObj: TCoreWebView2WebResourceResponse; var Result: ICoreWebView2WebResourceResponse); extdecl;
begin
  {$define handleExceptionID := 5902}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2WebResourceResponse_StatusCode(ASet: LongBool; AObj: TCoreWebView2WebResourceResponse; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 5903}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StatusCode := AValue
  end else
    Result := AObj.StatusCode;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceResponse_ReasonPhrase(ASet: LongBool; AObj: TCoreWebView2WebResourceResponse; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ReasonPhrase := AValue
  end else
    StringBufferCreate(AObj.ReasonPhrase, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceResponse_Content(ASet: LongBool; AObj: TCoreWebView2WebResourceResponse; AValue: IStream; var Result: IStream); extdecl;
begin
  {$define handleExceptionID := 5905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Content := AValue
  end else
    Result := AObj.Content;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceResponse_Headers(AObj: TCoreWebView2WebResourceResponse; var Result: ICoreWebView2HttpResponseHeaders); extdecl;
begin
  {$define handleExceptionID := 5906}
  handleExceptionBegin
  Result := AObj.Headers;
  handleExceptionEnd
end;

exports
  TCoreWebView2WebResourceResponse_Create,
  TCoreWebView2WebResourceResponse_Initialized,
  TCoreWebView2WebResourceResponse_BaseIntf,
  TCoreWebView2WebResourceResponse_StatusCode,
  TCoreWebView2WebResourceResponse_ReasonPhrase,
  TCoreWebView2WebResourceResponse_Content,
  TCoreWebView2WebResourceResponse_Headers;