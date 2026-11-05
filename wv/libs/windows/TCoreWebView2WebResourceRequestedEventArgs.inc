// constructor
function TCoreWebView2WebResourceRequestedEventArgs_Create(const aArgs: ICoreWebView2WebResourceRequestedEventArgs): TCoreWebView2WebResourceRequestedEventArgs; extdecl;
begin
  {$define handleExceptionID := 2200}
  handleExceptionBegin
  Result := TCoreWebView2WebResourceRequestedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2WebResourceRequestedEventArgs_Initialized(AObj: TCoreWebView2WebResourceRequestedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 2201}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceRequestedEventArgs_BaseIntf(AObj: TCoreWebView2WebResourceRequestedEventArgs; var Result: ICoreWebView2WebResourceRequestedEventArgs); extdecl;
begin
  {$define handleExceptionID := 2202}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceRequestedEventArgs_Request(AObj: TCoreWebView2WebResourceRequestedEventArgs; var Result: ICoreWebView2WebResourceRequest); extdecl;
begin
  {$define handleExceptionID := 2203}
  handleExceptionBegin
  Result := AObj.Request;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceRequestedEventArgs_Response(ASet: LongBool; AObj: TCoreWebView2WebResourceRequestedEventArgs; AValue: ICoreWebView2WebResourceResponse; var Result: ICoreWebView2WebResourceResponse); extdecl;
begin
  {$define handleExceptionID := 2204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Response := AValue
  end else
    Result := AObj.Response;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceRequestedEventArgs_Deferral(AObj: TCoreWebView2WebResourceRequestedEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionID := 2205}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

// property
function TCoreWebView2WebResourceRequestedEventArgs_ResourceContext(AObj: TCoreWebView2WebResourceRequestedEventArgs): TWVWebResourceContext; extdecl;
begin
  {$define handleExceptionID := 2206}
  handleExceptionBegin
  Result := AObj.ResourceContext;
  handleExceptionEnd
end;

// property
function TCoreWebView2WebResourceRequestedEventArgs_RequestedSourceKind(AObj: TCoreWebView2WebResourceRequestedEventArgs): TWVWebResourceRequestSourceKind; extdecl;
begin
  {$define handleExceptionID := 2207}
  handleExceptionBegin
  Result := AObj.RequestedSourceKind;
  handleExceptionEnd
end;

exports
  TCoreWebView2WebResourceRequestedEventArgs_Create,
  TCoreWebView2WebResourceRequestedEventArgs_Initialized,
  TCoreWebView2WebResourceRequestedEventArgs_BaseIntf,
  TCoreWebView2WebResourceRequestedEventArgs_Request,
  TCoreWebView2WebResourceRequestedEventArgs_Response,
  TCoreWebView2WebResourceRequestedEventArgs_Deferral,
  TCoreWebView2WebResourceRequestedEventArgs_ResourceContext,
  TCoreWebView2WebResourceRequestedEventArgs_RequestedSourceKind;