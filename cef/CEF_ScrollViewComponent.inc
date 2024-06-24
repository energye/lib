
//constructor
function CEFScrollViewComponent_Create(aOwner: TComponent): TCEFScrollViewComponent; extdecl;
begin
  handleExceptionBegin
  Result := TCEFScrollViewComponent.Create(aOwner);
  handleExceptionEnd
end;

//property
procedure CEFScrollViewComponent_ContentView(AIsSet: LongBool; AObj: TCEFScrollViewComponent; AValue: ICefView; var Result: ICefView); extdecl;
begin
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
  handleExceptionBegin
  Result := AObj.VisibleContentRect;
  handleExceptionEnd
end;

//property
function CEFScrollViewComponent_HorizontalScrollbarHeight(AObj: TCEFScrollViewComponent): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HorizontalScrollbarHeight;
  handleExceptionEnd
end;

//property
function CEFScrollViewComponent_VerticalScrollbarWidth(AObj: TCEFScrollViewComponent): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.VerticalScrollbarWidth;
  handleExceptionEnd
end;

//property
function CEFScrollViewComponent_HasHorizontalScrollbar(AObj: TCEFScrollViewComponent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasHorizontalScrollbar;
  handleExceptionEnd
end;

//property
function CEFScrollViewComponent_HasVerticalScrollbar(AObj: TCEFScrollViewComponent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasVerticalScrollbar;
  handleExceptionEnd
end;

//procedure
procedure CEFScrollViewComponent_CreateScrollView(AObj: TCEFScrollViewComponent); extdecl;
begin
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