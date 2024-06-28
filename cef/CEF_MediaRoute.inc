
//function
procedure CefMediaRoute_UnWrap(data: Pointer; var Result: ICefMediaRoute); extdecl;
begin
  Result := TCefMediaRouteRef.UnWrap(data);
end;

//function
function CefMediaRoute_GetId(AObj: ICefMediaRoute): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetId'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetId());
  handleExceptionEnd
end;

//function
procedure CefMediaRoute_GetSource(AObj: ICefMediaRoute; var Result: ICefMediaSource); extdecl;
begin
  {$define handleExceptionFuncName :='GetSource'}
  handleExceptionBegin
  Result := AObj.GetSource();
  handleExceptionEnd
end;

//function
procedure CefMediaRoute_GetSink(AObj: ICefMediaRoute; var Result: ICefMediaSink); extdecl;
begin
  {$define handleExceptionFuncName :='GetSink'}
  handleExceptionBegin
  Result := AObj.GetSink();
  handleExceptionEnd
end;

//procedure
procedure CefMediaRoute_SendRouteMessage(AObj: ICefMediaRoute; const message: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SendRouteMessage'}
  handleExceptionBegin
  AObj.SendRouteMessage(message);
  handleExceptionEnd
end;

//procedure
procedure CefMediaRoute_Terminate(AObj: ICefMediaRoute); extdecl;
begin
  {$define handleExceptionFuncName :='Terminate'}
  handleExceptionBegin
  AObj.Terminate();
  handleExceptionEnd
end;


exports
  CefMediaRoute_UnWrap,
  CefMediaRoute_GetId,
  CefMediaRoute_GetSource,
  CefMediaRoute_GetSink,
  CefMediaRoute_SendRouteMessage,
  CefMediaRoute_Terminate;