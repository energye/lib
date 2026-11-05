// constructor
function TCefMediaRouterRef_Create(data: Pointer; out IntfMediaRouter: ICefMediaRouter): TCefMediaRouterRef; extdecl;
begin
  {$define handleExceptionID := 23300}
  handleExceptionBegin
  Result := TCefMediaRouterRef.Create(data);
  IntfMediaRouter := Result as ICefMediaRouter;
  handleExceptionEnd
end;

// function
procedure TCefMediaRouterRef_AddObserver(AObj: ICefMediaRouter; const observer: ICefMediaObserver; var Result: ICefRegistration); extdecl;
begin
  {$define handleExceptionID := 23301}
  handleExceptionBegin
  Result := AObj.AddObserver(observer);
  handleExceptionEnd
end;

// function
procedure TCefMediaRouterRef_GetSource(AObj: ICefMediaRouter; const urn: PChar; var Result: ICefMediaSource); extdecl;
begin
  {$define handleExceptionID := 23302}
  handleExceptionBegin
  Result := AObj.GetSource(PCharToUStr(urn));
  handleExceptionEnd
end;

// function static
procedure TCefMediaRouterRef_UnWrap(data: Pointer; var Result: ICefMediaRouter); extdecl;
begin
  Result := TCefMediaRouterRef.UnWrap(data);
end;

// function static
procedure TCefMediaRouterRef_Global(var Result: ICefMediaRouter); extdecl;
begin
  Result := TCefMediaRouterRef.Global();
end;

// procedure
procedure TCefMediaRouterRef_NotifyCurrentSinks(AObj: ICefMediaRouter); extdecl;
begin
  {$define handleExceptionID := 23303}
  handleExceptionBegin
  AObj.NotifyCurrentSinks();
  handleExceptionEnd
end;

// procedure
procedure TCefMediaRouterRef_CreateRoute(AObj: ICefMediaRouter; const source: ICefMediaSource; const sink: ICefMediaSink; const callback: ICefMediaRouteCreateCallback); extdecl;
begin
  {$define handleExceptionID := 23304}
  handleExceptionBegin
  AObj.CreateRoute(source, sink, callback);
  handleExceptionEnd
end;

// procedure
procedure TCefMediaRouterRef_NotifyCurrentRoutes(AObj: ICefMediaRouter); extdecl;
begin
  {$define handleExceptionID := 23305}
  handleExceptionBegin
  AObj.NotifyCurrentRoutes();
  handleExceptionEnd
end;

exports
  TCefMediaRouterRef_Create,
  TCefMediaRouterRef_AddObserver,
  TCefMediaRouterRef_GetSource,
  TCefMediaRouterRef_UnWrap,
  TCefMediaRouterRef_Global,
  TCefMediaRouterRef_NotifyCurrentSinks,
  TCefMediaRouterRef_CreateRoute,
  TCefMediaRouterRef_NotifyCurrentRoutes;