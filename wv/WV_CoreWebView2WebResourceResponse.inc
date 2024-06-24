
//constructor
function CoreWebView2WebResourceResponse_Create(const aBaseIntf: ICoreWebView2WebResourceResponse): TCoreWebView2WebResourceResponse; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2WebResourceResponse.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2WebResourceResponse_Initialized(AObj: TCoreWebView2WebResourceResponse): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2WebResourceResponse_BaseIntf(AObj: TCoreWebView2WebResourceResponse; var Result: ICoreWebView2WebResourceResponse); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2WebResourceResponse_StatusCode(AIsSet: LongBool; AObj: TCoreWebView2WebResourceResponse; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StatusCode := AValue;
  end else
    Result := AObj.StatusCode;
  handleExceptionEnd
end;

//property
function CoreWebView2WebResourceResponse_ReasonPhrase(AIsSet: LongBool; AObj: TCoreWebView2WebResourceResponse; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ReasonPhrase := AValue;
  end else
    Result := ToPChar(AObj.ReasonPhrase);
  handleExceptionEnd
end;

//property
procedure CoreWebView2WebResourceResponse_Content(AIsSet: LongBool; AObj: TCoreWebView2WebResourceResponse; AValue: TStreamAdapter; var Result: IStream); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Content := AValue;
  end else
    Result := AObj.Content;
  handleExceptionEnd
end;

//property
procedure CoreWebView2WebResourceResponse_Headers(AObj: TCoreWebView2WebResourceResponse; var Result: ICoreWebView2HttpResponseHeaders); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Headers;
  handleExceptionEnd
end;


exports
  CoreWebView2WebResourceResponse_Create,
  CoreWebView2WebResourceResponse_Initialized,
  CoreWebView2WebResourceResponse_BaseIntf,
  CoreWebView2WebResourceResponse_StatusCode,
  CoreWebView2WebResourceResponse_ReasonPhrase,
  CoreWebView2WebResourceResponse_Content,
  CoreWebView2WebResourceResponse_Headers;