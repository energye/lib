
//function
procedure CefMediaRouter_UnWrap(data: Pointer; var Result: ICefMediaRouter); extdecl;
begin
  Result := TCefMediaRouterRef.UnWrap(data);
end;

//function
procedure CefMediaRouter_Global(var Result: ICefMediaRouter); extdecl;
begin
  Result := TCefMediaRouterRef.Global();
end;

//function
procedure CefMediaRouter_AddObserver(AObj: ICefMediaRouter; const observer: ICefMediaObserver; var Result: ICefRegistration); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddObserver(observer);
  handleExceptionEnd
end;

//function
procedure CefMediaRouter_GetSource(AObj: ICefMediaRouter; const urn: PChar; var Result: ICefMediaSource); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSource(urn);
  handleExceptionEnd
end;

//procedure
procedure CefMediaRouter_NotifyCurrentSinks(AObj: ICefMediaRouter); extdecl;
begin
  handleExceptionBegin
  AObj.NotifyCurrentSinks();
  handleExceptionEnd
end;

//procedure
procedure CefMediaRouter_CreateRoute(AObj: ICefMediaRouter; const source: ICefMediaSource; const sink: ICefMediaSink; const callback: ICefMediaRouteCreateCallback); extdecl;
begin
  handleExceptionBegin
  AObj.CreateRoute(source, sink, callback);
  handleExceptionEnd
end;

//procedure
procedure CefMediaRouter_NotifyCurrentRoutes(AObj: ICefMediaRouter); extdecl;
begin
  handleExceptionBegin
  AObj.NotifyCurrentRoutes();
  handleExceptionEnd
end;


exports
  CefMediaRouter_UnWrap,
  CefMediaRouter_Global,
  CefMediaRouter_AddObserver,
  CefMediaRouter_GetSource,
  CefMediaRouter_NotifyCurrentSinks,
  CefMediaRouter_CreateRoute,
  CefMediaRouter_NotifyCurrentRoutes;