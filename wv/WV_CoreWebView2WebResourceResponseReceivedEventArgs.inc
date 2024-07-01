
//constructor
function CoreWebView2WebResourceResponseReceivedEventArgs_Create(const aArgs: ICoreWebView2WebResourceResponseReceivedEventArgs): TCoreWebView2WebResourceResponseReceivedEventArgs; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2WebResourceResponseReceivedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2WebResourceResponseReceivedEventArgs_Initialized(AObj: TCoreWebView2WebResourceResponseReceivedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2WebResourceResponseReceivedEventArgs_BaseIntf(AObj: TCoreWebView2WebResourceResponseReceivedEventArgs; var Result: ICoreWebView2WebResourceResponseReceivedEventArgs); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
procedure CoreWebView2WebResourceResponseReceivedEventArgs_Request(AObj: TCoreWebView2WebResourceResponseReceivedEventArgs; var Result: ICoreWebView2WebResourceRequest); extdecl;
begin
  {$define handleExceptionFuncName :='Request'}
  handleExceptionBegin
  Result := AObj.Request;
  handleExceptionEnd
end;

//property
procedure CoreWebView2WebResourceResponseReceivedEventArgs_Response(AObj: TCoreWebView2WebResourceResponseReceivedEventArgs; var Result: ICoreWebView2WebResourceResponseView); extdecl;
begin
  {$define handleExceptionFuncName :='Response'}
  handleExceptionBegin
  Result := AObj.Response;
  handleExceptionEnd
end;


exports
  CoreWebView2WebResourceResponseReceivedEventArgs_Create,
  CoreWebView2WebResourceResponseReceivedEventArgs_Initialized,
  CoreWebView2WebResourceResponseReceivedEventArgs_BaseIntf,
  CoreWebView2WebResourceResponseReceivedEventArgs_Request,
  CoreWebView2WebResourceResponseReceivedEventArgs_Response;