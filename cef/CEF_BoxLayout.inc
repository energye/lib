
//function
procedure CefBoxLayout_UnWrap(data: Pointer; var Result: ICefBoxLayout); extdecl;
begin
  Result := TCefBoxLayoutRef.UnWrap(data);
end;

//procedure
procedure CefBoxLayout_SetFlexForView(AObj: ICefBoxLayout; const view: ICefView; flex: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='SetFlexForView'}
  handleExceptionBegin
  AObj.SetFlexForView(view, flex);
  handleExceptionEnd
end;

//procedure
procedure CefBoxLayout_ClearFlexForView(AObj: ICefBoxLayout; const view: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='ClearFlexForView'}
  handleExceptionBegin
  AObj.ClearFlexForView(view);
  handleExceptionEnd
end;


exports
  CefBoxLayout_UnWrap,
  CefBoxLayout_SetFlexForView,
  CefBoxLayout_ClearFlexForView;