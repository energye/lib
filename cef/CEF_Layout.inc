
//function
procedure CefLayout_UnWrap(data: Pointer; var Result: ICefLayout); extdecl;
begin
  Result := TCefLayoutRef.UnWrap(data);
end;

//function
procedure CefLayout_AsBoxLayout(AObj: ICefLayout; var Result: ICefBoxLayout); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsBoxLayout();
  handleExceptionEnd
end;

//function
procedure CefLayout_AsFillLayout(AObj: ICefLayout; var Result: ICefFillLayout); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsFillLayout();
  handleExceptionEnd
end;

//function
function CefLayout_IsValid(AObj: ICefLayout): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;


exports
  CefLayout_UnWrap,
  CefLayout_AsBoxLayout,
  CefLayout_AsFillLayout,
  CefLayout_IsValid;