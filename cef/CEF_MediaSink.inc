
//function
procedure CefMediaSink_UnWrap(data: Pointer; var Result: ICefMediaSink); extdecl;
begin
  Result := TCefMediaSinkRef.UnWrap(data);
end;

//function
function CefMediaSink_GetId(AObj: ICefMediaSink): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetId());
  handleExceptionEnd
end;

//function
function CefMediaSink_GetName(AObj: ICefMediaSink): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetName());
  handleExceptionEnd
end;

//function
function CefMediaSink_GetIconType(AObj: ICefMediaSink): TCefMediaSinkIconType; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetIconType();
  handleExceptionEnd
end;

//function
function CefMediaSink_IsCastSink(AObj: ICefMediaSink): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsCastSink();
  handleExceptionEnd
end;

//function
function CefMediaSink_IsDialSink(AObj: ICefMediaSink): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsDialSink();
  handleExceptionEnd
end;

//function
function CefMediaSink_IsCompatibleWith(AObj: ICefMediaSink; const source: ICefMediaSource): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsCompatibleWith(source);
  handleExceptionEnd
end;

//procedure
procedure CefMediaSink_GetDeviceInfo(AObj: ICefMediaSink; const callback: ICefMediaSinkDeviceInfoCallback); extdecl;
begin
  handleExceptionBegin
  AObj.GetDeviceInfo(callback);
  handleExceptionEnd
end;


exports
  CefMediaSink_UnWrap,
  CefMediaSink_GetId,
  CefMediaSink_GetName,
  CefMediaSink_GetIconType,
  CefMediaSink_IsCastSink,
  CefMediaSink_IsDialSink,
  CefMediaSink_IsCompatibleWith,
  CefMediaSink_GetDeviceInfo;