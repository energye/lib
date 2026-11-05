// constructor
function TCefMediaRouteRef_Create(data: Pointer; out IntfMediaRoute: ICefMediaRoute): TCefMediaRouteRef; extdecl;
begin
  {$define handleExceptionID := 23400}
  handleExceptionBegin
  Result := TCefMediaRouteRef.Create(data);
  IntfMediaRoute := Result as ICefMediaRoute;
  handleExceptionEnd
end;

// function
procedure TCefMediaRouteRef_GetId(AObj: ICefMediaRoute;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 23401}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetId()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefMediaRouteRef_GetSource(AObj: ICefMediaRoute; var Result: ICefMediaSource); extdecl;
begin
  {$define handleExceptionID := 23402}
  handleExceptionBegin
  Result := AObj.GetSource();
  handleExceptionEnd
end;

// function
procedure TCefMediaRouteRef_GetSink(AObj: ICefMediaRoute; var Result: ICefMediaSink); extdecl;
begin
  {$define handleExceptionID := 23403}
  handleExceptionBegin
  Result := AObj.GetSink();
  handleExceptionEnd
end;

// function static
procedure TCefMediaRouteRef_UnWrap(data: Pointer; var Result: ICefMediaRoute); extdecl;
begin
  Result := TCefMediaRouteRef.UnWrap(data);
end;

// procedure
procedure TCefMediaRouteRef_SendRouteMessage(AObj: ICefMediaRoute; const message_: PChar); extdecl;
begin
  {$define handleExceptionID := 23404}
  handleExceptionBegin
  AObj.SendRouteMessage(PCharToUStr(message_));
  handleExceptionEnd
end;

// procedure
procedure TCefMediaRouteRef_Terminate(AObj: ICefMediaRoute); extdecl;
begin
  {$define handleExceptionID := 23405}
  handleExceptionBegin
  AObj.Terminate();
  handleExceptionEnd
end;

exports
  TCefMediaRouteRef_Create,
  TCefMediaRouteRef_GetId,
  TCefMediaRouteRef_GetSource,
  TCefMediaRouteRef_GetSink,
  TCefMediaRouteRef_UnWrap,
  TCefMediaRouteRef_SendRouteMessage,
  TCefMediaRouteRef_Terminate;