
//function
procedure CefPostData_UnWrap(data: Pointer; var Result: ICefPostData); extdecl;
begin
  Result := TCefPostDataRef.UnWrap(data);
end;

//function
procedure CefPostData_New(var Result: ICefPostData); extdecl;
begin
  Result := TCefPostDataRef.New();
end;

//function
function CefPostData_IsReadOnly(AObj: ICefPostData): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

//function
function CefPostData_HasExcludedElements(AObj: ICefPostData): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasExcludedElements();
  handleExceptionEnd
end;

//function
function CefPostData_GetElementCount(AObj: ICefPostData): NativeUInt; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetElementCount();
  handleExceptionEnd
end;

//function
function CefPostData_RemoveElement(AObj: ICefPostData; const element: ICefPostDataElement): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RemoveElement(element);
  handleExceptionEnd
end;

//function
function CefPostData_AddElement(AObj: ICefPostData; const element: ICefPostDataElement): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddElement(element);
  handleExceptionEnd
end;

//procedure
procedure CefPostData_RemoveElements(AObj: ICefPostData); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveElements();
  handleExceptionEnd
end;


exports
  CefPostData_UnWrap,
  CefPostData_New,
  CefPostData_IsReadOnly,
  CefPostData_HasExcludedElements,
  CefPostData_GetElementCount,
  CefPostData_RemoveElement,
  CefPostData_AddElement,
  CefPostData_RemoveElements;