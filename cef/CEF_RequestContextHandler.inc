
//function
procedure CefRequestContextHandler_UnWrap(data: Pointer; var Result: ICefRequestContextHandler); extdecl;
begin
  Result := TCefRequestContextHandlerRef.UnWrap(data);
end;

//function
function CefRequestContextHandler_OnBeforePluginLoad(AObj: ICefRequestContextHandler; const mimeType,  pluginUrl: PChar; isMainFrame: LongBool; const topOriginUrl: PChar; const pluginInfo: ICefWebPluginInfo; var pluginPolicy: TCefPluginPolicy): LongBool; extdecl;
var
  RetpluginPolicy: TCefPluginPolicy;
begin
  {$define handleExceptionFuncName :='OnBeforePluginLoad'}
  handleExceptionBegin
  RetpluginPolicy := pluginPolicy;
  Result := AObj.OnBeforePluginLoad(mimeType,  pluginUrl, isMainFrame, topOriginUrl, pluginInfo, RetpluginPolicy);
  pluginPolicy := RetpluginPolicy;
  handleExceptionEnd
end;

//procedure
procedure CefRequestContextHandler_OnRequestContextInitialized(AObj: ICefRequestContextHandler; const requestcontext: ICefRequestContext); extdecl;
begin
  {$define handleExceptionFuncName :='OnRequestContextInitialized'}
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
  {$define handleExceptionFuncName :='GetResourceRequestHandler'}
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
  {$define handleExceptionFuncName :='RemoveReferences'}
  handleExceptionBegin
  AObj.RemoveReferences();
  handleExceptionEnd
end;


exports
  CefRequestContextHandler_UnWrap,
  CefRequestContextHandler_OnBeforePluginLoad,
  CefRequestContextHandler_OnRequestContextInitialized,
  CefRequestContextHandler_GetResourceRequestHandler,
  CefRequestContextHandler_RemoveReferences;