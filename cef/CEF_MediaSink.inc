
//function
procedure CefMediaSink_UnWrap(data: Pointer; var Result: ICefMediaSink); extdecl;
begin
  Result := TCefMediaSinkRef.UnWrap(data);
end;

//function
function CefMediaSink_GetId(AObj: ICefMediaSink): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetId'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetId());
  handleExceptionEnd
end;

//function
function CefMediaSink_GetName(AObj: ICefMediaSink): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetName'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetName());
  handleExceptionEnd
end;

//function
function CefMediaSink_GetDescription(AObj: ICefMediaSink): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetDescription'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetDescription());
  handleExceptionEnd
end;

//function
function CefMediaSink_GetIconType(AObj: ICefMediaSink): TCefMediaSinkIconType; extdecl;
begin
  {$define handleExceptionFuncName :='GetIconType'}
  handleExceptionBegin
  Result := AObj.GetIconType();
  handleExceptionEnd
end;

//function
function CefMediaSink_IsCastSink(AObj: ICefMediaSink): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsCastSink'}
  handleExceptionBegin
  Result := AObj.IsCastSink();
  handleExceptionEnd
end;

//function
function CefMediaSink_IsDialSink(AObj: ICefMediaSink): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsDialSink'}
  handleExceptionBegin
  Result := AObj.IsDialSink();
  handleExceptionEnd
end;

//function
function CefMediaSink_IsCompatibleWith(AObj: ICefMediaSink; const source: ICefMediaSource): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsCompatibleWith'}
  handleExceptionBegin
  Result := AObj.IsCompatibleWith(source);
  handleExceptionEnd
end;

//procedure
procedure CefMediaSink_GetDeviceInfo(AObj: ICefMediaSink; const callback: ICefMediaSinkDeviceInfoCallback); extdecl;
begin
  {$define handleExceptionFuncName :='GetDeviceInfo'}
  handleExceptionBegin
  AObj.GetDeviceInfo(callback);
  handleExceptionEnd
end;


exports
  CefMediaSink_UnWrap,
  CefMediaSink_GetId,
  CefMediaSink_GetName,
  CefMediaSink_GetDescription,
  CefMediaSink_GetIconType,
  CefMediaSink_IsCastSink,
  CefMediaSink_IsDialSink,
  CefMediaSink_IsCompatibleWith,
  CefMediaSink_GetDeviceInfo;