// constructor
function TEngBrowserViewDelegate_Create(out IntfBrowserViewDelegate: ICefBrowserViewDelegate; out IntfViewDelegate: ICefViewDelegate): TEngBrowserViewDelegate; extdecl;
begin
  {$define handleExceptionID := 16000}
  handleExceptionBegin
  Result := TEngBrowserViewDelegate.Create();
  IntfBrowserViewDelegate := Result as ICefBrowserViewDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

// event
procedure TEngBrowserViewDelegate_OnBrowserViewBrowserCreated(AObj: TEngBrowserViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngBrowserViewDelegate_TOnBrowserViewBrowserCreatedEvent}
  {$DEFINE EventName := OnBrowserViewBrowserCreated}
  CEFEventMethodCode
end;

// event
procedure TEngBrowserViewDelegate_OnBrowserViewBrowserDestroyed(AObj: TEngBrowserViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngBrowserViewDelegate_TOnBrowserViewBrowserDestroyedEvent}
  {$DEFINE EventName := OnBrowserViewBrowserDestroyed}
  CEFEventMethodCode
end;

// event
procedure TEngBrowserViewDelegate_OnBrowserViewGetDelegateForPopupBrowserView(AObj: TEngBrowserViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngBrowserViewDelegate_TOnBrowserViewGetDelegateForPopupBrowserViewEvent}
  {$DEFINE EventName := OnBrowserViewGetDelegateForPopupBrowserView}
  CEFEventMethodCode
end;

// event
procedure TEngBrowserViewDelegate_OnBrowserViewPopupBrowserViewCreated(AObj: TEngBrowserViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngBrowserViewDelegate_TOnBrowserViewPopupBrowserViewCreatedEvent}
  {$DEFINE EventName := OnBrowserViewPopupBrowserViewCreated}
  CEFEventMethodCode
end;

// event
procedure TEngBrowserViewDelegate_OnBrowserViewGetChromeToolbarType(AObj: TEngBrowserViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngBrowserViewDelegate_TOnBrowserViewGetChromeToolbarTypeEvent}
  {$DEFINE EventName := OnBrowserViewGetChromeToolbarType}
  CEFEventMethodCode
end;

// event
procedure TEngBrowserViewDelegate_OnBrowserViewUseFramelessWindowForPictureInPicture(AObj: TEngBrowserViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngBrowserViewDelegate_TOnBrowserViewUseFramelessWindowForPictureInPictureEvent}
  {$DEFINE EventName := OnBrowserViewUseFramelessWindowForPictureInPicture}
  CEFEventMethodCode
end;

// event
procedure TEngBrowserViewDelegate_OnBrowserViewGestureCommand(AObj: TEngBrowserViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngBrowserViewDelegate_TOnBrowserViewGestureCommandEvent}
  {$DEFINE EventName := OnBrowserViewGestureCommand}
  CEFEventMethodCode
end;

// event
procedure TEngBrowserViewDelegate_OnBrowserViewGetBrowserRuntimeStyle(AObj: TEngBrowserViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngBrowserViewDelegate_TOnBrowserViewGetBrowserRuntimeStyleEvent}
  {$DEFINE EventName := OnBrowserViewGetBrowserRuntimeStyle}
  CEFEventMethodCode
end;

// event
procedure TEngBrowserViewDelegate_OnBrowserViewAllowMoveForPictureInPicture(AObj: TEngBrowserViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngBrowserViewDelegate_TOnBrowserViewAllowMoveForPictureInPictureEvent}
  {$DEFINE EventName := OnBrowserViewAllowMoveForPictureInPicture}
  CEFEventMethodCode
end;

// event
procedure TEngBrowserViewDelegate_OnBrowserViewAllowPictureInPictureWithoutUserActivation(AObj: TEngBrowserViewDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngBrowserViewDelegate_TOnBrowserViewAllowPictureInPictureWithoutUserActivationEvent}
  {$DEFINE EventName := OnBrowserViewAllowPictureInPictureWithoutUserActivation}
  CEFEventMethodCode
end;

exports
  TEngBrowserViewDelegate_Create,
  TEngBrowserViewDelegate_OnBrowserViewBrowserCreated,
  TEngBrowserViewDelegate_OnBrowserViewBrowserDestroyed,
  TEngBrowserViewDelegate_OnBrowserViewGetDelegateForPopupBrowserView,
  TEngBrowserViewDelegate_OnBrowserViewPopupBrowserViewCreated,
  TEngBrowserViewDelegate_OnBrowserViewGetChromeToolbarType,
  TEngBrowserViewDelegate_OnBrowserViewUseFramelessWindowForPictureInPicture,
  TEngBrowserViewDelegate_OnBrowserViewGestureCommand,
  TEngBrowserViewDelegate_OnBrowserViewGetBrowserRuntimeStyle,
  TEngBrowserViewDelegate_OnBrowserViewAllowMoveForPictureInPicture,
  TEngBrowserViewDelegate_OnBrowserViewAllowPictureInPictureWithoutUserActivation;