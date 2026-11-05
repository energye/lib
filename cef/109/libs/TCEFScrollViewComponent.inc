// constructor
function TCEFScrollViewComponent_Create(AOwner: TComponent; out IntfViewDelegateEvents: ICefViewDelegateEvents): TCEFScrollViewComponent; extdecl;
begin
  {$define handleExceptionID := 8700}
  handleExceptionBegin
  Result := TCEFScrollViewComponent.Create(AOwner);
  IntfViewDelegateEvents := Result as ICefViewDelegateEvents;
  handleExceptionEnd
end;

// procedure
procedure TCEFScrollViewComponent_CreateScrollView(AObj: TCEFScrollViewComponent); extdecl;
begin
  {$define handleExceptionID := 8701}
  handleExceptionBegin
  AObj.CreateScrollView();
  handleExceptionEnd
end;

// property
procedure TCEFScrollViewComponent_ContentView(ASet: LongBool; AObj: TCEFScrollViewComponent; AValue: ICefView; var Result: ICefView); extdecl;
begin
  {$define handleExceptionID := 8702}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ContentView := AValue
  end else
    Result := AObj.ContentView;
  handleExceptionEnd
end;

// property
procedure TCEFScrollViewComponent_VisibleContentRect(AObj: TCEFScrollViewComponent; var Result: TCefRectPtr); extdecl;
begin
  {$define handleExceptionID := 8703}
  handleExceptionBegin
  Result := TCefRectToGo(AObj.VisibleContentRect);
  handleExceptionEnd
end;

// property
function TCEFScrollViewComponent_HorizontalScrollbarHeight(AObj: TCEFScrollViewComponent): Integer; extdecl;
begin
  {$define handleExceptionID := 8704}
  handleExceptionBegin
  Result := AObj.HorizontalScrollbarHeight;
  handleExceptionEnd
end;

// property
function TCEFScrollViewComponent_VerticalScrollbarWidth(AObj: TCEFScrollViewComponent): Integer; extdecl;
begin
  {$define handleExceptionID := 8705}
  handleExceptionBegin
  Result := AObj.VerticalScrollbarWidth;
  handleExceptionEnd
end;

// property
function TCEFScrollViewComponent_HasHorizontalScrollbar(AObj: TCEFScrollViewComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 8706}
  handleExceptionBegin
  Result := AObj.HasHorizontalScrollbar;
  handleExceptionEnd
end;

// property
function TCEFScrollViewComponent_HasVerticalScrollbar(AObj: TCEFScrollViewComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 8707}
  handleExceptionBegin
  Result := AObj.HasVerticalScrollbar;
  handleExceptionEnd
end;

exports
  TCEFScrollViewComponent_Create,
  TCEFScrollViewComponent_CreateScrollView,
  TCEFScrollViewComponent_ContentView,
  TCEFScrollViewComponent_VisibleContentRect,
  TCEFScrollViewComponent_HorizontalScrollbarHeight,
  TCEFScrollViewComponent_VerticalScrollbarWidth,
  TCEFScrollViewComponent_HasHorizontalScrollbar,
  TCEFScrollViewComponent_HasVerticalScrollbar;