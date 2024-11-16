
//constructor
function CEFScrollViewComponent_Create(aOwner: TComponent): TCEFScrollViewComponent; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCEFScrollViewComponent.Create(aOwner);
  handleExceptionEnd
end;

//property
procedure CEFScrollViewComponent_ContentView(AIsSet: LongBool; AObj: TCEFScrollViewComponent; AValue: ICefView; var Result: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='ContentView'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ContentView := AValue;
  end else
    Result := AObj.ContentView;
  handleExceptionEnd
end;

//property
procedure CEFScrollViewComponent_VisibleContentRect(AObj: TCEFScrollViewComponent; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionFuncName :='VisibleContentRect'}
  handleExceptionBegin
  Result := AObj.VisibleContentRect;
  handleExceptionEnd
end;

//property
function CEFScrollViewComponent_HorizontalScrollbarHeight(AObj: TCEFScrollViewComponent): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='HorizontalScrollbarHeight'}
  handleExceptionBegin
  Result := AObj.HorizontalScrollbarHeight;
  handleExceptionEnd
end;

//property
function CEFScrollViewComponent_VerticalScrollbarWidth(AObj: TCEFScrollViewComponent): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='VerticalScrollbarWidth'}
  handleExceptionBegin
  Result := AObj.VerticalScrollbarWidth;
  handleExceptionEnd
end;

//property
function CEFScrollViewComponent_HasHorizontalScrollbar(AObj: TCEFScrollViewComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasHorizontalScrollbar'}
  handleExceptionBegin
  Result := AObj.HasHorizontalScrollbar;
  handleExceptionEnd
end;

//property
function CEFScrollViewComponent_HasVerticalScrollbar(AObj: TCEFScrollViewComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasVerticalScrollbar'}
  handleExceptionBegin
  Result := AObj.HasVerticalScrollbar;
  handleExceptionEnd
end;

//procedure
procedure CEFScrollViewComponent_CreateScrollView(AObj: TCEFScrollViewComponent); extdecl;
begin
  {$define handleExceptionFuncName :='CreateScrollView'}
  handleExceptionBegin
  AObj.CreateScrollView();
  handleExceptionEnd
end;


exports
  CEFScrollViewComponent_Create,
  CEFScrollViewComponent_ContentView,
  CEFScrollViewComponent_VisibleContentRect,
  CEFScrollViewComponent_HorizontalScrollbarHeight,
  CEFScrollViewComponent_VerticalScrollbarWidth,
  CEFScrollViewComponent_HasHorizontalScrollbar,
  CEFScrollViewComponent_HasVerticalScrollbar,
  CEFScrollViewComponent_CreateScrollView;