// constructor
function TEngButtonDelegate_Create(out IntfButtonDelegate: ICefButtonDelegate; out IntfViewDelegate: ICefViewDelegate): TEngButtonDelegate; extdecl;
begin
  {$define handleExceptionID := 15900}
  handleExceptionBegin
  Result := TEngButtonDelegate.Create();
  IntfButtonDelegate := Result as ICefButtonDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

// event
procedure TEngButtonDelegate_OnButtonButtonPressed(AObj: TEngButtonDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngButtonDelegate_TOnButtonButtonPressedEvent}
  {$DEFINE EventName := OnButtonButtonPressed}
  CEFEventMethodCode
end;

// event
procedure TEngButtonDelegate_OnButtonButtonStateChanged(AObj: TEngButtonDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngButtonDelegate_TOnButtonButtonStateChangedEvent}
  {$DEFINE EventName := OnButtonButtonStateChanged}
  CEFEventMethodCode
end;

exports
  TEngButtonDelegate_Create,
  TEngButtonDelegate_OnButtonButtonPressed,
  TEngButtonDelegate_OnButtonButtonStateChanged;