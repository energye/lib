
//constructor
function CoreWebView2WebResourceRequestedEventArgs_Create(const aArgs: ICoreWebView2WebResourceRequestedEventArgs): TCoreWebView2WebResourceRequestedEventArgs; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2WebResourceRequestedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2WebResourceRequestedEventArgs_Initialized(AObj: TCoreWebView2WebResourceRequestedEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2WebResourceRequestedEventArgs_BaseIntf(AObj: TCoreWebView2WebResourceRequestedEventArgs; var Result: ICoreWebView2WebResourceRequestedEventArgs); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
procedure CoreWebView2WebResourceRequestedEventArgs_Request(AObj: TCoreWebView2WebResourceRequestedEventArgs; var Result: ICoreWebView2WebResourceRequest); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Request;
  handleExceptionEnd
end;

//property
procedure CoreWebView2WebResourceRequestedEventArgs_Response(AIsSet: LongBool; AObj: TCoreWebView2WebResourceRequestedEventArgs; AValue: ICoreWebView2WebResourceResponse; var Result: ICoreWebView2WebResourceResponse); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Response := AValue;
  end else
    Result := AObj.Response;
  handleExceptionEnd
end;

//property
procedure CoreWebView2WebResourceRequestedEventArgs_Deferral(AObj: TCoreWebView2WebResourceRequestedEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

//property
function CoreWebView2WebResourceRequestedEventArgs_ResourceContext(AObj: TCoreWebView2WebResourceRequestedEventArgs): TWVWebResourceContext; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ResourceContext;
  handleExceptionEnd
end;


exports
  CoreWebView2WebResourceRequestedEventArgs_Create,
  CoreWebView2WebResourceRequestedEventArgs_Initialized,
  CoreWebView2WebResourceRequestedEventArgs_BaseIntf,
  CoreWebView2WebResourceRequestedEventArgs_Request,
  CoreWebView2WebResourceRequestedEventArgs_Response,
  CoreWebView2WebResourceRequestedEventArgs_Deferral,
  CoreWebView2WebResourceRequestedEventArgs_ResourceContext;