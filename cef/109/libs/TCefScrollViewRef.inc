// constructor
function TCefScrollViewRef_Create(data: Pointer; out IntfScrollView: ICefScrollView; out IntfView: ICefView): TCefScrollViewRef; extdecl;
begin
  {$define handleExceptionID := 23600}
  handleExceptionBegin
  Result := TCefScrollViewRef.Create(data);
  IntfScrollView := Result as ICefScrollView;
  IntfView := Result as ICefView;
  handleExceptionEnd
end;

// function
procedure TCefScrollViewRef_GetContentView(AObj: ICefScrollView; var Result: ICefView); extdecl;
begin
  {$define handleExceptionID := 23601}
  handleExceptionBegin
  Result := AObj.GetContentView();
  handleExceptionEnd
end;

// function
procedure TCefScrollViewRef_GetVisibleContentRect(AObj: ICefScrollView; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionID := 23602}
  handleExceptionBegin
  Result := AObj.GetVisibleContentRect();
  handleExceptionEnd
end;

// function
function TCefScrollViewRef_HasHorizontalScrollbar(AObj: ICefScrollView): LongBool; extdecl;
begin
  {$define handleExceptionID := 23603}
  handleExceptionBegin
  Result := AObj.HasHorizontalScrollbar();
  handleExceptionEnd
end;

// function
function TCefScrollViewRef_GetHorizontalScrollbarHeight(AObj: ICefScrollView): Integer; extdecl;
begin
  {$define handleExceptionID := 23604}
  handleExceptionBegin
  Result := AObj.GetHorizontalScrollbarHeight();
  handleExceptionEnd
end;

// function
function TCefScrollViewRef_HasVerticalScrollbar(AObj: ICefScrollView): LongBool; extdecl;
begin
  {$define handleExceptionID := 23605}
  handleExceptionBegin
  Result := AObj.HasVerticalScrollbar();
  handleExceptionEnd
end;

// function
function TCefScrollViewRef_GetVerticalScrollbarWidth(AObj: ICefScrollView): Integer; extdecl;
begin
  {$define handleExceptionID := 23606}
  handleExceptionBegin
  Result := AObj.GetVerticalScrollbarWidth();
  handleExceptionEnd
end;

// function static
procedure TCefScrollViewRef_UnWrapWithPointer(data: Pointer; var Result: ICefScrollView); extdecl;
begin
  Result := TCefScrollViewRef.UnWrap(data);
end;

// function static
procedure TCefScrollViewRef_CreateScrollView(const delegate: ICefViewDelegate; var Result: ICefScrollView); extdecl;
begin
  Result := TCefScrollViewRef.CreateScrollView(delegate);
end;

// procedure
procedure TCefScrollViewRef_SetContentView(AObj: ICefScrollView; const view: ICefView); extdecl;
begin
  {$define handleExceptionID := 23607}
  handleExceptionBegin
  AObj.SetContentView(view);
  handleExceptionEnd
end;

exports
  TCefScrollViewRef_Create,
  TCefScrollViewRef_GetContentView,
  TCefScrollViewRef_GetVisibleContentRect,
  TCefScrollViewRef_HasHorizontalScrollbar,
  TCefScrollViewRef_GetHorizontalScrollbarHeight,
  TCefScrollViewRef_HasVerticalScrollbar,
  TCefScrollViewRef_GetVerticalScrollbarWidth,
  TCefScrollViewRef_UnWrapWithPointer,
  TCefScrollViewRef_CreateScrollView,
  TCefScrollViewRef_SetContentView;