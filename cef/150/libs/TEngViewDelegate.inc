// constructor
function TEngViewDelegate_Create(out IntfViewDelegate: ICefViewDelegate): TEngViewDelegate; extdecl;
begin
  {$define handleExceptionID := 16300}
  handleExceptionBegin
  Result := TEngViewDelegate.Create();
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

// event
procedure TEngViewDelegate_OnViewGetPreferredSize(AObj: TEngViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngViewDelegate_TOnViewGetPreferredSizeEvent}
  {$DEFINE EventName := OnViewGetPreferredSize}
  CEFEventMethodCode
end;

// event
procedure TEngViewDelegate_OnViewGetMinimumSize(AObj: TEngViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngViewDelegate_TOnViewGetMinimumSizeEvent}
  {$DEFINE EventName := OnViewGetMinimumSize}
  CEFEventMethodCode
end;

// event
procedure TEngViewDelegate_OnViewGetMaximumSize(AObj: TEngViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngViewDelegate_TOnViewGetMaximumSizeEvent}
  {$DEFINE EventName := OnViewGetMaximumSize}
  CEFEventMethodCode
end;

// event
procedure TEngViewDelegate_OnViewGetHeightForWidth(AObj: TEngViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngViewDelegate_TOnViewGetHeightForWidthEvent}
  {$DEFINE EventName := OnViewGetHeightForWidth}
  CEFEventMethodCode
end;

// event
procedure TEngViewDelegate_OnViewParentViewChanged(AObj: TEngViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngViewDelegate_TOnViewParentViewChangedEvent}
  {$DEFINE EventName := OnViewParentViewChanged}
  CEFEventMethodCode
end;

// event
procedure TEngViewDelegate_OnViewChildViewChanged(AObj: TEngViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngViewDelegate_TOnViewChildViewChangedEvent}
  {$DEFINE EventName := OnViewChildViewChanged}
  CEFEventMethodCode
end;

// event
procedure TEngViewDelegate_OnViewWindowChanged(AObj: TEngViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngViewDelegate_TOnViewWindowChangedEvent}
  {$DEFINE EventName := OnViewWindowChanged}
  CEFEventMethodCode
end;

// event
procedure TEngViewDelegate_OnViewLayoutChanged(AObj: TEngViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngViewDelegate_TOnViewLayoutChangedEvent}
  {$DEFINE EventName := OnViewLayoutChanged}
  CEFEventMethodCode
end;

// event
procedure TEngViewDelegate_OnViewFocus(AObj: TEngViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngViewDelegate_TOnViewFocusEvent}
  {$DEFINE EventName := OnViewFocus}
  CEFEventMethodCode
end;

// event
procedure TEngViewDelegate_OnViewBlur(AObj: TEngViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngViewDelegate_TOnViewBlurEvent}
  {$DEFINE EventName := OnViewBlur}
  CEFEventMethodCode
end;

// event
procedure TEngViewDelegate_OnViewThemeChanged(AObj: TEngViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngViewDelegate_TOnViewThemeChangedEvent}
  {$DEFINE EventName := OnViewThemeChanged}
  CEFEventMethodCode
end;

exports
  TEngViewDelegate_Create,
  TEngViewDelegate_OnViewGetPreferredSize,
  TEngViewDelegate_OnViewGetMinimumSize,
  TEngViewDelegate_OnViewGetMaximumSize,
  TEngViewDelegate_OnViewGetHeightForWidth,
  TEngViewDelegate_OnViewParentViewChanged,
  TEngViewDelegate_OnViewChildViewChanged,
  TEngViewDelegate_OnViewWindowChanged,
  TEngViewDelegate_OnViewLayoutChanged,
  TEngViewDelegate_OnViewFocus,
  TEngViewDelegate_OnViewBlur,
  TEngViewDelegate_OnViewThemeChanged;