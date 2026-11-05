// constructor
function TCoreWebView2WebResourceResponseReceivedEventArgs_Create(const aArgs: ICoreWebView2WebResourceResponseReceivedEventArgs): TCoreWebView2WebResourceResponseReceivedEventArgs; extdecl;
begin
  {$define handleExceptionID := 2800}
  handleExceptionBegin
  Result := TCoreWebView2WebResourceResponseReceivedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2WebResourceResponseReceivedEventArgs_Initialized(AObj: TCoreWebView2WebResourceResponseReceivedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 2801}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceResponseReceivedEventArgs_BaseIntf(AObj: TCoreWebView2WebResourceResponseReceivedEventArgs; var Result: ICoreWebView2WebResourceResponseReceivedEventArgs); extdecl;
begin
  {$define handleExceptionID := 2802}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceResponseReceivedEventArgs_Request(AObj: TCoreWebView2WebResourceResponseReceivedEventArgs; var Result: ICoreWebView2WebResourceRequest); extdecl;
begin
  {$define handleExceptionID := 2803}
  handleExceptionBegin
  Result := AObj.Request;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebResourceResponseReceivedEventArgs_Response(AObj: TCoreWebView2WebResourceResponseReceivedEventArgs; var Result: ICoreWebView2WebResourceResponseView); extdecl;
begin
  {$define handleExceptionID := 2804}
  handleExceptionBegin
  Result := AObj.Response;
  handleExceptionEnd
end;

exports
  TCoreWebView2WebResourceResponseReceivedEventArgs_Create,
  TCoreWebView2WebResourceResponseReceivedEventArgs_Initialized,
  TCoreWebView2WebResourceResponseReceivedEventArgs_BaseIntf,
  TCoreWebView2WebResourceResponseReceivedEventArgs_Request,
  TCoreWebView2WebResourceResponseReceivedEventArgs_Response;