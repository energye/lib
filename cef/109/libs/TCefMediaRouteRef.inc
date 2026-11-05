// constructor
function TCefMediaRouteRef_Create(data: Pointer; out IntfMediaRoute: ICefMediaRoute): TCefMediaRouteRef; extdecl;
begin
  {$define handleExceptionID := 22600}
  handleExceptionBegin
  Result := TCefMediaRouteRef.Create(data);
  IntfMediaRoute := Result as ICefMediaRoute;
  handleExceptionEnd
end;

// function
procedure TCefMediaRouteRef_GetId(AObj: ICefMediaRoute;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22601}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetId()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefMediaRouteRef_GetSource(AObj: ICefMediaRoute; var Result: ICefMediaSource); extdecl;
begin
  {$define handleExceptionID := 22602}
  handleExceptionBegin
  Result := AObj.GetSource();
  handleExceptionEnd
end;

// function
procedure TCefMediaRouteRef_GetSink(AObj: ICefMediaRoute; var Result: ICefMediaSink); extdecl;
begin
  {$define handleExceptionID := 22603}
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
  {$define handleExceptionID := 22604}
  handleExceptionBegin
  AObj.SendRouteMessage(PCharToUStr(message_));
  handleExceptionEnd
end;

// procedure
procedure TCefMediaRouteRef_Terminate(AObj: ICefMediaRoute); extdecl;
begin
  {$define handleExceptionID := 22605}
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