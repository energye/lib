
//function
procedure CefMediaSource_UnWrap(data: Pointer; var Result: ICefMediaSource); extdecl;
begin
  Result := TCefMediaSourceRef.UnWrap(data);
end;

//function
function CefMediaSource_GetId(AObj: ICefMediaSource): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetId'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetId());
  handleExceptionEnd
end;

//function
function CefMediaSource_IsCastSource(AObj: ICefMediaSource): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsCastSource'}
  handleExceptionBegin
  Result := AObj.IsCastSource();
  handleExceptionEnd
end;

//function
function CefMediaSource_IsDialSource(AObj: ICefMediaSource): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsDialSource'}
  handleExceptionBegin
  Result := AObj.IsDialSource();
  handleExceptionEnd
end;


exports
  CefMediaSource_UnWrap,
  CefMediaSource_GetId,
  CefMediaSource_IsCastSource,
  CefMediaSource_IsDialSource;