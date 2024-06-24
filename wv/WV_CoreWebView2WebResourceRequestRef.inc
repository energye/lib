
//constructor
function CoreWebView2WebResourceRequestRef_Create(const aBaseIntf: ICoreWebView2WebResourceRequest): TCoreWebView2WebResourceRequestRef; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2WebResourceRequestRef.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2WebResourceRequestRef_Initialized(AObj: TCoreWebView2WebResourceRequestRef): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2WebResourceRequestRef_BaseIntf(AObj: TCoreWebView2WebResourceRequestRef; var Result: ICoreWebView2WebResourceRequest); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2WebResourceRequestRef_URI(AIsSet: LongBool; AObj: TCoreWebView2WebResourceRequestRef; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.URI := AValue;
  end else
    Result := ToPChar(AObj.URI);
  handleExceptionEnd
end;

//property
function CoreWebView2WebResourceRequestRef_Method(AIsSet: LongBool; AObj: TCoreWebView2WebResourceRequestRef; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Method := AValue;
  end else
    Result := ToPChar(AObj.Method);
  handleExceptionEnd
end;

//property
procedure CoreWebView2WebResourceRequestRef_Content(AIsSet: LongBool; AObj: TCoreWebView2WebResourceRequestRef; AValue: TStreamAdapter; var Result: IStream); extdecl;
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
procedure CoreWebView2WebResourceRequestRef_Headers(AObj: TCoreWebView2WebResourceRequestRef; var Result: ICoreWebView2HttpRequestHeaders); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Headers;
  handleExceptionEnd
end;


exports
  CoreWebView2WebResourceRequestRef_Create,
  CoreWebView2WebResourceRequestRef_Initialized,
  CoreWebView2WebResourceRequestRef_BaseIntf,
  CoreWebView2WebResourceRequestRef_URI,
  CoreWebView2WebResourceRequestRef_Method,
  CoreWebView2WebResourceRequestRef_Content,
  CoreWebView2WebResourceRequestRef_Headers;