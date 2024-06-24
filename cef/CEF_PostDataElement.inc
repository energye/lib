
//function
procedure CefPostDataElement_UnWrap(data: Pointer; var Result: ICefPostDataElement); extdecl;
begin
  Result := TCefPostDataElementRef.UnWrap(data);
end;

//function
procedure CefPostDataElement_New(var Result: ICefPostDataElement); extdecl;
begin
  Result := TCefPostDataElementRef.New();
end;

//function
function CefPostDataElement_IsReadOnly(AObj: ICefPostDataElement): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

//function
function CefPostDataElement_GetType(AObj: ICefPostDataElement): TCefPostDataElementType; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetType();
  handleExceptionEnd
end;

//function
function CefPostDataElement_GetFile(AObj: ICefPostDataElement): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetFile());
  handleExceptionEnd
end;

//function
function CefPostDataElement_GetBytesCount(AObj: ICefPostDataElement): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetBytesCount();
  handleExceptionEnd
end;

//function
function CefPostDataElement_GetBytes(AObj: ICefPostDataElement; size: NativeUInt; bytes: Pointer): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetBytes(size, bytes);
  handleExceptionEnd
end;

//procedure
procedure CefPostDataElement_SetToEmpty(AObj: ICefPostDataElement); extdecl;
begin
  handleExceptionBegin
  AObj.SetToEmpty();
  handleExceptionEnd
end;

//procedure
procedure CefPostDataElement_SetToFile(AObj: ICefPostDataElement; const fileName: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetToFile(fileName);
  handleExceptionEnd
end;

//procedure
procedure CefPostDataElement_SetToBytes(AObj: ICefPostDataElement; size: NativeUInt; const bytes: Pointer); extdecl;
begin
  handleExceptionBegin
  AObj.SetToBytes(size, bytes);
  handleExceptionEnd
end;


exports
  CefPostDataElement_UnWrap,
  CefPostDataElement_New,
  CefPostDataElement_IsReadOnly,
  CefPostDataElement_GetType,
  CefPostDataElement_GetFile,
  CefPostDataElement_GetBytesCount,
  CefPostDataElement_GetBytes,
  CefPostDataElement_SetToEmpty,
  CefPostDataElement_SetToFile,
  CefPostDataElement_SetToBytes;