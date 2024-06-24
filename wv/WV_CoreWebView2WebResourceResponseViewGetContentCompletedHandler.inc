
//constructor
function CoreWebView2WebResourceResponseViewGetContentCompletedHandler_Create(const aEvents: IWVBrowserEvents; aResourceID: integer): TCoreWebView2WebResourceResponseViewGetContentCompletedHandler; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2WebResourceResponseViewGetContentCompletedHandler.Create(aEvents, aResourceID);
  handleExceptionEnd
end;

//property
function CoreWebView2WebResourceResponseViewGetContentCompletedHandler_ResourceID(AObj: TCoreWebView2WebResourceResponseViewGetContentCompletedHandler): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ResourceID;
  handleExceptionEnd
end;


exports
  CoreWebView2WebResourceResponseViewGetContentCompletedHandler_Create,
  CoreWebView2WebResourceResponseViewGetContentCompletedHandler_ResourceID;