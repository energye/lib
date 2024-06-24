
//function
procedure CefScrollView_UnWrap(data: Pointer; var Result: ICefScrollView); extdecl;
begin
  Result := TCefScrollViewRef.UnWrap(data);
end;

//function
procedure CefScrollView_CreateScrollView(const delegate: ICefViewDelegate; var Result: ICefScrollView); extdecl;
begin
  Result := TCefScrollViewRef.CreateScrollView(delegate);
end;

//function
procedure CefScrollView_GetContentView(AObj: ICefScrollView; var Result: ICefView); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetContentView();
  handleExceptionEnd
end;

//function
procedure CefScrollView_GetVisibleContentRect(AObj: ICefScrollView; var Result: TCefRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetVisibleContentRect();
  handleExceptionEnd
end;

//function
function CefScrollView_HasHorizontalScrollbar(AObj: ICefScrollView): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasHorizontalScrollbar();
  handleExceptionEnd
end;

//function
function CefScrollView_GetHorizontalScrollbarHeight(AObj: ICefScrollView): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetHorizontalScrollbarHeight();
  handleExceptionEnd
end;

//function
function CefScrollView_HasVerticalScrollbar(AObj: ICefScrollView): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasVerticalScrollbar();
  handleExceptionEnd
end;

//function
function CefScrollView_GetVerticalScrollbarWidth(AObj: ICefScrollView): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetVerticalScrollbarWidth();
  handleExceptionEnd
end;

//procedure
procedure CefScrollView_SetContentView(AObj: ICefScrollView; const view: ICefView); extdecl;
begin
  handleExceptionBegin
  AObj.SetContentView(view);
  handleExceptionEnd
end;


exports
  CefScrollView_UnWrap,
  CefScrollView_CreateScrollView,
  CefScrollView_GetContentView,
  CefScrollView_GetVisibleContentRect,
  CefScrollView_HasHorizontalScrollbar,
  CefScrollView_GetHorizontalScrollbarHeight,
  CefScrollView_HasVerticalScrollbar,
  CefScrollView_GetVerticalScrollbarWidth,
  CefScrollView_SetContentView;