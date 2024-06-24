
//function
procedure CefRequestContextHandler_UnWrap(data: Pointer; var Result: ICefRequestContextHandler); extdecl;
begin
  Result := TCefRequestContextHandlerRef.UnWrap(data);
end;

//procedure
procedure CefRequestContextHandler_OnRequestContextInitialized(AObj: ICefRequestContextHandler; const requestcontext: ICefRequestContext); extdecl;
begin
  handleExceptionBegin
  AObj.OnRequestContextInitialized(requestcontext);
  handleExceptionEnd
end;

//procedure
procedure CefRequestContextHandler_GetResourceRequestHandler(AObj: ICefRequestContextHandler; const browser: ICefBrowser; const frame: ICefFrame; const request: ICefRequest; isnavigation,  isdownload: LongBool; const requestinitiator: PChar; var disabledefaulthandling: LongBool; var aResourceRequestHandler: ICefResourceRequestHandler); extdecl;
var
  Retdisabledefaulthandling: boolean;
  RetaResourceRequestHandler: ICefResourceRequestHandler;
begin
  handleExceptionBegin
  Retdisabledefaulthandling := disabledefaulthandling;
  RetaResourceRequestHandler := aResourceRequestHandler;
  AObj.GetResourceRequestHandler(browser, frame, request, isnavigation,  isdownload, requestinitiator, Retdisabledefaulthandling, RetaResourceRequestHandler);
  disabledefaulthandling := LongBool(Retdisabledefaulthandling);
  aResourceRequestHandler := RetaResourceRequestHandler;
  handleExceptionEnd
end;

//procedure
procedure CefRequestContextHandler_RemoveReferences(AObj: ICefRequestContextHandler); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveReferences();
  handleExceptionEnd
end;


exports
  CefRequestContextHandler_UnWrap,
  CefRequestContextHandler_OnRequestContextInitialized,
  CefRequestContextHandler_GetResourceRequestHandler,
  CefRequestContextHandler_RemoveReferences;