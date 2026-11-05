// constructor
function TEngMenuButtonDelegate_Create(out IntfMenuButtonDelegate: ICefMenuButtonDelegate; out IntfButtonDelegate: ICefButtonDelegate; out IntfViewDelegate: ICefViewDelegate): TEngMenuButtonDelegate; extdecl;
begin
  {$define handleExceptionID := 15000}
  handleExceptionBegin
  Result := TEngMenuButtonDelegate.Create();
  IntfMenuButtonDelegate := Result as ICefMenuButtonDelegate;
  IntfButtonDelegate := Result as ICefButtonDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

// event
procedure TEngMenuButtonDelegate_OnMenuButtonMenuButtonPressed(AObj: TEngMenuButtonDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngMenuButtonDelegate_TOnMenuButtonMenuButtonPressedEvent}
  {$DEFINE EventName := OnMenuButtonMenuButtonPressed}
  CEFEventMethodCode
end;

exports
  TEngMenuButtonDelegate_Create,
  TEngMenuButtonDelegate_OnMenuButtonMenuButtonPressed;